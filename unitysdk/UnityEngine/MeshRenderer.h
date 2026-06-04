#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Renderer.h"

namespace UnityEngine { class Mesh; }

#define UNITYENGINE_MESHRENDERER_DONTSTRIPMESHRENDERER_OFFSET UNITYSDK_OFFSET(0x1B2AF820)
#define UNITYENGINE_MESHRENDERER_GETMATERIALENABLED_OFFSET UNITYSDK_OFFSET(0x1B2AF8C0)
#define UNITYENGINE_MESHRENDERER_GET_ADDITIONALVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1B2AF830)
#define UNITYENGINE_MESHRENDERER_GET_SUBMESHSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x1B2AF850)
#define UNITYENGINE_MESHRENDERER_SETMATERIALENABLED_OFFSET UNITYSDK_OFFSET(0x1B2AF8B0)
#define UNITYENGINE_MESHRENDERER_SETOVERRIDEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B2AF880)
#define UNITYENGINE_MESHRENDERER_SETOVERRIDEWORLDAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2AF870)
#define UNITYENGINE_MESHRENDERER_SETOVERRIDEWORLDAABB_OFFSET UNITYSDK_OFFSET(0x1B2AF860)
#define UNITYENGINE_MESHRENDERER_SET_ADDITIONALVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1B2AF840)
#define UNITYENGINE_MESHRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2AF8D0)

namespace UnityEngine
{
	inline static constexpr unsigned int MeshRenderer_TypeDefinitionIndex = 4169;

	class MeshRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void DontStripMeshRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_DONTSTRIPMESHRENDERER_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_additionalVertexStreams()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_GET_ADDITIONALVERTEXSTREAMS_OFFSET))(this);
		}

		::System::Void set_additionalVertexStreams(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_SET_ADDITIONALVERTEXSTREAMS_OFFSET))(this, a1);
		}

		::System::Int32 get_subMeshStartIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_GET_SUBMESHSTARTINDEX_OFFSET))(this);
		}

		::System::Void SetOverrideWorldAABB(::System::Boolean a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_SETOVERRIDEWORLDAABB_OFFSET))(this, a1, a2);
		}

		::System::Void SetOverrideBounds(::System::Boolean a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_SETOVERRIDEBOUNDS_OFFSET))(this, a1, a2);
		}

		::System::Void SetMaterialEnabled(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_SETMATERIALENABLED_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetMaterialEnabled(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_GETMATERIALENABLED_OFFSET))(this, a1);
		}

		::System::Void SetOverrideWorldAABB_Injected(::System::Boolean a1, ::UnityEngine::Bounds& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_SETOVERRIDEWORLDAABB_INJECTED_OFFSET))(this, a1, a2);
		}
	};
}
