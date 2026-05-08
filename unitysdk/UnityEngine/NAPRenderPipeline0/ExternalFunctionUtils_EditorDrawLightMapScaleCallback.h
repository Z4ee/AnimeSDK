#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_EXTERNALFUNCTIONUTILS_EDITORDRAWLIGHTMAPSCALECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B0C0F40)
#define UNITYENGINE_NAPRENDERPIPELINE0_EXTERNALFUNCTIONUTILS_EDITORDRAWLIGHTMAPSCALECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B0C0FC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_EXTERNALFUNCTIONUTILS_EDITORDRAWLIGHTMAPSCALECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B0C09C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_EXTERNALFUNCTIONUTILS_EDITORDRAWLIGHTMAPSCALECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C09B0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ExternalFunctionUtils_EditorDrawLightMapScaleCallback_TypeDefinitionIndex = 6030;

	class ExternalFunctionUtils_EditorDrawLightMapScaleCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_EXTERNALFUNCTIONUTILS_EDITORDRAWLIGHTMAPSCALECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_EXTERNALFUNCTIONUTILS_EDITORDRAWLIGHTMAPSCALECALLBACK_INVOKE_OFFSET))(this, cmd, context);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_EXTERNALFUNCTIONUTILS_EDITORDRAWLIGHTMAPSCALECALLBACK_BEGININVOKE_OFFSET))(this, cmd, context, callback, object);
		}

		::System::Void EndInvoke(::UnityEngine::Rendering::ScriptableRenderContext& context, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_EXTERNALFUNCTIONUTILS_EDITORDRAWLIGHTMAPSCALECALLBACK_ENDINVOKE_OFFSET))(this, context, result);
		}
	};
}
