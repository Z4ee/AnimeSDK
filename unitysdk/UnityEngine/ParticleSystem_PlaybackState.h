#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystem_PlaybackState_Collision.h"
#include "unitysdk/UnityEngine/ParticleSystem_PlaybackState_Emission.h"
#include "unitysdk/UnityEngine/ParticleSystem_PlaybackState_Force.h"
#include "unitysdk/UnityEngine/ParticleSystem_PlaybackState_Initial.h"
#include "unitysdk/UnityEngine/ParticleSystem_PlaybackState_Lights.h"
#include "unitysdk/UnityEngine/ParticleSystem_PlaybackState_Noise.h"
#include "unitysdk/UnityEngine/ParticleSystem_PlaybackState_Shape.h"
#include "unitysdk/UnityEngine/ParticleSystem_PlaybackState_Trail.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_PlaybackState_TypeDefinitionIndex = 5727;

	struct alignas(4) ParticleSystem_PlaybackState
	{
		::System::Single m_AccumulatedDt; // 0x10
		::System::Single m_StartDelay; // 0x14
		::System::Single m_PlaybackTime; // 0x18
		::System::Int32 m_RingBufferIndex; // 0x1C
		::UnityEngine::ParticleSystem_PlaybackState_Emission m_Emission; // 0x20
		::UnityEngine::ParticleSystem_PlaybackState_Initial m_Initial; // 0x38
		::UnityEngine::ParticleSystem_PlaybackState_Shape m_Shape; // 0x78
		::UnityEngine::ParticleSystem_PlaybackState_Force m_Force; // 0xD4
		::UnityEngine::ParticleSystem_PlaybackState_Collision m_Collision; // 0x114
		::UnityEngine::ParticleSystem_PlaybackState_Noise m_Noise; // 0x154
		::UnityEngine::ParticleSystem_PlaybackState_Lights m_Lights; // 0x158
		::UnityEngine::ParticleSystem_PlaybackState_Trail m_Trail; // 0x16C
	};
}
