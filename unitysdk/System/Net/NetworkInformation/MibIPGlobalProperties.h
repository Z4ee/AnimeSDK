#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/UnixIPGlobalProperties.h"

namespace System { class String; }

#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF9AD40)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF9A420)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int MibIPGlobalProperties_TypeDefinitionIndex = 2930;

	class MibIPGlobalProperties : public ::System::Net::NetworkInformation::UnixIPGlobalProperties
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_wsChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(MibIPGlobalProperties_TypeDefinitionIndex)->GetStaticField(0x25230);
		}
		::System::String* Tcp6File; // 0x10
		::System::String* TcpFile; // 0x18
		::System::String* StatisticsFileIPv6; // 0x20
		::System::String* Udp6File; // 0x28
		::System::String* StatisticsFile; // 0x30
		::System::String* UdpFile; // 0x38

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES__CCTOR_OFFSET))();
		}
	};
}
