#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemSubEmitterProperties.h"
#include "unitysdk/UnityEngine/ParticleSystemSubEmitterType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_ADDSUBEMITTER_1_OFFSET UNITYSDK_OFFSET(0x3C82C60)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_ADDSUBEMITTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F47B6D0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_ADDSUBEMITTER_OFFSET UNITYSDK_OFFSET(0x3C82C50)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTEREMITPROBABILITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F47B810)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTEREMITPROBABILITY_OFFSET UNITYSDK_OFFSET(0x3C82D00)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERPROPERTIES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F47B7F0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x3C82CF0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERSYSTEM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F47B7B0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERSYSTEM_OFFSET UNITYSDK_OFFSET(0x3C82CD0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERTYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F47B7D0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERTYPE_OFFSET UNITYSDK_OFFSET(0x3C82CE0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F47B670)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3C82C20)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_SUBEMITTERSCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F47B6B0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_SUBEMITTERSCOUNT_OFFSET UNITYSDK_OFFSET(0x3C82C40)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_REMOVESUBEMITTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F47B710)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_REMOVESUBEMITTER_OFFSET UNITYSDK_OFFSET(0x3C82C80)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTEREMITPROBABILITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F47B790)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTEREMITPROBABILITY_OFFSET UNITYSDK_OFFSET(0x3C82CC0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERPROPERTIES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F47B770)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x3C82CB0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERSYSTEM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F47B730)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERSYSTEM_OFFSET UNITYSDK_OFFSET(0x3C82C90)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERTYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F47B750)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERTYPE_OFFSET UNITYSDK_OFFSET(0x3C82CA0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F47B690)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3C82C30)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_SubEmittersModule_TypeDefinitionIndex = 5211;

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
