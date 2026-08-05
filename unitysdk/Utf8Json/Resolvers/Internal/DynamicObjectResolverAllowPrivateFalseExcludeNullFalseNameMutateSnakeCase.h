#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }
namespace Utf8Json::Internal::Emit { class DynamicAssembly; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTRESOLVERALLOWPRIVATEFALSEEXCLUDENULLFALSENAMEMUTATESNAKECASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F915860)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTRESOLVERALLOWPRIVATEFALSEEXCLUDENULLFALSENAMEMUTATESNAKECASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F915900)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectResolverAllowPrivateFalseExcludeNullFalseNameMutateSnakeCase_TypeDefinitionIndex = 95054;

	class DynamicObjectResolverAllowPrivateFalseExcludeNullFalseNameMutateSnakeCase : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolverAllowPrivateFalseExcludeNullFalseNameMutateSnakeCase_TypeDefinitionIndex)->GetStaticField(0x53340);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet_nameMutator()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolverAllowPrivateFalseExcludeNullFalseNameMutateSnakeCase_TypeDefinitionIndex)->GetStaticField(0x53348);
		}
		static ::Utf8Json::Internal::Emit::DynamicAssembly** StaticGet_assembly()
		{
			return (::Utf8Json::Internal::Emit::DynamicAssembly**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolverAllowPrivateFalseExcludeNullFalseNameMutateSnakeCase_TypeDefinitionIndex)->GetStaticField(0x53350);
		}
		static ::System::Boolean* StaticGet_excludeNull()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolverAllowPrivateFalseExcludeNullFalseNameMutateSnakeCase_TypeDefinitionIndex)->GetStaticField(0x134F0);
		}
		// static const ::System::String* ModuleName; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTRESOLVERALLOWPRIVATEFALSEEXCLUDENULLFALSENAMEMUTATESNAKECASE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTRESOLVERALLOWPRIVATEFALSEEXCLUDENULLFALSENAMEMUTATESNAKECASE__CTOR_OFFSET))(this);
		}
	};
}
