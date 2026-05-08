#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/RTXAOPass_RTXAOMode.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine::Experimental::Rendering { class RayTracingShader; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class RTXAOPass_HistoryBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_BUILDSPATIALPARAMS_OFFSET UNITYSDK_OFFSET(0x1AD1AA80)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_CALCULATEPIXELSPREADANGLETANGENT_OFFSET UNITYSDK_OFFSET(0x1AD1A9A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_CALCULATEZBUFFERPARAMS_OFFSET UNITYSDK_OFFSET(0x1AD1ADD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD194B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_DODENOISE_OFFSET UNITYSDK_OFFSET(0x1AD16DF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_ENSUREINTERMEDIATETARGETS_OFFSET UNITYSDK_OFFSET(0x1AD18910)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_ENSUREVALIDATIONBUFFER_OFFSET UNITYSDK_OFFSET(0x1AD1A6F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AD17200)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_BILATERALSPATIALREADY_OFFSET UNITYSDK_OFFSET(0x1AD16140)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_DENOISERREADY_OFFSET UNITYSDK_OFFSET(0x1AD15FB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_HARDWARETRACEREADY_OFFSET UNITYSDK_OFFSET(0x1AD16590)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_INLINETRACEREADY_OFFSET UNITYSDK_OFFSET(0x1AD162B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_SCREENSPACETRACEREADY_OFFSET UNITYSDK_OFFSET(0x1AD16420)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RELEASEINTERMEDIATETARGETS_OFFSET UNITYSDK_OFFSET(0x1AD19500)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RELEASERT_OFFSET UNITYSDK_OFFSET(0x1AD1AD80)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RESOLVEREQUESTEDMODE_OFFSET UNITYSDK_OFFSET(0x1AD18840)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RUNDENOISER_OFFSET UNITYSDK_OFFSET(0x1AD16FC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RUNINLINETRACE_OFFSET UNITYSDK_OFFSET(0x1AD18C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RUNSCREENSPACETRACE_OFFSET UNITYSDK_OFFSET(0x1AD19090)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RUNTEMPORALSPATIALDENOISER_OFFSET UNITYSDK_OFFSET(0x1AD196C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_SETDEFAULTAMBIENTOCCLUSION_OFFSET UNITYSDK_OFFSET(0x1AD186A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD1AED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD166F0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXAOPass_TypeDefinitionIndex = 30210;

	class RTXAOPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXAOConsoleRayLength()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x238B0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXAOConsoleDenoiser()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x238B8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXAOMinOcc()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x238C0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXAOConsoleIntensity()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x238C8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXAOConsoleRayBias()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x238D0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXAOConsoleQuality()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x238D8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXAOConsoleDownsample()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x238E0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXAOConsoleDenoiserRadius()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x238E8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXAOConsoleMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x238F0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXAOConsoleSampleCount()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x238F8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXAOConsoleDenoiserMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXAOPass_TypeDefinitionIndex)->GetStaticField(0x23900);
		}
		// static const ::System::String* RTXAOProfilerTag; // 0x0
		// static const ::System::String* RTXAOShaderPassName; // 0x0
		// static const ::System::Int32 RTXAOThreadGroupSize = 0x8; // 0x0
		// static const ::System::String* RTXAOInlineKernelName; // 0x0
		// static const ::System::String* RTXAOScreenSpaceKernelName; // 0x0
		// static const ::System::String* RTXAOHardwareRayGenName; // 0x0
		// static const ::System::String* RTXAOBilateralSpatialKernelName; // 0x0
		::UnityEngine::NAPRenderPipeline0::RTHandle* m_ValidationBuffer; // 0xA8
		::UnityEngine::Rendering::Universal::RTXAOPass_HistoryBuffer* m_CurHistory; // 0xB0
		::UnityEngine::NAPRenderPipeline0::RTHandle* m_Intermediate0; // 0xB8
		::UnityEngine::NAPRenderPipeline0::RTHandle* m_Intermediate1; // 0xC0
		::UnityEngine::ComputeShader* m_InlineTraceShader; // 0xC8
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_TraceSampler; // 0xD0
		::UnityEngine::Experimental::Rendering::RayTracingShader* m_RayTracingShader; // 0xD8
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_DenoiseSampler; // 0xE0
		::UnityEngine::ComputeShader* m_DenoiseShader; // 0xE8
		::System::Int32 m_rtWidth; // 0xF0
		::System::Int32 m_ValidationKernel; // 0xF4
		::System::Int32 m_TemporalKernel; // 0xF8
		::System::Int32 m_BilateralSpatialKernel; // 0xFC
		::System::Int32 m_ScreenSpaceKernel; // 0x100
		::System::Boolean m_Initialized; // 0x104
		::System::Boolean m_HardwareTracingReady; // 0x105
		::System::Boolean m_CurIsFirstTime; // 0x106
		::System::Int32 m_InlineTraceKernel; // 0x108
		::System::Int32 m_CopyHistoryKernel; // 0x10C
		::System::Int32 m_rtHeight; // 0x110
		::System::Int32 m_SpatialKernel; // 0x114

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::Experimental::Rendering::RayTracingShader* rayTracingShader, ::UnityEngine::ComputeShader* denoiseShader, ::UnityEngine::ComputeShader* inlineTraceShader)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::Experimental::Rendering::RayTracingShader*, ::UnityEngine::ComputeShader*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, rayTracingShader, denoiseShader, inlineTraceShader);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS__CCTOR_OFFSET))();
		}

		::System::Boolean get_DenoiserReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_DENOISERREADY_OFFSET))(this);
		}

		::System::Boolean get_BilateralSpatialReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_BILATERALSPATIALREADY_OFFSET))(this);
		}

		::System::Boolean get_InlineTraceReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_INLINETRACEREADY_OFFSET))(this);
		}

		::System::Boolean get_ScreenSpaceTraceReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_SCREENSPACETRACEREADY_OFFSET))(this);
		}

		::System::Boolean get_HardwareTraceReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_GET_HARDWARETRACEREADY_OFFSET))(this);
		}

		::System::Void DoDenoise(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_DODENOISE_OFFSET))(this, cmd, renderingData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_DISPOSE_OFFSET))(this);
		}

		::System::Void RunInlineTrace(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::RTXAOPass_HistoryBuffer* history, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RTXAOPass_HistoryBuffer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RUNINLINETRACE_OFFSET))(this, cmd, history, camera);
		}

		::System::Void RunScreenSpaceTrace(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::RTXAOPass_HistoryBuffer* history, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RTXAOPass_HistoryBuffer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RUNSCREENSPACETRACE_OFFSET))(this, cmd, history, camera);
		}

		::System::Void RunDenoiser(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::RTXAOPass_HistoryBuffer* history, ::System::Boolean forceHistoryReset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::RTXAOPass_HistoryBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RUNDENOISER_OFFSET))(this, cmd, renderingData, history, forceHistoryReset);
		}

		::System::Void RunTemporalSpatialDenoiser(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::RTXAOPass_HistoryBuffer* history, ::UnityEngine::Camera* camera, ::System::Boolean forceHistoryReset, ::System::Boolean useBilateralSpatial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::RTXAOPass_HistoryBuffer*, ::UnityEngine::Camera*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RUNTEMPORALSPATIALDENOISER_OFFSET))(this, cmd, renderingData, history, camera, forceHistoryReset, useBilateralSpatial);
		}

		::UnityEngine::Vector4 BuildSpatialParams()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_BUILDSPATIALPARAMS_OFFSET))(this);
		}

		::System::Void EnsureIntermediateTargets(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_ENSUREINTERMEDIATETARGETS_OFFSET))(this, width, height);
		}

		::System::Void ReleaseIntermediateTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RELEASEINTERMEDIATETARGETS_OFFSET))(this);
		}

		static ::UnityEngine::Vector4 CalculateZBufferParams(::UnityEngine::Camera* camera)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_CALCULATEZBUFFERPARAMS_OFFSET))(camera);
		}

		static ::System::Void ReleaseRT(::UnityEngine::NAPRenderPipeline0::RTHandle*& handle)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::RTHandle*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RELEASERT_OFFSET))(handle);
		}

		::System::Void EnsureValidationBuffer(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_ENSUREVALIDATIONBUFFER_OFFSET))(this, width, height);
		}

		static ::System::Void SetDefaultAmbientOcclusion(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_SETDEFAULTAMBIENTOCCLUSION_OFFSET))(cmd);
		}

		static ::UnityEngine::Rendering::Universal::RTXAOPass_RTXAOMode ResolveRequestedMode(::UnityEngine::Rendering::Universal::RTXAOPass_RTXAOMode requested, ::System::Boolean hardwareAvailable, ::System::Boolean inlineAvailable, ::System::Boolean screenSpaceAvailable)
		{
			return ((::UnityEngine::Rendering::Universal::RTXAOPass_RTXAOMode(*)(::UnityEngine::Rendering::Universal::RTXAOPass_RTXAOMode, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_RESOLVEREQUESTEDMODE_OFFSET))(requested, hardwareAvailable, inlineAvailable, screenSpaceAvailable);
		}

		static ::System::Single CalculatePixelSpreadAngleTangent(::UnityEngine::Camera* camera)
		{
			return ((::System::Single(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAOPASS_CALCULATEPIXELSPREADANGLETANGENT_OFFSET))(camera);
		}
	};
}
