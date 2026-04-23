#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"

#define UNITYENGINE_PARTICLESYSTEM_BURST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x164EAE0)
#define UNITYENGINE_PARTICLESYSTEM_BURST_GET_CYCLECOUNT_OFFSET UNITYSDK_OFFSET(0x22F0A30)
#define UNITYENGINE_PARTICLESYSTEM_BURST_GET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x22F0A10)
#define UNITYENGINE_PARTICLESYSTEM_BURST_GET_MINCOUNT_OFFSET UNITYSDK_OFFSET(0x22F09F0)
#define UNITYENGINE_PARTICLESYSTEM_BURST_GET_PROBABILITY_OFFSET UNITYSDK_OFFSET(0x22F0A60)
#define UNITYENGINE_PARTICLESYSTEM_BURST_GET_REPEATINTERVAL_OFFSET UNITYSDK_OFFSET(0x22B72A0)
#define UNITYENGINE_PARTICLESYSTEM_BURST_GET_TIME_OFFSET UNITYSDK_OFFSET(0xCC50)
#define UNITYENGINE_PARTICLESYSTEM_BURST_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x2298C40)
#define UNITYENGINE_PARTICLESYSTEM_BURST_SET_CYCLECOUNT_OFFSET UNITYSDK_OFFSET(0x22F0A40)
#define UNITYENGINE_PARTICLESYSTEM_BURST_SET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x22F0A20)
#define UNITYENGINE_PARTICLESYSTEM_BURST_SET_MINCOUNT_OFFSET UNITYSDK_OFFSET(0x22F0A00)
#define UNITYENGINE_PARTICLESYSTEM_BURST_SET_PROBABILITY_OFFSET UNITYSDK_OFFSET(0x22F0A70)
#define UNITYENGINE_PARTICLESYSTEM_BURST_SET_REPEATINTERVAL_OFFSET UNITYSDK_OFFSET(0x22F0A50)
#define UNITYENGINE_PARTICLESYSTEM_BURST_SET_TIME_OFFSET UNITYSDK_OFFSET(0xCC60)
#define UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22F08B0)
#define UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_2_OFFSET UNITYSDK_OFFSET(0x22F0900)
#define UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_3_OFFSET UNITYSDK_OFFSET(0x22F0960)
#define UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_4_OFFSET UNITYSDK_OFFSET(0x22F09A0)
#define UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_OFFSET UNITYSDK_OFFSET(0x22F0880)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_Burst_TypeDefinitionIndex = 5441;

	struct alignas(8) ParticleSystem_Burst
	{
		::System::Single m_Time; // 0x10
		::UnityEngine::ParticleSystem_MinMaxCurve m_Count; // 0x18
		::System::Int32 m_RepeatCount; // 0x38
		::System::Single m_RepeatInterval; // 0x3C
		::System::Single m_InvProbability; // 0x40

		::System::Void _ctor(::System::Single _time, ::System::Int16 _count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_OFFSET))(this, _time, _count);
		}

		::System::Void _ctor_1(::System::Single _time, ::System::Int16 _minCount, ::System::Int16 _maxCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int16, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_1_OFFSET))(this, _time, _minCount, _maxCount);
		}

		::System::Void _ctor_2(::System::Single _time, ::System::Int16 _minCount, ::System::Int16 _maxCount, ::System::Int32 _cycleCount, ::System::Single _repeatInterval)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int16, ::System::Int16, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_2_OFFSET))(this, _time, _minCount, _maxCount, _cycleCount, _repeatInterval);
		}

		::System::Void _ctor_3(::System::Single _time, ::UnityEngine::ParticleSystem_MinMaxCurve _count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_3_OFFSET))(this, _time, _count);
		}

		::System::Void _ctor_4(::System::Single _time, ::UnityEngine::ParticleSystem_MinMaxCurve _count, ::System::Int32 _cycleCount, ::System::Single _repeatInterval)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::ParticleSystem_MinMaxCurve, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_4_OFFSET))(this, _time, _count, _cycleCount, _repeatInterval);
		}

		::System::Single get_time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_SET_TIME_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_count()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_count(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_SET_COUNT_OFFSET))(this, value);
		}

		::System::Int16 get_minCount()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_GET_MINCOUNT_OFFSET))(this);
		}

		::System::Void set_minCount(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_SET_MINCOUNT_OFFSET))(this, value);
		}

		::System::Int16 get_maxCount()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_GET_MAXCOUNT_OFFSET))(this);
		}

		::System::Void set_maxCount(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_SET_MAXCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_cycleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_GET_CYCLECOUNT_OFFSET))(this);
		}

		::System::Void set_cycleCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_SET_CYCLECOUNT_OFFSET))(this, value);
		}

		::System::Single get_repeatInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_GET_REPEATINTERVAL_OFFSET))(this);
		}

		::System::Void set_repeatInterval(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_SET_REPEATINTERVAL_OFFSET))(this, value);
		}

		::System::Single get_probability()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_GET_PROBABILITY_OFFSET))(this);
		}

		::System::Void set_probability(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_SET_PROBABILITY_OFFSET))(this, value);
		}
	};
}
