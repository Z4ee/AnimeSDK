#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER_HISTORYBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1EA12150)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1EA12430)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER_HISTORYBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA12870)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXPathTracer_HistoryBuffer_TypeDefinitionIndex = 5796;

	class RTXPathTracer_HistoryBuffer : public ::System::Object
	{
	public:
		::UnityEngine::RenderTexture* PTResultTexture; // 0x10
		::UnityEngine::RenderTexture* IrradianceVolume; // 0x18
		::UnityEngine::Matrix4x4 previousVP; // 0x20
		::System::Int32 frameIndex; // 0x60
		::System::Int32 sampleCount; // 0x64
		::System::Boolean isDebug; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER_HISTORYBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER_HISTORYBUFFER_RELEASE_OFFSET))(this);
		}

		::System::Boolean RelocateIfNeeded(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET))(this, desc);
		}
	};
}
