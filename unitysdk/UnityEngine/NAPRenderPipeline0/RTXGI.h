#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTXGI_QualityLevel.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTXRenderer.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleObjectT_1; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D12A3D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GETDEFAULTRAYBUDGET_OFFSET UNITYSDK_OFFSET(0x1D12A260)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GETDEFAULTRESOLUTIONSCALE_OFFSET UNITYSDK_OFFSET(0x1D12A240)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_ISRTXBUFFERVALID_OFFSET UNITYSDK_OFFSET(0x1D12A3A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RELEASEOUTSCOPEGLOBALTEXTURES_OFFSET UNITYSDK_OFFSET(0x1D133400)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RESETTOPRESET_OFFSET UNITYSDK_OFFSET(0x1D12A280)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RTXGIENABLED_OFFSET UNITYSDK_OFFSET(0x1D12A180)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D133570)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D133520)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXGI_TypeDefinitionIndex = 5795;

	class RTXGI : public ::UnityEngine::NAPRenderPipeline0::RTXRenderer
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>** StaticGet_RTXGIRoughnessLut()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5080);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>** StaticGet_RTXGILut()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5088);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_EnableRTXGI()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5090);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXGIHighQualityShader()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5098);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIResolutionScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x50A0);
		}
		static ::UnityEngine::Material** StaticGet_rtxgiMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x50A8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIBoost()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x50B0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>** StaticGet_RTXGIMetallicLut()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x50B8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIResponseSpeed()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x50C0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXGIVisualizeMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x50C8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXGIQualityPreset()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x50D0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIDISSSReshade()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x50D8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIDisableMultiBounce()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x50E0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIAddLocallightScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x50E8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIAddLocallightMaxDist()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x50F0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIRaySort()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x50F8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIAddLocallightDelta()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5100);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIApplyGIInPass()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5108);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISpecBoost()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5110);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISkyDiffuseScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5118);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXGISubstepNum()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5120);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIShadingTraceShadow()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5128);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIMicroAO()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5130);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>** StaticGet_RTXGIMultiBounceAlbedoLut()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5138);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIRayBudget()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5140);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIMultiBounceScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5148);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISplitSpecThreshold()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5150);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXGIRaySortPassNum()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5158);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISkySpecularScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5160);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIFloatBufferFormat()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5168);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIAddLocallightMinDist()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5170);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIDISSSRT()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5178);
		}
		static ::System::Boolean* StaticGet_s_bHasOutScopeTexture()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x2930);
		}
		static ::System::Int32* StaticGet_EnableForwardGBufferId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x2934);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI__CCTOR_OFFSET))();
		}

		static ::System::Boolean RTXGIEnabled(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RTXGIENABLED_OFFSET))(renderingData);
		}

		static ::System::Single GetDefaultResolutionScale(::UnityEngine::NAPRenderPipeline0::RTXGI_QualityLevel qualityPreset)
		{
			return ((::System::Single(*)(::UnityEngine::NAPRenderPipeline0::RTXGI_QualityLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GETDEFAULTRESOLUTIONSCALE_OFFSET))(qualityPreset);
		}

		static ::System::Single GetDefaultRayBudget(::UnityEngine::NAPRenderPipeline0::RTXGI_QualityLevel qualityPreset)
		{
			return ((::System::Single(*)(::UnityEngine::NAPRenderPipeline0::RTXGI_QualityLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GETDEFAULTRAYBUDGET_OFFSET))(qualityPreset);
		}

		static ::System::Void ResetToPreset(::UnityEngine::NAPRenderPipeline0::RTXGI_QualityLevel qualityPreset)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::RTXGI_QualityLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RESETTOPRESET_OFFSET))(qualityPreset);
		}

		static ::System::Boolean IsRTXBufferValid(::UnityEngine::ComputeBuffer*& buffer)
		{
			return ((::System::Boolean(*)(::UnityEngine::ComputeBuffer*&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_ISRTXBUFFERVALID_OFFSET))(buffer);
		}

		static ::System::Boolean Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean adjustLocalLight, ::UnityEngine::Rendering::RenderTargetIdentifier target, ::UnityEngine::Rendering::RenderTargetIdentifier targetAdjustLocalLight)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_EXECUTE_OFFSET))(context, renderingData, adjustLocalLight, target, targetAdjustLocalLight);
		}

		static ::System::Void ReleaseOutScopeGlobalTextures(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RELEASEOUTSCOPEGLOBALTEXTURES_OFFSET))(cmd);
		}
	};
}
