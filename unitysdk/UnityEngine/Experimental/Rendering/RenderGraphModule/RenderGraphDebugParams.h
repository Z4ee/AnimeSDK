#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGPARAMS_REGISTERDEBUG_OFFSET UNITYSDK_OFFSET(0x1B493400)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGPARAMS_UNREGISTERDEBUG_OFFSET UNITYSDK_OFFSET(0x1B493440)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B48CA70)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphDebugParams_TypeDefinitionIndex = 18237;

	class RenderGraphDebugParams : public ::System::Object
	{
	public:
		::System::Boolean tagResourceNamesWithRG; // 0x10
		::System::Boolean enableRenderGraph; // 0x11
		::System::Boolean logResources; // 0x12
		::System::Boolean unbindGlobalTextures; // 0x13
		::System::Boolean clearRenderTargetsAtRelease; // 0x14
		::System::Boolean clearRenderTargetsAtCreation; // 0x15
		::System::Boolean logFrameInformation; // 0x16

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterDebug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGPARAMS_REGISTERDEBUG_OFFSET))(this);
		}

		::System::Void UnRegisterDebug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGPARAMS_UNREGISTERDEBUG_OFFSET))(this);
		}
	};
}
