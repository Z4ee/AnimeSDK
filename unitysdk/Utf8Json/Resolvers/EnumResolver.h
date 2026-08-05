#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_RESOLVERS_ENUMRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA1C230)

namespace Utf8Json::Resolvers
{
	inline static constexpr unsigned int EnumResolver_TypeDefinitionIndex = 95046;

	class EnumResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(EnumResolver_TypeDefinitionIndex)->GetStaticField(0x52D90);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_UnderlyingValue()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(EnumResolver_TypeDefinitionIndex)->GetStaticField(0x52D98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_ENUMRESOLVER__CCTOR_OFFSET))();
		}
	};
}
