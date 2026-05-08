#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Extension/InteractionRangeProcessorFloat.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_TWOPOINTDRAGFLOAT_APPLYEVENTDATA_OFFSET UNITYSDK_OFFSET(0x19F5DE50)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_TWOPOINTDRAGFLOAT_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x19F5DDA0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_TWOPOINTDRAGFLOAT_GETTOTALSIZE_OFFSET UNITYSDK_OFFSET(0x19F5DD40)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_TWOPOINTDRAGFLOAT_JUDGEBYPOINT_OFFSET UNITYSDK_OFFSET(0x19F5E020)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_TWOPOINTDRAGFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5E270)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_TWOPOINTDRAGFLOAT___BASE_APPLYEVENTDATA_OFFSET UNITYSDK_OFFSET(0x19F5E2F0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_TWOPOINTDRAGFLOAT___BASE_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x19F5E3A0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_TWOPOINTDRAGFLOAT___BASE_GETTOTALSIZE_OFFSET UNITYSDK_OFFSET(0x19F5E450)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionRangeProcessor_TwoPointDragFloat_TypeDefinitionIndex = 62538;

	class InteractionRangeProcessor_TwoPointDragFloat : public ::UnityEngine::UI::Extension::InteractionRangeProcessorFloat
	{
	public:
		::System::Single sensitivityThreshold; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_TWOPOINTDRAGFLOAT__CTOR_OFFSET))(this);
		}

		::System::Single GetTotalSize(::UnityEngine::Rect rect)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_TWOPOINTDRAGFLOAT_GETTOTALSIZE_OFFSET))(this, rect);
		}

		::System::Boolean CanInteract(::UnityEngine::Vector2 screenPos1Old, ::UnityEngine::Vector2 screenPos2Old, ::UnityEngine::Vector2 screenPos1New, ::UnityEngine::Vector2 screenPos2New)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_TWOPOINTDRAGFLOAT_CANINTERACT_OFFSET))(this, screenPos1Old, screenPos2Old, screenPos1New, screenPos2New);
		}

		::System::Void ApplyEventData(::UnityEngine::Vector2 screenPos1Old, ::UnityEngine::Vector2 screenPos2Old, ::UnityEngine::Vector2 screenPos1New, ::UnityEngine::Vector2 screenPos2New)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_TWOPOINTDRAGFLOAT_APPLYEVENTDATA_OFFSET))(this, screenPos1Old, screenPos2Old, screenPos1New, screenPos2New);
		}

		::System::Void JudgeByPoint(::System::Single moveAmount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_TWOPOINTDRAGFLOAT_JUDGEBYPOINT_OFFSET))(this, moveAmount);
		}

		::System::Void __base_ApplyEventData(::UnityEngine::Vector2 P0, ::UnityEngine::Vector2 P1, ::UnityEngine::Vector2 P2, ::UnityEngine::Vector2 P3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_TWOPOINTDRAGFLOAT___BASE_APPLYEVENTDATA_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_CanInteract(::UnityEngine::Vector2 P0, ::UnityEngine::Vector2 P1, ::UnityEngine::Vector2 P2, ::UnityEngine::Vector2 P3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_TWOPOINTDRAGFLOAT___BASE_CANINTERACT_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Single __base_GetTotalSize(::UnityEngine::Rect P0)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_TWOPOINTDRAGFLOAT___BASE_GETTOTALSIZE_OFFSET))(this, P0);
		}
	};
}
