#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class IPAddress; }

#define SYSTEM_NET_IPHOSTENTRY_GET_ADDRESSLIST_OFFSET UNITYSDK_OFFSET(0x1E99FFE0)
#define SYSTEM_NET_IPHOSTENTRY_GET_HOSTNAME_OFFSET UNITYSDK_OFFSET(0x1E99FFB0)
#define SYSTEM_NET_IPHOSTENTRY_SET_ADDRESSLIST_OFFSET UNITYSDK_OFFSET(0x1E99FFF0)
#define SYSTEM_NET_IPHOSTENTRY_SET_ALIASES_OFFSET UNITYSDK_OFFSET(0x1E99FFD0)
#define SYSTEM_NET_IPHOSTENTRY_SET_HOSTNAME_OFFSET UNITYSDK_OFFSET(0x1E99FFC0)
#define SYSTEM_NET_IPHOSTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E96D6F0)

namespace System::Net
{
	inline static constexpr unsigned int IPHostEntry_TypeDefinitionIndex = 2745;

	class IPHostEntry : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Net::IPAddress*>* addressList; // 0x10
		::Il2CppArray<::System::String*>* aliases; // 0x18
		::System::String* hostName; // 0x20
		::System::Boolean isTrustedHost; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY__CTOR_OFFSET))(this);
		}

		::System::String* get_HostName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY_GET_HOSTNAME_OFFSET))(this);
		}

		::System::Void set_HostName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY_SET_HOSTNAME_OFFSET))(this, a1);
		}

		::System::Void set_Aliases(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY_SET_ALIASES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Net::IPAddress*>* get_AddressList()
		{
			return ((::Il2CppArray<::System::Net::IPAddress*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY_GET_ADDRESSLIST_OFFSET))(this);
		}

		::System::Void set_AddressList(::Il2CppArray<::System::Net::IPAddress*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Net::IPAddress*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY_SET_ADDRESSLIST_OFFSET))(this, a1);
		}
	};
}
