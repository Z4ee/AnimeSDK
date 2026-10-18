#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/TMPro/ColorTween_ColorTweenMode.h"
#include "unitysdk/UnityEngine/Color.h"

namespace TMPro { class ColorTween_ColorTweenCallback; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define TMPRO_COLORTWEEN_ADDONCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x3C677B0)
#define TMPRO_COLORTWEEN_GETDURATION_OFFSET UNITYSDK_OFFSET(0x3C31B30)
#define TMPRO_COLORTWEEN_GETIGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x3C67710)
#define TMPRO_COLORTWEEN_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x3C31B30)
#define TMPRO_COLORTWEEN_GET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x3C67710)
#define TMPRO_COLORTWEEN_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0xEC9A0)
#define TMPRO_COLORTWEEN_GET_TARGETCOLOR_OFFSET UNITYSDK_OFFSET(0x2EB0EA0)
#define TMPRO_COLORTWEEN_GET_TWEENMODE_OFFSET UNITYSDK_OFFSET(0xAD20)
#define TMPRO_COLORTWEEN_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x3C67700)
#define TMPRO_COLORTWEEN_SET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x3C67720)
#define TMPRO_COLORTWEEN_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0xF3640)
#define TMPRO_COLORTWEEN_SET_TARGETCOLOR_OFFSET UNITYSDK_OFFSET(0x3C676F0)
#define TMPRO_COLORTWEEN_SET_TWEENMODE_OFFSET UNITYSDK_OFFSET(0xAD30)
#define TMPRO_COLORTWEEN_TWEENVALUE_OFFSET UNITYSDK_OFFSET(0x3C67730)
#define TMPRO_COLORTWEEN_VALIDTARGET_OFFSET UNITYSDK_OFFSET(0xE630)

namespace TMPro
{
	inline static constexpr unsigned int ColorTween_TypeDefinitionIndex = 44551;

	struct alignas(8) ColorTween
	{
		::TMPro::ColorTween_ColorTweenCallback* m_Target; // 0x10
		::UnityEngine::Color m_StartColor; // 0x18
		::UnityEngine::Color m_TargetColor; // 0x28
		::TMPro::ColorTween_ColorTweenMode m_TweenMode; // 0x38
		::System::Single m_Duration; // 0x3C
		::System::Boolean m_IgnoreTimeScale; // 0x40

		::UnityEngine::Color get_startColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GET_STARTCOLOR_OFFSET))(this);
		}

		::System::Void set_startColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_SET_STARTCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_targetColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GET_TARGETCOLOR_OFFSET))(this);
		}

		::System::Void set_targetColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_SET_TARGETCOLOR_OFFSET))(this, a1);
		}

		::TMPro::ColorTween_ColorTweenMode get_tweenMode()
		{
			return ((::TMPro::ColorTween_ColorTweenMode(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GET_TWEENMODE_OFFSET))(this);
		}

		::System::Void set_tweenMode(::TMPro::ColorTween_ColorTweenMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::ColorTween_ColorTweenMode))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_SET_TWEENMODE_OFFSET))(this, a1);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_duration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_SET_DURATION_OFFSET))(this, a1);
		}

		::System::Boolean get_ignoreTimeScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GET_IGNORETIMESCALE_OFFSET))(this);
		}

		::System::Void set_ignoreTimeScale(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_SET_IGNORETIMESCALE_OFFSET))(this, a1);
		}

		::System::Void TweenValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_TWEENVALUE_OFFSET))(this, a1);
		}

		::System::Void AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_ADDONCHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean GetIgnoreTimescale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GETIGNORETIMESCALE_OFFSET))(this);
		}

		::System::Single GetDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_GETDURATION_OFFSET))(this);
		}

		::System::Boolean ValidTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_VALIDTARGET_OFFSET))(this);
		}
	};
}
