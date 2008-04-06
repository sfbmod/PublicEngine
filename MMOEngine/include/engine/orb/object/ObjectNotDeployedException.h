/*
Copyright (C) 2007 <SWGEmu>. All rights reserved.
Distribution of this file for usage outside of Core3 is prohibited.
*/

#ifndef OBJECTNOTDEPLOYEDEXCEPTION_H_
#define OBJECTNOTDEPLOYEDEXCEPTION_H_

#ifndef PLATFORM_CYGWIN
#include <signal.h>
#endif

#include "system/lang/Exception.h"

#include "engine/log/Logger.h"

namespace engine {
  namespace ORB {

	class ObjectNotDeployedException : public sys::lang::Exception {
	public:
		ObjectNotDeployedException(DistributedObjectStub* stub) : Exception() {
			message = "\'" + stub->_getName() + "\' is not deployed";
			
			cout << message << "\n";
			
			stub->printReferenceTrace();
			
			Logger::closeGlobalFileLogger();

			raise(SIGSEGV);
		}
		
	};

  } // namespace ORB
} // namespace engine

using namespace engine::ORB;

#endif /*OBJECTNOTDEPLOYEDEXCEPTION_H_*/
