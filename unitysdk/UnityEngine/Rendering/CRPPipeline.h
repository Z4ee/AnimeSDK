#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AddCmdType.h"
#include "unitysdk/UnityEngine/Rendering/CRPTestConfig.h"
#include "unitysdk/UnityEngine/Rendering/CRPipelineAsset.h"
#include "unitysdk/UnityEngine/Rendering/PassPos.h"
#include "unitysdk/UnityEngine/Rendering/RecordTree.h"
#include "unitysdk/UnityEngine/Rendering/VolumetricCloudLayerData.h"

namespace System { class String; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_CRPPIPELINE_ADDORUPDATEVOLUMETRICCLOUDLAYER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C51C0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_ADDORUPDATEVOLUMETRICCLOUDLAYER_OFFSET UNITYSDK_OFFSET(0x1B2C51B0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_CAPTUREPARAM_OFFSET UNITYSDK_OFFSET(0x1B2C5160)
#define UNITYENGINE_RENDERING_CRPPIPELINE_CLEANUPPIPELINE_OFFSET UNITYSDK_OFFSET(0x1B2C5040)
#define UNITYENGINE_RENDERING_CRPPIPELINE_CREATEPIPELINERENDER_OFFSET UNITYSDK_OFFSET(0x1B2C5030)
#define UNITYENGINE_RENDERING_CRPPIPELINE_DIRTYUISCENECACHE_OFFSET UNITYSDK_OFFSET(0x1B2C5150)
#define UNITYENGINE_RENDERING_CRPPIPELINE_ENDCAPTURE_OFFSET UNITYSDK_OFFSET(0x1B2C5100)
#define UNITYENGINE_RENDERING_CRPPIPELINE_ENDUIPP_OFFSET UNITYSDK_OFFSET(0x1B2C5140)
#define UNITYENGINE_RENDERING_CRPPIPELINE_FINDRTID_OFFSET UNITYSDK_OFFSET(0x1B2C50C0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_FORCEUPDATEOCCLUSIONQUERY_OFFSET UNITYSDK_OFFSET(0x1B2C50E0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_GETBLENDINGWEIGHT_OFFSET UNITYSDK_OFFSET(0x1B2C5120)
#define UNITYENGINE_RENDERING_CRPPIPELINE_GETRECORDEDRESULTS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C51A0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_GETRECORDEDRESULTS_OFFSET UNITYSDK_OFFSET(0x1B2C5170)
#define UNITYENGINE_RENDERING_CRPPIPELINE_ONCHANGEENVBLOCK_OFFSET UNITYSDK_OFFSET(0x1B2C50A0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_REMOVEVOLUMETRICCLOUDLAYER_OFFSET UNITYSDK_OFFSET(0x1B2C51D0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_RESETVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1B2C51E0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_SETCMD_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2C5080)
#define UNITYENGINE_RENDERING_CRPPIPELINE_SETCMD_OFFSET UNITYSDK_OFFSET(0x1B2C5070)
#define UNITYENGINE_RENDERING_CRPPIPELINE_SETENABLEMATERIALPROXY_OFFSET UNITYSDK_OFFSET(0x1B2C50D0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_SETPREPARECMD_OFFSET UNITYSDK_OFFSET(0x1B2C5090)
#define UNITYENGINE_RENDERING_CRPPIPELINE_STARTBLENDING_OFFSET UNITYSDK_OFFSET(0x1B2C5110)
#define UNITYENGINE_RENDERING_CRPPIPELINE_STARTCAPTURE_OFFSET UNITYSDK_OFFSET(0x1B2C50F0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_STARTUIPP_OFFSET UNITYSDK_OFFSET(0x1B2C5130)
#define UNITYENGINE_RENDERING_CRPPIPELINE_UNLOADPIPELINERES_OFFSET UNITYSDK_OFFSET(0x1B2C50B0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_UPDATEASSET_OFFSET UNITYSDK_OFFSET(0x1B2C5050)
#define UNITYENGINE_RENDERING_CRPPIPELINE_UPDATETESTCONFIG_OFFSET UNITYSDK_OFFSET(0x1B2C5060)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPPipeline_TypeDefinitionIndex = 4797;

	class CRPPipeline : public ::System::Object
	{
	public:
		static ::System::Void CreatePipelineRender(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_CREATEPIPELINERENDER_OFFSET))(a1);
		}

