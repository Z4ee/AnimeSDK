#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"

namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_WATERDEPTHHISTORYBUFFER_COPYPINGPONG_OFFSET UNITYSDK_OFFSET(0x1CF08800)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_WATERDEPTHHISTORYBUFFER_PINGPONG_OFFSET UNITYSDK_OFFSET(0x1CF08A20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_WATERDEPTHHISTORYBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1CF07F40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_WATERDEPTHHISTORYBUFFER_RELOCATEIFNEEDED_1_OFFSET UNITYSDK_OFFSET(0x1CF0A030)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_WATERDEPTHHISTORYBUFFER_RELOCATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1CF08C30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_WATERDEPTHHISTORYBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF07D60)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int WaterInteractionPass_WaterDepthHistoryBuffer_TypeDefinitionIndex = 26399;

	class WaterInteractionPass_WaterDepthHistoryBuffer : public ::System::Object
	{
	public:
		::UnityEngine::RenderTexture* WaterHeightMap3; // 0x10
		::UnityEngine::RenderTexture* StaticDepthTexture; // 0x18
		::Il2CppArray<::UnityEngine::RenderTexture*>* activeHeightMap; // 0x20
		::UnityEngine::RenderTexture* tempHeightMap; // 0x28
		::UnityEngine::RenderTexture* WaterHeightMap2; // 0x30
		::UnityEngine::RenderTexture* WaterInteractionObjectDepthTexture; // 0x38
		::UnityEngine::RenderTexture* DynamicDepthTexture; // 0x40
		::UnityEngine::RenderTexture* WaterHeightMap0; // 0x48
		::UnityEngine::RenderTexture* WaterHeightMap1; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_WATERDEPTHHISTORYBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_WATERDEPTHHISTORYBUFFER_RELEASE_OFFSET))(this);
		}

		::System::Void CopyPingPong()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_WATERDEPTHHISTORYBUFFER_COPYPINGPONG_OFFSET))(this);
		}

		::System::Void PingPong()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_WATERDEPTHHISTORYBUFFER_PINGPONG_OFFSET))(this);
		}

		::System::Boolean RelocateIfNeeded(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_WATERDEPTHHISTORYBUFFER_RELOCATEIFNEEDED_OFFSET))(this, desc);
		}

		::System::Boolean RelocateIfNeeded_1(::System::Int32 textureSize, ::UnityEngine::RenderTextureFormat format)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_WATERDEPTHHISTORYBUFFER_RELOCATEIFNEEDED_1_OFFSET))(this, textureSize, format);
		}
	};
}
