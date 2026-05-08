#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_RESOLVERS_INTERNAL_ENUMDEFAULTRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3FD350)
#define UTF8JSON_RESOLVERS_INTERNAL_ENUMDEFAULTRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3FD340)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int EnumDefaultResolver_TypeDefinitionIndex = 85594;

	class EnumDefaultResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(EnumDefaultResolver_TypeDefinitionIndex)->GetStaticField(0x4A610);
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
