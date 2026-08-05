#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTRESOLVERALLOWPRIVATETRUEEXCLUDENULLFALSENAMEMUTATESNAKECASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9159B0)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTRESOLVERALLOWPRIVATETRUEEXCLUDENULLFALSENAMEMUTATESNAKECASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9159A0)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectResolverAllowPrivateTrueExcludeNullFalseNameMutateSnakeCase_TypeDefinitionIndex = 95066;

	class DynamicObjectResolverAllowPrivateTrueExcludeNullFalseNameMutateSnakeCase : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolverAllowPrivateTrueExcludeNullFalseNameMutateSnakeCase_TypeDefinitionIndex)->GetStaticField(0x53390);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet_nameMutator()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolverAllowPrivateTrueExcludeNullFalseNameMutateSnakeCase_TypeDefinitionIndex)->GetStaticField(0x53398);
		}
		static ::System::Boolean* StaticGet_excludeNull()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolverAllowPrivateTrueExcludeNullFalseNameMutateSnakeCase_TypeDefinitionIndex)->GetStaticField(0x13520);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTRESOLVERALLOWPRIVATETRUEEXCLUDENULLFALSENAMEMUTATESNAKECASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTRESOLVERALLOWPRIVATETRUEEXCLUDENULLFALSENAMEMUTATESNAKECASE__CCTOR_OFFSET))();
		}
	};
}
