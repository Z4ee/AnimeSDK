#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Specialized { class StringDictionary; }
namespace System::Net { class Authorization; }
namespace System::Net { class IAuthenticationModule; }
namespace System::Net { class ICredentialPolicy; }
namespace System::Net { class ICredentials; }
namespace System::Net { class WebRequest; }

#define SYSTEM_NET_AUTHENTICATIONMANAGER_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1C491DB0)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C491C70)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_DOAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1C491EB0)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_DOUNREGISTER_OFFSET UNITYSDK_OFFSET(0x1C492E40)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_ENSUREMODULES_OFFSET UNITYSDK_OFFSET(0x1C491730)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_GETMUSTIMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1C491A90)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_GET_CREDENTIALPOLICY_OFFSET UNITYSDK_OFFSET(0x1C4919D0)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_GET_CUSTOMTARGETNAMEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1C491BA0)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_GET_OSSUPPORTSEXTENDEDPROTECTION_OFFSET UNITYSDK_OFFSET(0x1C491C60)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_GET_REGISTEREDMODULES_OFFSET UNITYSDK_OFFSET(0x1C491BE0)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1C492560)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1C492C40)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_SET_CREDENTIALPOLICY_OFFSET UNITYSDK_OFFSET(0x1C491A30)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_UNREGISTER_1_OFFSET UNITYSDK_OFFSET(0x1C493540)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1C493420)
#define SYSTEM_NET_AUTHENTICATIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4935C0)
#define SYSTEM_NET_AUTHENTICATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C491720)

namespace System::Net
{
	inline static constexpr unsigned int AuthenticationManager_TypeDefinitionIndex = 3491;

	class AuthenticationManager : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_locker()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AuthenticationManager_TypeDefinitionIndex)->GetStaticField(0x2930);
		}
		static ::System::Net::ICredentialPolicy** StaticGet_credential_policy()
		{
			return (::System::Net::ICredentialPolicy**)Il2CppClass::FromTypeDefinitionIndex(AuthenticationManager_TypeDefinitionIndex)->GetStaticField(0x2938);
		}
		static ::System::Collections::ArrayList** StaticGet_modules()
		{
			return (::System::Collections::ArrayList**)Il2CppClass::FromTypeDefinitionIndex(AuthenticationManager_TypeDefinitionIndex)->GetStaticField(0x2940);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureModules()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_ENSUREMODULES_OFFSET))();
		}

		static ::System::Net::ICredentialPolicy* get_CredentialPolicy()
		{
			return ((::System::Net::ICredentialPolicy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_GET_CREDENTIALPOLICY_OFFSET))();
		}

		static ::System::Void set_CredentialPolicy(::System::Net::ICredentialPolicy* value)
		{
			return ((::System::Void(*)(::System::Net::ICredentialPolicy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_SET_CREDENTIALPOLICY_OFFSET))(value);
		}

		static ::System::Exception* GetMustImplement()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_GETMUSTIMPLEMENT_OFFSET))();
		}

		static ::System::Collections::Specialized::StringDictionary* get_CustomTargetNameDictionary()
		{
			return ((::System::Collections::Specialized::StringDictionary*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_GET_CUSTOMTARGETNAMEDICTIONARY_OFFSET))();
		}

		static ::System::Collections::IEnumerator* get_RegisteredModules()
		{
			return ((::System::Collections::IEnumerator*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_GET_REGISTEREDMODULES_OFFSET))();
		}

		static ::System::Boolean get_OSSupportsExtendedProtection()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_GET_OSSUPPORTSEXTENDEDPROTECTION_OFFSET))();
		}

		static ::System::Void Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_CLEAR_OFFSET))();
		}

		static ::System::Net::Authorization* Authenticate(::System::String* challenge, ::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials)
		{
			return ((::System::Net::Authorization*(*)(::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_AUTHENTICATE_OFFSET))(challenge, request, credentials);
		}

		static ::System::Net::Authorization* DoAuthenticate(::System::String* challenge, ::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials)
		{
			return ((::System::Net::Authorization*(*)(::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_DOAUTHENTICATE_OFFSET))(challenge, request, credentials);
		}

		static ::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials)
		{
			return ((::System::Net::Authorization*(*)(::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_PREAUTHENTICATE_OFFSET))(request, credentials);
		}

		static ::System::Void Register(::System::Net::IAuthenticationModule* authenticationModule)
		{
			return ((::System::Void(*)(::System::Net::IAuthenticationModule*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_REGISTER_OFFSET))(authenticationModule);
		}

		static ::System::Void Unregister(::System::Net::IAuthenticationModule* authenticationModule)
		{
			return ((::System::Void(*)(::System::Net::IAuthenticationModule*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_UNREGISTER_OFFSET))(authenticationModule);
		}

		static ::System::Void Unregister_1(::System::String* authenticationScheme)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_UNREGISTER_1_OFFSET))(authenticationScheme);
		}

		static ::System::Void DoUnregister(::System::String* authenticationScheme, ::System::Boolean throwEx)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_DOUNREGISTER_OFFSET))(authenticationScheme, throwEx);
		}
	};
}
