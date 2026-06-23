#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/TouchPhase.h"
#include "unitysdk/UnityEngine/TouchType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_TOUCH_GET_DELTAPOSITION_OFFSET UNITYSDK_OFFSET(0x414340)
#define UNITYENGINE_TOUCH_GET_FINGERID_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define UNITYENGINE_TOUCH_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x3B1E30)
#define UNITYENGINE_TOUCH_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x3E3DA0)
#define UNITYENGINE_TOUCH_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x3B1DA0)

namespace UnityEngine
{
	inline static constexpr unsigned int Touch_TypeDefinitionIndex = 7687;

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

		::UnityEngine::Vector2 get_position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_deltaPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_DELTAPOSITION_OFFSET))(this);
		}

		::UnityEngine::TouchPhase get_phase()
		{
			return ((::UnityEngine::TouchPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_PHASE_OFFSET))(this);
		}

		::UnityEngine::TouchType get_type()
		{
			return ((::UnityEngine::TouchType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_TYPE_OFFSET))(this);
		}
	};
}
