#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableCullingParameters.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::NAPRenderPipeline0 { class ConsoleVariableBool; }

#define UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_NATIVEIMPL_ENABLELOCALLIGHTCACHEONCAMERA_OFFSET UNITYSDK_OFFSET(0x1D4279E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_NATIVEIMPL_EXECUTE_IMPL_OFFSET UNITYSDK_OFFSET(0x1D427710)
#define UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D427720)
#define UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_NATIVEIMPL_SETUPCULLINGPARAMETER_OFFSET UNITYSDK_OFFSET(0x1D427790)
#define UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_NATIVEIMPL_SETUP_OFFSET UNITYSDK_OFFSET(0x1D4276F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_NATIVEIMPL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D427AA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D427690)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PunctualLightShadowCasterPass_NativeImpl_TypeDefinitionIndex = 5717;

	class PunctualLightShadowCasterPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableBool** StaticGet_ForceAlwaysUpdate()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableBool**)Il2CppClass::FromTypeDefinitionIndex(PunctualLightShadowCasterPass_NativeImpl_TypeDefinitionIndex)->GetStaticField(0x5210);
		}

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_NATIVEIMPL__CCTOR_OFFSET))();
		}

		::System::Boolean Setup(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_NATIVEIMPL_SETUP_OFFSET))(this, renderingData);
		}

		static ::System::Void Execute_Impl(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_NATIVEIMPL_EXECUTE_IMPL_OFFSET))(context, renderingData, postCullRenderingData2);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		static ::System::Void SetupCullingParameter(::UnityEngine::Rendering::ScriptableCullingParameters& cullingParameters, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableCullingParameters&, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_NATIVEIMPL_SETUPCULLINGPARAMETER_OFFSET))(cullingParameters, cameraData);
		}

		static ::System::Void EnableLocalLightCacheOnCamera(::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::UInt32 sliceSize)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_NATIVEIMPL_ENABLELOCALLIGHTCACHEONCAMERA_OFFSET))(camera, cameraData, sliceSize);
		}
	};
}
