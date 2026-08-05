#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_AUTHORIZATION_GET_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1DD19310)
#define SYSTEM_NET_AUTHORIZATION_GET_CONNECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1DD19300)
#define SYSTEM_NET_AUTHORIZATION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1DD192F0)
#define SYSTEM_NET_AUTHORIZATION_GET_MUTUALLYAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1DD193B0)
#define SYSTEM_NET_AUTHORIZATION_GET_PROTECTIONREALM_OFFSET UNITYSDK_OFFSET(0x1DD19330)
#define SYSTEM_NET_AUTHORIZATION_SETCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1DD19320)
#define SYSTEM_NET_AUTHORIZATION_SET_MUTUALLYAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1DD193D0)
#define SYSTEM_NET_AUTHORIZATION_SET_PROTECTIONREALM_OFFSET UNITYSDK_OFFSET(0x1DD19340)
#define SYSTEM_NET_AUTHORIZATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD19130)
#define SYSTEM_NET_AUTHORIZATION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DD191B0)
#define SYSTEM_NET_AUTHORIZATION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DD19250)
#define SYSTEM_NET_AUTHORIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD190B0)

namespace System::Net
{
	inline static constexpr unsigned int Authorization_TypeDefinitionIndex = 3264;

	class Authorization : public ::System::Object
	{
	public:
		::System::String* m_Message; // 0x10
		::Il2CppArray<::System::String*>* m_ProtectionRealm; // 0x18
		::System::String* ModuleAuthenticationType; // 0x20
		::System::String* m_ConnectionGroupId; // 0x28
		::System::Boolean m_MutualAuth; // 0x30
		::System::Boolean m_Complete; // 0x31

		::System::Void _ctor(::System::String* token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION__CTOR_OFFSET))(this, token);
		}

		::System::Void _ctor_1(::System::String* token, ::System::Boolean finished)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION__CTOR_1_OFFSET))(this, token, finished);
		}

		::System::Void _ctor_2(::System::String* token, ::System::Boolean finished, ::System::String* connectionGroupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION__CTOR_2_OFFSET))(this, token, finished, connectionGroupId);
		}

		::System::Void _ctor_3(::System::String* token, ::System::Boolean finished, ::System::String* connectionGroupId, ::System::Boolean mutualAuth)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION__CTOR_3_OFFSET))(this, token, finished, connectionGroupId, mutualAuth);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION_GET_MESSAGE_OFFSET))(this);
		}

		::System::String* get_ConnectionGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION_GET_CONNECTIONGROUPID_OFFSET))(this);
		}

		::System::Boolean get_Complete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION_GET_COMPLETE_OFFSET))(this);
		}

		::System::Void SetComplete(::System::Boolean complete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION_SETCOMPLETE_OFFSET))(this, complete);
		}

		::Il2CppArray<::System::String*>* get_ProtectionRealm()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION_GET_PROTECTIONREALM_OFFSET))(this);
		}

		::System::Void set_ProtectionRealm(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION_SET_PROTECTIONREALM_OFFSET))(this, value);
		}

		::System::Boolean get_MutuallyAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION_GET_MUTUALLYAUTHENTICATED_OFFSET))(this);
		}

		::System::Void set_MutuallyAuthenticated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION_SET_MUTUALLYAUTHENTICATED_OFFSET))(this, value);
		}
	};
}
