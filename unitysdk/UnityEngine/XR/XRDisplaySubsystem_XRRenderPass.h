#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRDisplaySubsystem_XRRenderPass_TypeDefinitionIndex = 25164;

	struct alignas(8) XRDisplaySubsystem_XRRenderPass
	{
		::System::IntPtr displaySubsystemInstance; // 0x10
		::System::Int32 renderPassIndex; // 0x18
		::UnityEngine::Rendering::RenderTargetIdentifier renderTarget; // 0x20
		::UnityEngine::RenderTextureDescriptor renderTargetDesc; // 0x48
		::System::Boolean shouldFillOutDepth; // 0x80
		::System::Int32 cullingPassIndex; // 0x84
	};
}
