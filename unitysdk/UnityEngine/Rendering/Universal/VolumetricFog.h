#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFog_NativeSRP.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VolumetricFog_VolumetricFogMeshType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1CB3CBF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_DRAWLOCALVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1CB3CC80)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_GENERATEFOGMESH_OFFSET UNITYSDK_OFFSET(0x1CB3ECF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_GETCUBEVERTEXINDEX_OFFSET UNITYSDK_OFFSET(0x1CB400B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CB40010)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CB3DE60)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1CB40130)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CB3D8F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CB3DFA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB408C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG___BASE_DRAWLOCALVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1CB408E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricFog_TypeDefinitionIndex = 27282;

	class VolumetricFog : public ::UnityEngine::NAPRenderPipeline0::VolumetricFog_NativeSRP
	{
	public:
		::UnityEngine::Rendering::Universal::VolumetricFog_VolumetricFogMeshType FogMeshType; // 0xF8
		::System::Boolean disableShadow; // 0xFC
		::UnityEngine::Light* MainLight; // 0x100
		::UnityEngine::Vector3 mainLightDir; // 0x108
		::UnityEngine::Vector3 boundScale; // 0x114
		::UnityEngine::Material* m_CachedMaterial; // 0x120
		::System::Int32 m_CachedPassIndex; // 0x128
		::UnityEngine::Mesh* m_CachedFogMesh; // 0x130
		::System::Boolean fogParamsNeedChange; // 0x138

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_AWAKE_OFFSET))(this);
		}

		::System::Void DrawLocalVolumetricFog(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::MaterialPropertyBlock* cachedPropertyBlock, ::System::Int32 index, ::System::Single globalFogIntensity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_DRAWLOCALVOLUMETRICFOG_OFFSET))(this, cmd, cachedPropertyBlock, index, globalFogIntensity);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void GenerateFogMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_GENERATEFOGMESH_OFFSET))(this);
		}

		::System::Int32 GetCubeVertexIndex(::System::Boolean top, ::System::Boolean front, ::System::Boolean right)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_GETCUBEVERTEXINDEX_OFFSET))(this, top, front, right);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void __base_DrawLocalVolumetricFog(::UnityEngine::Rendering::CommandBuffer* P0, ::UnityEngine::MaterialPropertyBlock* P1, ::System::Int32 P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG___BASE_DRAWLOCALVOLUMETRICFOG_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
