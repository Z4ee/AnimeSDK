#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/TouchFilter_FilterState.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_UI_TOUCHFILTER_FILTERTOUCH_OFFSET UNITYSDK_OFFSET(0x1D0837C0)
#define UNITYENGINE_UI_TOUCHFILTER_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1D093950)
#define UNITYENGINE_UI_TOUCHFILTER_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1D093960)
#define UNITYENGINE_UI_TOUCHFILTER_TOUCHBEGIN_OFFSET UNITYSDK_OFFSET(0x1D084080)
#define UNITYENGINE_UI_TOUCHFILTER_TOUCHEND_OFFSET UNITYSDK_OFFSET(0x1D093970)
#define UNITYENGINE_UI_TOUCHFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D082D50)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int TouchFilter_TypeDefinitionIndex = 6032;

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

		::System::Void set_state(::UnityEngine::UI::TouchFilter_FilterState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::TouchFilter_FilterState))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOUCHFILTER_SET_STATE_OFFSET))(this, a1);
		}

		::System::Void TouchBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOUCHFILTER_TOUCHBEGIN_OFFSET))(this);
		}

		::System::Boolean FilterTouch(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::UnityEngine::EventSystems::PointerEventData* a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::EventSystems::PointerEventData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOUCHFILTER_FILTERTOUCH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean TouchEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOUCHFILTER_TOUCHEND_OFFSET))(this);
		}
	};
}
