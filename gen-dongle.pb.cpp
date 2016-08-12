#include "gen-dongle.pb.hpp"
#include "rpc/def.hpp"

RPCDEF_CPP((barobo, Dongle),
		(getFirmwareVersion)
		(getVersionString)
		(reboot)
        (setRadioMode)
        (setComputerId)
        (transmitUnicast)
        (transmitRadioBroadcast)
        ,
        (receiveTransmission)
        )
