#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Mesh; }

#define UNITYENGINE_COMBINEINSTANCE_GET_MESH_OFFSET UNITYSDK_OFFSET(0x92E9B0)
#define UNITYENGINE_COMBINEINSTANCE_SET_MESH_OFFSET UNITYSDK_OFFSET(0x92E9C0)
#define UNITYENGINE_COMBINEINSTANCE_SET_SUBMESHINDEX_OFFSET UNITYSDK_OFFSET(0x5B6810)
#define UNITYENGINE_COMBINEINSTANCE_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x92EB00)

namespace UnityEngine
{
	inline static constexpr unsigned int CombineInstance_TypeDefinitionIndex = 5267;

	struct alignas(4) CombineInstance
	{
		::System::Int32 m_MeshInstanceID; // 0x10
		::System::Int32 m_SubMeshIndex; // 0x14
		::UnityEngine::Matrix4x4 m_Transform; // 0x18
		::UnityEngine::Vector4 m_LightmapScaleOffset; // 0x58
		::UnityEngine::Vector4 m_RealtimeLightmapScaleOffset; // 0x68

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMBINEINSTANCE_GET_MESH_OFFSET))(this);
		}

		::System::Void set_mesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMBINEINSTANCE_SET_MESH_OFFSET))(this, value);
		}

		::System::Void set_subMeshIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMBINEINSTANCE_SET_SUBMESHINDEX_OFFSET))(this, value);
		}

		::System::Void set_transform(::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMBINEINSTANCE_SET_TRANSFORM_OFFSET))(this, value);
		}
	};
}
