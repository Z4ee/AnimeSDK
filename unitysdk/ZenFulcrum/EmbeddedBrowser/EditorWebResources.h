#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/WebResources.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define ZENFULCRUM_EMBEDDEDBROWSER_EDITORWEBRESOURCES_HANDLEREQUEST_OFFSET UNITYSDK_OFFSET(0x1B4F7E50)
#define ZENFULCRUM_EMBEDDEDBROWSER_EDITORWEBRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F7D90)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int EditorWebResources_TypeDefinitionIndex = 36562;

	class EditorWebResources : public ::ZenFulcrum::EmbeddedBrowser::WebResources
	{
	public:
		::System::Text::RegularExpressions::Regex* matchDots; // 0x10
		::System::String* basePath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EDITORWEBRESOURCES__CTOR_OFFSET))(this);
		}

		::System::Void HandleRequest(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EDITORWEBRESOURCES_HANDLEREQUEST_OFFSET))(this, a1, a2);
		}
	};
}
