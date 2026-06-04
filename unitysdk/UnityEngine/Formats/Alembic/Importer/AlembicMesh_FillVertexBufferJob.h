#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPolyMeshData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPolyMeshSample.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSubmeshData.h"

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_FILLVERTEXBUFFERJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x3872760)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicMesh_FillVertexBufferJob_TypeDefinitionIndex = 41676;

	struct alignas(8) AlembicMesh_FillVertexBufferJob
	{
		::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample sample; // 0x10
		::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshData> splitData; // 0x18
		::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiSubmeshData> submeshData; // 0x28

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_FILLVERTEXBUFFERJOB_EXECUTE_OFFSET))(this);
		}
	};
}
