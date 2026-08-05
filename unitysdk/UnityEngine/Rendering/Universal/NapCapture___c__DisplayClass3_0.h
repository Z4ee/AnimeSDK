#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapCapture_CaptureData.h"

namespace System { class Action; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class NapCapture; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE___C__DISPLAYCLASS3_0__CAPTURE_B__0_OFFSET UNITYSDK_OFFSET(0x1E66BFF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E66BFE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCapture___c__DisplayClass3_0_TypeDefinitionIndex = 27317;

	class NapCapture___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::NapCapture_CaptureData captureData; // 0x10
		::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* cameraData; // 0x28
		::UnityEngine::Rendering::Universal::NapCapture* __4__this; // 0x30
		::System::Action* finishedAction; // 0x38
		::System::Boolean srgb; // 0x40
		::System::Single blurRadius; // 0x44
		::System::Int32 propertyID; // 0x48
		::System::Int32 downSample; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _Capture_b__0(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE___C__DISPLAYCLASS3_0__CAPTURE_B__0_OFFSET))(this, cmd, context, renderingData, colorAttachment, depthAttachment);
		}
	};
}
