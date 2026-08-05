#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NAPBatch/BatchItemValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::NAPBatch
{
	inline static constexpr unsigned int MaterialBatchThreadItem_TypeDefinitionIndex = 6132;

	struct alignas(8) MaterialBatchThreadItem
	{
		::System::IntPtr Renderer; // 0x10
		::System::IntPtr Material; // 0x18
		::System::IntPtr MaterialPropertyBlock; // 0x20
		::System::Int32 MaterialPropertyID; // 0x28
		::UnityEngine::Vector4 FloatValue; // 0x2C
		::System::Boolean ForceSet; // 0x3C
		::UnityEngine::NAPBatch::BatchItemValueType ValueType; // 0x40
	};
}
