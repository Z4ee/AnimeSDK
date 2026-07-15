#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystem_PlaybackState_Seed4.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_PlaybackState_Shape_TypeDefinitionIndex = 5732;

	struct alignas(4) ParticleSystem_PlaybackState_Shape
	{
		::UnityEngine::ParticleSystem_PlaybackState_Seed4 m_Random; // 0x10
		::System::Single m_RadiusTimer; // 0x50
		::System::Single m_RadiusTimerPrev; // 0x54
		::System::Single m_ArcTimer; // 0x58
		::System::Single m_ArcTimerPrev; // 0x5C
		::System::Single m_MeshSpawnTimer; // 0x60
		::System::Single m_MeshSpawnTimerPrev; // 0x64
		::System::Int32 m_OrderedMeshVertexIndex; // 0x68
	};
}
