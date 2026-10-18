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

#define UNITYENGINE_RENDERING_CRPFLAGHELPER_HASDEBUGFLAG_OFFSET UNITYSDK_OFFSET(0x1CC84DD0)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_1_OFFSET UNITYSDK_OFFSET(0x1CC84DB0)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_2_OFFSET UNITYSDK_OFFSET(0x1CC84DC0)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_3_OFFSET UNITYSDK_OFFSET(0x1CC84E10)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_4_OFFSET UNITYSDK_OFFSET(0x1CC84E40)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_5_OFFSET UNITYSDK_OFFSET(0x1CC84E70)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_6_OFFSET UNITYSDK_OFFSET(0x1CC84EB0)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_7_OFFSET UNITYSDK_OFFSET(0x1CC84EF0)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_OFFSET UNITYSDK_OFFSET(0x1CC84D50)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_1_OFFSET UNITYSDK_OFFSET(0x1CC84D60)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_2_OFFSET UNITYSDK_OFFSET(0x1CC84D80)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_3_OFFSET UNITYSDK_OFFSET(0x1CC84DE0)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_4_OFFSET UNITYSDK_OFFSET(0x1CC84E20)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_5_OFFSET UNITYSDK_OFFSET(0x1CC84E50)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_6_OFFSET UNITYSDK_OFFSET(0x1CC84E80)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_7_OFFSET UNITYSDK_OFFSET(0x1CC84EC0)
#define UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_OFFSET UNITYSDK_OFFSET(0x1CC84D30)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPFlagHelper_TypeDefinitionIndex = 37528;

	class CRPFlagHelper : public ::System::Object
	{
	public:
		static ::System::Boolean SetFlag(::UnityEngine::Rendering::CRPLightInfoCommon& a1, ::UnityEngine::Rendering::LightInfoFlag a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPLightInfoCommon&, ::UnityEngine::Rendering::LightInfoFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HasFlag(::UnityEngine::Rendering::CRPCameraInfo& a1, ::UnityEngine::Rendering::CRPCameraFlag a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPCameraInfo&, ::UnityEngine::Rendering::CRPCameraFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_OFFSET))(a1, a2);
		}

		static ::System::Void SetFlag_1(::UnityEngine::Rendering::CRPCameraInfo& a1, ::UnityEngine::Rendering::CRPCameraFlag a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPCameraInfo&, ::UnityEngine::Rendering::CRPCameraFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetFlag_2(::UnityEngine::Rendering::CRPPreConfig& a1, ::UnityEngine::Rendering::PreFlag a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPPreConfig&, ::UnityEngine::Rendering::PreFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HasFlag_1(::UnityEngine::Rendering::CRPPreConfig& a1, ::UnityEngine::Rendering::PreFlag a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPPreConfig&, ::UnityEngine::Rendering::PreFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasFlag_2(::UnityEngine::Rendering::CRPMainCameraDesc& a1, ::UnityEngine::Rendering::CRPCameraFlag a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPMainCameraDesc&, ::UnityEngine::Rendering::CRPCameraFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasDebugFlag(::UnityEngine::Rendering::CRPMainCameraDesc& a1, ::UnityEngine::Rendering::CRPCameraDebugFlag a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPMainCameraDesc&, ::UnityEngine::Rendering::CRPCameraDebugFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_HASDEBUGFLAG_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetFlag_3(::UnityEngine::Rendering::CRPipelineAsset& a1, ::UnityEngine::Rendering::PipelineFlag a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPipelineAsset&, ::UnityEngine::Rendering::PipelineFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HasFlag_3(::UnityEngine::Rendering::CRPipelineAsset& a1, ::UnityEngine::Rendering::PipelineFlag a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPipelineAsset&, ::UnityEngine::Rendering::PipelineFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_3_OFFSET))(a1, a2);
		}

		static ::System::Void SetFlag_4(::UnityEngine::Rendering::CRPipelineAsset& a1, ::UnityEngine::Rendering::PipelinePlatformFlag a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPipelineAsset&, ::UnityEngine::Rendering::PipelinePlatformFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_4_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HasFlag_4(::UnityEngine::Rendering::CRPipelineAsset& a1, ::UnityEngine::Rendering::PipelinePlatformFlag a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPipelineAsset&, ::UnityEngine::Rendering::PipelinePlatformFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_4_OFFSET))(a1, a2);
		}

		static ::System::Void SetFlag_5(::UnityEngine::Rendering::CRPipelineAsset& a1, ::UnityEngine::Rendering::GPUDrivenFlag a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPipelineAsset&, ::UnityEngine::Rendering::GPUDrivenFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HasFlag_5(::UnityEngine::Rendering::CRPipelineAsset& a1, ::UnityEngine::Rendering::GPUDrivenFlag a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPipelineAsset&, ::UnityEngine::Rendering::GPUDrivenFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_5_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetFlag_6(::UnityEngine::Rendering::CRPTestConfig& a1, ::UnityEngine::Rendering::ETestFlag a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPTestConfig&, ::UnityEngine::Rendering::ETestFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_6_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HasFlag_6(::UnityEngine::Rendering::CRPTestConfig& a1, ::UnityEngine::Rendering::ETestFlag a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPTestConfig&, ::UnityEngine::Rendering::ETestFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_6_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetFlag_7(::UnityEngine::Rendering::CRPDebugAsset& a1, ::UnityEngine::Rendering::EDebugFlag a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPDebugAsset&, ::UnityEngine::Rendering::EDebugFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_SETFLAG_7_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HasFlag_7(::UnityEngine::Rendering::CRPDebugAsset& a1, ::UnityEngine::Rendering::EDebugFlag a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CRPDebugAsset&, ::UnityEngine::Rendering::EDebugFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPFLAGHELPER_HASFLAG_7_OFFSET))(a1, a2);
		}
	};
}
