#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/CoroutineTween/ColorTween_ColorTweenMode.h"

namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI::CoroutineTween { class ColorTween_ColorTweenCallback; }

#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_ADDONCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x39E7C60)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_GETDURATION_OFFSET UNITYSDK_OFFSET(0x394E4D0)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_GETIGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x394E4F0)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x394E4D0)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_GET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x394E4F0)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x38C6080)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_GET_TARGETCOLOR_OFFSET UNITYSDK_OFFSET(0x31B5660)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_GET_TWEENMODE_OFFSET UNITYSDK_OFFSET(0x7C2FF0)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x394E4E0)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x394E500)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x394E4A0)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_TARGETCOLOR_OFFSET UNITYSDK_OFFSET(0x394E4B0)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_TWEENMODE_OFFSET UNITYSDK_OFFSET(0x394E4C0)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_TWEENVALUE_OFFSET UNITYSDK_OFFSET(0x394E510)
#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_VALIDTARGET_OFFSET UNITYSDK_OFFSET(0x7C5460)

namespace UnityEngine::UI::CoroutineTween
{
	inline static constexpr unsigned int ColorTween_TypeDefinitionIndex = 6057;

	struct alignas(8) ColorTween
	{
		::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenCallback* m_Target; // 0x10
		::UnityEngine::Color m_StartColor; // 0x18
		::UnityEngine::Color m_TargetColor; // 0x28
		::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode m_TweenMode; // 0x38
		::System::Single m_Duration; // 0x3C
		::System::Boolean m_IgnoreTimeScale; // 0x40

		::UnityEngine::Color get_startColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_GET_STARTCOLOR_OFFSET))(this);
		}

		::System::Void set_startColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_STARTCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_targetColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_GET_TARGETCOLOR_OFFSET))(this);
		}

		::System::Void set_targetColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_TARGETCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode get_tweenMode()
		{
			return ((::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_GET_TWEENMODE_OFFSET))(this);
		}

		::System::Void set_tweenMode(::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_TWEENMODE_OFFSET))(this, a1);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_duration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_DURATION_OFFSET))(this, a1);
		}

		::System::Boolean get_ignoreTimeScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_GET_IGNORETIMESCALE_OFFSET))(this);
		}

		::System::Void set_ignoreTimeScale(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_SET_IGNORETIMESCALE_OFFSET))(this, a1);
		}

		::System::Void TweenValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_TWEENVALUE_OFFSET))(this, a1);
		}

		::System::Void AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_ADDONCHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean GetIgnoreTimescale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_GETIGNORETIMESCALE_OFFSET))(this);
		}

		::System::Single GetDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_GETDURATION_OFFSET))(this);
		}

		::System::Boolean ValidTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_VALIDTARGET_OFFSET))(this);
		}
	};
}
