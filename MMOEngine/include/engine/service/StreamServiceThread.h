/*
Copyright (C) 2007 <SWGEmu>. All rights reserved.
Distribution of this file for usage outside of Core3 is prohibited.
*/

#ifndef STREAMSERVICETHREAD_H_
#define STREAMSERVICETHREAD_H_

#include "ServiceMessageHandlerThread.h"

namespace engine {
  namespace service {

	class StreamServiceThread : public ServiceMessageHandlerThread {
	public:
		StreamServiceThread(const string& s);
		
		~StreamServiceThread();
		
		void start(int p, int mconn = 10);
		
		virtual void stop();
		
		void acceptConnections();

	};

  } // namespace service
} // namespace engine

using namespace engine::service;

#endif /*STREAMSERVICETHREAD_H_*/
