#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/DLSSConstants.h"
#include "unitysdk/UnityEngine/Rendering/DLSSGQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/DLSSQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/ReflexMode.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace UnityEngine::Rendering { class DLSSViewPort; }

#define UNITYENGINE_RENDERING_DLSSCONTEXT_DLSSSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1B18DF40)
#define UNITYENGINE_RENDERING_DLSSCONTEXT_GETOPTIMALSETTINGS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18DFA0)
#define UNITYENGINE_RENDERING_DLSSCONTEXT_GETOPTIMALSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B18DF50)
#define UNITYENGINE_RENDERING_DLSSCONTEXT_SET_VP_OFFSET UNITYSDK_OFFSET(0x952CA0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DLSSContext_TypeDefinitionIndex = 6133;

	struct alignas(8) DLSSContext
	{
		::System::UInt64 handle; // 0x10
		::System::Int32 w; // 0x18
		::System::Int32 h; // 0x1C
		::UnityEngine::Rendering::DLSSQualityMode mode; // 0x20
		::UnityEngine::Rendering::DLSSGQualityMode frameGenMode; // 0x24
		::System::Int32 frameGenNum; // 0x28
		::UnityEngine::Rendering::ReflexMode reflexMode; // 0x2C
		::System::Int32 frameLimitUs; // 0x30
		::System::Single sharpness; // 0x34
		::System::Single preExposure; // 0x38
		::System::Single exposureScale; // 0x3C
		::System::Boolean colorBuffersHDR; // 0x40
		::System::Boolean indicatorInvertAxisX; // 0x41
		::System::Boolean indicatorInvertAxisY; // 0x42
		::System::Boolean useAutoExposure; // 0x43
		::System::Boolean useOffScreenUI; // 0x44
		::UnityEngine::Rendering::DLSSConstants constants; // 0x48
		::UnityEngine::Rendering::RenderTargetIdentifier colorIn; // 0x1F0
		::UnityEngine::Rendering::RenderTargetIdentifier colorOut; // 0x218
		::UnityEngine::Rendering::RenderTargetIdentifier depth; // 0x240
		::UnityEngine::Rendering::RenderTargetIdentifier motion; // 0x268
		::UnityEngine::Rendering::RenderTargetIdentifier ui; // 0x290

		static ::System::Boolean DLSSSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSCONTEXT_DLSSSUPPORTED_OFFSET))();
		}

		/*
		static ::UnityEngine::Rendering::DLSSOptimalSettings GetOptimalSettings(::UnityEngine::Rendering::DLSSQualityMode mode, ::System::Int32 displayWidth, ::System::Int32 displayHeight)
		{
			return ((::UnityEngine::Rendering::DLSSOptimalSettings(*)(::UnityEngine::Rendering::DLSSQualityMode, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSCONTEXT_GETOPTIMALSETTINGS_OFFSET))(mode, displayWidth, displayHeight);
		}
		*/

		::System::Void set_vp(::UnityEngine::Rendering::DLSSViewPort* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DLSSViewPort*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSCONTEXT_SET_VP_OFFSET))(this, value);
		}

		/*
		static ::System::Void GetOptimalSettings_Injected(::UnityEngine::Rendering::DLSSQualityMode mode, ::System::Int32 displayWidth, ::System::Int32 displayHeight, ::UnityEngine::Rendering::DLSSOptimalSettings& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::DLSSQualityMode, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::DLSSOptimalSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSCONTEXT_GETOPTIMALSETTINGS_INJECTED_OFFSET))(mode, displayWidth, displayHeight, ret);
		}
		*/
	};
}
