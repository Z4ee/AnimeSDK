#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace TMPro { class FloatTween_FloatTweenCallback; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define TMPRO_FLOATTWEEN_ADDONCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9A61B0)
#define TMPRO_FLOATTWEEN_GETDURATION_OFFSET UNITYSDK_OFFSET(0x44C630)
#define TMPRO_FLOATTWEEN_GETIGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x78EE50)
#define TMPRO_FLOATTWEEN_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x44C630)
#define TMPRO_FLOATTWEEN_GET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x78EE50)
#define TMPRO_FLOATTWEEN_GET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0x3D1D70)
#define TMPRO_FLOATTWEEN_GET_TARGETVALUE_OFFSET UNITYSDK_OFFSET(0x478130)
#define TMPRO_FLOATTWEEN_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x5F8380)
#define TMPRO_FLOATTWEEN_SET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x9A6150)
#define TMPRO_FLOATTWEEN_SET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0x5A2BD0)
#define TMPRO_FLOATTWEEN_SET_TARGETVALUE_OFFSET UNITYSDK_OFFSET(0x53D7C0)
#define TMPRO_FLOATTWEEN_TWEENVALUE_OFFSET UNITYSDK_OFFSET(0x9A6160)
#define TMPRO_FLOATTWEEN_VALIDTARGET_OFFSET UNITYSDK_OFFSET(0x32EF90)

namespace TMPro
{
	inline static constexpr unsigned int FloatTween_TypeDefinitionIndex = 39780;

	struct alignas(8) FloatTween
	{
		::TMPro::FloatTween_FloatTweenCallback* m_Target; // 0x10
		::System::Single m_StartValue; // 0x18
		::System::Single m_TargetValue; // 0x1C
		::System::Single m_Duration; // 0x20
		::System::Boolean m_IgnoreTimeScale; // 0x24

		::System::Single get_startValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_GET_STARTVALUE_OFFSET))(this);
		}

		::System::Void set_startValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_SET_STARTVALUE_OFFSET))(this, value);
		}

		::System::Single get_targetValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_GET_TARGETVALUE_OFFSET))(this);
		}

		::System::Void set_targetValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_SET_TARGETVALUE_OFFSET))(this, value);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_duration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_SET_DURATION_OFFSET))(this, value);
		}

		::System::Boolean get_ignoreTimeScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_GET_IGNORETIMESCALE_OFFSET))(this);
		}

		::System::Void set_ignoreTimeScale(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_SET_IGNORETIMESCALE_OFFSET))(this, value);
		}

		::System::Void TweenValue(::System::Single floatPercentage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_TWEENVALUE_OFFSET))(this, floatPercentage);
		}

		::System::Void AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<::System::Single>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Single>*))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_ADDONCHANGEDCALLBACK_OFFSET))(this, callback);
		}

		::System::Boolean GetIgnoreTimescale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_GETIGNORETIMESCALE_OFFSET))(this);
		}

		::System::Single GetDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_GETDURATION_OFFSET))(this);
		}

		::System::Boolean ValidTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_VALIDTARGET_OFFSET))(this);
		}
	};
}
