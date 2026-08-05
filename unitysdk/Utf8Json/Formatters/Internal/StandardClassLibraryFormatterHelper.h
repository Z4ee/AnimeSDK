#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json::Internal { class AutomataDictionary; }

#define UTF8JSON_FORMATTERS_INTERNAL_STANDARDCLASSLIBRARYFORMATTERHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F959390)

namespace Utf8Json::Formatters::Internal
{
	inline static constexpr unsigned int StandardClassLibraryFormatterHelper_TypeDefinitionIndex = 95317;

	class StandardClassLibraryFormatterHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Byte>*>** StaticGet_keyValuePairName()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(StandardClassLibraryFormatterHelper_TypeDefinitionIndex)->GetStaticField(0x53300);
		}
		static ::Utf8Json::Internal::AutomataDictionary** StaticGet_keyValuePairAutomata()
		{
			return (::Utf8Json::Internal::AutomataDictionary**)Il2CppClass::FromTypeDefinitionIndex(StandardClassLibraryFormatterHelper_TypeDefinitionIndex)->GetStaticField(0x53308);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_INTERNAL_STANDARDCLASSLIBRARYFORMATTERHELPER__CCTOR_OFFSET))();
		}
	};
}
