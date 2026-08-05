#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/EngineRendererType.h"
#include "unitysdk/UnityEngine/Rendering/RendererUpdateAllAsyncHandle.h"

#define UNITYENGINE_RENDERING_RENDERERUPDATEMANAGER_BEGINUPDATERENDERERTYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E955610)
#define UNITYENGINE_RENDERING_RENDERERUPDATEMANAGER_BEGINUPDATERENDERERTYPE_OFFSET UNITYSDK_OFFSET(0x1E9555E0)
#define UNITYENGINE_RENDERING_RENDERERUPDATEMANAGER_ENDUPDATEALL_OFFSET UNITYSDK_OFFSET(0x1E955620)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RendererUpdateManager_TypeDefinitionIndex = 6156;

	class RendererUpdateManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::RendererUpdateAllAsyncHandle BeginUpdateRendererType(::UnityEngine::Rendering::EngineRendererType rendererType)
		{
			return ((::UnityEngine::Rendering::RendererUpdateAllAsyncHandle(*)(::UnityEngine::Rendering::EngineRendererType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERUPDATEMANAGER_BEGINUPDATERENDERERTYPE_OFFSET))(rendererType);
		}

		static ::System::Void EndUpdateAll(::UnityEngine::Rendering::RendererUpdateAllAsyncHandle& handle)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RendererUpdateAllAsyncHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERUPDATEMANAGER_ENDUPDATEALL_OFFSET))(handle);
		}

		static ::System::Void BeginUpdateRendererType_Injected(::UnityEngine::Rendering::EngineRendererType rendererType, ::UnityEngine::Rendering::RendererUpdateAllAsyncHandle& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::EngineRendererType, ::UnityEngine::Rendering::RendererUpdateAllAsyncHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERUPDATEMANAGER_BEGINUPDATERENDERERTYPE_INJECTED_OFFSET))(rendererType, ret);
		}
	};
}
