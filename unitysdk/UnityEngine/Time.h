#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_TIME_GET_CAPTUREDELTATIME_OFFSET UNITYSDK_OFFSET(0x1B2DF890)
#define UNITYENGINE_TIME_GET_CAPTUREFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1B2DF8B0)
#define UNITYENGINE_TIME_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x1B2DF770)
#define UNITYENGINE_TIME_GET_FIXEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x1B2DF7D0)
#define UNITYENGINE_TIME_GET_FIXEDTIME_OFFSET UNITYSDK_OFFSET(0x1B2DF780)
#define UNITYENGINE_TIME_GET_FIXEDUNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x1B2DF7C0)
#define UNITYENGINE_TIME_GET_FIXEDUNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x1B2DF7A0)
#define UNITYENGINE_TIME_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1B2DF860)
#define UNITYENGINE_TIME_GET_INFIXEDTIMESTEP_OFFSET UNITYSDK_OFFSET(0x1B2DF9C0)
#define UNITYENGINE_TIME_GET_MAXIMUMDELTATIME_OFFSET UNITYSDK_OFFSET(0x1B2DF7F0)
#define UNITYENGINE_TIME_GET_MAXIMUMPARTICLEDELTATIME_OFFSET UNITYSDK_OFFSET(0x1B2DF820)
#define UNITYENGINE_TIME_GET_NOWINMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1B2DF9D0)
#define UNITYENGINE_TIME_GET_OVERRIDESHADERTIME_OFFSET UNITYSDK_OFFSET(0x1B2DF9E0)
#define UNITYENGINE_TIME_GET_REALTIMESINCESTARTUP_OFFSET UNITYSDK_OFFSET(0x1B2DF880)
#define UNITYENGINE_TIME_GET_RENDEREDFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1B2DF870)
#define UNITYENGINE_TIME_GET_SMOOTHDELTATIME_OFFSET UNITYSDK_OFFSET(0x1B2DF810)
#define UNITYENGINE_TIME_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1B2DF840)
#define UNITYENGINE_TIME_GET_TIMESINCELEVELLOAD_OFFSET UNITYSDK_OFFSET(0x1B2DF760)
#define UNITYENGINE_TIME_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1B2DF750)
#define UNITYENGINE_TIME_GET_UNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x1B2DF7B0)
#define UNITYENGINE_TIME_GET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x1B2DF790)
#define UNITYENGINE_TIME_SET_CAPTUREDELTATIME_OFFSET UNITYSDK_OFFSET(0x1B2DF8A0)
#define UNITYENGINE_TIME_SET_CAPTUREFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1B2DF990)
#define UNITYENGINE_TIME_SET_FIXEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x1B2DF7E0)
#define UNITYENGINE_TIME_SET_MAXIMUMDELTATIME_OFFSET UNITYSDK_OFFSET(0x1B2DF800)
#define UNITYENGINE_TIME_SET_MAXIMUMPARTICLEDELTATIME_OFFSET UNITYSDK_OFFSET(0x1B2DF830)
#define UNITYENGINE_TIME_SET_OVERRIDESHADERTIME_OFFSET UNITYSDK_OFFSET(0x1B2DF9F0)
#define UNITYENGINE_TIME_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1B2DF850)
#define UNITYENGINE_TIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2DFA00)

namespace UnityEngine
{
	inline static constexpr unsigned int Time_TypeDefinitionIndex = 4377;

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

		static ::System::Void set_fixedDeltaTime(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_SET_FIXEDDELTATIME_OFFSET))(a1);
		}

		static ::System::Single get_maximumDeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_MAXIMUMDELTATIME_OFFSET))();
		}

		static ::System::Void set_maximumDeltaTime(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_SET_MAXIMUMDELTATIME_OFFSET))(a1);
		}

		static ::System::Single get_smoothDeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_SMOOTHDELTATIME_OFFSET))();
		}

		static ::System::Single get_maximumParticleDeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_MAXIMUMPARTICLEDELTATIME_OFFSET))();
		}

		static ::System::Void set_maximumParticleDeltaTime(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_SET_MAXIMUMPARTICLEDELTATIME_OFFSET))(a1);
		}

		static ::System::Single get_timeScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_TIMESCALE_OFFSET))();
		}

		static ::System::Void set_timeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_SET_TIMESCALE_OFFSET))(a1);
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

		static ::System::Void set_captureDeltaTime(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_SET_CAPTUREDELTATIME_OFFSET))(a1);
		}

		static ::System::Int32 get_captureFramerate()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_CAPTUREFRAMERATE_OFFSET))();
		}

		static ::System::Void set_captureFramerate(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_SET_CAPTUREFRAMERATE_OFFSET))(a1);
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

		static ::System::Void set_overrideShaderTime(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_SET_OVERRIDESHADERTIME_OFFSET))(a1);
		}
	};
}
