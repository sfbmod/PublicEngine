/*
Copyright (C) 2007 <SWGEmu>. All rights reserved.
Distribution of this file for usage outside of Core3 is prohibited.
*/

#ifndef PACKETINDEXOUTOFBOUNDSEXCEPTION_H_
#define PACKETINDEXOUTOFBOUNDSEXCEPTION_H_

#include "../lang/Exception.h"

namespace sys {
  namespace net {

	class Packet;
	
	class PacketIndexOutOfBoundsException : public sys::lang::Exception {
		Packet* packet;
		
	public:
		PacketIndexOutOfBoundsException(Packet* pack, int index) : sys::lang::Exception() {
			packet = pack;
			
			stringstream sstr;
			sstr << "PacketIndexOutOfBoundsException at " << index << "\n";
			message = sstr.str();
		}
		
		Packet* getPacket() {
			return packet;
		}
		
	};

  } // namespace net
} // namespace sys

using namespace sys::net;

#endif /*PACKETINDEXOUTOFBOUNDSEXCEPTION_H_*/