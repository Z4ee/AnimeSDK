#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/UnixIPGlobalProperties.h"

namespace System { class String; }

#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x186FBAE0)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x186FB200)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int MibIPGlobalProperties_TypeDefinitionIndex = 2929;

	class MibIPGlobalProperties : public ::System::Net::NetworkInformation::UnixIPGlobalProperties
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_wsChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(MibIPGlobalProperties_TypeDefinitionIndex)->GetStaticField(0x125F0);
		}
		::System::String* Udp6File; // 0x10
		::System::String* Tcp6File; // 0x18
		::System::String* StatisticsFileIPv6; // 0x20
		::System::String* UdpFile; // 0x28
		::System::String* StatisticsFile; // 0x30
		::System::String* TcpFile; // 0x38

		::System::Void _ctor(::System::String* procDir)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES__CTOR_OFFSET))(this, procDir);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES__CCTOR_OFFSET))();
		}
	};
}
