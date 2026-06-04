#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TapTap::Sdk { class UIAnimator_Action; }

#define TAPTAP_SDK_UIANIMATOR___C__DISPLAYCLASS3_0__BLOCKFORSECOND_B__0_OFFSET UNITYSDK_OFFSET(0x1B027F50)
#define TAPTAP_SDK_UIANIMATOR___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B027EB0)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIAnimator___c__DisplayClass3_0_TypeDefinitionIndex = 7072;

	class UIAnimator___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::TapTap::Sdk::UIAnimator_Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _BlockForSecond_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR___C__DISPLAYCLASS3_0__BLOCKFORSECOND_B__0_OFFSET))(this);
		}
	};
}
