#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Security/Claims/ClaimsIdentity.h"
#include "unitysdk/System/Security/Principal/WindowsAccountType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Principal { class WindowsImpersonationContext; }

#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_CLONEASBASE_OFFSET UNITYSDK_OFFSET(0x1C7063F0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C705D10)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETCURRENTTOKEN_OFFSET UNITYSDK_OFFSET(0x1C705DD0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETCURRENT_OFFSET UNITYSDK_OFFSET(0x1C705D20)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETTOKENNAME_OFFSET UNITYSDK_OFFSET(0x1C705ED0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C705E50)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C705E60)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_IMPERSONATE_OFFSET UNITYSDK_OFFSET(0x1C705DE0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SETTOKEN_OFFSET UNITYSDK_OFFSET(0x1C705BE0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1C705EE0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C706180)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C706400)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C705CA0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C705CE0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C705B70)

namespace System::Security::Principal
{
	inline static constexpr unsigned int WindowsIdentity_TypeDefinitionIndex = 1027;

	class WindowsIdentity : public ::System::Security::Claims::ClaimsIdentity
	{
	public:
		static ::System::IntPtr* StaticGet_invalidWindows()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(WindowsIdentity_TypeDefinitionIndex)->GetStaticField(0x90);
		}
		::System::Runtime::Serialization::SerializationInfo* _info; // 0x78
		::System::String* _name; // 0x80
		::System::String* _type; // 0x88
		::System::Boolean _authenticated; // 0x90
		::System::Security::Principal::WindowsAccountType _account; // 0x94
		::System::IntPtr _token; // 0x98

		::System::Void _ctor(::System::IntPtr userToken, ::System::String* type, ::System::Security::Principal::WindowsAccountType acctType, ::System::Boolean isAuthenticated)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::String*, ::System::Security::Principal::WindowsAccountType, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CTOR_OFFSET))(this, userToken, type, acctType, isAuthenticated);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CTOR_1_OFFSET))(this, info, context);
		}

		::System::Void _ctor_2(::System::Security::Claims::ClaimsIdentity* claimsIdentity, ::System::IntPtr userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Claims::ClaimsIdentity*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CTOR_2_OFFSET))(this, claimsIdentity, userToken);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_DISPOSE_OFFSET))(this);
		}

		static ::System::Security::Principal::WindowsIdentity* GetCurrent()
		{
			return ((::System::Security::Principal::WindowsIdentity*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETCURRENT_OFFSET))();
		}

		::System::Security::Principal::WindowsImpersonationContext* Impersonate()
		{
			return ((::System::Security::Principal::WindowsImpersonationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_IMPERSONATE_OFFSET))(this);
		}

		::System::String* get_AuthenticationType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GET_NAME_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, sender);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Security::Claims::ClaimsIdentity* CloneAsBase()
		{
			return ((::System::Security::Claims::ClaimsIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_CLONEASBASE_OFFSET))(this);
		}

		::System::Void SetToken(::System::IntPtr token)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SETTOKEN_OFFSET))(this, token);
		}

		static ::System::IntPtr GetCurrentToken()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETCURRENTTOKEN_OFFSET))();
		}

		static ::System::String* GetTokenName(::System::IntPtr token)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETTOKENNAME_OFFSET))(token);
		}
	};
}
