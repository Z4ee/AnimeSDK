#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_RESOLVERS_INTERNAL_DEFAULTSTANDARDRESOLVER_INNERRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB71D90)
#define UTF8JSON_RESOLVERS_INTERNAL_DEFAULTSTANDARDRESOLVER_INNERRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB71D80)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DefaultStandardResolver_InnerResolver_TypeDefinitionIndex = 95108;

	class DefaultStandardResolver_InnerResolver : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>** StaticGet_resolvers()
		{
			return (::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultStandardResolver_InnerResolver_TypeDefinitionIndex)->GetStaticField(0x52A40);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DefaultStandardResolver_InnerResolver_TypeDefinitionIndex)->GetStaticField(0x52A48);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DEFAULTSTANDARDRESOLVER_INNERRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DEFAULTSTANDARDRESOLVER_INNERRESOLVER__CCTOR_OFFSET))();
		}
	};
}
