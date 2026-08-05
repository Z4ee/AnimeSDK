#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_EmitParams_TypeDefinitionIndex = 7710;

	struct alignas(4) ParticleSystem_EmitParams
	{
		::UnityEngine::ParticleSystem_Particle m_Particle; // 0x10
		::System::Boolean m_PositionSet; // 0x98
		::System::Boolean m_VelocitySet; // 0x99
		::System::Boolean m_AxisOfRotationSet; // 0x9A
		::System::Boolean m_RotationSet; // 0x9B
		::System::Boolean m_AngularVelocitySet; // 0x9C
		::System::Boolean m_StartSizeSet; // 0x9D
		::System::Boolean m_StartColorSet; // 0x9E
		::System::Boolean m_TextOutlineColorSet; // 0x9F
		::System::Boolean m_RandomSeedSet; // 0xA0
		::System::Boolean m_StartLifetimeSet; // 0xA1
		::System::Boolean m_MeshIndexSet; // 0xA2
		::System::Boolean m_ApplyShapeToPosition; // 0xA3
	};
}
