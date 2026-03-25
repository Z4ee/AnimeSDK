#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TapTap/Sdk/UIElement.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Image; }

#define TAPTAP_SDK_CONTAINERWINDOW_AWAKE_OFFSET UNITYSDK_OFFSET(0x187807F0)
#define TAPTAP_SDK_CONTAINERWINDOW_PLAYENTER_OFFSET UNITYSDK_OFFSET(0x18780900)
#define TAPTAP_SDK_CONTAINERWINDOW_PLAYEXIT_OFFSET UNITYSDK_OFFSET(0x187808A0)
#define TAPTAP_SDK_CONTAINERWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x18780960)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int ContainerWindow_TypeDefinitionIndex = 6410;

	class ContainerWindow : public ::TapTap::Sdk::UIElement
	{
	public:
		::UnityEngine::UI::Image* backgroung; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW_AWAKE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* PlayExit()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW_PLAYEXIT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* PlayEnter()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW_PLAYENTER_OFFSET))(this);
		}
	};
}
