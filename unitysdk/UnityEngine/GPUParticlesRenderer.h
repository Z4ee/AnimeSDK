#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/GPUParticlesRenderer_AABBMode.h"
#include "unitysdk/UnityEngine/Renderer.h"

namespace UnityEngine { class GPUParticlesAsset; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_GPUPARTICLESRENDERER_GET_PARTICLESASSET_OFFSET UNITYSDK_OFFSET(0x18A0D600)
#define UNITYENGINE_GPUPARTICLESRENDERER_GET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0x18A0D5F0)
#define UNITYENGINE_GPUPARTICLESRENDERER_SETLOCALAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A0D5B0)
#define UNITYENGINE_GPUPARTICLESRENDERER_SETLOCALAABB_OFFSET UNITYSDK_OFFSET(0x18A0D5A0)
#define UNITYENGINE_GPUPARTICLESRENDERER_SETOVERRIDEBOUNDS_OFFSET UNITYSDK_OFFSET(0x18A0D640)
#define UNITYENGINE_GPUPARTICLESRENDERER_SETOVERRIDEWORLDAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A0D630)
#define UNITYENGINE_GPUPARTICLESRENDERER_SETOVERRIDEWORLDAABB_OFFSET UNITYSDK_OFFSET(0x18A0D620)
#define UNITYENGINE_GPUPARTICLESRENDERER_SET_AABBMODE_OFFSET UNITYSDK_OFFSET(0x18A0D590)
#define UNITYENGINE_GPUPARTICLESRENDERER_SET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x18A0D5C0)
#define UNITYENGINE_GPUPARTICLESRENDERER_SET_PARTICLESASSET_OFFSET UNITYSDK_OFFSET(0x18A0D610)

namespace UnityEngine
{
	inline static constexpr unsigned int GPUParticlesRenderer_TypeDefinitionIndex = 3994;

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
