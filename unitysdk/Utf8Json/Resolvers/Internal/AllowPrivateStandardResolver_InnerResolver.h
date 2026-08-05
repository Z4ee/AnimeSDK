#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_RESOLVERS_INTERNAL_ALLOWPRIVATESTANDARDRESOLVER_INNERRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC37340)
#define UTF8JSON_RESOLVERS_INTERNAL_ALLOWPRIVATESTANDARDRESOLVER_INNERRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC37330)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int AllowPrivateStandardResolver_InnerResolver_TypeDefinitionIndex = 95132;

	class AllowPrivateStandardResolver_InnerResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(AllowPrivateStandardResolver_InnerResolver_TypeDefinitionIndex)->GetStaticField(0x531D0);
		}
		static ::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>** StaticGet_resolvers()
		{
			return (::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>**)Il2CppClass::FromTypeDefinitionIndex(AllowPrivateStandardResolver_InnerResolver_TypeDefinitionIndex)->GetStaticField(0x531D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_ALLOWPRIVATESTANDARDRESOLVER_INNERRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_ALLOWPRIVATESTANDARDRESOLVER_INNERRESOLVER__CCTOR_OFFSET))();
		}
	};
}
