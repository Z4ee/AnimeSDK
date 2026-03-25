#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_TIME_GET_CAPTUREDELTATIME_OFFSET UNITYSDK_OFFSET(0x18A574E0)
#define UNITYENGINE_TIME_GET_CAPTUREFRAMERATE_OFFSET UNITYSDK_OFFSET(0x18A57500)
#define UNITYENGINE_TIME_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x18A573C0)
#define UNITYENGINE_TIME_GET_FIXEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x18A57420)
#define UNITYENGINE_TIME_GET_FIXEDTIME_OFFSET UNITYSDK_OFFSET(0x18A573D0)
#define UNITYENGINE_TIME_GET_FIXEDUNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x18A57410)
#define UNITYENGINE_TIME_GET_FIXEDUNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x18A573F0)
#define UNITYENGINE_TIME_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x18A574B0)
#define UNITYENGINE_TIME_GET_INFIXEDTIMESTEP_OFFSET UNITYSDK_OFFSET(0x18A57610)
#define UNITYENGINE_TIME_GET_MAXIMUMDELTATIME_OFFSET UNITYSDK_OFFSET(0x18A57440)
#define UNITYENGINE_TIME_GET_MAXIMUMPARTICLEDELTATIME_OFFSET UNITYSDK_OFFSET(0x18A57470)
#define UNITYENGINE_TIME_GET_NOWINMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x18A57620)
#define UNITYENGINE_TIME_GET_OVERRIDESHADERTIME_OFFSET UNITYSDK_OFFSET(0x18A57630)
#define UNITYENGINE_TIME_GET_REALTIMESINCESTARTUP_OFFSET UNITYSDK_OFFSET(0x18A574D0)
#define UNITYENGINE_TIME_GET_RENDEREDFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x18A574C0)
#define UNITYENGINE_TIME_GET_SMOOTHDELTATIME_OFFSET UNITYSDK_OFFSET(0x18A57460)
#define UNITYENGINE_TIME_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x18A57490)
#define UNITYENGINE_TIME_GET_TIMESINCELEVELLOAD_OFFSET UNITYSDK_OFFSET(0x18A573B0)
#define UNITYENGINE_TIME_GET_TIME_OFFSET UNITYSDK_OFFSET(0x18A573A0)
#define UNITYENGINE_TIME_GET_UNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x18A57400)
#define UNITYENGINE_TIME_GET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x18A573E0)
#define UNITYENGINE_TIME_SET_CAPTUREDELTATIME_OFFSET UNITYSDK_OFFSET(0x18A574F0)
#define UNITYENGINE_TIME_SET_CAPTUREFRAMERATE_OFFSET UNITYSDK_OFFSET(0x18A575E0)
#define UNITYENGINE_TIME_SET_FIXEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x18A57430)
#define UNITYENGINE_TIME_SET_MAXIMUMDELTATIME_OFFSET UNITYSDK_OFFSET(0x18A57450)
#define UNITYENGINE_TIME_SET_MAXIMUMPARTICLEDELTATIME_OFFSET UNITYSDK_OFFSET(0x18A57480)
#define UNITYENGINE_TIME_SET_OVERRIDESHADERTIME_OFFSET UNITYSDK_OFFSET(0x18A57640)
#define UNITYENGINE_TIME_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x18A574A0)
#define UNITYENGINE_TIME__CTOR_OFFSET UNITYSDK_OFFSET(0x18A57650)

namespace UnityEngine
{
	inline static constexpr unsigned int Time_TypeDefinitionIndex = 4201;

	class Time : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIME__CTOR_OFFSET))(this);
		}

		static ::System::Single get_time()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_TIME_OFFSET))();
		}

		static ::System::Single get_timeSinceLevelLoad()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_TIMESINCELEVELLOAD_OFFSET))();
		}

		static ::System::Single get_deltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_DELTATIME_OFFSET))();
		}

		static ::System::Single get_fixedTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_FIXEDTIME_OFFSET))();
		}

		static ::System::Single get_unscaledTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_UNSCALEDTIME_OFFSET))();
		}

		static ::System::Single get_fixedUnscaledTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_FIXEDUNSCALEDTIME_OFFSET))();
		}

		static ::System::Single get_unscaledDeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_UNSCALEDDELTATIME_OFFSET))();
		}

		static ::System::Single get_fixedUnscaledDeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_FIXEDUNSCALEDDELTATIME_OFFSET))();
		}

		static ::System::Single get_fixedDeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_FIXEDDELTATIME_OFFSET))();
		}

		static ::System::Void set_fixedDeltaTime(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_SET_FIXEDDELTATIME_OFFSET))(value);
		}

		static ::System::Single get_maximumDeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_MAXIMUMDELTATIME_OFFSET))();
		}

		static ::System::Void set_maximumDeltaTime(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_SET_MAXIMUMDELTATIME_OFFSET))(value);
		}

		static ::System::Single get_smoothDeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_SMOOTHDELTATIME_OFFSET))();
		}

		static ::System::Single get_maximumParticleDeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_MAXIMUMPARTICLEDELTATIME_OFFSET))();
		}

		static ::System::Void set_maximumParticleDeltaTime(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_SET_MAXIMUMPARTICLEDELTATIME_OFFSET))(value);
		}

		static ::System::Single get_timeScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_TIMESCALE_OFFSET))();
		}

		static ::System::Void set_timeScale(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_SET_TIMESCALE_OFFSET))(value);
		}

		static ::System::Int32 get_frameCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_FRAMECOUNT_OFFSET))();
		}

		static ::System::Int32 get_renderedFrameCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_RENDEREDFRAMECOUNT_OFFSET))();
		}

		static ::System::Single get_realtimeSinceStartup()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_REALTIMESINCESTARTUP_OFFSET))();
		}

		static ::System::Single get_captureDeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_CAPTUREDELTATIME_OFFSET))();
		}

		static ::System::Void set_captureDeltaTime(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_SET_CAPTUREDELTATIME_OFFSET))(value);
		}

		static ::System::Int32 get_captureFramerate()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_CAPTUREFRAMERATE_OFFSET))();
		}

		static ::System::Void set_captureFramerate(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_SET_CAPTUREFRAMERATE_OFFSET))(value);
		}

		static ::System::Boolean get_inFixedTimeStep()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_INFIXEDTIMESTEP_OFFSET))();
		}

		static ::System::Double get_nowInMilliseconds()
		{
			return ((::System::Double(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_NOWINMILLISECONDS_OFFSET))();
		}

		static ::System::Single get_overrideShaderTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_OVERRIDESHADERTIME_OFFSET))();
		}

		static ::System::Void set_overrideShaderTime(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_SET_OVERRIDESHADERTIME_OFFSET))(value);
		}
	};
}
