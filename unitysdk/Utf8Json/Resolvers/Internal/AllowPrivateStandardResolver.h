#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_RESOLVERS_INTERNAL_ALLOWPRIVATESTANDARDRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D2CF0)
#define UTF8JSON_RESOLVERS_INTERNAL_ALLOWPRIVATESTANDARDRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D2CE0)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int AllowPrivateStandardResolver_TypeDefinitionIndex = 91197;

	class AllowPrivateStandardResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(AllowPrivateStandardResolver_TypeDefinitionIndex)->GetStaticField(0x4E970);
		}
		static ::Utf8Json::IJsonFormatter_1<::System::Object*>** StaticGet_fallbackFormatter()
		{
			return (::Utf8Json::IJsonFormatter_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AllowPrivateStandardResolver_TypeDefinitionIndex)->GetStaticField(0x4E978);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_ALLOWPRIVATESTANDARDRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_ALLOWPRIVATESTANDARDRESOLVER__CCTOR_OFFSET))();
		}
	};
}
