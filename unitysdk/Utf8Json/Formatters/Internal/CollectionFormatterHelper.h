#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json::Internal { class AutomataDictionary; }

#define UTF8JSON_FORMATTERS_INTERNAL_COLLECTIONFORMATTERHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC365F0)

namespace Utf8Json::Formatters::Internal
{
	inline static constexpr unsigned int CollectionFormatterHelper_TypeDefinitionIndex = 95316;

	class CollectionFormatterHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Byte>*>** StaticGet_groupingName()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(CollectionFormatterHelper_TypeDefinitionIndex)->GetStaticField(0x532E0);
		}
		static ::Utf8Json::Internal::AutomataDictionary** StaticGet_groupingAutomata()
		{
			return (::Utf8Json::Internal::AutomataDictionary**)Il2CppClass::FromTypeDefinitionIndex(CollectionFormatterHelper_TypeDefinitionIndex)->GetStaticField(0x532E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INTERNAL_COLLECTIONFORMATTERHELPER__CCTOR_OFFSET))();
		}
	};
}
