#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraOverrideOption.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraRenderType.h"
#include "unitysdk/UnityEngine/Rendering/DLSSGQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/DLSSQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/FSRFGQualityMode.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_ADDCAMERATOSTACK_OFFSET UNITYSDK_OFFSET(0x1D2FE1E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_CLEARCAMERASTACK_OFFSET UNITYSDK_OFFSET(0x1D2FE890)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_FREEZETHECAMERA_OFFSET UNITYSDK_OFFSET(0x1D2FF3E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_GETCAMERARENDERTYPE_OFFSET UNITYSDK_OFFSET(0x1D2FDB90)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_GETCAMERASTACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1D2FE2D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_GETCAMERASTACK_OFFSET UNITYSDK_OFFSET(0x1D2FE340)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_GETRENDERTOFINALTARGET_OFFSET UNITYSDK_OFFSET(0x1D2FE5C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_GETUNIVERSALADDITIONALCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1D2FD890)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_INSERTCAMERATOSTACK_OFFSET UNITYSDK_OFFSET(0x1D2FE3A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_REMOVECAMERAFROMSTACK_OFFSET UNITYSDK_OFFSET(0x1D2FDC50)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETANTIALIASINGQUALITY_OFFSET UNITYSDK_OFFSET(0x1D2FF120)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETANTIALIASING_OFFSET UNITYSDK_OFFSET(0x1D2FF0C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETAPPLYLUTAFTEREVERYTHING_OFFSET UNITYSDK_OFFSET(0x1D2FEE70)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETBLACKCANVAS_OFFSET UNITYSDK_OFFSET(0x1D2FE920)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETCAMERARENDERTYPE_OFFSET UNITYSDK_OFFSET(0x1D2FDBF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETCOLORBUFFERUSEALPHA_OFFSET UNITYSDK_OFFSET(0x1D2FF060)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETDEPTHTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D2FE7D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETDLSSMODE_OFFSET UNITYSDK_OFFSET(0x1D2FF180)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1D2FE6B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETFRAMEGENMODE_OFFSET UNITYSDK_OFFSET(0x1D2FF1E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETFRAMEGENNUM_OFFSET UNITYSDK_OFFSET(0x1D2FF240)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETFSRFRAMEGENMODE_OFFSET UNITYSDK_OFFSET(0x1D2FF2A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETFSRSHARPENSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1D2FF300)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETHAS3DMODELS_OFFSET UNITYSDK_OFFSET(0x1D2FF000)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETHIDDENRENDERLAYERON_OFFSET UNITYSDK_OFFSET(0x1D2FEAC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETNORMALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D2FE830)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETOPAQUETEXTURE_OFFSET UNITYSDK_OFFSET(0x1D2FE770)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETPOSTPROCESSING_OFFSET UNITYSDK_OFFSET(0x1D2FE4A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETRENDERSHADOW_OFFSET UNITYSDK_OFFSET(0x1D2FE710)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETRENDERTOFINALTARGET_OFFSET UNITYSDK_OFFSET(0x1D2FE560)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETRENDERVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1D2FEED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETRENDERWATER_OFFSET UNITYSDK_OFFSET(0x1D2FEFA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETTAASHARPENSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1D2FF370)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETUIFXEXTRAALPHAWEIGHT_OFFSET UNITYSDK_OFFSET(0x1D2FEF30)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETVOLUMELAYERMASK_OFFSET UNITYSDK_OFFSET(0x1D2FE500)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_TRIMEMPTYCAMERAFROMSTACK_OFFSET UNITYSDK_OFFSET(0x1D2FEC30)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_UNFREEZETHECAMERA_OFFSET UNITYSDK_OFFSET(0x1D2FF450)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CameraExtensions_TypeDefinitionIndex = 26985;

	class CameraExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* GetUniversalAdditionalCameraData(::UnityEngine::Camera* camera)
		{
			return ((::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_GETUNIVERSALADDITIONALCAMERADATA_OFFSET))(camera);
		}

		static ::UnityEngine::NAPRenderPipeline0::CameraRenderType GetCameraRenderType(::UnityEngine::Camera* camera)
		{
			return ((::UnityEngine::NAPRenderPipeline0::CameraRenderType(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_GETCAMERARENDERTYPE_OFFSET))(camera);
		}

		static ::System::Void SetCameraRenderType(::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::CameraRenderType cameraRenderType)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::CameraRenderType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETCAMERARENDERTYPE_OFFSET))(camera, cameraRenderType);
		}

		static ::System::Boolean RemoveCameraFromStack(::UnityEngine::Camera* camera, ::UnityEngine::Camera* targetCamera)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_REMOVECAMERAFROMSTACK_OFFSET))(camera, targetCamera);
		}

		static ::System::Void AddCameraToStack(::UnityEngine::Camera* camera, ::UnityEngine::Camera* targetCamera)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_ADDCAMERATOSTACK_OFFSET))(camera, targetCamera);
		}

		static ::System::Int32 GetCameraStackCount(::UnityEngine::Camera* camera)
		{
			return ((::System::Int32(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_GETCAMERASTACKCOUNT_OFFSET))(camera);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Camera*>* GetCameraStack(::UnityEngine::Camera* camera)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Camera*>*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_GETCAMERASTACK_OFFSET))(camera);
		}

		static ::System::Void InsertCameraToStack(::UnityEngine::Camera* camera, ::UnityEngine::Camera* targetCamera, ::System::Int32 targetIndex)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_INSERTCAMERATOSTACK_OFFSET))(camera, targetCamera, targetIndex);
		}

		static ::System::Void SetPostProcessing(::UnityEngine::Camera* camera, ::System::Boolean isOn)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETPOSTPROCESSING_OFFSET))(camera, isOn);
		}

		static ::System::Void SetVolumeLayerMask(::UnityEngine::Camera* camera, ::System::Int32 layerMask)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETVOLUMELAYERMASK_OFFSET))(camera, layerMask);
		}

		static ::System::Void SetRenderToFinalTarget(::UnityEngine::Camera* camera, ::System::Boolean renderToFinalTarget)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETRENDERTOFINALTARGET_OFFSET))(camera, renderToFinalTarget);
		}

		static ::System::Boolean GetRenderToFinalTarget(::UnityEngine::Camera* camera)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_GETRENDERTOFINALTARGET_OFFSET))(camera);
		}

		static ::System::Void SetDrawGizmos(::UnityEngine::Camera* camera, ::System::Boolean isOn)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETDRAWGIZMOS_OFFSET))(camera, isOn);
		}

		static ::System::Void SetRenderShadow(::UnityEngine::Camera* camera, ::System::Boolean isOn)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETRENDERSHADOW_OFFSET))(camera, isOn);
		}

		static ::System::Void SetOpaqueTexture(::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::CameraOverrideOption option)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::CameraOverrideOption))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETOPAQUETEXTURE_OFFSET))(camera, option);
		}

		static ::System::Void SetDepthTexture(::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::CameraOverrideOption option)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::CameraOverrideOption))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETDEPTHTEXTURE_OFFSET))(camera, option);
		}

		static ::System::Void SetNormalTexture(::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::CameraOverrideOption option)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::CameraOverrideOption))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETNORMALTEXTURE_OFFSET))(camera, option);
		}

		static ::System::Void ClearCameraStack(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_CLEARCAMERASTACK_OFFSET))(camera);
		}

		static ::System::Void SetBlackCanvas(::UnityEngine::Camera* camera, ::System::Boolean isOn)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETBLACKCANVAS_OFFSET))(camera, isOn);
		}

		static ::System::Void SetHiddenRenderLayerOn(::UnityEngine::Camera* camera, ::System::Boolean isOn)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETHIDDENRENDERLAYERON_OFFSET))(camera, isOn);
		}

		static ::System::Void TrimEmptyCameraFromStack(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_TRIMEMPTYCAMERAFROMSTACK_OFFSET))(camera);
		}

		static ::System::Void SetApplyLUTAfterEverything(::UnityEngine::Camera* camera, ::System::Boolean isOn)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETAPPLYLUTAFTEREVERYTHING_OFFSET))(camera, isOn);
		}

		static ::System::Void SetRenderVolumetricFog(::UnityEngine::Camera* camera, ::System::Boolean isOn)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETRENDERVOLUMETRICFOG_OFFSET))(camera, isOn);
		}

		static ::System::Void SetUIFxExtraAlphaWeight(::UnityEngine::Camera* camera, ::System::Single weight)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETUIFXEXTRAALPHAWEIGHT_OFFSET))(camera, weight);
		}

		static ::System::Void SetRenderWater(::UnityEngine::Camera* camera, ::System::Boolean isOn)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETRENDERWATER_OFFSET))(camera, isOn);
		}

		static ::System::Void SetHas3DModels(::UnityEngine::Camera* camera, ::System::Boolean isOn)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETHAS3DMODELS_OFFSET))(camera, isOn);
		}

		static ::System::Void SetColorBufferUseAlpha(::UnityEngine::Camera* camera, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETCOLORBUFFERUSEALPHA_OFFSET))(camera, value);
		}

		static ::System::Void SetAntialiasing(::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::AntialiasingMode value)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::AntialiasingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETANTIALIASING_OFFSET))(camera, value);
		}

		static ::System::Void SetAntialiasingQuality(::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::AntialiasingQuality value)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::AntialiasingQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETANTIALIASINGQUALITY_OFFSET))(camera, value);
		}

		static ::System::Void SetDLSSMode(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::DLSSQualityMode value)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::DLSSQualityMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETDLSSMODE_OFFSET))(camera, value);
		}

		static ::System::Void SetFrameGenMode(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::DLSSGQualityMode value)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::DLSSGQualityMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETFRAMEGENMODE_OFFSET))(camera, value);
		}

		static ::System::Void SetFrameGenNum(::UnityEngine::Camera* camera, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETFRAMEGENNUM_OFFSET))(camera, value);
		}

		static ::System::Void SetFSRFrameGenMode(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::FSRFGQualityMode value)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::FSRFGQualityMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETFSRFRAMEGENMODE_OFFSET))(camera, value);
		}

		static ::System::Void SetFSRSharpenStrength(::UnityEngine::Camera* camera, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETFSRSHARPENSTRENGTH_OFFSET))(camera, value);
		}

		static ::System::Void SetTaaSharpenStrength(::UnityEngine::Camera* camera, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETTAASHARPENSTRENGTH_OFFSET))(camera, value);
		}

		static ::System::Void FreezeTheCamera(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_FREEZETHECAMERA_OFFSET))(camera);
		}

		static ::System::Void UnFreezeTheCamera(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_UNFREEZETHECAMERA_OFFSET))(camera);
		}
	};
}
