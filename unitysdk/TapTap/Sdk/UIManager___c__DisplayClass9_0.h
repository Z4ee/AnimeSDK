#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TapTap::Sdk { class UIElement; }
namespace TapTap::Sdk { class UIManager; }

#define TAPTAP_SDK_UIMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DF4E0)
#define TAPTAP_SDK_UIMANAGER___C__DISPLAYCLASS9_0__POPUIELEMENT_B__0_OFFSET UNITYSDK_OFFSET(0x1D1DFAF0)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIManager___c__DisplayClass9_0_TypeDefinitionIndex = 7070;

	class UIManager___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::TapTap::Sdk::UIManager* __4__this; // 0x10
		::TapTap::Sdk::UIElement* lastElement; // 0x18
		::TapTap::Sdk::UIElement* element; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _PopUIElement_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER___C__DISPLAYCLASS9_0__POPUIELEMENT_B__0_OFFSET))(this);
		}
	};
}
