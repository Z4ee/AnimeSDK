#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Cloth; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedList_1; }
namespace UnityEngine::Formats::Alembic::Util { class AlembicRecorderSettings; }
namespace UnityEngine::Formats::Alembic::Util { class AlembicRecorder_MeshBuffer; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x187AB470)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x187AC2F0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER_GENERATEREMAPINDICES_OFFSET UNITYSDK_OFFSET(0x187AA690)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x187AC430)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_ClothBuffer_TypeDefinitionIndex = 34931;

	class AlembicRecorder_ClothBuffer : public ::System::Object
	{
	public:
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>* normals; // 0x10
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::Int32>* remap; // 0x18
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>* vertices; // 0x20
		::UnityEngine::Transform* rootBone; // 0x28
		::System::Int32 numRemappedVertices; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void GenerateRemapIndices(::UnityEngine::Mesh* mesh, ::UnityEngine::Formats::Alembic::Util::AlembicRecorder_MeshBuffer* mbuf)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Formats::Alembic::Util::AlembicRecorder_MeshBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER_GENERATEREMAPINDICES_OFFSET))(this, mesh, mbuf);
		}

		::System::Void Capture(::UnityEngine::Mesh* mesh, ::UnityEngine::Cloth* cloth, ::UnityEngine::Formats::Alembic::Util::AlembicRecorder_MeshBuffer* mbuf, ::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Cloth*, ::UnityEngine::Formats::Alembic::Util::AlembicRecorder_MeshBuffer*, ::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER_CAPTURE_OFFSET))(this, mesh, cloth, mbuf, settings);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER_DISPOSE_OFFSET))(this);
		}
	};
}
