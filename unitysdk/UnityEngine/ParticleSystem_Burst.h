#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"

#define UNITYENGINE_PARTICLESYSTEM_BURST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x41F4B0)
#define UNITYENGINE_PARTICLESYSTEM_BURST_GET_TIME_OFFSET UNITYSDK_OFFSET(0x324CC0)
#define UNITYENGINE_PARTICLESYSTEM_BURST_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xA39B90)
#define UNITYENGINE_PARTICLESYSTEM_BURST_SET_TIME_OFFSET UNITYSDK_OFFSET(0x324A50)
#define UNITYENGINE_PARTICLESYSTEM_BURST__CTOR_OFFSET UNITYSDK_OFFSET(0xA8F6D0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_Burst_TypeDefinitionIndex = 7707;

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
	};
}
