#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTRESOLVERALLOWPRIVATETRUEEXCLUDENULLTRUENAMEMUTATESNAKECASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E796FA0)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTRESOLVERALLOWPRIVATETRUEEXCLUDENULLTRUENAMEMUTATESNAKECASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E796F90)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectResolverAllowPrivateTrueExcludeNullTrueNameMutateSnakeCase_TypeDefinitionIndex = 91139;

	class DynamicObjectResolverAllowPrivateTrueExcludeNullTrueNameMutateSnakeCase : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet_nameMutator()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolverAllowPrivateTrueExcludeNullTrueNameMutateSnakeCase_TypeDefinitionIndex)->GetStaticField(0x4E8A0);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolverAllowPrivateTrueExcludeNullTrueNameMutateSnakeCase_TypeDefinitionIndex)->GetStaticField(0x4E8A8);
		}
		static ::System::Boolean* StaticGet_excludeNull()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolverAllowPrivateTrueExcludeNullTrueNameMutateSnakeCase_TypeDefinitionIndex)->GetStaticField(0x12E50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTRESOLVERALLOWPRIVATETRUEEXCLUDENULLTRUENAMEMUTATESNAKECASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTRESOLVERALLOWPRIVATETRUEEXCLUDENULLTRUENAMEMUTATESNAKECASE__CCTOR_OFFSET))();
		}
	};
}
