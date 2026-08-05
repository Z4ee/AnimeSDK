#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"

namespace System { class Type; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Security::Permissions { class ReflectionPermission; }

#define SYSTEM_SECURITYUTILS_ARRAYCREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E7EC780)
#define SYSTEM_SECURITYUTILS_CONSTRUCTORINFOINVOKE_OFFSET UNITYSDK_OFFSET(0x1E7EC6C0)
#define SYSTEM_SECURITYUTILS_DEMANDGRANTSET_OFFSET UNITYSDK_OFFSET(0x1E7EC1F0)
#define SYSTEM_SECURITYUTILS_DEMANDREFLECTIONACCESS_OFFSET UNITYSDK_OFFSET(0x1E7EC1E0)
#define SYSTEM_SECURITYUTILS_FIELDINFOGETVALUE_OFFSET UNITYSDK_OFFSET(0x1E7EC550)
#define SYSTEM_SECURITYUTILS_GENERICARGUMENTSAREVISIBLE_OFFSET UNITYSDK_OFFSET(0x1E7EC4A0)
#define SYSTEM_SECURITYUTILS_GET_MEMBERACCESSPERMISSION_OFFSET UNITYSDK_OFFSET(0x1E7EC080)
#define SYSTEM_SECURITYUTILS_GET_RESTRICTEDMEMBERACCESSPERMISSION_OFFSET UNITYSDK_OFFSET(0x1E7EC130)
#define SYSTEM_SECURITYUTILS_HASREFLECTIONPERMISSION_OFFSET UNITYSDK_OFFSET(0x1E7EC200)
#define SYSTEM_SECURITYUTILS_METHODINFOINVOKE_OFFSET UNITYSDK_OFFSET(0x1E7EC5F0)
#define SYSTEM_SECURITYUTILS_SECURECONSTRUCTORINVOKE_1_OFFSET UNITYSDK_OFFSET(0x1E7EC330)
#define SYSTEM_SECURITYUTILS_SECURECONSTRUCTORINVOKE_OFFSET UNITYSDK_OFFSET(0x1E7EC310)
#define SYSTEM_SECURITYUTILS_SECURECREATEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1E7EC240)
#define SYSTEM_SECURITYUTILS_SECURECREATEINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x1E7EC300)
#define SYSTEM_SECURITYUTILS_SECURECREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E7EC230)
#define SYSTEM_SECURITYUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7EC800)

namespace System
{
	inline static constexpr unsigned int SecurityUtils_TypeDefinitionIndex = 2657;

	class SecurityUtils : public ::System::Object
	{
	public:
		static ::System::Security::Permissions::ReflectionPermission** StaticGet_memberAccessPermission()
		{
			return (::System::Security::Permissions::ReflectionPermission**)Il2CppClass::FromTypeDefinitionIndex(SecurityUtils_TypeDefinitionIndex)->GetStaticField(0x31E0);
		}
		static ::System::Security::Permissions::ReflectionPermission** StaticGet_restrictedMemberAccessPermission()
		{
			return (::System::Security::Permissions::ReflectionPermission**)Il2CppClass::FromTypeDefinitionIndex(SecurityUtils_TypeDefinitionIndex)->GetStaticField(0x31E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS__CCTOR_OFFSET))();
		}

		static ::System::Security::Permissions::ReflectionPermission* get_MemberAccessPermission()
		{
			return ((::System::Security::Permissions::ReflectionPermission*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_GET_MEMBERACCESSPERMISSION_OFFSET))();
		}

		static ::System::Security::Permissions::ReflectionPermission* get_RestrictedMemberAccessPermission()
		{
			return ((::System::Security::Permissions::ReflectionPermission*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_GET_RESTRICTEDMEMBERACCESSPERMISSION_OFFSET))();
		}

		static ::System::Void DemandReflectionAccess(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_DEMANDREFLECTIONACCESS_OFFSET))(type);
		}

		static ::System::Void DemandGrantSet(::System::Reflection::Assembly* assembly)
		{
			return ((::System::Void(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_DEMANDGRANTSET_OFFSET))(assembly);
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

		static ::System::Object* SecureCreateInstance_2(::System::Type* type, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_SECURECREATEINSTANCE_2_OFFSET))(type, args);
		}

		static ::System::Object* SecureConstructorInvoke(::System::Type* type, ::Il2CppArray<::System::Type*>* argTypes, ::Il2CppArray<::System::Object*>* args, ::System::Boolean allowNonPublic)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_SECURECONSTRUCTORINVOKE_OFFSET))(type, argTypes, args, allowNonPublic);
		}

		static ::System::Object* SecureConstructorInvoke_1(::System::Type* type, ::Il2CppArray<::System::Type*>* argTypes, ::Il2CppArray<::System::Object*>* args, ::System::Boolean allowNonPublic, ::System::Reflection::BindingFlags extraFlags)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_SECURECONSTRUCTORINVOKE_1_OFFSET))(type, argTypes, args, allowNonPublic, extraFlags);
		}

		static ::System::Boolean GenericArgumentsAreVisible(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_GENERICARGUMENTSAREVISIBLE_OFFSET))(method);
		}

		static ::System::Object* FieldInfoGetValue(::System::Reflection::FieldInfo* field, ::System::Object* target)
		{
			return ((::System::Object*(*)(::System::Reflection::FieldInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_FIELDINFOGETVALUE_OFFSET))(field, target);
		}

		static ::System::Object* MethodInfoInvoke(::System::Reflection::MethodInfo* method, ::System::Object* target, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::System::Reflection::MethodInfo*, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_METHODINFOINVOKE_OFFSET))(method, target, args);
		}

		static ::System::Object* ConstructorInfoInvoke(::System::Reflection::ConstructorInfo* ctor, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::System::Reflection::ConstructorInfo*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_CONSTRUCTORINFOINVOKE_OFFSET))(ctor, args);
		}

		static ::System::Object* ArrayCreateInstance(::System::Type* type, ::System::Int32 length)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_ARRAYCREATEINSTANCE_OFFSET))(type, length);
		}
	};
}
