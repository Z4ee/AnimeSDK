#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/GPUParticlesRenderer_AABBMode.h"
#include "unitysdk/UnityEngine/Renderer.h"

namespace UnityEngine { class GPUParticlesAsset; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define UNITYENGINE_GPUPARTICLESRENDERER_GET_PARTICLESASSET_OFFSET UNITYSDK_OFFSET(0x1B298390)
#define UNITYENGINE_GPUPARTICLESRENDERER_GET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0x1B298380)
#define UNITYENGINE_GPUPARTICLESRENDERER_SETLOCALAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B298330)
#define UNITYENGINE_GPUPARTICLESRENDERER_SETLOCALAABB_OFFSET UNITYSDK_OFFSET(0x1B298320)
#define UNITYENGINE_GPUPARTICLESRENDERER_SETOVERRIDEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B2983D0)
#define UNITYENGINE_GPUPARTICLESRENDERER_SETOVERRIDEWORLDAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2983C0)
#define UNITYENGINE_GPUPARTICLESRENDERER_SETOVERRIDEWORLDAABB_OFFSET UNITYSDK_OFFSET(0x1B2983B0)
#define UNITYENGINE_GPUPARTICLESRENDERER_SET_AABBMODE_OFFSET UNITYSDK_OFFSET(0x1B298310)
#define UNITYENGINE_GPUPARTICLESRENDERER_SET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B298340)
#define UNITYENGINE_GPUPARTICLESRENDERER_SET_PARTICLESASSET_OFFSET UNITYSDK_OFFSET(0x1B2983A0)
#define UNITYENGINE_GPUPARTICLESRENDERER_SET_SKINNEDMESHRENDERER_OFFSET UNITYSDK_OFFSET(0x1B298370)

namespace UnityEngine
{
	inline static constexpr unsigned int GPUParticlesRenderer_TypeDefinitionIndex = 4170;

	class GPUParticlesRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void set_aabbMode(::UnityEngine::GPUParticlesRenderer_AABBMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesRenderer_AABBMode))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_SET_AABBMODE_OFFSET))(this, a1);
		}

		::System::Void SetLocalAABB(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_SETLOCALAABB_OFFSET))(this, a1);
		}

		::System::Void set_localBounds(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_SET_LOCALBOUNDS_OFFSET))(this, a1);
		}

		::System::Void set_skinnedMeshRenderer(::UnityEngine::SkinnedMeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_SET_SKINNEDMESHRENDERER_OFFSET))(this, a1);
		}

		::UnityEngine::Mesh* get_sharedMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_GET_SHAREDMESH_OFFSET))(this);
		}

		::UnityEngine::GPUParticlesAsset* get_particlesAsset()
		{
			return ((::UnityEngine::GPUParticlesAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_GET_PARTICLESASSET_OFFSET))(this);
		}

		::System::Void set_particlesAsset(::UnityEngine::GPUParticlesAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_SET_PARTICLESASSET_OFFSET))(this, a1);
		}

		::System::Void SetOverrideWorldAABB(::System::Boolean a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_SETOVERRIDEWORLDAABB_OFFSET))(this, a1, a2);
		}

		::System::Void SetOverrideBounds(::System::Boolean a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_SETOVERRIDEBOUNDS_OFFSET))(this, a1, a2);
		}

		::System::Void SetLocalAABB_Injected(::UnityEngine::Bounds& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_SETLOCALAABB_INJECTED_OFFSET))(this, a1);
		}

		::System::Void SetOverrideWorldAABB_Injected(::System::Boolean a1, ::UnityEngine::Bounds& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_SETOVERRIDEWORLDAABB_INJECTED_OFFSET))(this, a1, a2);
		}
	};
}
