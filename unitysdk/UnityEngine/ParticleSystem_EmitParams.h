#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"

#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ANGULARVELOCITY3D_OFFSET UNITYSDK_OFFSET(0x22F1AC0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x22F1A90)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_APPLYSHAPETOPOSITION_OFFSET UNITYSDK_OFFSET(0x22F18F0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_AXISOFROTATION_OFFSET UNITYSDK_OFFSET(0x22F19C0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_PARTICLE_OFFSET UNITYSDK_OFFSET(0x22F1870)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x245D0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x22F1B40)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ROTATION3D_OFFSET UNITYSDK_OFFSET(0x22F1A30)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x22F1A00)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x22F1B20)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x22F1930)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTSIZE3D_OFFSET UNITYSDK_OFFSET(0x22F1980)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0x22F1950)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x245F0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x22F1BC0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETAXISOFROTATION_OFFSET UNITYSDK_OFFSET(0x22F1BA0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETMESHINDEX_OFFSET UNITYSDK_OFFSET(0x22F1C10)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x22F1B80)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x22F1BF0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETROTATION_OFFSET UNITYSDK_OFFSET(0x22F1BB0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x22F1BE0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETSTARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x22F1C00)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETSTARTSIZE_OFFSET UNITYSDK_OFFSET(0x22F1BD0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETVELOCITY_OFFSET UNITYSDK_OFFSET(0x22F1B90)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ANGULARVELOCITY3D_OFFSET UNITYSDK_OFFSET(0x22F1AF0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x22F1AA0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_APPLYSHAPETOPOSITION_OFFSET UNITYSDK_OFFSET(0x22F1900)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_AXISOFROTATION_OFFSET UNITYSDK_OFFSET(0x22F19E0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_MESHINDEX_OFFSET UNITYSDK_OFFSET(0x22F1B60)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_PARTICLE_OFFSET UNITYSDK_OFFSET(0x22F1890)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x22F18D0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x22F1B50)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ROTATION3D_OFFSET UNITYSDK_OFFSET(0x22F1A60)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x22F1A10)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x22F1B30)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x22F1940)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTSIZE3D_OFFSET UNITYSDK_OFFSET(0x22F19A0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0x22F1960)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x22F1910)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_EmitParams_TypeDefinitionIndex = 5444;

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

		::System::Void set_particle(::UnityEngine::ParticleSystem_Particle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_PARTICLE_OFFSET))(this, value);
		}

		/*
		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_POSITION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_POSITION_OFFSET))(this, value);
		}
		*/

		::System::Boolean get_applyShapeToPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_APPLYSHAPETOPOSITION_OFFSET))(this);
		}

		::System::Void set_applyShapeToPosition(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_APPLYSHAPETOPOSITION_OFFSET))(this, value);
		}

		/*
		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_VELOCITY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_velocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_VELOCITY_OFFSET))(this, value);
		}
		*/

		::System::Single get_startLifetime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTLIFETIME_OFFSET))(this);
		}

		::System::Void set_startLifetime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTLIFETIME_OFFSET))(this, value);
		}

		::System::Single get_startSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTSIZE_OFFSET))(this);
		}

		::System::Void set_startSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTSIZE_OFFSET))(this, value);
		}

		/*
		::UnityEngine::Vector3 get_startSize3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTSIZE3D_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startSize3D(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTSIZE3D_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Vector3 get_axisOfRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_AXISOFROTATION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_axisOfRotation(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_AXISOFROTATION_OFFSET))(this, value);
		}
		*/

		::System::Single get_rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ROTATION_OFFSET))(this, value);
		}

		/*
		::UnityEngine::Vector3 get_rotation3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ROTATION3D_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_rotation3D(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ROTATION3D_OFFSET))(this, value);
		}
		*/

		::System::Single get_angularVelocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_angularVelocity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ANGULARVELOCITY_OFFSET))(this, value);
		}

		/*
		::UnityEngine::Vector3 get_angularVelocity3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ANGULARVELOCITY3D_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_angularVelocity3D(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ANGULARVELOCITY3D_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Color32 get_startColor()
		{
			return ((::UnityEngine::Color32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTCOLOR_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startColor(::UnityEngine::Color32 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTCOLOR_OFFSET))(this, value);
		}
		*/

		::System::UInt32 get_randomSeed()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_RANDOMSEED_OFFSET))(this);
		}

		::System::Void set_randomSeed(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_RANDOMSEED_OFFSET))(this, value);
		}

		::System::Void set_meshIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_MESHINDEX_OFFSET))(this, value);
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
