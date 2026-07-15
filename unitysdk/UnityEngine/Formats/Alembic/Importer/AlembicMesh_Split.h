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

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_SPLIT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B188470)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_SPLIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B188A10)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicMesh_Split_TypeDefinitionIndex = 42535;

	class AlembicMesh_Split : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* mesh; // 0x10
		::UnityEngine::GameObject* host; // 0x18
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> zeroVelocities; // 0x20
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> points; // 0x30
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> uv1; // 0x40
		::UnityEngine::Vector3 center; // 0x50
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> velocities; // 0x60
		::System::Boolean velocitiesSet; // 0x70
		::System::Boolean disposed; // 0x71
		::System::Boolean active; // 0x72
		::UnityEngine::Vector3 size; // 0x74
		::Unity::Collections::NativeArray_1<::UnityEngine::Color> rgba; // 0x80
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> normals; // 0x90
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> uv0; // 0xA0
		::Unity::Collections::NativeArray_1<::UnityEngine::Color> rgb; // 0xB0
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> tangents; // 0xC0

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
