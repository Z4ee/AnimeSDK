#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_RESPONSEPREAMBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C307050)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int WebResources_ResponsePreamble_TypeDefinitionIndex = 31202;

	class WebResources_ResponsePreamble : public ::System::Object
	{
	public:
		::System::String* mimeType; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x18
		::System::String* statusText; // 0x20
		::System::Int32 statusCode; // 0x28
		::System::Int32 length; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_WEBRESOURCES_RESPONSEPREAMBLE__CTOR_OFFSET))(this);
		}
	};
}
