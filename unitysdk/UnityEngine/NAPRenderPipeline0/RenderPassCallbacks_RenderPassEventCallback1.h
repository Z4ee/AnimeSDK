#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSEVENTCALLBACK1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D853840)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSEVENTCALLBACK1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D853900)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSEVENTCALLBACK1_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D8534C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSEVENTCALLBACK1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8534A0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RenderPassCallbacks_RenderPassEventCallback1_TypeDefinitionIndex = 5697;

	class RenderPassCallbacks_RenderPassEventCallback1 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSEVENTCALLBACK1__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSEVENTCALLBACK1_INVOKE_OFFSET))(this, context, renderingData, postCullRenderingData, cmd);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSEVENTCALLBACK1_BEGININVOKE_OFFSET))(this, context, renderingData, postCullRenderingData, cmd, callback, object);
		}

		::System::Void EndInvoke(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSEVENTCALLBACK1_ENDINVOKE_OFFSET))(this, context, renderingData, postCullRenderingData, result);
		}
	};
}
