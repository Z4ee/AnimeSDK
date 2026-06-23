#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETWORKINFORMATION_ICMPV6MESSAGETYPES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2ECE90)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IcmpV6MessageTypes_TypeDefinitionIndex = 3785;

	class IcmpV6MessageTypes : public ::System::Object
	{
	public:
		// static const ::System::Int32 DestinationUnreachable = 0x1; // 0x0
		// static const ::System::Int32 PacketTooBig = 0x2; // 0x0
		// static const ::System::Int32 TimeExceeded = 0x3; // 0x0
		// static const ::System::Int32 ParameterProblem = 0x4; // 0x0
		// static const ::System::Int32 EchoRequest = 0x80; // 0x0
		// static const ::System::Int32 EchoReply = 0x81; // 0x0
		// static const ::System::Int32 GroupMembershipQuery = 0x82; // 0x0
		// static const ::System::Int32 GroupMembershipReport = 0x83; // 0x0
		// static const ::System::Int32 GroupMembershipReduction = 0x84; // 0x0
		// static const ::System::Int32 RouterSolicitation = 0x85; // 0x0
		// static const ::System::Int32 RouterAdvertisement = 0x86; // 0x0
		// static const ::System::Int32 NeighborSolicitation = 0x87; // 0x0
		// static const ::System::Int32 NeighborAdvertisement = 0x88; // 0x0
		// static const ::System::Int32 Redirect = 0x89; // 0x0
		// static const ::System::Int32 RouterRenumbering = 0x8A; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_ICMPV6MESSAGETYPES__CTOR_OFFSET))(this);
		}
	};
}
