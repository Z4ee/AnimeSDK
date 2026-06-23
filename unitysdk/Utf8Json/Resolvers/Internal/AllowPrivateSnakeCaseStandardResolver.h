#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_RESOLVERS_INTERNAL_ALLOWPRIVATESNAKECASESTANDARDRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E56B2D0)
#define UTF8JSON_RESOLVERS_INTERNAL_ALLOWPRIVATESNAKECASESTANDARDRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E56B2C0)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int AllowPrivateSnakeCaseStandardResolver_TypeDefinitionIndex = 91205;

	class AllowPrivateSnakeCaseStandardResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(AllowPrivateSnakeCaseStandardResolver_TypeDefinitionIndex)->GetStaticField(0x4E990);
		}
		static ::Utf8Json::IJsonFormatter_1<::System::Object*>** StaticGet_fallbackFormatter()
		{
			return (::Utf8Json::IJsonFormatter_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AllowPrivateSnakeCaseStandardResolver_TypeDefinitionIndex)->GetStaticField(0x4E998);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_ALLOWPRIVATESNAKECASESTANDARDRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_ALLOWPRIVATESNAKECASESTANDARDRESOLVER__CCTOR_OFFSET))();
		}
	};
}
