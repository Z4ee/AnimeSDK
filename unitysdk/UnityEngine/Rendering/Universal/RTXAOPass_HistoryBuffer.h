#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace System { class String; }
namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_HISTORYBUFFER_RELEASERT_OFFSET UNITYSDK_OFFSET(0x1BDC3530)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_HISTORYBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1BDC34D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1BDC36A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_HISTORYBUFFER_RELOCATERT_OFFSET UNITYSDK_OFFSET(0x1BDC38E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_HISTORYBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC3C20)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXAOPass_HistoryBuffer_TypeDefinitionIndex = 27005;

	class RTXAOPass_HistoryBuffer : public ::System::Object
	{
	public:
		::UnityEngine::RenderTexture* normalRT; // 0x10
		::UnityEngine::RenderTexture* depthRT; // 0x18
		::UnityEngine::RenderTexture* hisRT; // 0x20
		::System::UInt32 frameIndex; // 0x28
		::UnityEngine::Matrix4x4 previousVP; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_HISTORYBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_HISTORYBUFFER_RELEASE_OFFSET))(this);
		}

		::System::Boolean RelocateIfNeeded(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET))(this, desc);
		}

		static ::System::Void ReleaseRT(::UnityEngine::RenderTexture*& rt)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_HISTORYBUFFER_RELEASERT_OFFSET))(rt);
		}

		static ::System::Boolean RelocateRT(::UnityEngine::RenderTexture*& rt, ::UnityEngine::RenderTextureDescriptor desc, ::System::String* name)
		{
			return ((::System::Boolean(*)(::UnityEngine::RenderTexture*&, ::UnityEngine::RenderTextureDescriptor, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_HISTORYBUFFER_RELOCATERT_OFFSET))(rt, desc, name);
		}
	};
}
