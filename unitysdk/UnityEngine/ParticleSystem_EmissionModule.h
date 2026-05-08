#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GETBURST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA96860)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GETBURST_OFFSET UNITYSDK_OFFSET(0x9A1B90)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_BURSTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA96880)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_BURSTCOUNT_OFFSET UNITYSDK_OFFSET(0x9A1C00)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA96500)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9A18B0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA96630)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9A19D0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA965F0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCE_OFFSET UNITYSDK_OFFSET(0x9A1960)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA96580)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9A1940)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA96560)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIME_OFFSET UNITYSDK_OFFSET(0x9A18D0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURSTS_1_OFFSET UNITYSDK_OFFSET(0x9A1AA0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURSTS_OFFSET UNITYSDK_OFFSET(0x9A19F0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA967E0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURST_OFFSET UNITYSDK_OFFSET(0x9A1B50)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_BURSTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA96890)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_BURSTCOUNT_OFFSET UNITYSDK_OFFSET(0x9A1C10)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA96510)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9A18C0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA96650)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9A19E0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA96610)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCE_OFFSET UNITYSDK_OFFSET(0x9A19A0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA965A0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9A1950)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA96570)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIME_OFFSET UNITYSDK_OFFSET(0x9A1910)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x2E5940)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_EmissionModule_TypeDefinitionIndex = 24857;

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
