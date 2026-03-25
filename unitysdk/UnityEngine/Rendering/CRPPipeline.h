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

#define UNITYENGINE_RENDERING_CRPPIPELINE_ADDORUPDATEVOLUMETRICCLOUDLAYER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A3CFE0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_ADDORUPDATEVOLUMETRICCLOUDLAYER_OFFSET UNITYSDK_OFFSET(0x18A3CFD0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_CAPTUREPARAM_OFFSET UNITYSDK_OFFSET(0x18A3CF80)
#define UNITYENGINE_RENDERING_CRPPIPELINE_CLEANUPPIPELINE_OFFSET UNITYSDK_OFFSET(0x18A3CE60)
#define UNITYENGINE_RENDERING_CRPPIPELINE_CREATEPIPELINERENDER_OFFSET UNITYSDK_OFFSET(0x18A3CE50)
#define UNITYENGINE_RENDERING_CRPPIPELINE_DIRTYUISCENECACHE_OFFSET UNITYSDK_OFFSET(0x18A3CF70)
#define UNITYENGINE_RENDERING_CRPPIPELINE_ENDCAPTURE_OFFSET UNITYSDK_OFFSET(0x18A3CF20)
#define UNITYENGINE_RENDERING_CRPPIPELINE_ENDUIPP_OFFSET UNITYSDK_OFFSET(0x18A3CF60)
#define UNITYENGINE_RENDERING_CRPPIPELINE_FINDRTID_OFFSET UNITYSDK_OFFSET(0x18A3CEE0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_FORCEUPDATEOCCLUSIONQUERY_OFFSET UNITYSDK_OFFSET(0x18A3CF00)
#define UNITYENGINE_RENDERING_CRPPIPELINE_GETBLENDINGWEIGHT_OFFSET UNITYSDK_OFFSET(0x18A3CF40)
#define UNITYENGINE_RENDERING_CRPPIPELINE_GETRECORDEDRESULTS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A3CFC0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_GETRECORDEDRESULTS_OFFSET UNITYSDK_OFFSET(0x18A3CF90)
#define UNITYENGINE_RENDERING_CRPPIPELINE_ONCHANGEENVBLOCK_OFFSET UNITYSDK_OFFSET(0x18A3CEC0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_REMOVEVOLUMETRICCLOUDLAYER_OFFSET UNITYSDK_OFFSET(0x18A3CFF0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_RESETVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x18A3D000)
#define UNITYENGINE_RENDERING_CRPPIPELINE_SETCMD_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18A3CEA0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_SETCMD_OFFSET UNITYSDK_OFFSET(0x18A3CE90)
#define UNITYENGINE_RENDERING_CRPPIPELINE_SETENABLEMATERIALPROXY_OFFSET UNITYSDK_OFFSET(0x18A3CEF0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_SETPREPARECMD_OFFSET UNITYSDK_OFFSET(0x18A3CEB0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_STARTBLENDING_OFFSET UNITYSDK_OFFSET(0x18A3CF30)
#define UNITYENGINE_RENDERING_CRPPIPELINE_STARTCAPTURE_OFFSET UNITYSDK_OFFSET(0x18A3CF10)
#define UNITYENGINE_RENDERING_CRPPIPELINE_STARTUIPP_OFFSET UNITYSDK_OFFSET(0x18A3CF50)
#define UNITYENGINE_RENDERING_CRPPIPELINE_UNLOADPIPELINERES_OFFSET UNITYSDK_OFFSET(0x18A3CED0)
#define UNITYENGINE_RENDERING_CRPPIPELINE_UPDATEASSET_OFFSET UNITYSDK_OFFSET(0x18A3CE70)
#define UNITYENGINE_RENDERING_CRPPIPELINE_UPDATETESTCONFIG_OFFSET UNITYSDK_OFFSET(0x18A3CE80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPPipeline_TypeDefinitionIndex = 4615;

	class CRPPipeline : public ::System::Object
	{
	public:
		static ::System::Void CreatePipelineRender(::System::Int32 renderType)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_CREATEPIPELINERENDER_OFFSET))(renderType);
		}

		static ::System::Void CleanupPipeline()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_CLEANUPPIPELINE_OFFSET))();
		}

		static ::System::Void UpdateAsset(::UnityEngine::Rendering::CRPipelineAsset& asset)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPipelineAsset&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_UPDATEASSET_OFFSET))(asset);
		}

		static ::System::Void UpdateTestConfig(::UnityEngine::Rendering::CRPTestConfig& config)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPTestConfig&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_UPDATETESTCONFIG_OFFSET))(config);
		}

		static ::System::Void SetCmd(::System::Int32 cameraType, ::UnityEngine::Rendering::PassPos pos, ::System::Int32 offset, ::UnityEngine::Rendering::AddCmdType addCmdType, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Boolean clearAfterExecute)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::PassPos, ::System::Int32, ::UnityEngine::Rendering::AddCmdType, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_SETCMD_OFFSET))(cameraType, pos, offset, addCmdType, cmd, clearAfterExecute);
		}

		static ::System::Void SetPrepareCmd(::UnityEngine::Rendering::CommandBuffer* prepareCmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_SETPREPARECMD_OFFSET))(prepareCmd);
		}

		static ::System::Void OnChangeEnvBlock(::System::Boolean isLeaveScene)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_ONCHANGEENVBLOCK_OFFSET))(isLeaveScene);
		}

		static ::System::Void UnLoadPipelineRes()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_UNLOADPIPELINERES_OFFSET))();
		}

		static ::System::Int32 FindRTID(::System::String* name)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_FINDRTID_OFFSET))(name);
		}

		static ::System::Void SetEnableMaterialProxy(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_SETENABLEMATERIALPROXY_OFFSET))(enable);
		}

		static ::System::Void ForceUpdateOcclusionQuery()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_FORCEUPDATEOCCLUSIONQUERY_OFFSET))();
		}

		static ::System::Void StartCapture(::UnityEngine::RenderTexture* rt, ::System::Int32 captureType, ::System::Int32 captureFeature)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_STARTCAPTURE_OFFSET))(rt, captureType, captureFeature);
		}

		static ::System::Void EndCapture()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_ENDCAPTURE_OFFSET))();
		}

		static ::System::Void StartBlending(::System::Single blendingWeight, ::System::Single blendingSpeed)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_STARTBLENDING_OFFSET))(blendingWeight, blendingSpeed);
		}

		static ::System::Single GetBlendingWeight()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_GETBLENDINGWEIGHT_OFFSET))();
		}

		static ::System::Void StartUIPP(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_STARTUIPP_OFFSET))(rt);
		}

		static ::System::Void EndUIPP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_ENDUIPP_OFFSET))();
		}

		static ::System::Void DirtyUISceneCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_DIRTYUISCENECACHE_OFFSET))();
		}

		static ::System::Void SetCmd_Internal(::System::Int32 cameraType, ::System::Int32 pos, ::System::Int32 offset, ::System::Int32 addCmdType, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Boolean clearAfterExecute)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_SETCMD_INTERNAL_OFFSET))(cameraType, pos, offset, addCmdType, cmd, clearAfterExecute);
		}

		static ::System::Void CaptureParam(::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_CAPTUREPARAM_OFFSET))(count);
		}

		static ::UnityEngine::Rendering::RecordTree GetRecordedResults()
		{
			return ((::UnityEngine::Rendering::RecordTree(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_GETRECORDEDRESULTS_OFFSET))();
		}

		static ::System::Void AddOrUpdateVolumetricCloudLayer(::System::Int32 instanceID, ::UnityEngine::Rendering::VolumetricCloudLayerData layer)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::VolumetricCloudLayerData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_ADDORUPDATEVOLUMETRICCLOUDLAYER_OFFSET))(instanceID, layer);
		}

		static ::System::Void RemoveVolumetricCloudLayer(::System::Int32 instanceID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_REMOVEVOLUMETRICCLOUDLAYER_OFFSET))(instanceID);
		}

		static ::System::Void ResetVolumetricFog()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_RESETVOLUMETRICFOG_OFFSET))();
		}

		static ::System::Void GetRecordedResults_Injected(::UnityEngine::Rendering::RecordTree& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RecordTree&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_GETRECORDEDRESULTS_INJECTED_OFFSET))(ret);
		}

		static ::System::Void AddOrUpdateVolumetricCloudLayer_Injected(::System::Int32 instanceID, ::UnityEngine::Rendering::VolumetricCloudLayerData& layer)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::VolumetricCloudLayerData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPIPELINE_ADDORUPDATEVOLUMETRICCLOUDLAYER_INJECTED_OFFSET))(instanceID, layer);
		}
	};
}
