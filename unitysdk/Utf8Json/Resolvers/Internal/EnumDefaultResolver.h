#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_RESOLVERS_INTERNAL_ENUMDEFAULTRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB258D0)
#define UTF8JSON_RESOLVERS_INTERNAL_ENUMDEFAULTRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB258C0)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int EnumDefaultResolver_TypeDefinitionIndex = 95101;

	class EnumDefaultResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(EnumDefaultResolver_TypeDefinitionIndex)->GetStaticField(0x52F10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_ENUMDEFAULTRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_ENUMDEFAULTRESOLVER__CCTOR_OFFSET))();
		}
	};
}
