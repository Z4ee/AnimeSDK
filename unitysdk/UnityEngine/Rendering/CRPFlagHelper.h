#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/CRPCameraDebugFlag.h"
#include "unitysdk/UnityEngine/Rendering/CRPCameraFlag.h"
#include "unitysdk/UnityEngine/Rendering/CRPCameraInfo.h"
#include "unitysdk/UnityEngine/Rendering/CRPDebugAsset.h"
#include "unitysdk/UnityEngine/Rendering/CRPLightInfoCommon.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Rendering/CRPPreConfig.h"
#include "unitysdk/UnityEngine/Rendering/CRPTestConfig.h"
#include "unitysdk/UnityEngine/Rendering/CRPipelineAsset.h"
#include "unitysdk/UnityEngine/Rendering/EDebugFlag.h"
#include "unitysdk/UnityEngine/Rendering/ETestFlag.h"
#include "unitysdk/UnityEngine/Rendering/GPUDrivenFlag.h"
#include "unitysdk/UnityEngine/Rendering/LightInfoFlag.h"
#include "unitysdk/UnityEngine/Rendering/PipelineFlag.h"
#include "unitysdk/UnityEngine/Rendering/PipelinePlatformFlag.h"
#include "unitysdk/UnityEngine/Rendering/PreFlag.h"

