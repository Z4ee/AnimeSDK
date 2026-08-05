#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E7A0780)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E7A0870)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E79F920)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E79F900)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCaptureAction_TypeDefinitionIndex = 27119;

	class NapCaptureAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREACTION_INVOKE_OFFSET))(this, cmd, context, renderingData, colorAttachment, depthAttachment);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREACTION_BEGININVOKE_OFFSET))(this, cmd, context, renderingData, colorAttachment, depthAttachment, callback, object);
		}

		::System::Void EndInvoke(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREACTION_ENDINVOKE_OFFSET))(this, context, renderingData, result);
		}
	};
}
