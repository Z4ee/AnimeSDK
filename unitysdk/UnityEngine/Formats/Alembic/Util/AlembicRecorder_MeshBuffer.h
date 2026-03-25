#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeObject.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeSubmeshData.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedList_1; }
namespace UnityEngine::Formats::Alembic::Util { class AlembicRecorderSettings; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER_CAPTURE_1_OFFSET UNITYSDK_OFFSET(0x187AC890)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER_CAPTURE_2_OFFSET UNITYSDK_OFFSET(0x187AC940)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x187AA970)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER_CLEAR_OFFSET UNITYSDK_OFFSET(0x187AC150)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x187ACC80)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER_SETUPSUBMESHES_OFFSET UNITYSDK_OFFSET(0x187AC6F0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER_WRITESAMPLE_OFFSET UNITYSDK_OFFSET(0x187AC9E0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x187ACFF0)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_MeshBuffer_TypeDefinitionIndex = 34927;

	class AlembicRecorder_MeshBuffer : public ::System::Object
	{
	public:
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Color>* colors; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::Int32>*>* submeshIndices; // 0x18
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>* points; // 0x20
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector2>* uv1; // 0x28
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>* normals; // 0x30
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector2>* uv0; // 0x38
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Formats::Alembic::Sdk::aeSubmeshData>* submeshData; // 0x40
		::System::Boolean visibility; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER_CLEAR_OFFSET))(this);
		}

		::System::Void SetupSubmeshes(::UnityEngine::Formats::Alembic::Sdk::aeObject abc, ::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aeObject, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER_SETUPSUBMESHES_OFFSET))(this, abc, mesh);
		}

		::System::Void Capture(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 world2local, ::System::Boolean captureNormals, ::System::Boolean captureUV0, ::System::Boolean captureUV1, ::System::Boolean captureColors)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER_CAPTURE_OFFSET))(this, mesh, world2local, captureNormals, captureUV0, captureUV1, captureColors);
		}

		::System::Void Capture_1(::UnityEngine::Mesh* mesh, ::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER_CAPTURE_1_OFFSET))(this, mesh, settings);
		}

		::System::Void Capture_2(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 world2local, ::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER_CAPTURE_2_OFFSET))(this, mesh, world2local, settings);
		}

		::System::Void WriteSample(::UnityEngine::Formats::Alembic::Sdk::aeObject abc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aeObject))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER_WRITESAMPLE_OFFSET))(this, abc);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER_DISPOSE_OFFSET))(this);
		}
	};
}
