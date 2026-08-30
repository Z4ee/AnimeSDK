#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GETBURSTS_OFFSET UNITYSDK_OFFSET(0x3BC9420)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GETBURST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAE0F0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GETBURST_OFFSET UNITYSDK_OFFSET(0x3BC95B0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_BURSTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAE100)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_BURSTCOUNT_OFFSET UNITYSDK_OFFSET(0x3BC9620)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDADC60)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3BC91A0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDADD90)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3BC92C0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDADD50)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCE_OFFSET UNITYSDK_OFFSET(0x3BC9250)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDADCE0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3BC9230)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDADCC0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIME_OFFSET UNITYSDK_OFFSET(0x3BC91C0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURSTS_1_OFFSET UNITYSDK_OFFSET(0x3BC9380)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURSTS_OFFSET UNITYSDK_OFFSET(0x3BC92E0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAE0E0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURST_OFFSET UNITYSDK_OFFSET(0x3BC9570)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_BURSTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAE110)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_BURSTCOUNT_OFFSET UNITYSDK_OFFSET(0x3BC9630)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDADC70)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3BC91B0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDADDB0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3BC92D0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDADD70)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCE_OFFSET UNITYSDK_OFFSET(0x3BC9290)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDADD00)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3BC9240)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDADCD0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIME_OFFSET UNITYSDK_OFFSET(0x3BC9200)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC610)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_EmissionModule_TypeDefinitionIndex = 5202;

	struct alignas(8) ParticleSystem_EmissionModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_rateOverTime()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_rateOverTime(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIME_OFFSET))(this, a1);
		}
		*/

		::System::Single get_rateOverTimeMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIMEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_rateOverTimeMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIMEMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_rateOverDistance()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_rateOverDistance(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCE_OFFSET))(this, a1);
		}
		*/

		::System::Single get_rateOverDistanceMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_rateOverDistanceMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCEMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::System::Void SetBursts(::Il2CppArray<::UnityEngine::ParticleSystem_Burst>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Burst>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURSTS_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void SetBursts_1(::Il2CppArray<::UnityEngine::ParticleSystem_Burst>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Burst>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURSTS_1_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::System::Int32 GetBursts(::Il2CppArray<::UnityEngine::ParticleSystem_Burst>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Burst>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GETBURSTS_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void SetBurst(::System::Int32 a1, ::UnityEngine::ParticleSystem_Burst a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ParticleSystem_Burst))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURST_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_Burst GetBurst(::System::Int32 a1)
		{
			return ((::UnityEngine::ParticleSystem_Burst(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GETBURST_OFFSET))(this, a1);
		}
		*/

		::System::Int32 get_burstCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_BURSTCOUNT_OFFSET))(this);
		}

		::System::Void set_burstCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_BURSTCOUNT_OFFSET))(this, a1);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_EmissionModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_EmissionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_EmissionModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_rateOverTime_Injected(::UnityEngine::ParticleSystem_EmissionModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIME_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_rateOverTime_Injected(::UnityEngine::ParticleSystem_EmissionModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIME_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_rateOverTimeMultiplier_Injected(::UnityEngine::ParticleSystem_EmissionModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_EmissionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIMEMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_rateOverTimeMultiplier_Injected(::UnityEngine::ParticleSystem_EmissionModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIMEMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_rateOverDistance_Injected(::UnityEngine::ParticleSystem_EmissionModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_rateOverDistance_Injected(::UnityEngine::ParticleSystem_EmissionModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_rateOverDistanceMultiplier_Injected(::UnityEngine::ParticleSystem_EmissionModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_EmissionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCEMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_rateOverDistanceMultiplier_Injected(::UnityEngine::ParticleSystem_EmissionModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCEMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void SetBurst_Injected(::UnityEngine::ParticleSystem_EmissionModule& a1, ::System::Int32 a2, ::UnityEngine::ParticleSystem_Burst& a3)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Int32, ::UnityEngine::ParticleSystem_Burst&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURST_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::System::Void GetBurst_Injected(::UnityEngine::ParticleSystem_EmissionModule& a1, ::System::Int32 a2, ::UnityEngine::ParticleSystem_Burst& a3)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Int32, ::UnityEngine::ParticleSystem_Burst&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GETBURST_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/

		static ::System::Int32 get_burstCount_Injected(::UnityEngine::ParticleSystem_EmissionModule& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_EmissionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_BURSTCOUNT_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_burstCount_Injected(::UnityEngine::ParticleSystem_EmissionModule& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_BURSTCOUNT_INJECTED_OFFSET))(a1, a2);
		}
	};
}
