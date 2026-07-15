#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int VertexPickerEntry_TypeDefinitionIndex = 41624;

	struct alignas(8) VertexPickerEntry
	{
		::UnityEngine::ProBuilder::ProBuilderMesh* mesh; // 0x10
		::System::Int32 vertex; // 0x18
		::System::Single screenDistance; // 0x1C
		::UnityEngine::Vector3 worldPosition; // 0x20
	};
}
