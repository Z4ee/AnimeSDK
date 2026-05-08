#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Renderer.h"

namespace UnityEngine { class Mesh; }

#define UNITYENGINE_PBDSKINNEDMESHRENDERER_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1C4B1DC0)
#define UNITYENGINE_PBDSKINNEDMESHRENDERER_SET_MESH_OFFSET UNITYSDK_OFFSET(0x1C4B1DD0)
#define UNITYENGINE_PBDSKINNEDMESHRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B1DE0)

namespace UnityEngine
{
	inline static constexpr unsigned int PBDSkinnedMeshRenderer_TypeDefinitionIndex = 24853;

	class PBDSkinnedMeshRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDSKINNEDMESHRENDERER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDSKINNEDMESHRENDERER_GET_MESH_OFFSET))(this);
		}

		::System::Void set_mesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDSKINNEDMESHRENDERER_SET_MESH_OFFSET))(this, value);
		}
	};
}
