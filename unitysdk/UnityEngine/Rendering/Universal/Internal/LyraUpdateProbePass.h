#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraSectorUtils_Vector4Int.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/LyraUpdateProbePass_BLVClipmapData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/LyraUpdateProbePass_LyraVoxelLightCache.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/LyraUpdateProbePass_ProbeClipmapData.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_ALLOCATERESOURCE_OFFSET UNITYSDK_OFFSET(0x1CEF35E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_CHECKALLOCATEARGSBUFFER_OFFSET UNITYSDK_OFFSET(0x1CEF2EF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_CHECKALLOCATEBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1CEF2E60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_CHECKALLOCATEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CEF2D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1CEF7710)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_DISPATCHCOMPUTE_OFFSET UNITYSDK_OFFSET(0x1CEF48A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CEF7C80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_GETSDFAOLOWRESJITTEROFFSET_OFFSET UNITYSDK_OFFSET(0x1CEF7390)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_GET_ALLOCATED_OFFSET UNITYSDK_OFFSET(0x1CEF2D70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_PREVPROBEINDIRECTIONTEXTURE_OFFSET UNITYSDK_OFFSET(0x1CEF2CD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_PROBEINDIRECTIONTEXTURE_OFFSET UNITYSDK_OFFSET(0x1CEF2D20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SAFERELEASEANDRESET_OFFSET UNITYSDK_OFFSET(0x1CEFDEA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SDFAOUSEHALFRES_OFFSET UNITYSDK_OFFSET(0x1CEF7280)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETCOPYLYRASTATEPARAMS_OFFSET UNITYSDK_OFFSET(0x1CEF6A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETDEBUGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1CEF3000)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETLYRAPROBEGLOBALUNIFORMS_OFFSET UNITYSDK_OFFSET(0x1CEF5C60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1CEF75E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETVISUALIZEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1CEF5290)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SET_ALLOCATED_OFFSET UNITYSDK_OFFSET(0x1CEF2D80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_UPDATEBAKEDLIGHTVOLUME_OFFSET UNITYSDK_OFFSET(0x1CEF4DC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_UPDATEPROBECLIPMAPS_OFFSET UNITYSDK_OFFSET(0x1CEF49D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_UPDATEVOXELLIGHTCACHE_OFFSET UNITYSDK_OFFSET(0x1CEF6B90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEFDF40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF3230)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraUpdateProbePass_TypeDefinitionIndex = 26443;

	class LyraUpdateProbePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraDisableMultiBounce()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x203B0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraLightmapIntensity()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x203B8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerDispatchDeallocate()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x203C0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraDebugVoxelLightingMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x203C8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_MaxOcclusionDistance()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x203D0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraBounceDistanceExtinction()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x203D8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraTriggerProbeReCheck()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x203E0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraLightGridScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x203E8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerClearIndirectionTexture()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x203F0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraVisualizeResample()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x203F8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraDebugDrawDontClear()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20400);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerClearProbeUpdateAllocator()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20408);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraVisualizeProbeLighting()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20410);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraDebugCursorY()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20418);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraShowState()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20420);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_LyraVisualizeProbeMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20428);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraVisualizeProbe()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20430);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraSampleLightmap()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20438);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraSkyIntensity()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20440);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraDirectionalLightShadowDistance()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20448);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraQualityHigh()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20450);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerUpdateUsedProbes()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20458);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraDebugDrawFreeze()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20460);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraVisualizeTrace()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20468);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraFreezeProbeUpdate()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20470);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraLocalLightingSaturation()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20478);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraVisualizeLocalLight()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20480);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraVisualizeSDFAO()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20488);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraDebugVoxelLightingClipmap()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20490);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerClearVoxelCacheRequiresBuffer()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20498);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerResampleProbes()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x204A0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerRelocateProbes()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x204A8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraEnabled()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x204B0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerPrepareForRayTracing()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x204B8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerCollectNewProbes()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x204C0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraGIFade()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x204C8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraLocalLightingIntensity()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x204D0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraDirectionalLightingSaturation()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x204D8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerDeallocateProbes()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x204E0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerClearBuffer()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x204E8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraEnableReferenceMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x204F0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraDebugCursorX()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x204F8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerTraceRays()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20500);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerCollectRays()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20508);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraDebugSDFAO()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20510);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraDebugVoxeCache()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20518);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraDebugSDFLightingMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20520);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerPrepareProbesForProcessing()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20528);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_ScaleRadiusInWorldSpace()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20530);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraDebugDrawEnabled()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20538);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraApplyInDeferredPass()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20540);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraSkyPassThrough()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20548);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSampler()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20550);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraDisableLightCulling()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20558);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraProbeResampling()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20560);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraApplyScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20568);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerGenerateRays()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20570);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraSDFAOForceTemporal()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20578);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraOverrideDebugCursorPos()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20580);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_MaxViewDistance()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20588);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraVisualizeTraceLightCondition()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20590);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraVisualizeGI()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20598);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_SDFAOStrength()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x205A0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_LyraVisualizeSDFAOMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x205A8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraDirectionalLightingIntensity()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x205B0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraDebugVoxeCacheClipmap()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x205B8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraGIBoost()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x205C0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraMainLightIndirectMultiplier()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x205C8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraFullresApply()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x205D0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraRiseClipByDistanceInVisualizeSDFLighting()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x205D8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerUpdateProbeSH()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x205E0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraUseContactGI()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x205E8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraPerBounceScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x205F0);
		}
		static ::System::Int32* StaticGet_LyraQuality()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x5260);
		}
		// static const ::System::String* profileTag; // 0x0
		// static const ::System::Int32 InitializeFreeProbeBufferKernel = 0x0; // 0x0
		// static const ::System::Int32 CollectNewProbes = 0x3; // 0x0
		// static const ::System::Int32 PrepareProbesForProcessing = 0x4; // 0x0
		// static const ::System::Int32 RelocateProbes = 0x5; // 0x0
		// static const ::System::Int32 ResampleProbes = 0x6; // 0x0
		// static const ::System::Int32 DispatchDeallocate = 0x8; // 0x0
		// static const ::System::Int32 DeallocateProbes = 0x9; // 0x0
		// static const ::System::Int32 CollectRays = 0xA; // 0x0
		// static const ::System::Int32 GenerateRays = 0xD; // 0x0
		// static const ::System::Int32 PrepareForRayTracing = 0x10; // 0x0
		// static const ::System::Int32 UpdateProbeSH = 0x11; // 0x0
		// static const ::System::Int32 kernelInitializeVoxelLightCache = 0x13; // 0x0
		// static const ::System::Int32 PrepareVoxelLightCacheUpdate = 0x14; // 0x0
		// static const ::System::Int32 ReleaseVoxelLightCache = 0x15; // 0x0
		// static const ::System::Int32 LyraProbeVolumeSize = 0x20; // 0x0
		// static const ::System::Int32 LyraProbeClipmapCount = 0x6; // 0x0
		// static const ::System::Int32 LyraMaxProbeNum = 0x8000; // 0x0
		// static const ::System::Int32 LyraVoxelGridWidth = 0x20; // 0x0
		// static const ::System::Int32 LyraVoxelClipmapCount = 0x8; // 0x0
		// static const ::System::Int32 LyraMaxVoxelNum = 0x10000; // 0x0
		// static const ::System::Single LyraProbeSpacing; // 0x0
		// static const ::System::Int32 MaxNumRays = 0x57E40; // 0x0
		// static const ::System::Int32 LyraBakedLightingVolumeSize = 0x10; // 0x0
		// static const ::System::Int32 LyraBakedLightingVolumeClipCount = 0x3; // 0x0
		// static const ::System::Single LyraBakedLightingVolumeBaseCellSize; // 0x0
		// static const ::System::Int32 LYRA_MAX_CSM_LEVEL = 0x8; // 0x0
		::UnityEngine::ComputeShader* m_lyraUpdateProbesCS; // 0xA8
		::UnityEngine::ComputeBuffer* m_probeDeallocateArgsBuffer; // 0xB0
		::UnityEngine::ComputeBuffer* m_probeDebuggingBuffer; // 0xB8
		::UnityEngine::ComputeBuffer* m_freeProbeBuffer; // 0xC0
		::UnityEngine::ComputeBuffer* OutShaderDrawPrimitive; // 0xC8
		::UnityEngine::ComputeBuffer* m_probeEstimatorDataBuffer; // 0xD0
		::UnityEngine::ComputeBuffer* m_probeLightingSHBuffer; // 0xD8
		::UnityEngine::ComputeBuffer* m_rayTracingArgsBuffer; // 0xE0
		::UnityEngine::RenderTexture* m_probeIndirectionTexture; // 0xE8
		::UnityEngine::ComputeBuffer* m_probeAllocator; // 0xF0
		::UnityEngine::ComputeBuffer* m_vlcUpdateBuffer; // 0xF8
		::UnityEngine::ComputeBuffer* m_rayInfoBuffer; // 0x100
		::UnityEngine::Rendering::Universal::Internal::LyraUpdateProbePass_ProbeClipmapData m_probeClipmapData; // 0x108
		::UnityEngine::Material* m_lyraDebugMaterial; // 0x130
		::UnityEngine::ComputeBuffer* m_rayGenerationArgsBuffer; // 0x138
		::UnityEngine::ComputeBuffer* OutputShaderDrawIndirect; // 0x140
		::UnityEngine::ComputeBuffer* m_probeUpdateBuffer; // 0x148
		::UnityEngine::ComputeShader* m_lyraUpdateProbesAdditionalCS; // 0x150
		::UnityEngine::ComputeBuffer* m_vlcIndirectBuffer; // 0x158
		::UnityEngine::Rendering::Universal::Internal::LyraUpdateProbePass_LyraVoxelLightCache m_lyraVoxelLightCache; // 0x160
		::UnityEngine::ComputeBuffer* m_tracingResultBuffer; // 0x198
		::Il2CppArray<::UnityEngine::ComputeBuffer*>* m_BLVClipmapDataBuffer; // 0x1A0
		::UnityEngine::ComputeBuffer* m_probePositionBuffer; // 0x1A8
		::Il2CppArray<::System::UInt32>* _data; // 0x1B0
		::UnityEngine::ComputeBuffer* m_newProbeUpdateArgsBuffer; // 0x1B8
		::UnityEngine::RenderTexture* m_dummySDF; // 0x1C0
		::UnityEngine::ComputeBuffer* m_vlcReleaseBuffer; // 0x1C8
		::UnityEngine::ComputeBuffer* HisOutputShaderDrawIndirect; // 0x1D0
		::UnityEngine::RenderTexture* m_prevProbeIndirectionTexture; // 0x1D8
		::UnityEngine::Rendering::Universal::Internal::LyraUpdateProbePass_BLVClipmapData m_BLVClipmapData; // 0x1E0
		::UnityEngine::ComputeBuffer* HisOutShaderDrawPrimitive; // 0x208
		::UnityEngine::ComputeBuffer* m_freeProbeQueueBuffer; // 0x210
		::UnityEngine::ComputeBuffer* m_probeBuffer; // 0x218
		::Il2CppArray<::UnityEngine::ComputeBuffer*>* m_probeClipmapDataBuffer; // 0x220
		::UnityEngine::RenderTexture* m_debugClipMap; // 0x228
		::UnityEngine::ComputeBuffer* m_probeUpdateAllocator; // 0x230
		::System::Int32 UpdateUsedProbes; // 0x238
		::System::Int32 VoxelLightingKernelBase; // 0x23C
		::System::Int32 DebugProbeStride; // 0x240
		::System::Int32 ManageVoxelLightCacheBaseKernelID; // 0x244
		::System::Int32 BaseTraceRaysKernelIndex; // 0x248
		::System::Boolean m_historyValid; // 0x24C
		::System::Boolean m_isFirstFrame; // 0x24D
		::System::Boolean _Allocated_k__BackingField; // 0x24E
		::System::Int32 m_frameMod3; // 0x250

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::ComputeShader* lyraUpdateProbesCS, ::UnityEngine::ComputeShader* lyraUpdateProbesAdditionalCS, ::UnityEngine::Shader* lyraDebugShader)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::ComputeShader*, ::UnityEngine::ComputeShader*, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, lyraUpdateProbesCS, lyraUpdateProbesAdditionalCS, lyraDebugShader);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS__CCTOR_OFFSET))();
		}

		::UnityEngine::RenderTexture* PrevProbeIndirectionTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_PREVPROBEINDIRECTIONTEXTURE_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* ProbeIndirectionTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_PROBEINDIRECTIONTEXTURE_OFFSET))(this);
		}

		::System::Boolean get_Allocated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_GET_ALLOCATED_OFFSET))(this);
		}

		::System::Void set_Allocated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SET_ALLOCATED_OFFSET))(this, value);
		}

		::System::Boolean CheckAllocateBuffer(::UnityEngine::ComputeBuffer*& buffer, ::System::Int32 stride, ::System::Int32 count)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ComputeBuffer*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_CHECKALLOCATEBUFFER_OFFSET))(this, buffer, stride, count);
		}

		::System::Boolean CheckAllocateBuffer_1(::UnityEngine::ComputeBuffer*& buffer, ::System::Int32 stride, ::System::Int32 count, ::System::String* bufferName)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ComputeBuffer*&, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_CHECKALLOCATEBUFFER_1_OFFSET))(this, buffer, stride, count, bufferName);
		}

		::System::Boolean CheckAllocateArgsBuffer(::UnityEngine::ComputeBuffer*& buffer, ::System::Int32 stride, ::System::Int32 count, ::System::String* bufferName)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ComputeBuffer*&, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_CHECKALLOCATEARGSBUFFER_OFFSET))(this, buffer, stride, count, bufferName);
		}

		::System::Void SetDebugParameters(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* shader, ::System::Int32 kernel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETDEBUGPARAMETERS_OFFSET))(this, cmd, shader, kernel);
		}

		::System::Void AllocateResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_ALLOCATERESOURCE_OFFSET))(this);
		}

		::System::Void DispatchCompute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* computeShader, ::System::Int32 kernel, ::System::UInt32 X, ::System::UInt32 Y, ::System::UInt32 Z)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_DISPATCHCOMPUTE_OFFSET))(this, cmd, computeShader, kernel, X, Y, Z);
		}

		::System::Void UpdateProbeClipmaps(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_UPDATEPROBECLIPMAPS_OFFSET))(this, camera);
		}

		::System::Void UpdateBakedLightVolume(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_UPDATEBAKEDLIGHTVOLUME_OFFSET))(this, camera);
		}

		::System::Void SetVisualizeParameter(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::CameraData cameraData, ::UnityEngine::Material* debugVisualizeProbeMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::CameraData, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETVISUALIZEPARAMETER_OFFSET))(this, cmd, cameraData, debugVisualizeProbeMaterial);
		}

		::System::Void SetLyraProbeGlobalUniforms(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::CameraData cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::CameraData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETLYRAPROBEGLOBALUNIFORMS_OFFSET))(this, cmd, cameraData);
		}

		::System::Void SetCopyLyraStateParams(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* lyraDebugCS, ::System::Int32 copyLyraStateKernel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETCOPYLYRASTATEPARAMS_OFFSET))(this, cmd, lyraDebugCS, copyLyraStateKernel);
		}

		::System::Void UpdateVoxelLightCache(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* lyraUpdateProbeCS, ::UnityEngine::ComputeShader* lyraUpdateProbeAdditionalCS, ::UnityEngine::NAPRenderPipeline0::RenderingData renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::UnityEngine::ComputeShader*, ::UnityEngine::NAPRenderPipeline0::RenderingData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_UPDATEVOXELLIGHTCACHE_OFFSET))(this, cmd, lyraUpdateProbeCS, lyraUpdateProbeAdditionalCS, renderingData);
		}

		::System::Boolean SDFAOUseHalfRes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SDFAOUSEHALFRES_OFFSET))(this);
		}

		static ::LyraSector::LyraSectorUtils_Vector4Int GetSDFAOLowResJitterOffset(::System::Int32 FrameId)
		{
			return ((::LyraSector::LyraSectorUtils_Vector4Int(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_GETSDFAOLOWRESJITTEROFFSET_OFFSET))(FrameId);
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::CameraData cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETUP_OFFSET))(this, cameraData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void SafeReleaseAndReset(::UnityEngine::ComputeBuffer*& computeBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SAFERELEASEANDRESET_OFFSET))(this, computeBuffer);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_CLEANUP_OFFSET))(this);
		}
	};
}
