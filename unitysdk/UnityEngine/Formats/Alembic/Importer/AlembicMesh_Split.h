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

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_SPLIT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B031F90)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_SPLIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B032520)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicMesh_Split_TypeDefinitionIndex = 41675;

	class AlembicMesh_Split : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* host; // 0x10
		::UnityEngine::Mesh* mesh; // 0x18
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> zeroVelocities; // 0x20
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> velocities; // 0x30
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> uv1; // 0x40
		::UnityEngine::Vector3 center; // 0x50
		::UnityEngine::Vector3 size; // 0x5C
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> normals; // 0x68
		::System::Boolean disposed; // 0x78
		::System::Boolean active; // 0x79
		::System::Boolean velocitiesSet; // 0x7A
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> uv0; // 0x80
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> tangents; // 0x90
		::Unity::Collections::NativeArray_1<::UnityEngine::Color> rgba; // 0xA0
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> points; // 0xB0
		::Unity::Collections::NativeArray_1<::UnityEngine::Color> rgb; // 0xC0

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
