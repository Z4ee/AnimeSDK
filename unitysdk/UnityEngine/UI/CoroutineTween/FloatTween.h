#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI::CoroutineTween { class FloatTween_FloatTweenCallback; }

#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_ADDONCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA66430)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x3EA130)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x7CC3E0)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x66AD60)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x958CC0)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0x5CC490)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_TARGETVALUE_OFFSET UNITYSDK_OFFSET(0x55F270)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_TWEENVALUE_OFFSET UNITYSDK_OFFSET(0xA66420)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_VALIDTARGET_OFFSET UNITYSDK_OFFSET(0xA66440)

namespace UnityEngine::UI::CoroutineTween
{
	inline static constexpr unsigned int FloatTween_TypeDefinitionIndex = 19009;

	struct alignas(8) FloatTween
	{
		::UnityEngine::UI::CoroutineTween::FloatTween_FloatTweenCallback* m_Target; // 0x10
		::System::Single m_StartValue; // 0x18
		::System::Single m_TargetValue; // 0x1C
		::System::Single m_Duration; // 0x20
		::System::Boolean m_IgnoreTimeScale; // 0x24

		::System::Void set_startValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_STARTVALUE_OFFSET))(this, value);
		}

		::System::Void set_targetValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_TARGETVALUE_OFFSET))(this, value);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_duration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_DURATION_OFFSET))(this, value);
		}

		::System::Boolean get_ignoreTimeScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_IGNORETIMESCALE_OFFSET))(this);
		}

		::System::Void set_ignoreTimeScale(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_IGNORETIMESCALE_OFFSET))(this, value);
		}

		::System::Void TweenValue(::System::Single floatPercentage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_TWEENVALUE_OFFSET))(this, floatPercentage);
		}

		::System::Void AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<::System::Single>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_ADDONCHANGEDCALLBACK_OFFSET))(this, callback);
		}

		::System::Boolean ValidTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_VALIDTARGET_OFFSET))(this);
		}
	};
}
