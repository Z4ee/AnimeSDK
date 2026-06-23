#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GETBURST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA740)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GETBURST_OFFSET UNITYSDK_OFFSET(0xA43F90)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_BURSTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA760)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_BURSTCOUNT_OFFSET UNITYSDK_OFFSET(0xA44000)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA3C0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA43CA0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA4F0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA43DC0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA4B0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCE_OFFSET UNITYSDK_OFFSET(0xA43D50)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA440)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA43D30)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA420)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIME_OFFSET UNITYSDK_OFFSET(0xA43CC0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURSTS_1_OFFSET UNITYSDK_OFFSET(0xA43EA0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURSTS_OFFSET UNITYSDK_OFFSET(0xA43DF0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA6C0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURST_OFFSET UNITYSDK_OFFSET(0xA43F50)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_BURSTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA770)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_BURSTCOUNT_OFFSET UNITYSDK_OFFSET(0xA44010)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_EMITCALLBACKTHRESHOLD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA530)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_EMITCALLBACKTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xA43DE0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA3D0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA43CB0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA510)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA43DD0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA4D0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCE_OFFSET UNITYSDK_OFFSET(0xA43D90)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA460)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA43D40)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA430)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIME_OFFSET UNITYSDK_OFFSET(0xA43D00)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x2B6D10)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_EmissionModule_TypeDefinitionIndex = 18761;

	struct alignas(8) ParticleSystem_EmissionModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_rateOverTime()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_rateOverTime(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIME_OFFSET))(this, value);
		}
		*/

		::System::Single get_rateOverTimeMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIMEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_rateOverTimeMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIMEMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_rateOverDistance()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_rateOverDistance(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCE_OFFSET))(this, value);
		}
		*/

		::System::Single get_rateOverDistanceMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_rateOverDistanceMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCEMULTIPLIER_OFFSET))(this, value);
		}

		::System::Void set_emitCallbackThreshold(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_EMITCALLBACKTHRESHOLD_OFFSET))(this, value);
		}

		/*
		::System::Void SetBursts(::Il2CppArray<::UnityEngine::ParticleSystem_Burst>* bursts)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Burst>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURSTS_OFFSET))(this, bursts);
		}
		*/

		/*
		::System::Void SetBursts_1(::Il2CppArray<::UnityEngine::ParticleSystem_Burst>* bursts, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Burst>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURSTS_1_OFFSET))(this, bursts, size);
		}
		*/

		/*
		::System::Void SetBurst(::System::Int32 index, ::UnityEngine::ParticleSystem_Burst burst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ParticleSystem_Burst))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURST_OFFSET))(this, index, burst);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_Burst GetBurst(::System::Int32 index)
		{
			return ((::UnityEngine::ParticleSystem_Burst(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GETBURST_OFFSET))(this, index);
		}
		*/

		::System::Int32 get_burstCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_BURSTCOUNT_OFFSET))(this);
		}

		::System::Void set_burstCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_BURSTCOUNT_OFFSET))(this, value);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_EmissionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_rateOverTime_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIME_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_rateOverTime_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIME_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_rateOverTimeMultiplier_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_EmissionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIMEMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_rateOverTimeMultiplier_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIMEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_rateOverDistance_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCE_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_rateOverDistance_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCE_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_rateOverDistanceMultiplier_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_EmissionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCEMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_rateOverDistanceMultiplier_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_emitCallbackThreshold_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_EMITCALLBACKTHRESHOLD_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void SetBurst_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::System::Int32 index, ::UnityEngine::ParticleSystem_Burst& burst)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Int32, ::UnityEngine::ParticleSystem_Burst&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURST_INJECTED_OFFSET))(_unity_self, index, burst);
		}
		*/

		/*
		static ::System::Void GetBurst_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::System::Int32 index, ::UnityEngine::ParticleSystem_Burst& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Int32, ::UnityEngine::ParticleSystem_Burst&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GETBURST_INJECTED_OFFSET))(_unity_self, index, ret);
		}
		*/

		static ::System::Int32 get_burstCount_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_EmissionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_BURSTCOUNT_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_burstCount_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_BURSTCOUNT_INJECTED_OFFSET))(_unity_self, value);
		}
	};
}
