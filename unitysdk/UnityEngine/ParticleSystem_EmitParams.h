#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"

#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ANGULARVELOCITY3D_OFFSET UNITYSDK_OFFSET(0x3890FE0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x3890FB0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_APPLYSHAPETOPOSITION_OFFSET UNITYSDK_OFFSET(0x3890E10)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_AXISOFROTATION_OFFSET UNITYSDK_OFFSET(0x3890EE0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_PARTICLE_OFFSET UNITYSDK_OFFSET(0x3890D90)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x25350)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x3891060)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ROTATION3D_OFFSET UNITYSDK_OFFSET(0x3890F50)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x3890F20)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x3891040)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x3890E50)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTSIZE3D_OFFSET UNITYSDK_OFFSET(0x3890EA0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0x3890E70)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x25370)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x38910E0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETAXISOFROTATION_OFFSET UNITYSDK_OFFSET(0x38910C0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETMESHINDEX_OFFSET UNITYSDK_OFFSET(0x3891130)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x38910A0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x3891110)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETROTATION_OFFSET UNITYSDK_OFFSET(0x38910D0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x3891100)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETSTARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x3891120)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETSTARTSIZE_OFFSET UNITYSDK_OFFSET(0x38910F0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETVELOCITY_OFFSET UNITYSDK_OFFSET(0x38910B0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ANGULARVELOCITY3D_OFFSET UNITYSDK_OFFSET(0x3891010)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x3890FC0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_APPLYSHAPETOPOSITION_OFFSET UNITYSDK_OFFSET(0x3890E20)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_AXISOFROTATION_OFFSET UNITYSDK_OFFSET(0x3890F00)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_MESHINDEX_OFFSET UNITYSDK_OFFSET(0x3891080)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_PARTICLE_OFFSET UNITYSDK_OFFSET(0x3890DB0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x3890DF0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x3891070)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ROTATION3D_OFFSET UNITYSDK_OFFSET(0x3890F80)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x3890F30)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x3891050)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x3890E60)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTSIZE3D_OFFSET UNITYSDK_OFFSET(0x3890EC0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0x3890E80)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x3890E30)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_EmitParams_TypeDefinitionIndex = 5721;

	struct alignas(4) ParticleSystem_EmitParams
	{
		::UnityEngine::ParticleSystem_Particle m_Particle; // 0x10
		::System::Boolean m_PositionSet; // 0xA4
		::System::Boolean m_VelocitySet; // 0xA5
		::System::Boolean m_AxisOfRotationSet; // 0xA6
		::System::Boolean m_RotationSet; // 0xA7
		::System::Boolean m_AngularVelocitySet; // 0xA8
		::System::Boolean m_StartSizeSet; // 0xA9
		::System::Boolean m_StartColorSet; // 0xAA
		::System::Boolean m_RandomSeedSet; // 0xAB
		::System::Boolean m_StartLifetimeSet; // 0xAC
		::System::Boolean m_MeshIndexSet; // 0xAD
		::System::Boolean m_ApplyShapeToPosition; // 0xAE

		::UnityEngine::ParticleSystem_Particle get_particle()
		{
			return ((::UnityEngine::ParticleSystem_Particle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_PARTICLE_OFFSET))(this);
		}

		::System::Void set_particle(::UnityEngine::ParticleSystem_Particle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_PARTICLE_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_POSITION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_POSITION_OFFSET))(this, a1);
		}
		*/

		::System::Boolean get_applyShapeToPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_APPLYSHAPETOPOSITION_OFFSET))(this);
		}

		::System::Void set_applyShapeToPosition(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_APPLYSHAPETOPOSITION_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_VELOCITY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_velocity(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_VELOCITY_OFFSET))(this, a1);
		}
		*/

		::System::Single get_startLifetime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTLIFETIME_OFFSET))(this);
		}

		::System::Void set_startLifetime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTLIFETIME_OFFSET))(this, a1);
		}

		::System::Single get_startSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTSIZE_OFFSET))(this);
		}

		::System::Void set_startSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTSIZE_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Vector3 get_startSize3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTSIZE3D_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startSize3D(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTSIZE3D_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Vector3 get_axisOfRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_AXISOFROTATION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_axisOfRotation(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_AXISOFROTATION_OFFSET))(this, a1);
		}
		*/

		::System::Single get_rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ROTATION_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Vector3 get_rotation3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ROTATION3D_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_rotation3D(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ROTATION3D_OFFSET))(this, a1);
		}
		*/

		::System::Single get_angularVelocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_angularVelocity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ANGULARVELOCITY_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Vector3 get_angularVelocity3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ANGULARVELOCITY3D_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_angularVelocity3D(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ANGULARVELOCITY3D_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Color32 get_startColor()
		{
			return ((::UnityEngine::Color32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTCOLOR_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startColor(::UnityEngine::Color32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTCOLOR_OFFSET))(this, a1);
		}
		*/

		::System::UInt32 get_randomSeed()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_RANDOMSEED_OFFSET))(this);
		}

		::System::Void set_randomSeed(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_RANDOMSEED_OFFSET))(this, a1);
		}

		::System::Void set_meshIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_MESHINDEX_OFFSET))(this, a1);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETPOSITION_OFFSET))(this);
		}

		::System::Void ResetVelocity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETVELOCITY_OFFSET))(this);
		}

		::System::Void ResetAxisOfRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETAXISOFROTATION_OFFSET))(this);
		}

		::System::Void ResetRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETROTATION_OFFSET))(this);
		}

		::System::Void ResetAngularVelocity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void ResetStartSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETSTARTSIZE_OFFSET))(this);
		}

		::System::Void ResetStartColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETSTARTCOLOR_OFFSET))(this);
		}

		::System::Void ResetRandomSeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETRANDOMSEED_OFFSET))(this);
		}

		::System::Void ResetStartLifetime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETSTARTLIFETIME_OFFSET))(this);
		}

		::System::Void ResetMeshIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETMESHINDEX_OFFSET))(this);
		}
	};
}
