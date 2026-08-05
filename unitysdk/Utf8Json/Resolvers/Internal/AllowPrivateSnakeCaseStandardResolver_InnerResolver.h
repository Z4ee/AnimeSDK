#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_RESOLVERS_INTERNAL_ALLOWPRIVATESNAKECASESTANDARDRESOLVER_INNERRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F749C70)
#define UTF8JSON_RESOLVERS_INTERNAL_ALLOWPRIVATESNAKECASESTANDARDRESOLVER_INNERRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F749C60)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int AllowPrivateSnakeCaseStandardResolver_InnerResolver_TypeDefinitionIndex = 95140;

	class AllowPrivateSnakeCaseStandardResolver_InnerResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(AllowPrivateSnakeCaseStandardResolver_InnerResolver_TypeDefinitionIndex)->GetStaticField(0x52900);
		}
		static ::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>** StaticGet_resolvers()
		{
			return (::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>**)Il2CppClass::FromTypeDefinitionIndex(AllowPrivateSnakeCaseStandardResolver_InnerResolver_TypeDefinitionIndex)->GetStaticField(0x52908);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_ALLOWPRIVATESNAKECASESTANDARDRESOLVER_INNERRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_ALLOWPRIVATESNAKECASESTANDARDRESOLVER_INNERRESOLVER__CCTOR_OFFSET))();
		}
	};
}
