#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Extension/InteractionRangeProcessorBase_1.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE_APPLYDELTA_OFFSET UNITYSDK_OFFSET(0x150AA620)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE_APPLYEVENTDATA_OFFSET UNITYSDK_OFFSET(0x150AA6C0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE_CLAMPANGLE_OFFSET UNITYSDK_OFFSET(0x150A9E40)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE_CLAMP_OFFSET UNITYSDK_OFFSET(0x150AA1C0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE_GETTOTALSIZE_OFFSET UNITYSDK_OFFSET(0x150AAC10)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE_GOTOVAL_OFFSET UNITYSDK_OFFSET(0x150AA430)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE_NORMALIZEANGLE180_OFFSET UNITYSDK_OFFSET(0x150A9DB0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE_NORMALIZEANGLE_OFFSET UNITYSDK_OFFSET(0x150A9D30)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE_SETCENTERVAL_OFFSET UNITYSDK_OFFSET(0x150A9CD0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x150AAC60)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE___BASE_APPLYEVENTDATA_OFFSET UNITYSDK_OFFSET(0x150AACD0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE___BASE_CLAMP_OFFSET UNITYSDK_OFFSET(0x150AAD80)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE___BASE_GETTOTALSIZE_OFFSET UNITYSDK_OFFSET(0x150AAE10)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionRangeProcessorEulerAngle_TypeDefinitionIndex = 78037;

	class InteractionRangeProcessorEulerAngle : public ::UnityEngine::UI::Extension::InteractionRangeProcessorBase_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE__CTOR_OFFSET))(this);
		}

		::System::Void SetCenterVal(::System::Single center)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE_SETCENTERVAL_OFFSET))(this, center);
		}

		::System::Single NormalizeAngle(::System::Single angle)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE_NORMALIZEANGLE_OFFSET))(this, angle);
		}

		::System::Single NormalizeAngle180(::System::Single angle)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE_NORMALIZEANGLE180_OFFSET))(this, angle);
		}

		::System::Single ClampAngle(::System::Single angle, ::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE_CLAMPANGLE_OFFSET))(this, angle, min, max);
		}

		::System::Void Clamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE_CLAMP_OFFSET))(this);
		}

		::System::Void GoToVal(::System::Single targetAngle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE_GOTOVAL_OFFSET))(this, targetAngle);
		}

		::System::Void ApplyDelta(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE_APPLYDELTA_OFFSET))(this, eventData);
		}

		::System::Void ApplyEventData(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Single sizeX)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE_APPLYEVENTDATA_OFFSET))(this, eventData, sizeX);
		}

		::System::Single GetTotalSize(::UnityEngine::Rect rect)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE_GETTOTALSIZE_OFFSET))(this, rect);
		}

		::System::Void __base_ApplyEventData(::UnityEngine::EventSystems::PointerEventData* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE___BASE_APPLYEVENTDATA_OFFSET))(this, P0, P1);
		}

		::System::Void __base_Clamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE___BASE_CLAMP_OFFSET))(this);
		}

		::System::Single __base_GetTotalSize(::UnityEngine::Rect P0)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOREULERANGLE___BASE_GETTOTALSIZE_OFFSET))(this, P0);
		}
	};
}
