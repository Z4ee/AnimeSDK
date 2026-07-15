#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemJobs/NativeParticleData_Array3.h"
#include "unitysdk/UnityEngine/ParticleSystemJobs/NativeParticleData_Array4.h"

namespace UnityEngine::ParticleSystemJobs
{
	inline static constexpr unsigned int NativeParticleData_TypeDefinitionIndex = 5801;

	struct alignas(8) NativeParticleData
	{
		::System::Int32 count; // 0x10
		::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 positions; // 0x18
		::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 velocities; // 0x30
		::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 rotations; // 0x48
		::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 rotationalSpeeds; // 0x60
		::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 sizes; // 0x78
		::System::Void* startColors; // 0x90
		::System::Void* aliveTimePercent; // 0x98
		::System::Void* inverseStartLifetimes; // 0xA0
		::System::Void* randomSeeds; // 0xA8
		::UnityEngine::ParticleSystemJobs::NativeParticleData_Array4 customData1; // 0xB0
		::UnityEngine::ParticleSystemJobs::NativeParticleData_Array4 customData2; // 0xD0
	};
}
