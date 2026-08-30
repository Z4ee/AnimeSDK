#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemSubEmitterProperties.h"
#include "unitysdk/UnityEngine/ParticleSystemSubEmitterType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_ADDSUBEMITTER_1_OFFSET UNITYSDK_OFFSET(0x3C8F2E0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_ADDSUBEMITTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBAD30)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_ADDSUBEMITTER_OFFSET UNITYSDK_OFFSET(0x3C8F2D0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTEREMITPROBABILITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBAE70)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTEREMITPROBABILITY_OFFSET UNITYSDK_OFFSET(0x3C8F380)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERPROPERTIES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBAE50)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x3C8F370)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERSYSTEM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBAE10)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERSYSTEM_OFFSET UNITYSDK_OFFSET(0x3C8F350)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERTYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBAE30)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERTYPE_OFFSET UNITYSDK_OFFSET(0x3C8F360)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBACD0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3C8F2A0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_SUBEMITTERSCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBAD10)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_SUBEMITTERSCOUNT_OFFSET UNITYSDK_OFFSET(0x3C8F2C0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_REMOVESUBEMITTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBAD70)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_REMOVESUBEMITTER_OFFSET UNITYSDK_OFFSET(0x3C8F300)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTEREMITPROBABILITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBADF0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTEREMITPROBABILITY_OFFSET UNITYSDK_OFFSET(0x3C8F340)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERPROPERTIES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBADD0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x3C8F330)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERSYSTEM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBAD90)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERSYSTEM_OFFSET UNITYSDK_OFFSET(0x3C8F310)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERTYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBADB0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERTYPE_OFFSET UNITYSDK_OFFSET(0x3C8F320)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBACF0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3C8F2B0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x16050)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_SubEmittersModule_TypeDefinitionIndex = 5204;

	struct alignas(8) ParticleSystem_SubEmittersModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		::System::Int32 get_subEmittersCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_SUBEMITTERSCOUNT_OFFSET))(this);
		}

		::System::Void AddSubEmitter(::UnityEngine::ParticleSystem* a1, ::UnityEngine::ParticleSystemSubEmitterType a2, ::UnityEngine::ParticleSystemSubEmitterProperties a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystemSubEmitterType, ::UnityEngine::ParticleSystemSubEmitterProperties, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_ADDSUBEMITTER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AddSubEmitter_1(::UnityEngine::ParticleSystem* a1, ::UnityEngine::ParticleSystemSubEmitterType a2, ::UnityEngine::ParticleSystemSubEmitterProperties a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystemSubEmitterType, ::UnityEngine::ParticleSystemSubEmitterProperties))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_ADDSUBEMITTER_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveSubEmitter(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_REMOVESUBEMITTER_OFFSET))(this, a1);
		}

		::System::Void SetSubEmitterSystem(::System::Int32 a1, ::UnityEngine::ParticleSystem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERSYSTEM_OFFSET))(this, a1, a2);
		}

		::System::Void SetSubEmitterType(::System::Int32 a1, ::UnityEngine::ParticleSystemSubEmitterType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ParticleSystemSubEmitterType))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void SetSubEmitterProperties(::System::Int32 a1, ::UnityEngine::ParticleSystemSubEmitterProperties a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ParticleSystemSubEmitterProperties))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERPROPERTIES_OFFSET))(this, a1, a2);
		}

		::System::Void SetSubEmitterEmitProbability(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTEREMITPROBABILITY_OFFSET))(this, a1, a2);
		}

		::UnityEngine::ParticleSystem* GetSubEmitterSystem(::System::Int32 a1)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERSYSTEM_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemSubEmitterType GetSubEmitterType(::System::Int32 a1)
		{
			return ((::UnityEngine::ParticleSystemSubEmitterType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERTYPE_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemSubEmitterProperties GetSubEmitterProperties(::System::Int32 a1)
		{
			return ((::UnityEngine::ParticleSystemSubEmitterProperties(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERPROPERTIES_OFFSET))(this, a1);
		}

		::System::Single GetSubEmitterEmitProbability(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTEREMITPROBABILITY_OFFSET))(this, a1);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_SubEmittersModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Int32 get_subEmittersCount_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_SubEmittersModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_SUBEMITTERSCOUNT_INJECTED_OFFSET))(a1);
		}

		static ::System::Void AddSubEmitter_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& a1, ::UnityEngine::ParticleSystem* a2, ::UnityEngine::ParticleSystemSubEmitterType a3, ::UnityEngine::ParticleSystemSubEmitterProperties a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystemSubEmitterType, ::UnityEngine::ParticleSystemSubEmitterProperties, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_ADDSUBEMITTER_INJECTED_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void RemoveSubEmitter_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_REMOVESUBEMITTER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void SetSubEmitterSystem_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& a1, ::System::Int32 a2, ::UnityEngine::ParticleSystem* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERSYSTEM_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetSubEmitterType_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& a1, ::System::Int32 a2, ::UnityEngine::ParticleSystemSubEmitterType a3)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32, ::UnityEngine::ParticleSystemSubEmitterType))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERTYPE_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetSubEmitterProperties_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& a1, ::System::Int32 a2, ::UnityEngine::ParticleSystemSubEmitterProperties a3)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32, ::UnityEngine::ParticleSystemSubEmitterProperties))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERPROPERTIES_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetSubEmitterEmitProbability_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTEREMITPROBABILITY_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ParticleSystem* GetSubEmitterSystem_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERSYSTEM_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ParticleSystemSubEmitterType GetSubEmitterType_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::ParticleSystemSubEmitterType(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERTYPE_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ParticleSystemSubEmitterProperties GetSubEmitterProperties_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::ParticleSystemSubEmitterProperties(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERPROPERTIES_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single GetSubEmitterEmitProbability_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTEREMITPROBABILITY_INJECTED_OFFSET))(a1, a2);
		}
	};
}
