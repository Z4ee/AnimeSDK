#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/ParticleSystemJobs/ParticleSystemNativeArray3.h"
#include "unitysdk/UnityEngine/ParticleSystemJobs/ParticleSystemNativeArray4.h"

namespace UnityEngine::ParticleSystemJobs
{
	inline static constexpr unsigned int ParticleSystemJobData_TypeDefinitionIndex = 7764;

	struct alignas(8) ParticleSystemJobData
	{
		::System::Int32 _count_k__BackingField; // 0x10
		::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3 _positions_k__BackingField; // 0x18
		::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3 _velocities_k__BackingField; // 0x48
		::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3 _rotations_k__BackingField; // 0x78
		::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3 _rotationalSpeeds_k__BackingField; // 0xA8
		::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3 _sizes_k__BackingField; // 0xD8
		::Unity::Collections::NativeArray_1<::UnityEngine::Color32> _startColors_k__BackingField; // 0x108
		::Unity::Collections::NativeArray_1<::System::Single> _aliveTimePercent_k__BackingField; // 0x118
		::Unity::Collections::NativeArray_1<::System::Single> _inverseStartLifetimes_k__BackingField; // 0x128
		::Unity::Collections::NativeArray_1<::System::UInt32> _randomSeeds_k__BackingField; // 0x138
		::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray4 _customData1_k__BackingField; // 0x148
		::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray4 _customData2_k__BackingField; // 0x188
	};
}
