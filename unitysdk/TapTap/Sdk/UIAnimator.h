#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections { class IEnumerator; }
namespace TapTap::Sdk { class UIAnimator_Action; }
namespace TapTap::Sdk { class UIElement; }

#define TAPTAP_SDK_UIANIMATOR_BLOCKCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1B027EC0)
#define TAPTAP_SDK_UIANIMATOR_BLOCKFORSECOND_OFFSET UNITYSDK_OFFSET(0x1B027CE0)
#define TAPTAP_SDK_UIANIMATOR_DOENTERANIMATION_OFFSET UNITYSDK_OFFSET(0x1B027E10)
#define TAPTAP_SDK_UIANIMATOR_DOEXITANIMATION_OFFSET UNITYSDK_OFFSET(0x1B027C40)
#define TAPTAP_SDK_UIANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B027F40)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIAnimator_TypeDefinitionIndex = 7070;

	class UIAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR__CTOR_OFFSET))(this);
		}

		::System::Void DoExitAnimation(::TapTap::Sdk::UIElement* a1, ::TapTap::Sdk::UIElement* a2, ::TapTap::Sdk::UIAnimator_Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::TapTap::Sdk::UIElement*, ::TapTap::Sdk::UIElement*, ::TapTap::Sdk::UIAnimator_Action*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_DOEXITANIMATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DoEnterAnimation(::TapTap::Sdk::UIElement* a1, ::TapTap::Sdk::UIElement* a2, ::TapTap::Sdk::UIAnimator_Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::TapTap::Sdk::UIElement*, ::TapTap::Sdk::UIElement*, ::TapTap::Sdk::UIAnimator_Action*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_DOENTERANIMATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BlockForSecond(::System::Single a1, ::TapTap::Sdk::UIAnimator_Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::TapTap::Sdk::UIAnimator_Action*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_BLOCKFORSECOND_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* BlockCoroutine(::System::Single a1, ::TapTap::Sdk::UIAnimator_Action* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::TapTap::Sdk::UIAnimator_Action*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_BLOCKCOROUTINE_OFFSET))(this, a1, a2);
		}
	};
}
