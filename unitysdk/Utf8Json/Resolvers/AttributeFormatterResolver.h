#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_RESOLVERS_ATTRIBUTEFORMATTERRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C522C70)
#define UTF8JSON_RESOLVERS_ATTRIBUTEFORMATTERRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C522C60)

namespace Utf8Json::Resolvers
{
	inline static constexpr unsigned int AttributeFormatterResolver_TypeDefinitionIndex = 85528;

	class AttributeFormatterResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(AttributeFormatterResolver_TypeDefinitionIndex)->GetStaticField(0x4A4B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_ATTRIBUTEFORMATTERRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_ATTRIBUTEFORMATTERRESOLVER__CCTOR_OFFSET))();
		}
	};
}
