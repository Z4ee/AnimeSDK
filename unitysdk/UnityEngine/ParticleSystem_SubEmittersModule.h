#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemSubEmitterProperties.h"
#include "unitysdk/UnityEngine/ParticleSystemSubEmitterType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_ADDSUBEMITTER_1_OFFSET UNITYSDK_OFFSET(0x22F5080)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_ADDSUBEMITTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1740)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_ADDSUBEMITTER_OFFSET UNITYSDK_OFFSET(0x22F5070)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTEREMITPROBABILITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1880)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTEREMITPROBABILITY_OFFSET UNITYSDK_OFFSET(0x22F5120)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERPROPERTIES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1860)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x22F5110)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERSYSTEM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1820)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERSYSTEM_OFFSET UNITYSDK_OFFSET(0x22F50F0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERTYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1840)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERTYPE_OFFSET UNITYSDK_OFFSET(0x22F5100)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D16E0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x22F5040)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_SUBEMITTERSCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1720)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_SUBEMITTERSCOUNT_OFFSET UNITYSDK_OFFSET(0x22F5060)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_REMOVESUBEMITTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1780)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_REMOVESUBEMITTER_OFFSET UNITYSDK_OFFSET(0x22F50A0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTEREMITPROBABILITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1800)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTEREMITPROBABILITY_OFFSET UNITYSDK_OFFSET(0x22F50E0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERPROPERTIES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D17E0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x22F50D0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERSYSTEM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D17A0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERSYSTEM_OFFSET UNITYSDK_OFFSET(0x22F50B0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERTYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D17C0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERTYPE_OFFSET UNITYSDK_OFFSET(0x22F50C0)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1700)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x22F5050)
#define UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_SubEmittersModule_TypeDefinitionIndex = 5438;

	struct alignas(8) ParticleSystem_SubEmittersModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Int32 get_subEmittersCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_SUBEMITTERSCOUNT_OFFSET))(this);
		}

		::System::Void AddSubEmitter(::UnityEngine::ParticleSystem* subEmitter, ::UnityEngine::ParticleSystemSubEmitterType type, ::UnityEngine::ParticleSystemSubEmitterProperties properties, ::System::Single emitProbability)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystemSubEmitterType, ::UnityEngine::ParticleSystemSubEmitterProperties, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_ADDSUBEMITTER_OFFSET))(this, subEmitter, type, properties, emitProbability);
		}

		::System::Void AddSubEmitter_1(::UnityEngine::ParticleSystem* subEmitter, ::UnityEngine::ParticleSystemSubEmitterType type, ::UnityEngine::ParticleSystemSubEmitterProperties properties)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystemSubEmitterType, ::UnityEngine::ParticleSystemSubEmitterProperties))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_ADDSUBEMITTER_1_OFFSET))(this, subEmitter, type, properties);
		}

		::System::Void RemoveSubEmitter(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_REMOVESUBEMITTER_OFFSET))(this, index);
		}

		::System::Void SetSubEmitterSystem(::System::Int32 index, ::UnityEngine::ParticleSystem* subEmitter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERSYSTEM_OFFSET))(this, index, subEmitter);
		}

		::System::Void SetSubEmitterType(::System::Int32 index, ::UnityEngine::ParticleSystemSubEmitterType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ParticleSystemSubEmitterType))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERTYPE_OFFSET))(this, index, type);
		}

		::System::Void SetSubEmitterProperties(::System::Int32 index, ::UnityEngine::ParticleSystemSubEmitterProperties properties)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ParticleSystemSubEmitterProperties))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERPROPERTIES_OFFSET))(this, index, properties);
		}

		::System::Void SetSubEmitterEmitProbability(::System::Int32 index, ::System::Single emitProbability)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTEREMITPROBABILITY_OFFSET))(this, index, emitProbability);
		}

		::UnityEngine::ParticleSystem* GetSubEmitterSystem(::System::Int32 index)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERSYSTEM_OFFSET))(this, index);
		}

		::UnityEngine::ParticleSystemSubEmitterType GetSubEmitterType(::System::Int32 index)
		{
			return ((::UnityEngine::ParticleSystemSubEmitterType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERTYPE_OFFSET))(this, index);
		}

		::UnityEngine::ParticleSystemSubEmitterProperties GetSubEmitterProperties(::System::Int32 index)
		{
			return ((::UnityEngine::ParticleSystemSubEmitterProperties(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERPROPERTIES_OFFSET))(this, index);
		}

		::System::Single GetSubEmitterEmitProbability(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTEREMITPROBABILITY_OFFSET))(this, index);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_SubEmittersModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Int32 get_subEmittersCount_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_SubEmittersModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GET_SUBEMITTERSCOUNT_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void AddSubEmitter_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& _unity_self, ::UnityEngine::ParticleSystem* subEmitter, ::UnityEngine::ParticleSystemSubEmitterType type, ::UnityEngine::ParticleSystemSubEmitterProperties properties, ::System::Single emitProbability)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystemSubEmitterType, ::UnityEngine::ParticleSystemSubEmitterProperties, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_ADDSUBEMITTER_INJECTED_OFFSET))(_unity_self, subEmitter, type, properties, emitProbability);
		}

		static ::System::Void RemoveSubEmitter_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& _unity_self, ::System::Int32 index)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_REMOVESUBEMITTER_INJECTED_OFFSET))(_unity_self, index);
		}

		static ::System::Void SetSubEmitterSystem_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& _unity_self, ::System::Int32 index, ::UnityEngine::ParticleSystem* subEmitter)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERSYSTEM_INJECTED_OFFSET))(_unity_self, index, subEmitter);
		}

		static ::System::Void SetSubEmitterType_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& _unity_self, ::System::Int32 index, ::UnityEngine::ParticleSystemSubEmitterType type)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32, ::UnityEngine::ParticleSystemSubEmitterType))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERTYPE_INJECTED_OFFSET))(_unity_self, index, type);
		}

		static ::System::Void SetSubEmitterProperties_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& _unity_self, ::System::Int32 index, ::UnityEngine::ParticleSystemSubEmitterProperties properties)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32, ::UnityEngine::ParticleSystemSubEmitterProperties))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTERPROPERTIES_INJECTED_OFFSET))(_unity_self, index, properties);
		}

		static ::System::Void SetSubEmitterEmitProbability_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& _unity_self, ::System::Int32 index, ::System::Single emitProbability)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_SETSUBEMITTEREMITPROBABILITY_INJECTED_OFFSET))(_unity_self, index, emitProbability);
		}

		static ::UnityEngine::ParticleSystem* GetSubEmitterSystem_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& _unity_self, ::System::Int32 index)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERSYSTEM_INJECTED_OFFSET))(_unity_self, index);
		}

		static ::UnityEngine::ParticleSystemSubEmitterType GetSubEmitterType_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& _unity_self, ::System::Int32 index)
		{
			return ((::UnityEngine::ParticleSystemSubEmitterType(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERTYPE_INJECTED_OFFSET))(_unity_self, index);
		}

		static ::UnityEngine::ParticleSystemSubEmitterProperties GetSubEmitterProperties_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& _unity_self, ::System::Int32 index)
		{
			return ((::UnityEngine::ParticleSystemSubEmitterProperties(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTERPROPERTIES_INJECTED_OFFSET))(_unity_self, index);
		}

		static ::System::Single GetSubEmitterEmitProbability_Injected(::UnityEngine::ParticleSystem_SubEmittersModule& _unity_self, ::System::Int32 index)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_SubEmittersModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SUBEMITTERSMODULE_GETSUBEMITTEREMITPROBABILITY_INJECTED_OFFSET))(_unity_self, index);
		}
	};
}
