#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class RTXAreaLight_WorldLightGridData; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT_HISTORYBUFFER_RELEASEWHENCHANGED_OFFSET UNITYSDK_OFFSET(0x1D730770)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT_HISTORYBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D730400)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1D7308B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT_HISTORYBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D730D00)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXAreaLight_HistoryBuffer_TypeDefinitionIndex = 5803;

	class RTXAreaLight_HistoryBuffer : public ::System::Object
	{
	public:
		::UnityEngine::RenderTexture* ALResultTexture; // 0x10
		::UnityEngine::RenderTexture* LastSceneDepth; // 0x18
		::UnityEngine::RenderTexture* LastSceneNormal; // 0x20
		::UnityEngine::ComputeBuffer* lightList; // 0x28
		::UnityEngine::NAPRenderPipeline0::RTXAreaLight_WorldLightGridData* lightGridData; // 0x30
		::UnityEngine::Matrix4x4 previousVP; // 0x38
		::UnityEngine::Vector3 previousPos; // 0x78
		::System::Int32 frameIndex; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT_HISTORYBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT_HISTORYBUFFER_RELEASE_OFFSET))(this);
		}

		::System::Void ReleaseWhenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT_HISTORYBUFFER_RELEASEWHENCHANGED_OFFSET))(this);
		}

		::System::Boolean RelocateIfNeeded(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET))(this, desc);
		}
	};
}