		static ::System::Void CleanupPipeline()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_CLEANUPPIPELINE_OFFSET))();
		}

		static ::System::Void UpdateAsset(::UnityEngine::Rendering::CRPipelineAsset& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPipelineAsset&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_UPDATEASSET_OFFSET))(a1);
		}

		static ::System::Void UpdateTestConfig(::UnityEngine::Rendering::CRPTestConfig& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPTestConfig&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_UPDATETESTCONFIG_OFFSET))(a1);
		}

		static ::System::Void SetCmd(::System::Int32 a1, ::UnityEngine::Rendering::PassPos a2, ::System::Int32 a3, ::UnityEngine::Rendering::AddCmdType a4, ::UnityEngine::Rendering::CommandBuffer* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::PassPos, ::System::Int32, ::UnityEngine::Rendering::AddCmdType, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_SETCMD_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void SetPrepareCmd(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_SETPREPARECMD_OFFSET))(a1);
		}

		static ::System::Void OnChangeEnvBlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_ONCHANGEENVBLOCK_OFFSET))(a1);
		}

		static ::System::Void UnLoadPipelineRes()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_UNLOADPIPELINERES_OFFSET))();
		}

		static ::System::Int32 FindRTID(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_FINDRTID_OFFSET))(a1);
		}

		static ::System::Void SetEnableMaterialProxy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_SETENABLEMATERIALPROXY_OFFSET))(a1);
		}

		static ::System::Void ForceUpdateOcclusionQuery()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_FORCEUPDATEOCCLUSIONQUERY_OFFSET))();
		}

		static ::System::Void StartCapture(::UnityEngine::RenderTexture* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_STARTCAPTURE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EndCapture()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_ENDCAPTURE_OFFSET))();
		}

		static ::System::Void StartBlending(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_STARTBLENDING_OFFSET))(a1, a2);
		}

		static ::System::Single GetBlendingWeight()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_GETBLENDINGWEIGHT_OFFSET))();
		}

		static ::System::Void StartUIPP(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_STARTUIPP_OFFSET))(a1);
		}

		static ::System::Void EndUIPP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_ENDUIPP_OFFSET))();
		}

		static ::System::Void DirtyUISceneCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_DIRTYUISCENECACHE_OFFSET))();
		}

		static ::System::Void SetCmd_Internal(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::UnityEngine::Rendering::CommandBuffer* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_SETCMD_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void CaptureParam(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_CAPTUREPARAM_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::RecordTree GetRecordedResults()
		{
			return ((::UnityEngine::Rendering::RecordTree(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_GETRECORDEDRESULTS_OFFSET))();
		}

		static ::System::Void AddOrUpdateVolumetricCloudLayer(::System::Int32 a1, ::UnityEngine::Rendering::VolumetricCloudLayerData a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::VolumetricCloudLayerData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_ADDORUPDATEVOLUMETRICCLOUDLAYER_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveVolumetricCloudLayer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_REMOVEVOLUMETRICCLOUDLAYER_OFFSET))(a1);
		}

		static ::System::Void ResetVolumetricFog()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_RESETVOLUMETRICFOG_OFFSET))();
		}

		static ::System::Void GetRecordedResults_Injected(::UnityEngine::Rendering::RecordTree& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RecordTree&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_GETRECORDEDRESULTS_INJECTED_OFFSET))(a1);
		}

		static ::System::Void AddOrUpdateVolumetricCloudLayer_Injected(::System::Int32 a1, ::UnityEngine::Rendering::VolumetricCloudLayerData& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::VolumetricCloudLayerData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_ADDORUPDATEVOLUMETRICCLOUDLAYER_INJECTED_OFFSET))(a1, a2);
		}
	};
}
