#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_RESOLVERS_INTERNAL_ENUMUNDERLYINGVALUERESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3197C0)
#define UTF8JSON_RESOLVERS_INTERNAL_ENUMUNDERLYINGVALUERESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3197B0)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int EnumUnderlyingValueResolver_TypeDefinitionIndex = 91170;

	class EnumUnderlyingValueResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(EnumUnderlyingValueResolver_TypeDefinitionIndex)->GetStaticField(0x4E810);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_ENUMUNDERLYINGVALUERESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_ENUMUNDERLYINGVALUERESOLVER__CCTOR_OFFSET))();
		}
	};
}
