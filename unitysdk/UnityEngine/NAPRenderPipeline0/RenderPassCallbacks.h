#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::NAPRenderPipeline0 { class RenderPassCallbacks_GBufferEventCallback; }
namespace UnityEngine::NAPRenderPipeline0 { class RenderPassCallbacks_GBufferEventCallbackWithCmdBuffer; }
namespace UnityEngine::NAPRenderPipeline0 { class RenderPassCallbacks_RenderPassEventCallback1; }
namespace UnityEngine::NAPRenderPipeline0 { class RenderPassCallbacks_RenderPassEventCallback2; }
namespace UnityEngine::NAPRenderPipeline0 { class RenderPassCallbacks_RenderPassGetDummyGPUDataSize; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RenderPassCallbacks_TypeDefinitionIndex = 5692;

	class RenderPassCallbacks : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1** StaticGet_AfterDrawForwardGBufferPass()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x5780);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback** StaticGet_AfterGBufferDecal()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x5788);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback** StaticGet_AfterGBufferDepthCopy()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x5790);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback** StaticGet_BeforeHalfResOffScreenTransparentDraw()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x5798);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1** StaticGet_BeforeBeginRenderPassInDeferredPass()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x57A0);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassGetDummyGPUDataSize** StaticGet_GetDummyGPUDataSize()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassGetDummyGPUDataSize**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x57A8);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback2** StaticGet_InnerRenderShadowSlice()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback2**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x57B0);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1** StaticGet_AfterDrawOpaqueObjectsPass()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x57B8);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback** StaticGet_AfterGBufferOpaque()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x57C0);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallbackWithCmdBuffer** StaticGet_AfterGBufferHizTest()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallbackWithCmdBuffer**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x57C8);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1** StaticGet_AfterDeferredJustDirectLightPass()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x57D0);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1** StaticGet_BeforeDrawOpaqueObjectsPass()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x57D8);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1** StaticGet_AfterFirstDeferredShadingPass()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x57E0);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback** StaticGet_AfterHalfResOffScreenTransparentDraw()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x57E8);
		}
	};
}
