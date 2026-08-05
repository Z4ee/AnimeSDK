#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_HISTORYBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1E7D2250)
#define UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1E7D2740)
#define UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_HISTORYBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D2FD0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SSGIPass_HistoryBuffer_TypeDefinitionIndex = 5824;

	class SSGIPass_HistoryBuffer : public ::System::Object
	{
	public:
		::UnityEngine::RenderTexture* HistoryColor; // 0x10
		::UnityEngine::RenderTexture* LastSceneColor; // 0x18
		::UnityEngine::RenderTexture* LastSceneDepth; // 0x20
		::UnityEngine::RenderTexture* LastSceneNormal; // 0x28
		::UnityEngine::RenderTexture* SSGIMip; // 0x30
		::UnityEngine::Matrix4x4 previousVP; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_HISTORYBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_HISTORYBUFFER_RELEASE_OFFSET))(this);
		}

		::System::Boolean RelocateIfNeeded(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET))(this, desc);
		}
	};
}
