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

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1CE48A60)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CE49910)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER_GENERATEREMAPINDICES_OFFSET UNITYSDK_OFFSET(0x1CE47A90)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE49960)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_ClothBuffer_TypeDefinitionIndex = 44627;

	class AlembicRecorder_ClothBuffer : public ::System::Object
	{
	public:
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>* normals; // 0x10
		::UnityEngine::Transform* rootBone; // 0x18
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::Int32>* remap; // 0x20
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>* vertices; // 0x28
		::System::Int32 numRemappedVertices; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void GenerateRemapIndices(::UnityEngine::Mesh* a1, ::UnityEngine::Formats::Alembic::Util::AlembicRecorder_MeshBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Formats::Alembic::Util::AlembicRecorder_MeshBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER_GENERATEREMAPINDICES_OFFSET))(this, a1, a2);
		}

		::System::Void Capture(::UnityEngine::Mesh* a1, ::UnityEngine::Cloth* a2, ::UnityEngine::Formats::Alembic::Util::AlembicRecorder_MeshBuffer* a3, ::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Cloth*, ::UnityEngine::Formats::Alembic::Util::AlembicRecorder_MeshBuffer*, ::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER_CAPTURE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CLOTHBUFFER_DISPOSE_OFFSET))(this);
		}
	};
}
