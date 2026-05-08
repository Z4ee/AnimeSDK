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

#define SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETANYSTATICMETHODVALIDATED_OFFSET UNITYSDK_OFFSET(0x1C0049B0)
#define SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETPARAMETERSCACHED_OFFSET UNITYSDK_OFFSET(0x1C004C20)
#define SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETRETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1C004D60)
#define SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x1C004E10)
#define SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_MATCHESARGUMENTTYPES_OFFSET UNITYSDK_OFFSET(0x1C004A50)
#define SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C004E30)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int TypeExtensions_TypeDefinitionIndex = 5022;

	class TypeExtensions : public ::System::Object
	{
	public:
		static ::System::Dynamic::Utils::CacheDict_2<::System::Reflection::MethodBase*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*>** StaticGet_s_paramInfoCache()
		{
			return (::System::Dynamic::Utils::CacheDict_2<::System::Reflection::MethodBase*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x3F40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* GetAnyStaticMethodValidated(::System::Type* type, ::System::String* name, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETANYSTATICMETHODVALIDATED_OFFSET))(type, name, types);
		}

		static ::System::Boolean MatchesArgumentTypes(::System::Reflection::MethodInfo* mi, ::Il2CppArray<::System::Type*>* argTypes)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_MATCHESARGUMENTTYPES_OFFSET))(mi, argTypes);
		}

		static ::System::Type* GetReturnType(::System::Reflection::MethodBase* mi)
		{
			return ((::System::Type*(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETRETURNTYPE_OFFSET))(mi);
		}

		static ::System::TypeCode GetTypeCode(::System::Type* type)
		{
			return ((::System::TypeCode(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETTYPECODE_OFFSET))(type);
		}

		static ::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParametersCached(::System::Reflection::MethodBase* method)
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETPARAMETERSCACHED_OFFSET))(method);
		}
	};
}
