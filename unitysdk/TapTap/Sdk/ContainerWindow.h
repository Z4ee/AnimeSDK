#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TapTap/Sdk/UIElement.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Image; }

#define TAPTAP_SDK_CONTAINERWINDOW_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BB5FD40)
#define TAPTAP_SDK_CONTAINERWINDOW_PLAYENTER_OFFSET UNITYSDK_OFFSET(0x1BB5FE70)
#define TAPTAP_SDK_CONTAINERWINDOW_PLAYEXIT_OFFSET UNITYSDK_OFFSET(0x1BB5FE10)
#define TAPTAP_SDK_CONTAINERWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB5FED0)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int ContainerWindow_TypeDefinitionIndex = 9462;

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
