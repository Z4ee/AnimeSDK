#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/GPUParticlesRenderer_AABBMode.h"
#include "unitysdk/UnityEngine/Renderer.h"

namespace UnityEngine { class GPUParticlesAsset; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define UNITYENGINE_GPUPARTICLESRENDERER_GET_PARTICLESASSET_OFFSET UNITYSDK_OFFSET(0x1A4470B0)
#define UNITYENGINE_GPUPARTICLESRENDERER_GET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0x1A4470A0)
#define UNITYENGINE_GPUPARTICLESRENDERER_SETLOCALAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A447050)
#define UNITYENGINE_GPUPARTICLESRENDERER_SETLOCALAABB_OFFSET UNITYSDK_OFFSET(0x1A447040)
#define UNITYENGINE_GPUPARTICLESRENDERER_SETOVERRIDEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A4470F0)
#define UNITYENGINE_GPUPARTICLESRENDERER_SETOVERRIDEWORLDAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4470E0)
#define UNITYENGINE_GPUPARTICLESRENDERER_SETOVERRIDEWORLDAABB_OFFSET UNITYSDK_OFFSET(0x1A4470D0)
#define UNITYENGINE_GPUPARTICLESRENDERER_SET_AABBMODE_OFFSET UNITYSDK_OFFSET(0x1A447030)
#define UNITYENGINE_GPUPARTICLESRENDERER_SET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A447060)
#define UNITYENGINE_GPUPARTICLESRENDERER_SET_PARTICLESASSET_OFFSET UNITYSDK_OFFSET(0x1A4470C0)
#define UNITYENGINE_GPUPARTICLESRENDERER_SET_SKINNEDMESHRENDERER_OFFSET UNITYSDK_OFFSET(0x1A447090)

namespace UnityEngine
{
	inline static constexpr unsigned int GPUParticlesRenderer_TypeDefinitionIndex = 3996;

	class GPUParticlesRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void set_aabbMode(::UnityEngine::GPUParticlesRenderer_AABBMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesRenderer_AABBMode))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_SET_AABBMODE_OFFSET))(this, value);
		}

		::System::Void SetLocalAABB(::UnityEngine::Bounds b)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_SETLOCALAABB_OFFSET))(this, b);
		}

		::System::Void set_localBounds(::UnityEngine::Bounds value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_SET_LOCALBOUNDS_OFFSET))(this, value);
		}

		::System::Void set_skinnedMeshRenderer(::UnityEngine::SkinnedMeshRenderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_SET_SKINNEDMESHRENDERER_OFFSET))(this, value);
		}

		::UnityEngine::Mesh* get_sharedMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_GET_SHAREDMESH_OFFSET))(this);
		}

		::UnityEngine::GPUParticlesAsset* get_particlesAsset()
		{
			return ((::UnityEngine::GPUParticlesAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_GET_PARTICLESASSET_OFFSET))(this);
		}

		::System::Void set_particlesAsset(::UnityEngine::GPUParticlesAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_SET_PARTICLESASSET_OFFSET))(this, value);
		}

		::System::Void SetOverrideWorldAABB(::System::Boolean override, ::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_SETOVERRIDEWORLDAABB_OFFSET))(this, override, bounds);
		}

		::System::Void SetOverrideBounds(::System::Boolean override, ::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_SETOVERRIDEBOUNDS_OFFSET))(this, override, bounds);
		}

		::System::Void SetLocalAABB_Injected(::UnityEngine::Bounds& b)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_SETLOCALAABB_INJECTED_OFFSET))(this, b);
		}

		::System::Void SetOverrideWorldAABB_Injected(::System::Boolean override, ::UnityEngine::Bounds& bounds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_GPUPARTICLESRENDERER_SETOVERRIDEWORLDAABB_INJECTED_OFFSET))(this, override, bounds);
		}
	};
}
