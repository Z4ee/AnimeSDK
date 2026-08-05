#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTXRenderer_RTXCommonShaderIDs.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RTXSHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA62AA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RTXSHADERIDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA62A40)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXGI_RTXShaderIDs_TypeDefinitionIndex = 5798;

	class RTXGI_RTXShaderIDs : public ::UnityEngine::NAPRenderPipeline0::RTXRenderer_RTXCommonShaderIDs
	{
	public:
		static ::System::Int32* StaticGet__RTXGISkyMultiplier()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23B0);
		}
		static ::System::Int32* StaticGet__RayPixelIdBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23B4);
		}
		static ::System::Int32* StaticGet__RWRayHitBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23B8);
		}
		static ::System::Int32* StaticGet__RTXGIAddLocallightMinDist()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23BC);
		}
		static ::System::Int32* StaticGet__IrradianceVolume()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23C0);
		}
		static ::System::Int32* StaticGet__RTXGIEnableLut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23C4);
		}
		static ::System::Int32* StaticGet__RWPackedRayInfo0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23C8);
		}
		static ::System::Int32* StaticGet__RWPackedRayInfo1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23CC);
		}
		static ::System::Int32* StaticGet__SmoothnessThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23D0);
		}
		static ::System::Int32* StaticGet__RWMomentum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23D4);
		}
		static ::System::Int32* StaticGet__RWSceneDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23D8);
		}
		static ::System::Int32* StaticGet__RWRaySortBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23DC);
		}
		static ::System::Int32* StaticGet__BitShift()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23E0);
		}
		static ::System::Int32* StaticGet__RTXAddSceneColorTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23E4);
		}
		static ::System::Int32* StaticGet__RTXGIEnableMetallicLut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23E8);
		}
		static ::System::Int32* StaticGet__RWSceneColorTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23EC);
		}
		static ::System::Int32* StaticGet__RWReprojectionWeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23F0);
		}
		static ::System::Int32* StaticGet__RWTemporalReservoir()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23F4);
		}
		static ::System::Int32* StaticGet__RayAABBBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23F8);
		}
		static ::System::Int32* StaticGet__HistorySpecResult()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x23FC);
		}
		static ::System::Int32* StaticGet__RTXGIAddLocallightScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2400);
		}
		static ::System::Int32* StaticGet__RaySortBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2404);
		}
		static ::System::Int32* StaticGet__NoisyResult()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2408);
		}
		static ::System::Int32* StaticGet__SpecNoisyResult()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x240C);
		}
		static ::System::Int32* StaticGet__RayHitBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2410);
		}
		static ::System::Int32* StaticGet__HistorySceneNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2414);
		}
		static ::System::Int32* StaticGet__RTXGIResponseSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2418);
		}
		static ::System::Int32* StaticGet__ReprojectedHistory()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x241C);
		}
		static ::System::Int32* StaticGet__RWIrradianceVolume()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2420);
		}
		static ::System::Int32* StaticGet__RWIndirectBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2424);
		}
		static ::System::Int32* StaticGet__RTXGIEnableForwardGBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2428);
		}
		static ::System::Int32* StaticGet__RTXGIDisableSSReshade()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x242C);
		}
		static ::System::Int32* StaticGet__RTXGIAddLocallightDelta()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2430);
		}
		static ::System::Int32* StaticGet__Resolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2434);
		}
		static ::System::Int32* StaticGet__FrameIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2438);
		}
		static ::System::Int32* StaticGet__SceneForwardDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x243C);
		}
		static ::System::Int32* StaticGet__RTXGIMicroAO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2440);
		}
		static ::System::Int32* StaticGet__RWNoisyResultWithMip()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2444);
		}
		static ::System::Int32* StaticGet__RTXGIMultiBounceScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2448);
		}
		static ::System::Int32* StaticGet__PackedSpecRayInfoBufferCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x244C);
		}
		static ::System::Int32* StaticGet__RWHistoryResult()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2450);
		}
		static ::System::Int32* StaticGet__RTXGISH1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2454);
		}
		static ::System::Int32* StaticGet__RTXGISkyMultiplierSpec()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2458);
		}
		static ::System::Int32* StaticGet__RTXGI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x245C);
		}
		static ::System::Int32* StaticGet__RTXGIAddLocallightMaxDist()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2460);
		}
		static ::System::Int32* StaticGet__RTXGIEnableMultiBounceAlbedoLut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2464);
		}
		static ::System::Int32* StaticGet__RWRayAllocatorBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2468);
		}
		static ::System::Int32* StaticGet__RTXGIMetallicLut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x246C);
		}
		static ::System::Int32* StaticGet__ActualDispatchGroupId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2470);
		}
		static ::System::Int32* StaticGet__TemporalReservoir()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2474);
		}
		static ::System::Int32* StaticGet__IrradianceVolumeCenter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2478);
		}
		static ::System::Int32* StaticGet__RTXGISpecBoost()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x247C);
		}
		static ::System::Int32* StaticGet__RTXGIShadingTraceShadow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2480);
		}
		static ::System::Int32* StaticGet__RWSpecNoisyResult()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2484);
		}
		static ::System::Int32* StaticGet__SpatialReservoir()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2488);
		}
		static ::System::Int32* StaticGet__SceneColorTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x248C);
		}
		static ::System::Int32* StaticGet__HistorySceneForwardDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2490);
		}
		static ::System::Int32* StaticGet__GroupPayloads()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2494);
		}
		static ::System::Int32* StaticGet__FakedHistoryColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2498);
		}
		static ::System::Int32* StaticGet__RayBudget()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x249C);
		}
		static ::System::Int32* StaticGet__SceneDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24A0);
		}
		static ::System::Int32* StaticGet__DataIn()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24A4);
		}
		static ::System::Int32* StaticGet__DispatchThreadNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24A8);
		}
		static ::System::Int32* StaticGet__SortDispatchArgs()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24AC);
		}
		static ::System::Int32* StaticGet__ReprojectionWeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24B0);
		}
		static ::System::Int32* StaticGet__GroupSums()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24B4);
		}
		static ::System::Int32* StaticGet__PackedRayInfo0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24B8);
		}
		static ::System::Int32* StaticGet__NoisyResultWithMip()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24BC);
		}
		static ::System::Int32* StaticGet__Data()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24C0);
		}
		static ::System::Int32* StaticGet__RWSceneForwardDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24C4);
		}
		static ::System::Int32* StaticGet__RWNoisyResult()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24C8);
		}
		static ::System::Int32* StaticGet__RWRayAABBBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24CC);
		}
		static ::System::Int32* StaticGet__HistorySceneDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24D0);
		}
		static ::System::Int32* StaticGet__HistorySceneForwardNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24D4);
		}
		static ::System::Int32* StaticGet__RayAllocatorBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24D8);
		}
		static ::System::Int32* StaticGet__SceneNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24DC);
		}
		static ::System::Int32* StaticGet__RTXGIBoost()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24E0);
		}
		static ::System::Int32* StaticGet__LastVPInv()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24E4);
		}
		static ::System::Int32* StaticGet__MaskResult()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24E8);
		}
		static ::System::Int32* StaticGet__RWRTXGISH0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24EC);
		}
		static ::System::Int32* StaticGet__RayPixelIdBufferCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24F0);
		}
		static ::System::Int32* StaticGet__DataOut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24F4);
		}
		static ::System::Int32* StaticGet__SortDataNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24F8);
		}
		static ::System::Int32* StaticGet__Momentum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x24FC);
		}
		static ::System::Int32* StaticGet__RTXGIQualityPreset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2500);
		}
		static ::System::Int32* StaticGet__RayHitBufferCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2504);
		}
		static ::System::Int32* StaticGet__RWPackedSpecRayInfoBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2508);
		}
		static ::System::Int32* StaticGet__RWRTXAddSceneColorTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x250C);
		}
		static ::System::Int32* StaticGet__RWSceneForwardNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2510);
		}
		static ::System::Int32* StaticGet__HistoryResult()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2514);
		}
		static ::System::Int32* StaticGet__RWRTXGISH1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2518);
		}
		static ::System::Int32* StaticGet__RTXGILut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x251C);
		}
		static ::System::Int32* StaticGet__RTXGIRougnessLut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2520);
		}
		static ::System::Int32* StaticGet__LastVP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2524);
		}
		static ::System::Int32* StaticGet__PackedSpecRayInfoBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2528);
		}
		static ::System::Int32* StaticGet__RWSceneNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x252C);
		}
		static ::System::Int32* StaticGet__RWRayPixelIdBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2530);
		}
		static ::System::Int32* StaticGet__HistorySceneColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2534);
		}
		static ::System::Int32* StaticGet__RWHistorySpecResult()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2538);
		}
		static ::System::Int32* StaticGet__RWSceneForwardMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x253C);
		}
		static ::System::Int32* StaticGet__LastCameraPos()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2540);
		}
		static ::System::Int32* StaticGet__DebugTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2544);
		}
		static ::System::Int32* StaticGet__RTXGIMultiBounceAlbedoLut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2548);
		}
		static ::System::Int32* StaticGet__RTXGIEnableRoughnessLut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x254C);
		}
		static ::System::Int32* StaticGet__RTXGISH0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2550);
		}
		static ::System::Int32* StaticGet__SceneForwardMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2554);
		}
		static ::System::Int32* StaticGet__SceneForwardNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2558);
		}
		static ::System::Int32* StaticGet__PackedRayInfo1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x255C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RTXSHADERIDS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RTXSHADERIDS__CCTOR_OFFSET))();
		}
	};
}
