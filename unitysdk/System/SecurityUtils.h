#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"

namespace System { class Type; }

#define SYSTEM_SECURITYUTILS_DEMANDREFLECTIONACCESS_OFFSET UNITYSDK_OFFSET(0x1AFDC710)
#define SYSTEM_SECURITYUTILS_HASREFLECTIONPERMISSION_OFFSET UNITYSDK_OFFSET(0x1AFDC720)
#define SYSTEM_SECURITYUTILS_SECURECONSTRUCTORINVOKE_1_OFFSET UNITYSDK_OFFSET(0x1AFDC840)
#define SYSTEM_SECURITYUTILS_SECURECONSTRUCTORINVOKE_OFFSET UNITYSDK_OFFSET(0x1AFDC820)
#define SYSTEM_SECURITYUTILS_SECURECREATEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1AFDC7A0)
#define SYSTEM_SECURITYUTILS_SECURECREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1AFDC730)

namespace System
{
	inline static constexpr unsigned int SecurityUtils_TypeDefinitionIndex = 2447;

	class SecurityUtils : public ::System::Object
	{
	public:
		static ::System::Void DemandReflectionAccess(::System::Type* a1)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_DEMANDREFLECTIONACCESS_OFFSET))(a1);
		}

		static ::System::Boolean HasReflectionPermission(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_HASREFLECTIONPERMISSION_OFFSET))(a1);
		}

		static ::System::Object* SecureCreateInstance(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_SECURECREATEINSTANCE_OFFSET))(a1);
		}

		static ::System::Object* SecureCreateInstance_1(::System::Type* a1, ::Il2CppArray<::System::Object*>* a2, ::System::Boolean a3)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_SECURECREATEINSTANCE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* SecureConstructorInvoke(::System::Type* a1, ::Il2CppArray<::System::Type*>* a2, ::Il2CppArray<::System::Object*>* a3, ::System::Boolean a4)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_SECURECONSTRUCTORINVOKE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Object* SecureConstructorInvoke_1(::System::Type* a1, ::Il2CppArray<::System::Type*>* a2, ::Il2CppArray<::System::Object*>* a3, ::System::Boolean a4, ::System::Reflection::BindingFlags a5)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_SECURECONSTRUCTORINVOKE_1_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
