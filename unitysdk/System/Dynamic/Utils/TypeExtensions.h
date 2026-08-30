#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Dynamic::Utils { template <typename T1, typename T2> class CacheDict_2; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETANYSTATICMETHODVALIDATED_OFFSET UNITYSDK_OFFSET(0x1E6C8800)
#define SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETPARAMETERSCACHED_OFFSET UNITYSDK_OFFSET(0x1E6C77A0)
#define SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x1E6C89E0)
#define SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_MATCHESARGUMENTTYPES_OFFSET UNITYSDK_OFFSET(0x1E6C8870)
#define SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C8D60)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int TypeExtensions_TypeDefinitionIndex = 3689;

	class TypeExtensions : public ::System::Object
	{
	public:
		static ::System::Dynamic::Utils::CacheDict_2<::System::Reflection::MethodBase*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*>** StaticGet_s_paramInfoCache()
		{
			return (::System::Dynamic::Utils::CacheDict_2<::System::Reflection::MethodBase*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x29EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* GetAnyStaticMethodValidated(::System::Type* a1, ::System::String* a2, ::Il2CppArray<::System::Type*>* a3)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETANYSTATICMETHODVALIDATED_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean MatchesArgumentTypes(::System::Reflection::MethodInfo* a1, ::Il2CppArray<::System::Type*>* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_MATCHESARGUMENTTYPES_OFFSET))(a1, a2);
		}

		static ::System::TypeCode GetTypeCode(::System::Type* a1)
		{
			return ((::System::TypeCode(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETTYPECODE_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParametersCached(::System::Reflection::MethodBase* a1)
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETPARAMETERSCACHED_OFFSET))(a1);
		}
	};
}
