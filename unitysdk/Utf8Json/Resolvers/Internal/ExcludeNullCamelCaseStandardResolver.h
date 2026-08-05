#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_RESOLVERS_INTERNAL_EXCLUDENULLCAMELCASESTANDARDRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5A8C90)
#define UTF8JSON_RESOLVERS_INTERNAL_EXCLUDENULLCAMELCASESTANDARDRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5A8C80)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int ExcludeNullCamelCaseStandardResolver_TypeDefinitionIndex = 95122;

	class ExcludeNullCamelCaseStandardResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(ExcludeNullCamelCaseStandardResolver_TypeDefinitionIndex)->GetStaticField(0x52B00);
		}
		static ::Utf8Json::IJsonFormatter_1<::System::Object*>** StaticGet_fallbackFormatter()
		{
			return (::Utf8Json::IJsonFormatter_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ExcludeNullCamelCaseStandardResolver_TypeDefinitionIndex)->GetStaticField(0x52B08);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_EXCLUDENULLCAMELCASESTANDARDRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_EXCLUDENULLCAMELCASESTANDARDRESOLVER__CCTOR_OFFSET))();
		}
	};
}
