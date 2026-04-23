#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"

namespace System { class Type; }

#define SYSTEM_SECURITYUTILS_DEMANDREFLECTIONACCESS_OFFSET UNITYSDK_OFFSET(0x1A1785D0)
#define SYSTEM_SECURITYUTILS_HASREFLECTIONPERMISSION_OFFSET UNITYSDK_OFFSET(0x1A1785E0)
#define SYSTEM_SECURITYUTILS_SECURECONSTRUCTORINVOKE_1_OFFSET UNITYSDK_OFFSET(0x1A178700)
#define SYSTEM_SECURITYUTILS_SECURECONSTRUCTORINVOKE_OFFSET UNITYSDK_OFFSET(0x1A1786E0)
#define SYSTEM_SECURITYUTILS_SECURECREATEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1A178660)
#define SYSTEM_SECURITYUTILS_SECURECREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A1785F0)

namespace System
{
	inline static constexpr unsigned int SecurityUtils_TypeDefinitionIndex = 2447;

	class SecurityUtils : public ::System::Object
	{
	public:
		static ::System::Void DemandReflectionAccess(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_DEMANDREFLECTIONACCESS_OFFSET))(type);
		}

		static ::System::Boolean HasReflectionPermission(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_HASREFLECTIONPERMISSION_OFFSET))(type);
		}

		static ::System::Object* SecureCreateInstance(::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_SECURECREATEINSTANCE_OFFSET))(type);
		}

		static ::System::Object* SecureCreateInstance_1(::System::Type* type, ::Il2CppArray<::System::Object*>* args, ::System::Boolean allowNonPublic)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_SECURECREATEINSTANCE_1_OFFSET))(type, args, allowNonPublic);
		}

		static ::System::Object* SecureConstructorInvoke(::System::Type* type, ::Il2CppArray<::System::Type*>* argTypes, ::Il2CppArray<::System::Object*>* args, ::System::Boolean allowNonPublic)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_SECURECONSTRUCTORINVOKE_OFFSET))(type, argTypes, args, allowNonPublic);
		}

		static ::System::Object* SecureConstructorInvoke_1(::System::Type* type, ::Il2CppArray<::System::Type*>* argTypes, ::Il2CppArray<::System::Object*>* args, ::System::Boolean allowNonPublic, ::System::Reflection::BindingFlags extraFlags)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_SECURECONSTRUCTORINVOKE_1_OFFSET))(type, argTypes, args, allowNonPublic, extraFlags);
		}
	};
}
