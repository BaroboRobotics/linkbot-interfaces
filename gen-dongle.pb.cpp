#include "gen-dongle.pb.hpp"
#include "rpc/def.hpp"

RPCDEF_CPP((barobo, Dongle),
		(getFirmwareVersion)
		(reboot)
        (transmitUnicast)
        (transmitRadioBroadcast)
        ,
        (receiveTransmission)
        )