#define UNITYENGINE_RENDERING_CRPFLAGHELPER_HASDEBUGFLAG_OFFSET UNITYSDK_OFFSET(0x16AE2150)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_1_OFFSET UNITYSDK_OFFSET(0x16AE2130)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_2_OFFSET UNITYSDK_OFFSET(0x16AE2140)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_3_OFFSET UNITYSDK_OFFSET(0x16AE2190)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_4_OFFSET UNITYSDK_OFFSET(0x16AE21C0)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_5_OFFSET UNITYSDK_OFFSET(0x16AE21F0)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_6_OFFSET UNITYSDK_OFFSET(0x16AE2230)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_7_OFFSET UNITYSDK_OFFSET(0x16AE2270)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_OFFSET UNITYSDK_OFFSET(0x16AE20D0)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_1_OFFSET UNITYSDK_OFFSET(0x16AE20E0)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_2_OFFSET UNITYSDK_OFFSET(0x16AE2100)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_3_OFFSET UNITYSDK_OFFSET(0x16AE2160)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_4_OFFSET UNITYSDK_OFFSET(0x16AE21A0)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_5_OFFSET UNITYSDK_OFFSET(0x16AE21D0)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_6_OFFSET UNITYSDK_OFFSET(0x16AE2200)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_7_OFFSET UNITYSDK_OFFSET(0x16AE2240)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_OFFSET UNITYSDK_OFFSET(0x16AE20B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPFlagHelper_TypeDefinitionIndex = 29150;

	class CRPFlagHelper : public ::System::Object
	{
	public:
		static ::System::Boolean SetFlag(::UnityEngine::Rendering::CRPLightInfoCommon& asset, ::UnityEngine::Rendering::LightInfoFlag f, ::System::Boolean add)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPLightInfoCommon&, ::UnityEngine::Rendering::LightInfoFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_OFFSET))(asset, f, add);
		}

		static ::System::Boolean HasFlag(::UnityEngine::Rendering::CRPCameraInfo& asset, ::UnityEngine::Rendering::CRPCameraFlag f)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPCameraInfo&, ::UnityEngine::Rendering::CRPCameraFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_OFFSET))(asset, f);
		}

		static ::System::Void SetFlag_1(::UnityEngine::Rendering::CRPCameraInfo& asset, ::UnityEngine::Rendering::CRPCameraFlag f, ::System::Boolean add)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPCameraInfo&, ::UnityEngine::Rendering::CRPCameraFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_1_OFFSET))(asset, f, add);
		}

		static ::System::Void SetFlag_2(::UnityEngine::Rendering::CRPPreConfig& config, ::UnityEngine::Rendering::PreFlag f, ::System::Boolean add)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPPreConfig&, ::UnityEngine::Rendering::PreFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_2_OFFSET))(config, f, add);
		}

		static ::System::Boolean HasFlag_1(::UnityEngine::Rendering::CRPPreConfig& config, ::UnityEngine::Rendering::PreFlag f)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPPreConfig&, ::UnityEngine::Rendering::PreFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_1_OFFSET))(config, f);
		}

		static ::System::Boolean HasFlag_2(::UnityEngine::Rendering::CRPMainCameraDesc& asset, ::UnityEngine::Rendering::CRPCameraFlag f)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPMainCameraDesc&, ::UnityEngine::Rendering::CRPCameraFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_2_OFFSET))(asset, f);
		}

		static ::System::Boolean HasDebugFlag(::UnityEngine::Rendering::CRPMainCameraDesc& asset, ::UnityEngine::Rendering::CRPCameraDebugFlag f)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPMainCameraDesc&, ::UnityEngine::Rendering::CRPCameraDebugFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_HASDEBUGFLAG_OFFSET))(asset, f);
		}

		static ::System::Boolean SetFlag_3(::UnityEngine::Rendering::CRPipelineAsset& asset, ::UnityEngine::Rendering::PipelineFlag f, ::System::Boolean add)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPipelineAsset&, ::UnityEngine::Rendering::PipelineFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_3_OFFSET))(asset, f, add);
		}

		static ::System::Boolean HasFlag_3(::UnityEngine::Rendering::CRPipelineAsset& asset, ::UnityEngine::Rendering::PipelineFlag f)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPipelineAsset&, ::UnityEngine::Rendering::PipelineFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_3_OFFSET))(asset, f);
		}

		static ::System::Void SetFlag_4(::UnityEngine::Rendering::CRPipelineAsset& asset, ::UnityEngine::Rendering::PipelinePlatformFlag f, ::System::Boolean add)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPipelineAsset&, ::UnityEngine::Rendering::PipelinePlatformFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_4_OFFSET))(asset, f, add);
		}

		static ::System::Boolean HasFlag_4(::UnityEngine::Rendering::CRPipelineAsset& asset, ::UnityEngine::Rendering::PipelinePlatformFlag f)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPipelineAsset&, ::UnityEngine::Rendering::PipelinePlatformFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_4_OFFSET))(asset, f);
		}

		static ::System::Void SetFlag_5(::UnityEngine::Rendering::CRPipelineAsset& asset, ::UnityEngine::Rendering::GPUDrivenFlag f, ::System::Boolean add)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPipelineAsset&, ::UnityEngine::Rendering::GPUDrivenFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_5_OFFSET))(asset, f, add);
		}

		static ::System::Boolean HasFlag_5(::UnityEngine::Rendering::CRPipelineAsset& asset, ::UnityEngine::Rendering::GPUDrivenFlag f)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPipelineAsset&, ::UnityEngine::Rendering::GPUDrivenFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_5_OFFSET))(asset, f);
		}

		static ::System::Boolean SetFlag_6(::UnityEngine::Rendering::CRPTestConfig& asset, ::UnityEngine::Rendering::ETestFlag f, ::System::Boolean add)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPTestConfig&, ::UnityEngine::Rendering::ETestFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_6_OFFSET))(asset, f, add);
		}

		static ::System::Boolean HasFlag_6(::UnityEngine::Rendering::CRPTestConfig& asset, ::UnityEngine::Rendering::ETestFlag f)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPTestConfig&, ::UnityEngine::Rendering::ETestFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_6_OFFSET))(asset, f);
		}

		static ::System::Boolean SetFlag_7(::UnityEngine::Rendering::CRPDebugAsset& asset, ::UnityEngine::Rendering::EDebugFlag f, ::System::Boolean add)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPDebugAsset&, ::UnityEngine::Rendering::EDebugFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_7_OFFSET))(asset, f, add);
		}

		static ::System::Boolean HasFlag_7(::UnityEngine::Rendering::CRPDebugAsset& asset, ::UnityEngine::Rendering::EDebugFlag f)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPDebugAsset&, ::UnityEngine::Rendering::EDebugFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_7_OFFSET))(asset, f);
		}
	};
}
