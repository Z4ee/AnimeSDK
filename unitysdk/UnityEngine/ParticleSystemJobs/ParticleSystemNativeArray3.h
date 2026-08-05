#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace UnityEngine::ParticleSystemJobs
{
	inline static constexpr unsigned int ParticleSystemNativeArray3_TypeDefinitionIndex = 7762;

	struct alignas(8) ParticleSystemNativeArray3
	{
		::Unity::Collections::NativeArray_1<::System::Single> x; // 0x10
		::Unity::Collections::NativeArray_1<::System::Single> y; // 0x20
		::Unity::Collections::NativeArray_1<::System::Single> z; // 0x30
	};
}
