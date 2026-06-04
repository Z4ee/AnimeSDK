#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/TouchPhase.h"
#include "unitysdk/UnityEngine/TouchType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_TOUCH_GET_ALTITUDEANGLE_OFFSET UNITYSDK_OFFSET(0x388FD60)
#define UNITYENGINE_TOUCH_GET_AZIMUTHANGLE_OFFSET UNITYSDK_OFFSET(0x388FD70)
#define UNITYENGINE_TOUCH_GET_DELTAPOSITION_OFFSET UNITYSDK_OFFSET(0x145A50)
#define UNITYENGINE_TOUCH_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x3846C70)
#define UNITYENGINE_TOUCH_GET_FINGERID_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define UNITYENGINE_TOUCH_GET_MAXIMUMPOSSIBLEPRESSURE_OFFSET UNITYSDK_OFFSET(0x2D32440)
#define UNITYENGINE_TOUCH_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x5D4E0)
#define UNITYENGINE_TOUCH_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x13E040)
#define UNITYENGINE_TOUCH_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x3846CA0)
#define UNITYENGINE_TOUCH_GET_RADIUSVARIANCE_OFFSET UNITYSDK_OFFSET(0x388FD80)
#define UNITYENGINE_TOUCH_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x3846CB0)
#define UNITYENGINE_TOUCH_GET_RAWPOSITION_OFFSET UNITYSDK_OFFSET(0x26200)
#define UNITYENGINE_TOUCH_GET_TAPCOUNT_OFFSET UNITYSDK_OFFSET(0x1D280)
#define UNITYENGINE_TOUCH_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x112A0)
#define UNITYENGINE_TOUCH_SET_DELTAPOSITION_OFFSET UNITYSDK_OFFSET(0x388FD50)
#define UNITYENGINE_TOUCH_SET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x3872DE0)
#define UNITYENGINE_TOUCH_SET_FINGERID_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define UNITYENGINE_TOUCH_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x2CA9B00)
#define UNITYENGINE_TOUCH_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x13E050)
#define UNITYENGINE_TOUCH_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xC270)

namespace UnityEngine
{
	inline static constexpr unsigned int Touch_TypeDefinitionIndex = 5253;

	struct alignas(4) Touch
	{
		::System::Int32 m_FingerId; // 0x10
		::UnityEngine::Vector2 m_Position; // 0x14
		::UnityEngine::Vector2 m_RawPosition; // 0x1C
		::UnityEngine::Vector2 m_PositionDelta; // 0x24
		::System::Single m_TimeDelta; // 0x2C
		::System::Int32 m_TapCount; // 0x30
		::UnityEngine::TouchPhase m_Phase; // 0x34
		::UnityEngine::TouchType m_Type; // 0x38
		::System::Single m_Pressure; // 0x3C
		::System::Single m_maximumPossiblePressure; // 0x40
		::System::Single m_Radius; // 0x44
		::System::Single m_RadiusVariance; // 0x48
		::System::Single m_AltitudeAngle; // 0x4C
		::System::Single m_AzimuthAngle; // 0x50

		::System::Int32 get_fingerId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_FINGERID_OFFSET))(this);
		}

		::System::Void set_fingerId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_SET_FINGERID_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_rawPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_RAWPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_deltaPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_DELTAPOSITION_OFFSET))(this);
		}

		::System::Void set_deltaPosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_SET_DELTAPOSITION_OFFSET))(this, a1);
		}

		::System::Single get_deltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_DELTATIME_OFFSET))(this);
		}

		::System::Void set_deltaTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_SET_DELTATIME_OFFSET))(this, a1);
		}

		::System::Int32 get_tapCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_TAPCOUNT_OFFSET))(this);
		}

		::UnityEngine::TouchPhase get_phase()
		{
			return ((::UnityEngine::TouchPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_PHASE_OFFSET))(this);
		}

		::System::Void set_phase(::UnityEngine::TouchPhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TouchPhase))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_SET_PHASE_OFFSET))(this, a1);
		}

		::System::Single get_pressure()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_PRESSURE_OFFSET))(this);
		}

		::System::Single get_maximumPossiblePressure()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_MAXIMUMPOSSIBLEPRESSURE_OFFSET))(this);
		}

		::UnityEngine::TouchType get_type()
		{
			return ((::UnityEngine::TouchType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::UnityEngine::TouchType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TouchType))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Single get_altitudeAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_ALTITUDEANGLE_OFFSET))(this);
		}

		::System::Single get_azimuthAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_AZIMUTHANGLE_OFFSET))(this);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_RADIUS_OFFSET))(this);
		}

		::System::Single get_radiusVariance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_RADIUSVARIANCE_OFFSET))(this);
		}
	};
}
