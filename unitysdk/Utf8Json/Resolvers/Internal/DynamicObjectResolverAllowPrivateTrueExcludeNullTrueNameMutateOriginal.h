#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTRESOLVERALLOWPRIVATETRUEEXCLUDENULLTRUENAMEMUTATEORIGINAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F749F10)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTRESOLVERALLOWPRIVATETRUEEXCLUDENULLTRUENAMEMUTATEORIGINAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F749F00)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectResolverAllowPrivateTrueExcludeNullTrueNameMutateOriginal_TypeDefinitionIndex = 95068;

	class DynamicObjectResolverAllowPrivateTrueExcludeNullTrueNameMutateOriginal : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolverAllowPrivateTrueExcludeNullTrueNameMutateOriginal_TypeDefinitionIndex)->GetStaticField(0x529A0);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet_nameMutator()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolverAllowPrivateTrueExcludeNullTrueNameMutateOriginal_TypeDefinitionIndex)->GetStaticField(0x529A8);
		}
		static ::System::Boolean* StaticGet_excludeNull()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolverAllowPrivateTrueExcludeNullTrueNameMutateOriginal_TypeDefinitionIndex)->GetStaticField(0x13450);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTRESOLVERALLOWPRIVATETRUEEXCLUDENULLTRUENAMEMUTATEORIGINAL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTRESOLVERALLOWPRIVATETRUEEXCLUDENULLTRUENAMEMUTATEORIGINAL__CCTOR_OFFSET))();
		}
	};
}
