#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_TIME_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x1D58FC40)
#define UNITYENGINE_TIME_GET_FIXEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x1D58FCD0)
#define UNITYENGINE_TIME_GET_FIXEDTIMEASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1D58FC60)
#define UNITYENGINE_TIME_GET_FIXEDTIME_OFFSET UNITYSDK_OFFSET(0x1D58FC50)
#define UNITYENGINE_TIME_GET_FIXEDUNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x1D58FCB0)
#define UNITYENGINE_TIME_GET_FIXEDUNSCALEDTIMEASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1D58FCC0)
#define UNITYENGINE_TIME_GET_FIXEDUNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x1D58FC90)
#define UNITYENGINE_TIME_GET_FIXEDUPDATECOUNTINCURRENTFRAME_OFFSET UNITYSDK_OFFSET(0x1D58FC30)
#define UNITYENGINE_TIME_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1D58FD50)
#define UNITYENGINE_TIME_GET_INFIXEDTIMESTEP_OFFSET UNITYSDK_OFFSET(0x1D58FDC0)
#define UNITYENGINE_TIME_GET_MAXIMUMDELTATIME_OFFSET UNITYSDK_OFFSET(0x1D58FCF0)
#define UNITYENGINE_TIME_GET_MAXIMUMPARTICLEDELTATIME_OFFSET UNITYSDK_OFFSET(0x1D58FD20)
#define UNITYENGINE_TIME_GET_REALTIMESINCESTARTUP_OFFSET UNITYSDK_OFFSET(0x1D58FD70)
#define UNITYENGINE_TIME_GET_RENDEREDFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1D58FD60)
#define UNITYENGINE_TIME_GET_SMOOTHDELTATIME_OFFSET UNITYSDK_OFFSET(0x1D58FD10)
#define UNITYENGINE_TIME_GET_TIMEASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1D58FC10)
#define UNITYENGINE_TIME_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1D58FD30)
#define UNITYENGINE_TIME_GET_TIMESINCELEVELLOAD_OFFSET UNITYSDK_OFFSET(0x1D58FC20)
#define UNITYENGINE_TIME_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1D58FC00)
#define UNITYENGINE_TIME_GET_UNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x1D58FCA0)
#define UNITYENGINE_TIME_GET_UNSCALEDTIMEASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1D58FC80)
#define UNITYENGINE_TIME_GET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x1D58FC70)
#define UNITYENGINE_TIME_SET_CAPTUREDELTATIME_OFFSET UNITYSDK_OFFSET(0x1D58FD80)
#define UNITYENGINE_TIME_SET_CAPTUREFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1D58FD90)
#define UNITYENGINE_TIME_SET_FIXEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x1D58FCE0)
#define UNITYENGINE_TIME_SET_LIMITFRAMERATEUNDERVSYNC_OFFSET UNITYSDK_OFFSET(0x1D58FDD0)
#define UNITYENGINE_TIME_SET_MAXIMUMDELTATIME_OFFSET UNITYSDK_OFFSET(0x1D58FD00)
#define UNITYENGINE_TIME_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1D58FD40)
#define UNITYENGINE_TIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D58FDE0)

namespace UnityEngine
{
	inline static constexpr unsigned int Time_TypeDefinitionIndex = 5401;

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

		static ::System::Double get_timeAsDouble()
		{
			return ((::System::Double(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_TIMEASDOUBLE_OFFSET))();
		}

		static ::System::Single get_timeSinceLevelLoad()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_TIMESINCELEVELLOAD_OFFSET))();
		}

		static ::System::Int32 get_fixedUpdateCountInCurrentFrame()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_FIXEDUPDATECOUNTINCURRENTFRAME_OFFSET))();
		}

		static ::System::Single get_deltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_DELTATIME_OFFSET))();
		}

		static ::System::Single get_fixedTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_FIXEDTIME_OFFSET))();
		}

		static ::System::Double get_fixedTimeAsDouble()
		{
			return ((::System::Double(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_FIXEDTIMEASDOUBLE_OFFSET))();
		}

		static ::System::Single get_unscaledTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_UNSCALEDTIME_OFFSET))();
		}

		static ::System::Double get_unscaledTimeAsDouble()
		{
			return ((::System::Double(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_UNSCALEDTIMEASDOUBLE_OFFSET))();
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

		static ::System::Double get_fixedUnscaledTimeAsDouble()
		{
			return ((::System::Double(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_FIXEDUNSCALEDTIMEASDOUBLE_OFFSET))();
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

		static ::System::Void set_captureDeltaTime(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_SET_CAPTUREDELTATIME_OFFSET))(value);
		}

		static ::System::Void set_captureFramerate(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_SET_CAPTUREFRAMERATE_OFFSET))(value);
		}

		static ::System::Boolean get_inFixedTimeStep()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_GET_INFIXEDTIMESTEP_OFFSET))();
		}

		static ::System::Void set_limitFrameRateUnderVSync(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIME_SET_LIMITFRAMERATEUNDERVSYNC_OFFSET))(value);
		}
	};
}
