#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"

namespace UnityEngine { class Mesh; }

#define UNITYENGINE_MESHFILTER_DONTSTRIPMESHFILTER_OFFSET UNITYSDK_OFFSET(0x1B2AF7C0)
#define UNITYENGINE_MESHFILTER_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1B2AF7F0)
#define UNITYENGINE_MESHFILTER_GET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0x1B2AF7D0)
#define UNITYENGINE_MESHFILTER_SET_MESH_OFFSET UNITYSDK_OFFSET(0x1B2AF800)
#define UNITYENGINE_MESHFILTER_SET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0x1B2AF7E0)
#define UNITYENGINE_MESHFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2AF810)

namespace UnityEngine
{
	inline static constexpr unsigned int MeshFilter_TypeDefinitionIndex = 4132;

	class MeshFilter : public ::UnityEngine::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHFILTER__CTOR_OFFSET))(this);
		}

		::System::Void DontStripMeshFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHFILTER_DONTSTRIPMESHFILTER_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_sharedMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHFILTER_GET_SHAREDMESH_OFFSET))(this);
		}

		::System::Void set_sharedMesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHFILTER_SET_SHAREDMESH_OFFSET))(this, a1);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHFILTER_GET_MESH_OFFSET))(this);
		}

		::System::Void set_mesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHFILTER_SET_MESH_OFFSET))(this, a1);
		}
	};
}
