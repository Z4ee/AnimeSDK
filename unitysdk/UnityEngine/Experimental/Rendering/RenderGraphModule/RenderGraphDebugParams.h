#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGPARAMS_REGISTERDEBUG_OFFSET UNITYSDK_OFFSET(0x1CA5E290)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGPARAMS_UNREGISTERDEBUG_OFFSET UNITYSDK_OFFSET(0x1CA5E2D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA57BA0)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphDebugParams_TypeDefinitionIndex = 18643;

	class RenderGraphDebugParams : public ::System::Object
	{
	public:
		::System::Boolean logResources; // 0x10
		::System::Boolean unbindGlobalTextures; // 0x11
		::System::Boolean logFrameInformation; // 0x12
		::System::Boolean clearRenderTargetsAtRelease; // 0x13
		::System::Boolean clearRenderTargetsAtCreation; // 0x14
		::System::Boolean enableRenderGraph; // 0x15
		::System::Boolean tagResourceNamesWithRG; // 0x16

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
