#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/IPStatus.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE_COMPUTECHECKSUM_OFFSET UNITYSDK_OFFSET(0x1A32D1E0)
#define SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1A32D410)
#define SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE_GET_CODE_OFFSET UNITYSDK_OFFSET(0x1A32D2B0)
#define SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1A32D390)
#define SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1A32D2F0)
#define SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE_GET_IPSTATUS_OFFSET UNITYSDK_OFFSET(0x1A32D420)
#define SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE_GET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x1A32D340)
#define SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A32D270)
#define SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A32CFC0)
#define SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A32CF60)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Ping_IcmpMessage_TypeDefinitionIndex = 3822;

	class Ping_IcmpMessage : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* bytes; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE__CTOR_OFFSET))(this, bytes, offset, size);
		}

		::System::Void _ctor_1(::System::Byte type, ::System::Byte code, ::System::UInt16 identifier, ::System::UInt16 sequence, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::UInt16, ::System::UInt16, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE__CTOR_1_OFFSET))(this, type, code, identifier, sequence, data);
		}

		::System::Byte get_Type()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE_GET_TYPE_OFFSET))(this);
		}

		::System::Byte get_Code()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE_GET_CODE_OFFSET))(this);
		}

		::System::UInt16 get_Identifier()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt16 get_Sequence()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE_GET_SEQUENCE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Data()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE_GET_DATA_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE_GETBYTES_OFFSET))(this);
		}

		static ::System::UInt16 ComputeChecksum(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::UInt16(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE_COMPUTECHECKSUM_OFFSET))(data);
		}

		::System::Net::NetworkInformation::IPStatus get_IPStatus()
		{
			return ((::System::Net::NetworkInformation::IPStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_ICMPMESSAGE_GET_IPSTATUS_OFFSET))(this);
		}
	};
}
