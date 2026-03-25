#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_SPLIT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18793EB0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_SPLIT__CTOR_OFFSET UNITYSDK_OFFSET(0x187942F0)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicMesh_Split_TypeDefinitionIndex = 35021;

	class AlembicMesh_Split : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* host; // 0x10
		::UnityEngine::Mesh* mesh; // 0x18
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> uv1; // 0x20
		::System::Boolean disposed; // 0x30
		::System::Boolean velocitiesSet; // 0x31
		::System::Boolean active; // 0x32
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> uv0; // 0x38
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> points; // 0x48
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> tangents; // 0x58
		::Unity::Collections::NativeArray_1<::UnityEngine::Color> rgba; // 0x68
		::Unity::Collections::NativeArray_1<::UnityEngine::Color> rgb; // 0x78
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> velocities; // 0x88
		::UnityEngine::Vector3 size; // 0x98
		::UnityEngine::Vector3 center; // 0xA4
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> zeroVelocities; // 0xB0
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> normals; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_SPLIT__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_SPLIT_DISPOSE_OFFSET))(this);
		}
	};
}
