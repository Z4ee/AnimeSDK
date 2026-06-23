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

#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_GBUFFEREVENTCALLBACKWITHCMDBUFFER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D428110)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_GBUFFEREVENTCALLBACKWITHCMDBUFFER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D4281D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_GBUFFEREVENTCALLBACKWITHCMDBUFFER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D427D90)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_GBUFFEREVENTCALLBACKWITHCMDBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D427D70)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RenderPassCallbacks_GBufferEventCallbackWithCmdBuffer_TypeDefinitionIndex = 5696;

	class RenderPassCallbacks_GBufferEventCallbackWithCmdBuffer : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_GBUFFEREVENTCALLBACKWITHCMDBUFFER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_GBUFFEREVENTCALLBACKWITHCMDBUFFER_INVOKE_OFFSET))(this, context, renderingData, postCullRenderingData, cmd);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_GBUFFEREVENTCALLBACKWITHCMDBUFFER_BEGININVOKE_OFFSET))(this, context, renderingData, postCullRenderingData, cmd, callback, object);
		}

		::System::Void EndInvoke(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_GBUFFEREVENTCALLBACKWITHCMDBUFFER_ENDINVOKE_OFFSET))(this, context, renderingData, postCullRenderingData, result);
		}
	};
}
