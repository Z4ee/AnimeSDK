#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI::CoroutineTween { class FloatTween_FloatTweenCallback; }

#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_ADDONCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x389B930)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GETDURATION_OFFSET UNITYSDK_OFFSET(0x802E0)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GETIGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x2BBAA60)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x802E0)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x2BBAA60)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0xD510)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_TARGETVALUE_OFFSET UNITYSDK_OFFSET(0xD530)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x802F0)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x2BBAA70)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0xD520)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_TARGETVALUE_OFFSET UNITYSDK_OFFSET(0xD540)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_TWEENVALUE_OFFSET UNITYSDK_OFFSET(0x387A0F0)
#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_VALIDTARGET_OFFSET UNITYSDK_OFFSET(0x2FB60)

namespace UnityEngine::UI::CoroutineTween
{
	inline static constexpr unsigned int FloatTween_TypeDefinitionIndex = 6055;

	struct alignas(8) FloatTween
	{
		::UnityEngine::UI::CoroutineTween::FloatTween_FloatTweenCallback* m_Target; // 0x10
		::System::Single m_StartValue; // 0x18
		::System::Single m_TargetValue; // 0x1C
		::System::Single m_Duration; // 0x20
		::System::Boolean m_IgnoreTimeScale; // 0x24

		::System::Single get_startValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_STARTVALUE_OFFSET))(this);
		}

		::System::Void set_startValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_STARTVALUE_OFFSET))(this, a1);
		}

		::System::Single get_targetValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_TARGETVALUE_OFFSET))(this);
		}

		::System::Void set_targetValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_TARGETVALUE_OFFSET))(this, a1);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_duration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_DURATION_OFFSET))(this, a1);
		}

		::System::Boolean get_ignoreTimeScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GET_IGNORETIMESCALE_OFFSET))(this);
		}

		::System::Void set_ignoreTimeScale(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_SET_IGNORETIMESCALE_OFFSET))(this, a1);
		}

		::System::Void TweenValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_TWEENVALUE_OFFSET))(this, a1);
		}

		::System::Void AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_ADDONCHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean GetIgnoreTimescale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GETIGNORETIMESCALE_OFFSET))(this);
		}

		::System::Single GetDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_GETDURATION_OFFSET))(this);
		}

		::System::Boolean ValidTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_VALIDTARGET_OFFSET))(this);
		}
	};
}
