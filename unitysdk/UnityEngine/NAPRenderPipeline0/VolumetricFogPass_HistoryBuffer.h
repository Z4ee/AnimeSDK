#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGPASS_HISTORYBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B2E1510)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGPASS_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1B2E1650)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGPASS_HISTORYBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E1AD0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumetricFogPass_HistoryBuffer_TypeDefinitionIndex = 5837;

	class VolumetricFogPass_HistoryBuffer : public ::System::Object
	{
	public:
		::UnityEngine::RenderTexture* rt; // 0x10
		::UnityEngine::Matrix4x4 previousVP; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGPASS_HISTORYBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGPASS_HISTORYBUFFER_RELEASE_OFFSET))(this);
		}

		::System::Boolean RelocateIfNeeded(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGPASS_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET))(this, desc);
		}
	};
}
