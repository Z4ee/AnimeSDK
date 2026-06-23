#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/Universal/PP_Quality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/PostProcessWeightedSampleSum_GaussianBlurPassData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class DynamicArray_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_ADDGAUSSIANBLURPASS_1_OFFSET UNITYSDK_OFFSET(0x1B0B86A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_ADDGAUSSIANBLURPASS_OFFSET UNITYSDK_OFFSET(0x1B0BA1D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_COMPUTE1DGAUSSIANFILTERKERNEL_OFFSET UNITYSDK_OFFSET(0x1B0B9CF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_GETBLURRADIUS_OFFSET UNITYSDK_OFFSET(0x1B0B9A50)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_GETCLAMPEDKERNELRADIUS_OFFSET UNITYSDK_OFFSET(0x1B0B9B80)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_GETINTEGERKERNELRADIUS_OFFSET UNITYSDK_OFFSET(0x1B0B9BF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_GETSAMPLECOUNTMAX_OFFSET UNITYSDK_OFFSET(0x1B0B9AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_NORMALDISTRIBUTIONUNSCALED_OFFSET UNITYSDK_OFFSET(0x1B0B9930)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0BA630)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PostProcessWeightedSampleSum_TypeDefinitionIndex = 26305;

	class PostProcessWeightedSampleSum : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::UnityEngine::Vector4>** StaticGet_PackedSampleOffset()
		{
			return (::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(PostProcessWeightedSampleSum_TypeDefinitionIndex)->GetStaticField(0x21C80);
		}
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_OffsetAndWeight()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(PostProcessWeightedSampleSum_TypeDefinitionIndex)->GetStaticField(0x21C88);
		}
		static ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::UnityEngine::Vector4>** StaticGet_SampleWeights()
		{
			return (::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(PostProcessWeightedSampleSum_TypeDefinitionIndex)->GetStaticField(0x21C90);
		}
		// static const ::System::Int32 MAX_FILTER_SAMPLES = 0x40; // 0x0
		// static const ::System::Int32 MAX_PACKED_SAMPLERS_OFFSET = 0x20; // 0x0
		// static const ::System::Int32 MAX_FILTER_COMPILE_TIME_SAMPLES = 0x20; // 0x0
		// static const ::System::Int32 MAX_FILTER_COMPILE_TIME_SAMPLES_IOS = 0xF; // 0x0
		// static const ::System::Int32 MAX_FILTER_COMPILE_TIME_SAMPLES_ES3_1 = 0x7; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM__CCTOR_OFFSET))();
		}

		static ::System::Single NormalDistributionUnscaled(::System::Single X, ::System::Single Sigma, ::System::Single CrossCenterWeight)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_NORMALDISTRIBUTIONUNSCALED_OFFSET))(X, Sigma, CrossCenterWeight);
		}

		static ::System::Single GetBlurRadius(::System::Int32 ViewSize, ::System::Single KernelSizePercent)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_GETBLURRADIUS_OFFSET))(ViewSize, KernelSizePercent);
		}

		static ::System::Int32 GetSampleCountMax(::UnityEngine::Rendering::Universal::PP_Quality quality)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::Universal::PP_Quality))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_GETSAMPLECOUNTMAX_OFFSET))(quality);
		}

		static ::System::Single GetClampedKernelRadius(::System::Int32 SampleCountMax, ::System::Single KernalRadius)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_GETCLAMPEDKERNELRADIUS_OFFSET))(SampleCountMax, KernalRadius);
		}

		static ::System::Int32 GetIntegerKernelRadius(::System::Int32 SampleCountMax, ::System::Single KernelRadius)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_GETINTEGERKERNELRADIUS_OFFSET))(SampleCountMax, KernelRadius);
		}

		static ::System::Int32 Compute1DGaussianFilterKernel(::Il2CppArray<::UnityEngine::Vector2>* OutOffsetAndWeight, ::System::Int32 SampleCountMax, ::System::Single KernelRadius, ::System::Single CrossCenterWeight)
		{
			return ((::System::Int32(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_COMPUTE1DGAUSSIANFILTERKERNEL_OFFSET))(OutOffsetAndWeight, SampleCountMax, KernelRadius, CrossCenterWeight);
		}

		static ::System::Void AddGaussianBlurPass(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier FilterInput, ::UnityEngine::Rendering::RenderTargetIdentifier FilterOutput, ::UnityEngine::Rendering::RenderTargetIdentifier Additive, ::System::Boolean CombineAdditive, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::UnityEngine::Vector4>* PackedSampleOffsets, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::UnityEngine::Vector4>* SampleWeights, ::UnityEngine::Material* mat, ::System::Int32 SampleCount)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Boolean, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::UnityEngine::Vector4>*, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::UnityEngine::Vector4>*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_ADDGAUSSIANBLURPASS_OFFSET))(cmd, FilterInput, FilterOutput, Additive, CombineAdditive, PackedSampleOffsets, SampleWeights, mat, SampleCount);
		}

		static ::System::Void AddGaussianBlurPass_1(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::PostProcessWeightedSampleSum_GaussianBlurPassData& passData, ::System::Single sampleAlignScale)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::PostProcessWeightedSampleSum_GaussianBlurPassData&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_ADDGAUSSIANBLURPASS_1_OFFSET))(cmd, passData, sampleAlignScale);
		}
	};
}
