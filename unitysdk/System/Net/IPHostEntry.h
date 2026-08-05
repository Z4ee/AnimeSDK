#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class IPAddress; }

#define SYSTEM_NET_IPHOSTENTRY_GET_ADDRESSLIST_OFFSET UNITYSDK_OFFSET(0x1DB87550)
#define SYSTEM_NET_IPHOSTENTRY_GET_ALIASES_OFFSET UNITYSDK_OFFSET(0x1DB87530)
#define SYSTEM_NET_IPHOSTENTRY_GET_HOSTNAME_OFFSET UNITYSDK_OFFSET(0x1DB87510)
#define SYSTEM_NET_IPHOSTENTRY_SET_ADDRESSLIST_OFFSET UNITYSDK_OFFSET(0x1DB87560)
#define SYSTEM_NET_IPHOSTENTRY_SET_ALIASES_OFFSET UNITYSDK_OFFSET(0x1DB87540)
#define SYSTEM_NET_IPHOSTENTRY_SET_HOSTNAME_OFFSET UNITYSDK_OFFSET(0x1DB87520)
#define SYSTEM_NET_IPHOSTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB87570)

namespace System::Net
{
	inline static constexpr unsigned int IPHostEntry_TypeDefinitionIndex = 3288;

	class IPHostEntry : public ::System::Object
	{
	public:
		::System::String* hostName; // 0x10
		::Il2CppArray<::System::String*>* aliases; // 0x18
		::Il2CppArray<::System::Net::IPAddress*>* addressList; // 0x20
		::System::Boolean isTrustedHost; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY__CTOR_OFFSET))(this);
		}

		::System::String* get_HostName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY_GET_HOSTNAME_OFFSET))(this);
		}

		::System::Void set_HostName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY_SET_HOSTNAME_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_Aliases()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY_GET_ALIASES_OFFSET))(this);
		}

		::System::Void set_Aliases(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY_SET_ALIASES_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Net::IPAddress*>* get_AddressList()
		{
			return ((::Il2CppArray<::System::Net::IPAddress*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY_GET_ADDRESSLIST_OFFSET))(this);
		}

		::System::Void set_AddressList(::Il2CppArray<::System::Net::IPAddress*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Net::IPAddress*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY_SET_ADDRESSLIST_OFFSET))(this, value);
		}
	};
}
