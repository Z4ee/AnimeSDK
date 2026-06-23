#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class RTXGI_RadixSortBuffers; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_HISTORYBUFFER_RELEASEWHENCHANGED_OFFSET UNITYSDK_OFFSET(0x1D731220)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_HISTORYBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D730D10)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1D731820)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_HISTORYBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7324C0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXGI_HistoryBuffer_TypeDefinitionIndex = 5799;

	class RTXGI_HistoryBuffer : public ::System::Object
	{
	public:
		::UnityEngine::RenderTextureFormat BufferFormat; // 0x10
		::System::Boolean bEnableForwardGBuffer; // 0x14
		::UnityEngine::RenderTexture* TemporalReservoir; // 0x18
		::UnityEngine::RenderTexture* HistoryResult; // 0x20
		::UnityEngine::RenderTexture* HistorySpecResult; // 0x28
		::UnityEngine::RenderTexture* LastSceneDepth; // 0x30
		::UnityEngine::RenderTexture* LastSceneNormal; // 0x38
		::UnityEngine::RenderTexture* LastSceneForwardDepth; // 0x40
		::UnityEngine::RenderTexture* LastSceneForwardNormal; // 0x48
		::UnityEngine::RenderTexture* IrradianceVolume; // 0x50
		::UnityEngine::RenderTexture* Momentum; // 0x58
		::UnityEngine::ComputeBuffer* RayAllocatorBuffer; // 0x60
		::UnityEngine::ComputeBuffer* RayPixelIdBuffer; // 0x68
		::UnityEngine::ComputeBuffer* RayInfoBuffer; // 0x70
		::UnityEngine::ComputeBuffer* RayHitBuffer; // 0x78
		::UnityEngine::ComputeBuffer* PackedSpecRayInfoBuffer; // 0x80
		::UnityEngine::ComputeBuffer* RayAABBBuffer; // 0x88
		::UnityEngine::ComputeBuffer* RaySortBuffer; // 0x90
		::UnityEngine::ComputeBuffer* IndirectBuffer; // 0x98
		::UnityEngine::NAPRenderPipeline0::RTXGI_RadixSortBuffers* radixBuffers; // 0xA0
		::UnityEngine::Vector4 previousPos; // 0xA8
		::UnityEngine::Matrix4x4 previousVP; // 0xB8
		::UnityEngine::Vector4 irradianceVolumeCenter; // 0xF8
		::System::Int32 frameIndex; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_HISTORYBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_HISTORYBUFFER_RELEASE_OFFSET))(this);
		}

		::System::Void ReleaseWhenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_HISTORYBUFFER_RELEASEWHENCHANGED_OFFSET))(this);
		}

		::System::Boolean RelocateIfNeeded(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET))(this, desc);
		}
	};
}
