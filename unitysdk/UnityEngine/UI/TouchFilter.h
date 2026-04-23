#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/TouchFilter_FilterState.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_UI_TOUCHFILTER_FILTERTOUCH_OFFSET UNITYSDK_OFFSET(0x1A5A4E10)
#define UNITYENGINE_UI_TOUCHFILTER_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1A5B3910)
#define UNITYENGINE_UI_TOUCHFILTER_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1A5B3920)
#define UNITYENGINE_UI_TOUCHFILTER_TOUCHBEGIN_OFFSET UNITYSDK_OFFSET(0x1A5A55C0)
#define UNITYENGINE_UI_TOUCHFILTER_TOUCHEND_OFFSET UNITYSDK_OFFSET(0x1A5B3930)
#define UNITYENGINE_UI_TOUCHFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A4240)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int TouchFilter_TypeDefinitionIndex = 5750;

	class TouchFilter : public ::System::Object
	{
	public:
		::UnityEngine::UI::TouchFilter_FilterState _state_k__BackingField; // 0x10
		::System::Int32 TouchID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOUCHFILTER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::TouchFilter_FilterState get_state()
		{
			return ((::UnityEngine::UI::TouchFilter_FilterState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOUCHFILTER_GET_STATE_OFFSET))(this);
		}

		::System::Void set_state(::UnityEngine::UI::TouchFilter_FilterState value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::TouchFilter_FilterState))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOUCHFILTER_SET_STATE_OFFSET))(this, value);
		}

		::System::Void TouchBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOUCHFILTER_TOUCHBEGIN_OFFSET))(this);
		}

		::System::Boolean FilterTouch(::System::Boolean shareDrag, ::System::Boolean ignoreCheck, ::System::Boolean vertical, ::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Boolean responseMultiTouch, ::System::Boolean enableHanldeCountLimit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::EventSystems::PointerEventData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOUCHFILTER_FILTERTOUCH_OFFSET))(this, shareDrag, ignoreCheck, vertical, eventData, responseMultiTouch, enableHanldeCountLimit);
		}

		::System::Boolean TouchEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOUCHFILTER_TOUCHEND_OFFSET))(this);
		}
	};
}
