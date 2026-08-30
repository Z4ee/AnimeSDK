#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"

#define UNITYENGINE_PARTICLESYSTEM_BURST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x2E245F0)
#define UNITYENGINE_PARTICLESYSTEM_BURST_GET_CYCLECOUNT_OFFSET UNITYSDK_OFFSET(0x3BC8940)
#define UNITYENGINE_PARTICLESYSTEM_BURST_GET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x3BC8920)
#define UNITYENGINE_PARTICLESYSTEM_BURST_GET_MINCOUNT_OFFSET UNITYSDK_OFFSET(0x3BC8900)
#define UNITYENGINE_PARTICLESYSTEM_BURST_GET_PROBABILITY_OFFSET UNITYSDK_OFFSET(0x3BC8970)
#define UNITYENGINE_PARTICLESYSTEM_BURST_GET_REPEATINTERVAL_OFFSET UNITYSDK_OFFSET(0x3B7C620)
#define UNITYENGINE_PARTICLESYSTEM_BURST_GET_TIME_OFFSET UNITYSDK_OFFSET(0xD4B0)
#define UNITYENGINE_PARTICLESYSTEM_BURST_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x3B58F20)
#define UNITYENGINE_PARTICLESYSTEM_BURST_SET_CYCLECOUNT_OFFSET UNITYSDK_OFFSET(0x3BC8950)
#define UNITYENGINE_PARTICLESYSTEM_BURST_SET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x3BC8930)
#define UNITYENGINE_PARTICLESYSTEM_BURST_SET_MINCOUNT_OFFSET UNITYSDK_OFFSET(0x3BC8910)
#define UNITYENGINE_PARTICLESYSTEM_BURST_SET_PROBABILITY_OFFSET UNITYSDK_OFFSET(0x3BC8980)
#define UNITYENGINE_PARTICLESYSTEM_BURST_SET_REPEATINTERVAL_OFFSET UNITYSDK_OFFSET(0x3BC8960)
#define UNITYENGINE_PARTICLESYSTEM_BURST_SET_TIME_OFFSET UNITYSDK_OFFSET(0xD4C0)
#define UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BC87C0)
#define UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3BC8810)
#define UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3BC8870)
#define UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_4_OFFSET UNITYSDK_OFFSET(0x3BC88B0)
#define UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_OFFSET UNITYSDK_OFFSET(0x3BC8790)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_Burst_TypeDefinitionIndex = 5207;

	struct alignas(8) ParticleSystem_Burst
	{
		::System::Single m_Time; // 0x10
		::UnityEngine::ParticleSystem_MinMaxCurve m_Count; // 0x18
		::System::Int32 m_RepeatCount; // 0x38
		::System::Single m_RepeatInterval; // 0x3C
		::System::Single m_InvProbability; // 0x40

		::System::Void _ctor(::System::Single a1, ::System::Int16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Single a1, ::System::Int16 a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int16, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::Single a1, ::System::Int16 a2, ::System::Int16 a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int16, ::System::Int16, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_3(::System::Single a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::System::Single a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::ParticleSystem_MinMaxCurve, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_SET_TIME_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_count()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_count(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_SET_COUNT_OFFSET))(this, a1);
		}

		::System::Int16 get_minCount()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_GET_MINCOUNT_OFFSET))(this);
		}

		::System::Void set_minCount(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_SET_MINCOUNT_OFFSET))(this, a1);
		}

		::System::Int16 get_maxCount()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_GET_MAXCOUNT_OFFSET))(this);
		}

		::System::Void set_maxCount(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_SET_MAXCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_cycleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_GET_CYCLECOUNT_OFFSET))(this);
		}

		::System::Void set_cycleCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_SET_CYCLECOUNT_OFFSET))(this, a1);
		}

		::System::Single get_repeatInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_GET_REPEATINTERVAL_OFFSET))(this);
		}

		::System::Void set_repeatInterval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_SET_REPEATINTERVAL_OFFSET))(this, a1);
		}

		::System::Single get_probability()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_GET_PROBABILITY_OFFSET))(this);
		}

		::System::Void set_probability(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_BURST_SET_PROBABILITY_OFFSET))(this, a1);
		}
	};
}
