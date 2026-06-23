#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_HISTORYBUFFER_PINGPONG_OFFSET UNITYSDK_OFFSET(0x1D4DFED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_HISTORYBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D4DF8B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1D4DFF70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_HISTORYBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E0920)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraApplyPass_HistoryBuffer_TypeDefinitionIndex = 26757;

	class LyraApplyPass_HistoryBuffer : public ::System::Object
	{
	public:
		::UnityEngine::RenderTexture* LastLum; // 0x10
		::UnityEngine::RenderTexture* LastFrameHalfDepth; // 0x18
		::UnityEngine::RenderTexture* LastIndirectHalfDiffuse; // 0x20
		::UnityEngine::RenderTexture* CurFrameHalfDepth; // 0x28
		::UnityEngine::RenderTexture* CurIndirectHalfDiffuse; // 0x30
		::UnityEngine::RenderTexture* CurLum; // 0x38
		::UnityEngine::Matrix4x4 previousVP; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_HISTORYBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_HISTORYBUFFER_RELEASE_OFFSET))(this);
		}

		::System::Void PingPong()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_HISTORYBUFFER_PINGPONG_OFFSET))(this);
		}

		::System::Boolean RelocateIfNeeded(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET))(this, desc);
		}
	};
}
