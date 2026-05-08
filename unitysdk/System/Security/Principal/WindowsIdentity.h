#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Security/Claims/ClaimsIdentity.h"
#include "unitysdk/System/Security/Principal/WindowsAccountType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Principal { class WindowsImpersonationContext; }

#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_CLONEASBASE_OFFSET UNITYSDK_OFFSET(0x1A3B3D90)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A3B36B0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETCURRENTTOKEN_OFFSET UNITYSDK_OFFSET(0x1A3B3770)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETCURRENT_OFFSET UNITYSDK_OFFSET(0x1A3B36C0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETTOKENNAME_OFFSET UNITYSDK_OFFSET(0x1A3B3870)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A3B37F0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A3B3800)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_IMPERSONATE_OFFSET UNITYSDK_OFFSET(0x1A3B3780)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SETTOKEN_OFFSET UNITYSDK_OFFSET(0x1A3B3580)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1A3B3880)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1A3B3B20)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3B3DA0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A3B3640)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A3B3680)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3B3510)

namespace System::Security::Principal
{
	inline static constexpr unsigned int WindowsIdentity_TypeDefinitionIndex = 1028;

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
		::System::IntPtr _token; // 0x90
		::System::Boolean _authenticated; // 0x98
		::System::Security::Principal::WindowsAccountType _account; // 0x9C

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
