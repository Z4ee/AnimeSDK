#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Security/Claims/ClaimsIdentity.h"
#include "unitysdk/System/Security/Principal/WindowsAccountType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Principal { class WindowsImpersonationContext; }

#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_CLONEASBASE_OFFSET UNITYSDK_OFFSET(0x166D4360)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166D3BC0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETCURRENTTOKEN_OFFSET UNITYSDK_OFFSET(0x166D3C80)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETCURRENT_OFFSET UNITYSDK_OFFSET(0x166D3BD0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETTOKENINTERNAL_OFFSET UNITYSDK_OFFSET(0x166D4370)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETTOKENNAME_OFFSET UNITYSDK_OFFSET(0x166D3DB0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x166D3D40)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x166D3D50)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_IMPERSONATE_OFFSET UNITYSDK_OFFSET(0x166D3C90)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SETTOKEN_OFFSET UNITYSDK_OFFSET(0x166D3A90)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x166D3DC0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x166D4110)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x166D4380)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x166D3B50)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x166D3B90)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x166D3A20)

namespace System::Security::Principal
{
	inline static constexpr unsigned int WindowsIdentity_TypeDefinitionIndex = 989;

	class WindowsIdentity : public ::System::Security::Claims::ClaimsIdentity
	{
	public:
		static ::System::IntPtr* StaticGet_invalidWindows()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(WindowsIdentity_TypeDefinitionIndex)->GetStaticField(0x7400);
		}
		::System::String* _name; // 0x78
		::System::Runtime::Serialization::SerializationInfo* _info; // 0x80
		::System::String* _type; // 0x88
		::System::IntPtr _token; // 0x90
		::System::Security::Principal::WindowsAccountType _account; // 0x98
		::System::Boolean _authenticated; // 0x9C

		::System::Void _ctor(::System::IntPtr a1, ::System::String* a2, ::System::Security::Principal::WindowsAccountType a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::String*, ::System::Security::Principal::WindowsAccountType, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Security::Claims::ClaimsIdentity* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Claims::ClaimsIdentity*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY__CTOR_2_OFFSET))(this, a1, a2);
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

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, a1);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Security::Claims::ClaimsIdentity* CloneAsBase()
		{
			return ((::System::Security::Claims::ClaimsIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_CLONEASBASE_OFFSET))(this);
		}

		::System::IntPtr GetTokenInternal()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETTOKENINTERNAL_OFFSET))(this);
		}

		::System::Void SetToken(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SETTOKEN_OFFSET))(this, a1);
		}

		static ::System::IntPtr GetCurrentToken()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETCURRENTTOKEN_OFFSET))();
		}

		static ::System::String* GetTokenName(::System::IntPtr a1)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETTOKENNAME_OFFSET))(a1);
		}
	};
}
