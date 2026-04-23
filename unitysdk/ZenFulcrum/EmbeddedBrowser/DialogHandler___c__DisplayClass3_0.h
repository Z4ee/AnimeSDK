#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class DialogHandler; }
namespace ZenFulcrum::EmbeddedBrowser { class DialogHandler_DialogCallback; }
namespace ZenFulcrum::EmbeddedBrowser { class DialogHandler_MenuCallback; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }

#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER___C__DISPLAYCLASS3_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0x1A6B9A70)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER___C__DISPLAYCLASS3_0__CREATE_B__1_OFFSET UNITYSDK_OFFSET(0x1A6BA000)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6B9890)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int DialogHandler___c__DisplayClass3_0_TypeDefinitionIndex = 36258;

	class DialogHandler___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::DialogHandler_DialogCallback* dialogCallback; // 0x10
		::ZenFulcrum::EmbeddedBrowser::DialogHandler_MenuCallback* contextCallback; // 0x18
		::ZenFulcrum::EmbeddedBrowser::DialogHandler* handler; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _Create_b__0(::ZenFulcrum::EmbeddedBrowser::JSONNode* args)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER___C__DISPLAYCLASS3_0__CREATE_B__0_OFFSET))(this, args);
		}

		::System::Void _Create_b__1(::ZenFulcrum::EmbeddedBrowser::JSONNode* args)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER___C__DISPLAYCLASS3_0__CREATE_B__1_OFFSET))(this, args);
		}
	};
}
