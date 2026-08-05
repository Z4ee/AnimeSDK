#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/ShadowDrawingSettings.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSEVENTCALLBACK2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EB652A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSEVENTCALLBACK2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EB65360)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSEVENTCALLBACK2_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EB64F10)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSEVENTCALLBACK2__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB64EF0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RenderPassCallbacks_RenderPassEventCallback2_TypeDefinitionIndex = 5700;

	class RenderPassCallbacks_RenderPassEventCallback2 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSEVENTCALLBACK2__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::ShadowDrawingSettings& settings, ::System::Int32 sliceIndex, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::ShadowDrawingSettings&, ::System::Int32, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSEVENTCALLBACK2_INVOKE_OFFSET))(this, context, settings, sliceIndex, cmd);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::ShadowDrawingSettings& settings, ::System::Int32 sliceIndex, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::ShadowDrawingSettings&, ::System::Int32, ::UnityEngine::Rendering::CommandBuffer*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSEVENTCALLBACK2_BEGININVOKE_OFFSET))(this, context, settings, sliceIndex, cmd, callback, object);
		}

		::System::Void EndInvoke(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::ShadowDrawingSettings& settings, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::ShadowDrawingSettings&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSEVENTCALLBACK2_ENDINVOKE_OFFSET))(this, context, settings, result);
		}
	};
}
