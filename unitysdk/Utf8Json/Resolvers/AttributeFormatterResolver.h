#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_RESOLVERS_ATTRIBUTEFORMATTERRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC37150)
#define UTF8JSON_RESOLVERS_ATTRIBUTEFORMATTERRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC37140)

namespace Utf8Json::Resolvers
{
	inline static constexpr unsigned int AttributeFormatterResolver_TypeDefinitionIndex = 95035;

	class AttributeFormatterResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(AttributeFormatterResolver_TypeDefinitionIndex)->GetStaticField(0x52DB0);
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
