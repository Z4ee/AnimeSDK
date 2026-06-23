#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NAPBatch/BatchItemValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::NAPBatch
{
	inline static constexpr unsigned int MaterialBatchJobItem_TypeDefinitionIndex = 6129;

	struct alignas(8) MaterialBatchJobItem
	{
		::System::Int32 RendererInstanceID; // 0x10
		::System::Int32 MaterialInstanceID; // 0x14
		::System::IntPtr MaterialPropertyBlock; // 0x18
		::System::Int32 MaterialPropertyID; // 0x20
		::UnityEngine::Vector4 FloatValue; // 0x24
		::System::Boolean ForceSet; // 0x34
		::UnityEngine::NAPBatch::BatchItemValueType ValueType; // 0x38
	};
}
