#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/CoroutineTween/ColorTween_ColorTweenMode.h"

namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI::CoroutineTween { class ColorTween_ColorTweenCallback; }

#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_ADDONCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D77A0)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x58C110)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_GET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x764470)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x58C120)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x764480)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x96A490)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_TARGETCOLOR_OFFSET UNITYSDK_OFFSET(0x9A2670)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_TWEENMODE_OFFSET UNITYSDK_OFFSET(0x485B70)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_TWEENVALUE_OFFSET UNITYSDK_OFFSET(0x9D7790)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_VALIDTARGET_OFFSET UNITYSDK_OFFSET(0x9D77B0)

namespace UnityEngine::UI::CoroutineTween
{
	inline static constexpr unsigned int ColorTween_TypeDefinitionIndex = 8497;

	struct alignas(8) ColorTween
	{
		::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenCallback* m_Target; // 0x10
		::UnityEngine::Color m_StartColor; // 0x18
		::UnityEngine::Color m_TargetColor; // 0x28
		::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode m_TweenMode; // 0x38
		::System::Single m_Duration; // 0x3C
		::System::Boolean m_IgnoreTimeScale; // 0x40

		::System::Void set_startColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_STARTCOLOR_OFFSET))(this, value);
		}

		::System::Void set_targetColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_TARGETCOLOR_OFFSET))(this, value);
		}

		::System::Void set_tweenMode(::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_TWEENMODE_OFFSET))(this, value);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_duration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_DURATION_OFFSET))(this, value);
		}

		::System::Boolean get_ignoreTimeScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_GET_IGNORETIMESCALE_OFFSET))(this);
		}

		::System::Void set_ignoreTimeScale(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_IGNORETIMESCALE_OFFSET))(this, value);
		}

		::System::Void TweenValue(::System::Single floatPercentage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_TWEENVALUE_OFFSET))(this, floatPercentage);
		}

		::System::Void AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_ADDONCHANGEDCALLBACK_OFFSET))(this, callback);
		}

		::System::Boolean ValidTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_VALIDTARGET_OFFSET))(this);
		}
	};
}
