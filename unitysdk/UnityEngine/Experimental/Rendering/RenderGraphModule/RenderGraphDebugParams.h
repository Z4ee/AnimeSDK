#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGPARAMS_REGISTERDEBUG_OFFSET UNITYSDK_OFFSET(0x191DB570)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGPARAMS_UNREGISTERDEBUG_OFFSET UNITYSDK_OFFSET(0x191DB5B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x191D4C10)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphDebugParams_TypeDefinitionIndex = 9507;

	class RenderGraphDebugParams : public ::System::Object
	{
	public:
		::System::Boolean clearRenderTargetsAtCreation; // 0x10
		::System::Boolean logResources; // 0x11
		::System::Boolean clearRenderTargetsAtRelease; // 0x12
		::System::Boolean enableRenderGraph; // 0x13
		::System::Boolean logFrameInformation; // 0x14
		::System::Boolean tagResourceNamesWithRG; // 0x15
		::System::Boolean unbindGlobalTextures; // 0x16

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
