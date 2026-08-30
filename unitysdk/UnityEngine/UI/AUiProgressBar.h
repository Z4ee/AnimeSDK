#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/UI/AUiProgressBar_Enum_3_BEB443A01708ECF3.h"
#include "unitysdk/UnityEngine/UI/SmoothMask_FillType.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class SmoothMask; }

#define UNITYENGINE_UI_AUIPROGRESSBAR_RESET_OFFSET UNITYSDK_OFFSET(0xE996910)
#define UNITYENGINE_UI_AUIPROGRESSBAR__CTOR_OFFSET UNITYSDK_OFFSET(0xE996930)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int AUiProgressBar_TypeDefinitionIndex = 48188;

	class AUiProgressBar : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::UI::SmoothMask* MaskComp; // 0x18
		::UnityEngine::Transform* TextPanel; // 0x20
		::UnityEngine::Transform* TextSlash; // 0x28
		::UnityEngine::Transform* TextTotal; // 0x30
		::UnityEngine::RectTransform* PointCtrl; // 0x38
		::System::Single m_FillAmount; // 0x40
		::System::Boolean m_FillClockwise; // 0x44
		::System::Boolean m_PointAutoHide; // 0x45
		::UnityEngine::UI::AUiProgressBar_Enum_3_BEB443A01708ECF3 m_TextType; // 0x48
		::UnityEngine::UI::SmoothMask_FillType m_FillType; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_AUIPROGRESSBAR__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_AUIPROGRESSBAR_RESET_OFFSET))(this);
		}
	};
}
