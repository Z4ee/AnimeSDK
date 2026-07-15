#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiPolyMeshData_TypeDefinitionIndex = 42491;

	struct alignas(8) aiPolyMeshData
	{
		::System::Void* positions; // 0x10
		::System::Void* velocities; // 0x18
		::System::Void* normals; // 0x20
		::System::Void* tangents; // 0x28
		::System::Void* uv0; // 0x30
		::System::Void* uv1; // 0x38
		::System::Void* rgba; // 0x40
		::System::Void* rgb; // 0x48
		::System::IntPtr indices; // 0x50
		::System::Int32 vertexCount; // 0x58
		::System::Int32 indexCount; // 0x5C
		::UnityEngine::Vector3 center; // 0x60
		::UnityEngine::Vector3 extents; // 0x6C
	};
}
