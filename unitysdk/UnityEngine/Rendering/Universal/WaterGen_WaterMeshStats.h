#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterGen_WaterMeshStats_TypeDefinitionIndex = 27849;

	struct alignas(8) WaterGen_WaterMeshStats
	{
		::System::Int32 normalLodVertexCount; // 0x10
		::System::Int32 normalLodTriangleCount; // 0x14
		::System::Int32 farLodVertexCount; // 0x18
		::System::Int32 farLodTriangleCount; // 0x1C
		::System::Int32 nearLodVertexCount; // 0x20
		::System::Int32 nearLodTriangleCount; // 0x24
		::System::Int32 totalVertexCount; // 0x28
		::System::Int32 totalTriangleCount; // 0x2C
		::System::Int32 normalLodPatchCount; // 0x30
		::System::Int32 farLodPatchCount; // 0x34
		::System::Int32 nearLodPatchCount; // 0x38
		::System::Int32 totalPatchCount; // 0x3C
		::System::Int32 normalLodNodeCount; // 0x40
		::System::Int32 farLodNodeCount; // 0x44
		::System::Int32 nearLodNodeCount; // 0x48
		::System::Int32 totalNodeCount; // 0x4C
		::Il2CppArray<::System::Int32>* branchedNodeCounts; // 0x50
	};
}
