#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SSRPASS_HISTORYBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B4DA380)
#define UNITYENGINE_NAPRENDERPIPELINE0_SSRPASS_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1B4DA4E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SSRPASS_HISTORYBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DAA30)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SSRPass_HistoryBuffer_TypeDefinitionIndex = 5818;

	class SSRPass_HistoryBuffer : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::RenderTexture*>* rts; // 0x10
		::UnityEngine::Matrix4x4 previousVP; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSRPASS_HISTORYBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSRPASS_HISTORYBUFFER_RELEASE_OFFSET))(this);
		}

		::System::Boolean RelocateIfNeeded(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSRPASS_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET))(this, desc);
		}
	};
}
