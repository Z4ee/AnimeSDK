#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D33D0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ShaderIDs_TypeDefinitionIndex = 5809;

	class ShaderIDs : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet__ShadowColorArray()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x4B70);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__ShallowColorArray()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x4B78);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__BloomMipUp()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x4B80);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__BloomMipDown()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x4B88);
		}
		static ::System::Int32* StaticGet__FullscreenProjMat()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1520);
		}
		static ::System::Int32* StaticGet_MaximumBias()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1524);
		}
		static ::System::Int32* StaticGet__ScrFxDistortionTexUvMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1528);
		}
		static ::System::Int32* StaticGet__ScrFxDissolveAffects2Tone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x152C);
		}
		static ::System::Int32* StaticGet__RandomOpacity_ST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1530);
		}
		static ::System::Int32* StaticGet__ScrFxMaskUvMoveSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1534);
		}
		static ::System::Int32* StaticGet__LightAttenuation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1538);
		}
		static ::System::Int32* StaticGet__UserLut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x153C);
		}
		static ::System::Int32* StaticGet_cameraToWorldMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1540);
		}
		static ::System::Int32* StaticGet__SceneWaterPoolBoundBox()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1544);
		}
		static ::System::Int32* StaticGet__SSRTempTarget()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1548);
		}
		static ::System::Int32* StaticGet__TempMotionVector()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x154C);
		}
		static ::System::Int32* StaticGet__AdditionalMainLightSamplePoints()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1550);
		}
		static ::System::Int32* StaticGet__CAO_LightAngle()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1554);
		}
		static ::System::Int32* StaticGet__GaussianBlurTemp0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1558);
		}
		static ::System::Int32* StaticGet__AmbientOcclusionTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x155C);
		}
		static ::System::Int32* StaticGet__CloudNoise()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1560);
		}
		static ::System::Int32* StaticGet__InvViewProjMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1564);
		}
		static ::System::Int32* StaticGet__LensDirt_Params()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1568);
		}
		static ::System::Int32* StaticGet__SceneHeightMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x156C);
		}
		static ::System::Int32* StaticGet__PreOverlayCameraRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1570);
		}
		static ::System::Int32* StaticGet__ScrFxDissolveTexUvMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1574);
		}
		static ::System::Int32* StaticGet__VolumetricFogHistoryTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1578);
		}
		static ::System::Int32* StaticGet__SSSColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x157C);
		}
		static ::System::Int32* StaticGet__CAO_WorldToViewMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1580);
		}
		static ::System::Int32* StaticGet__DecalAtlas2DID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1584);
		}
		static ::System::Int32* StaticGet__WaterHorizonColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1588);
		}
		static ::System::Int32* StaticGet__OutputTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x158C);
		}
		static ::System::Int32* StaticGet__MirrorReflectionRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1590);
		}
		static ::System::Int32* StaticGet__PlaneHeightWS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1594);
		}
		static ::System::Int32* StaticGet__FresnelValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1598);
		}
		static ::System::Int32* StaticGet__InternalLut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x159C);
		}
		static ::System::Int32* StaticGet__Caustics_Tilling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15A0);
		}
		static ::System::Int32* StaticGet__CloudMiddleColorRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15A4);
		}
		static ::System::Int32* StaticGet__RainPuddleColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15A8);
		}
		static ::System::Int32* StaticGet__Highlights()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15AC);
		}
		static ::System::Int32* StaticGet__ScrFxRcpSoftRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15B0);
		}
		static ::System::Int32* StaticGet__Lut_Params_Char()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15B4);
		}
		static ::System::Int32* StaticGet__CameraDepthTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15B8);
		}
		static ::System::Int32* StaticGet__Bloom_Params()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15BC);
		}
		static ::System::Int32* StaticGet__DepthBufferMipCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15C0);
		}
		static ::System::Int32* StaticGet__TempTarget2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15C4);
		}
		static ::System::Int32* StaticGet_OutDepthClip()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15C8);
		}
		static ::System::Int32* StaticGet__NapEntityGPUData()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15CC);
		}
		static ::System::Int32* StaticGet_g_iLog2NumClusters()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15D0);
		}
		static ::System::Int32* StaticGet__WaterwaveScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15D4);
		}
		static ::System::Int32* StaticGet__CloudHeightOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15D8);
		}
		static ::System::Int32* StaticGet__RainDropRandomParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15DC);
		}
		static ::System::Int32* StaticGet__RainFlowParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15E0);
		}
		static ::System::Int32* StaticGet__SplitShadows()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15E4);
		}
		static ::System::Int32* StaticGet__Clamp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15E8);
		}
		static ::System::Int32* StaticGet__ssrParameters()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15EC);
		}
		static ::System::Int32* StaticGet__FadeDistance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15F0);
		}
		static ::System::Int32* StaticGet__RadialBlurBlurredRt()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15F4);
		}
		static ::System::Int32* StaticGet__PerObjectShadowOffsetWS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15F8);
		}
		static ::System::Int32* StaticGet__CloudShadowColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x15FC);
		}
		static ::System::Int32* StaticGet_t_DistanceParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1600);
		}
		static ::System::Int32* StaticGet__CAO_LightsIndexBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1604);
		}
		static ::System::Int32* StaticGet__FXCD_AlphaByLuminanceParams1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1608);
		}
		static ::System::Int32* StaticGet__OffScreenParticlesRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x160C);
		}
		static ::System::Int32* StaticGet__HalfResSpecular()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1610);
		}
		static ::System::Int32* StaticGet__HeightMapResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1614);
		}
		static ::System::Int32* StaticGet__SkyAngleLUTTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1618);
		}
		static ::System::Int32* StaticGet__FXCD_StarPower1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x161C);
		}
		static ::System::Int32* StaticGet__ScrFxScrDistUvSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1620);
		}
		static ::System::Int32* StaticGet__LightSpotAngle()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1624);
		}
		static ::System::Int32* StaticGet__MainTex0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1628);
		}
		static ::System::Int32* StaticGet__ScrFxDissolveTex_ST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x162C);
		}
		static ::System::Int32* StaticGet_DepthMipChain()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1630);
		}
		static ::System::Int32* StaticGet_DirtIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1634);
		}
		static ::System::Int32* StaticGet__OffScreenUI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1638);
		}
		static ::System::Int32* StaticGet__Gamma()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x163C);
		}
		static ::System::Int32* StaticGet_t_SceneFogParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1640);
		}
		static ::System::Int32* StaticGet__StencilShadowStencilRef()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1644);
		}
		static ::System::Int32* StaticGet__TempHalfSingleBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1648);
		}
		static ::System::Int32* StaticGet__MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x164C);
		}
		static ::System::Int32* StaticGet__FXCD_AlphaByLuminanceParams0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1650);
		}
		static ::System::Int32* StaticGet_viewMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1654);
		}
		static ::System::Int32* StaticGet__FXCC_LutToneParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1658);
		}
		static ::System::Int32* StaticGet__StencilReadMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x165C);
		}
		static ::System::Int32* StaticGet__MaskType()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1660);
		}
		static ::System::Int32* StaticGet__InputHistoryIDTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1664);
		}
		static ::System::Int32* StaticGet__CloudChromaticParams2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1668);
		}
		static ::System::Int32* StaticGet__ScrFxMainTexUvMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x166C);
		}
		static ::System::Int32* StaticGet__TempDepthBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1670);
		}
		static ::System::Int32* StaticGet_local_SHBr()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1674);
		}
		static ::System::Int32* StaticGet__BeforeUIBlur()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1678);
		}
		static ::System::Int32* StaticGet__LightPositionWS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x167C);
		}
		static ::System::Int32* StaticGet__ScrFxBoundary()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1680);
		}
		static ::System::Int32* StaticGet__RampTex_TexelSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1684);
		}
		static ::System::Int32* StaticGet__PrevViewProjM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1688);
		}
		static ::System::Int32* StaticGet__Caustics_Brightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x168C);
		}
		static ::System::Int32* StaticGet__EnvLightDatas()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1690);
		}
		static ::System::Int32* StaticGet__OcclusionSrcTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1694);
		}
		static ::System::Int32* StaticGet__ScrFxScrDistTex_ST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1698);
		}
		static ::System::Int32* StaticGet__CloudAroundMoonColor_Curve()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x169C);
		}
		static ::System::Int32* StaticGet__Distortion_Params2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16A0);
		}
		static ::System::Int32* StaticGet__RampTexParams0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16A4);
		}
		static ::System::Int32* StaticGet__WetnessNoiseParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16A8);
		}
		static ::System::Int32* StaticGet__ScrFxDistortionIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16AC);
		}
		static ::System::Int32* StaticGet__ExtraParameter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16B0);
		}
		static ::System::Int32* StaticGet__EnvReflectionMapArray()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16B4);
		}
		static ::System::Int32* StaticGet__ScrFxColorChannelMapping()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16B8);
		}
		static ::System::Int32* StaticGet__AlignDownSampleShaderID0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16BC);
		}
		static ::System::Int32* StaticGet__SceneParticleFogColorMultiply()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16C0);
		}
		static ::System::Int32* StaticGet__RandomOpacitySpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16C4);
		}
		static ::System::Int32* StaticGet__CharacterLightDataCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16C8);
		}
		static ::System::Int32* StaticGet__OcclusionTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16CC);
		}
		static ::System::Int32* StaticGet__ScreenSpaceShadowTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16D0);
		}
		static ::System::Int32* StaticGet__Dist_Intensity_PostProcessing()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16D4);
		}
		static ::System::Int32* StaticGet_orthoParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16D8);
		}
		static ::System::Int32* StaticGet__ScreenSpaceReflectionLodSteps()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16DC);
		}
		static ::System::Int32* StaticGet__TempHalfColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16E0);
		}
		static ::System::Int32* StaticGet__TempTarget()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16E4);
		}
		static ::System::Int32* StaticGet__FXMaskForScene()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16E8);
		}
		static ::System::Int32* StaticGet__BlitScaleBiasRt()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16EC);
		}
		static ::System::Int32* StaticGet__TaaFrameInfo()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16F0);
		}
		static ::System::Int32* StaticGet__UnsharpMask_SourceImage()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16F4);
		}
		static ::System::Int32* StaticGet__UvToView()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16F8);
		}
		static ::System::Int32* StaticGet_g_vBigTileLightList()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x16FC);
		}
		static ::System::Int32* StaticGet__SSPRHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1700);
		}
		static ::System::Int32* StaticGet__SSPRIndexedInput()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1704);
		}
		static ::System::Int32* StaticGet__LightOccluderData()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1708);
		}
		static ::System::Int32* StaticGet_ambientEquatorColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x170C);
		}
		static ::System::Int32* StaticGet__StencilMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1710);
		}
		static ::System::Int32* StaticGet__NapTimeFaster()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1714);
		}
		static ::System::Int32* StaticGet__NumTileBigTileY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1718);
		}
		static ::System::Int32* StaticGet__PowerExponent()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x171C);
		}
		static ::System::Int32* StaticGet__PostFrontTint()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1720);
		}
		static ::System::Int32* StaticGet__MetalSubpassForCharPPStencil()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1724);
		}
		static ::System::Int32* StaticGet__SkySHBr()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1728);
		}
		static ::System::Int32* StaticGet_g_isOrthographic()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x172C);
		}
		static ::System::Int32* StaticGet__AOPackedHistory()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1730);
		}
		static ::System::Int32* StaticGet__FXCD_DotParams3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1734);
		}
		static ::System::Int32* StaticGet__NapEffectBrightnessParams4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1738);
		}
		static ::System::Int32* StaticGet__FillHoleResult()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x173C);
		}
		static ::System::Int32* StaticGet__FxCustomFogParamsForCharacter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1740);
		}
		static ::System::Int32* StaticGet__FirstTwoDepthMipOffsets()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1744);
		}
		static ::System::Int32* StaticGet__Vignette_Params1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1748);
		}
		static ::System::Int32* StaticGet__OptimizeAdditionalMainLight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x174C);
		}
		static ::System::Int32* StaticGet_g_depth_tex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1750);
		}
		static ::System::Int32* StaticGet__CameraColorTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1754);
		}
		static ::System::Int32* StaticGet__MirrorArrayData()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1758);
		}
		static ::System::Int32* StaticGet_UnityNapCB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x175C);
		}
		static ::System::Int32* StaticGet_g_fClustBase()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1760);
		}
		static ::System::Int32* StaticGet__PostOutlineTint()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1764);
		}
		static ::System::Int32* StaticGet__NapBloomThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1768);
		}
		static ::System::Int32* StaticGet_OutDilatedMotionVectors()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x176C);
		}
		static ::System::Int32* StaticGet__CharacterStencil()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1770);
		}
		static ::System::Int32* StaticGet_g_vLayeredOffsetsBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1774);
		}
		static ::System::Int32* StaticGet__RWIndexAllocator()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1778);
		}
		static ::System::Int32* StaticGet__Metrics()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x177C);
		}
		static ::System::Int32* StaticGet__LightDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1780);
		}
		static ::System::Int32* StaticGet__NoiseParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1784);
		}
		static ::System::Int32* StaticGet__ScaleBiasRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1788);
		}
		static ::System::Int32* StaticGet__Radius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x178C);
		}
		static ::System::Int32* StaticGet__CloudDistortionParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1790);
		}
		static ::System::Int32* StaticGet__SkyLUTTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1794);
		}
		static ::System::Int32* StaticGet_local_SHAg()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1798);
		}
		static ::System::Int32* StaticGet__CloudBlendIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x179C);
		}
		static ::System::Int32* StaticGet_t_EnviroParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17A0);
		}
		static ::System::Int32* StaticGet__ShadowPancaking()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17A4);
		}
		static ::System::Int32* StaticGet__CurveMaster()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17A8);
		}
		static ::System::Int32* StaticGet__LightFogParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17AC);
		}
		static ::System::Int32* StaticGet__PunctualShadowmapTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17B0);
		}
		static ::System::Int32* StaticGet__Caustics_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17B4);
		}
		static ::System::Int32* StaticGet__SinTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17B8);
		}
		static ::System::Int32* StaticGet__ScrFxDissolveChannel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17BC);
		}
		static ::System::Int32* StaticGet__AOParams0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17C0);
		}
		static ::System::Int32* StaticGet__AOParams3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17C4);
		}
		static ::System::Int32* StaticGet__SrcOffsetAndLimit()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17C8);
		}
		static ::System::Int32* StaticGet__FXCC_ToneA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17CC);
		}
		static ::System::Int32* StaticGet__SkySHC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17D0);
		}
		static ::System::Int32* StaticGet__ScrFxAlphaChannelMapping()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17D4);
		}
		static ::System::Int32* StaticGet__RadialBlurPacked0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17D8);
		}
		static ::System::Int32* StaticGet__DynamicTimeLerpV()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17DC);
		}
		static ::System::Int32* StaticGet__InputMotionVector()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17E0);
		}
		static ::System::Int32* StaticGet__KodamaGIParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17E4);
		}
		static ::System::Int32* StaticGet_DilatedDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17E8);
		}
		static ::System::Int32* StaticGet__CloudMoveParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17EC);
		}
		static ::System::Int32* StaticGet__CameraOpaqueTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17F0);
		}
		static ::System::Int32* StaticGet__FXCD_DotParams2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17F4);
		}
		static ::System::Int32* StaticGet__Lift()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17F8);
		}
		static ::System::Int32* StaticGet__ScrFxBoundaryMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x17FC);
		}
		static ::System::Int32* StaticGet__HalfColorBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1800);
		}
		static ::System::Int32* StaticGet__GlitchMask_ST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1804);
		}
		static ::System::Int32* StaticGet__ChannelMixerGreen()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1808);
		}
		static ::System::Int32* StaticGet__GlobalLightParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x180C);
		}
		static ::System::Int32* StaticGet_OutLumaMipTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1810);
		}
		static ::System::Int32* StaticGet__EnvLightCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1814);
		}
		static ::System::Int32* StaticGet__LightVolumeData()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1818);
		}
		static ::System::Int32* StaticGet__ScrFxLerpBrightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x181C);
		}
		static ::System::Int32* StaticGet__SceneUserLut_Params()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1820);
		}
		static ::System::Int32* StaticGet_g_mProjectionArr()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1824);
		}
		static ::System::Int32* StaticGet__FxCustomFogColorFar()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1828);
		}
		static ::System::Int32* StaticGet__UIBlurInvAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x182C);
		}
		static ::System::Int32* StaticGet_GEdgeSharpness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1830);
		}
		static ::System::Int32* StaticGet__FXCC_2Tone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1834);
		}
		static ::System::Int32* StaticGet__PunctualShadow_TileData()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1838);
		}
		static ::System::Int32* StaticGet__PlanarReflectionCubeCenter3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x183C);
		}
		static ::System::Int32* StaticGet_zBufferParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1840);
		}
		static ::System::Int32* StaticGet_HistoryColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1844);
		}
		static ::System::Int32* StaticGet_local_SHBg()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1848);
		}
		static ::System::Int32* StaticGet__MainTex3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x184C);
		}
		static ::System::Int32* StaticGet__CharacterStencilPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1850);
		}
		static ::System::Int32* StaticGet__ColorFilter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1854);
		}
		static ::System::Int32* StaticGet__BlurRT2_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1858);
		}
		static ::System::Int32* StaticGet__CloudShadowRotateMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x185C);
		}
		static ::System::Int32* StaticGet__MainTex1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1860);
		}
		static ::System::Int32* StaticGet__CharacterOverlayTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1864);
		}
		static ::System::Int32* StaticGet__FXCC_Desaturate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1868);
		}
		static ::System::Int32* StaticGet__MidSegmentB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x186C);
		}
		static ::System::Int32* StaticGet__AmbientGradientShape()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1870);
		}
		static ::System::Int32* StaticGet__RWWorldLightIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1874);
		}
		static ::System::Int32* StaticGet__BlurRT1_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1878);
		}
		static ::System::Int32* StaticGet_ReconstructPrevRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x187C);
		}
		static ::System::Int32* StaticGet__GlobalDecalBlendParameter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1880);
		}
		static ::System::Int32* StaticGet__AmbientGradientColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1884);
		}
		static ::System::Int32* StaticGet__FXCD_PositionWSAsOffset0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1888);
		}
		static ::System::Int32* StaticGet__ScrFxMainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x188C);
		}
		static ::System::Int32* StaticGet__Caustics_Main_Scale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1890);
		}
		static ::System::Int32* StaticGet__ContactShadowTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1894);
		}
		static ::System::Int32* StaticGet__FXCD_CustomShape0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1898);
		}
		static ::System::Int32* StaticGet__SourceTextureTexelSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x189C);
		}
		static ::System::Int32* StaticGet__LensFlareOcclusionResult()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18A0);
		}
		static ::System::Int32* StaticGet_g_iNrVisibLights()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18A4);
		}
		static ::System::Int32* StaticGet_g_fClustScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18A8);
		}
		static ::System::Int32* StaticGet__CameraNormalTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18AC);
		}
		static ::System::Int32* StaticGet__StencilMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18B0);
		}
		static ::System::Int32* StaticGet__WorldLightIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18B4);
		}
		static ::System::Int32* StaticGet__StarsMaskOnSky()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18B8);
		}
		static ::System::Int32* StaticGet__TempHistoryInputTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18BC);
		}
		static ::System::Int32* StaticGet__MoonAndGalaxyDir()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18C0);
		}
		static ::System::Int32* StaticGet__TempInputTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18C4);
		}
		static ::System::Int32* StaticGet__DaySkyParamsPartA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18C8);
		}
		static ::System::Int32* StaticGet__CloudAroundSunColor_Curve()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18CC);
		}
		static ::System::Int32* StaticGet__PerObjectShadowStencilComp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18D0);
		}
		static ::System::Int32* StaticGet_HistoryStatus()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18D4);
		}
		static ::System::Int32* StaticGet__CharacterColorSaturation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18D8);
		}
		static ::System::Int32* StaticGet__ScrFxDissolveProgress()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18DC);
		}
		static ::System::Int32* StaticGet__NumTileFtplX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18E0);
		}
		static ::System::Int32* StaticGet__SkySHBb()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18E4);
		}
		static ::System::Int32* StaticGet__NormalBufferTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18E8);
		}
		static ::System::Int32* StaticGet__CloudChromaticParams3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18EC);
		}
		static ::System::Int32* StaticGet__AOOutputHistory()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18F0);
		}
		static ::System::Int32* StaticGet__GlobalSpecialDamageTextAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18F4);
		}
		static ::System::Int32* StaticGet__VolumetricFogTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18F8);
		}
		static ::System::Int32* StaticGet__FxCustomFogColorNear()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x18FC);
		}
		static ::System::Int32* StaticGet__BackGroundColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1900);
		}
		static ::System::Int32* StaticGet__CurrentDepthSource()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1904);
		}
		static ::System::Int32* StaticGet__LensDirt_Intensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1908);
		}
		static ::System::Int32* StaticGet__CloudSize_AtlasInfo()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x190C);
		}
		static ::System::Int32* StaticGet__InputHistoryTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1910);
		}
		static ::System::Int32* StaticGet__BloomBlurComposeWeights()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1914);
		}
		static ::System::Int32* StaticGet_g_vBoundsBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1918);
		}
		static ::System::Int32* StaticGet__NightSkyParamsPartA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x191C);
		}
		static ::System::Int32* StaticGet__Bloom_RGBM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1920);
		}
		static ::System::Int32* StaticGet__NumTileClusteredY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1924);
		}
		static ::System::Int32* StaticGet__GlassBlurTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1928);
		}
		static ::System::Int32* StaticGet__CAO_InverseProjection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x192C);
		}
		static ::System::Int32* StaticGet__ScrFxDistortionRandomUV()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1930);
		}
		static ::System::Int32* StaticGet__ScrFxScrDistIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1934);
		}
		static ::System::Int32* StaticGet__ScrFxIgnoreTimeScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1938);
		}
		static ::System::Int32* StaticGet__RainSplashColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x193C);
		}
		static ::System::Int32* StaticGet__FlareData4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1940);
		}
		static ::System::Int32* StaticGet__WaterReflectionScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1944);
		}
		static ::System::Int32* StaticGet__FXCC_ToneB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1948);
		}
		static ::System::Int32* StaticGet_PPSCBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x194C);
		}
		static ::System::Int32* StaticGet__AvatarRimGlowScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1950);
		}
		static ::System::Int32* StaticGet__ScrFxMaskTex_ST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1954);
		}
		static ::System::Int32* StaticGet__CharacterStencilReadMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1958);
		}
		static ::System::Int32* StaticGet__SkyLutGradientItemCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x195C);
		}
		static ::System::Int32* StaticGet__RadialBlurDownSampleRt()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1960);
		}
		static ::System::Int32* StaticGet__LightDatas()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1964);
		}
		static ::System::Int32* StaticGet__CAO_Light()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1968);
		}
		static ::System::Int32* StaticGet__FXCD_StarPower0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x196C);
		}
		static ::System::Int32* StaticGet__FxColorSaturation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1970);
		}
		static ::System::Int32* StaticGet__is_apply_lut_character_on()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1974);
		}
		static ::System::Int32* StaticGet__UVTransformSource()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1978);
		}
		static ::System::Int32* StaticGet__PostShallowFadeTint()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x197C);
		}
		static ::System::Int32* StaticGet__DebugBlendLightData()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1980);
		}
		static ::System::Int32* StaticGet__WorldLightGridTopK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1984);
		}
		static ::System::Int32* StaticGet__SkySHAr()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1988);
		}
		static ::System::Int32* StaticGet__SceneUserLut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x198C);
		}
		static ::System::Int32* StaticGet__AddLightData1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1990);
		}
		static ::System::Int32* StaticGet_OutHistoryColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1994);
		}
		static ::System::Int32* StaticGet__LensFlareOcclusionInput()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1998);
		}
		static ::System::Int32* StaticGet__LightForward()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x199C);
		}
		static ::System::Int32* StaticGet__CameraDepthAttachment()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19A0);
		}
		static ::System::Int32* StaticGet__LensDirt_Texture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19A4);
		}
		static ::System::Int32* StaticGet__DecalNormalIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19A8);
		}
		static ::System::Int32* StaticGet_g_viDimensions()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19AC);
		}
		static ::System::Int32* StaticGet__SkyHorizontalOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19B0);
		}
		static ::System::Int32* StaticGet__TimeParameters()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19B4);
		}
		static ::System::Int32* StaticGet__UseExtraPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19B8);
		}
		static ::System::Int32* StaticGet__SkyHorizontalParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19BC);
		}
		static ::System::Int32* StaticGet__CAO_InverseViewMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19C0);
		}
		static ::System::Int32* StaticGet__TempTarget3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19C4);
		}
		static ::System::Int32* StaticGet_g_vLayeredLightList()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19C8);
		}
		static ::System::Int32* StaticGet__UVTransformSource3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19CC);
		}
		static ::System::Int32* StaticGet_g_screenSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19D0);
		}
		static ::System::Int32* StaticGet__HalfNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19D4);
		}
		static ::System::Int32* StaticGet__TempMirrorReflectionRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19D8);
		}
		static ::System::Int32* StaticGet__TempMotionVector2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19DC);
		}
		static ::System::Int32* StaticGet__LoD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19E0);
		}
		static ::System::Int32* StaticGet__RippleParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19E4);
		}
		static ::System::Int32* StaticGet_DepthClip()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19E8);
		}
		static ::System::Int32* StaticGet__CameraDistortionTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19EC);
		}
		static ::System::Int32* StaticGet__ScrFxScrDist()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19F0);
		}
		static ::System::Int32* StaticGet__ViewProjM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19F4);
		}
		static ::System::Int32* StaticGet__CharacterLightDataList()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19F8);
		}
		static ::System::Int32* StaticGet__StencilComp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x19FC);
		}
		static ::System::Int32* StaticGet__FXCD_DotColor0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A00);
		}
		static ::System::Int32* StaticGet__BlurredTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A04);
		}
		static ::System::Int32* StaticGet__CurveHueVsHue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A08);
		}
		static ::System::Int32* StaticGet_NewLockMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A0C);
		}
		static ::System::Int32* StaticGet_g_iNumSamplesMSAA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A10);
		}
		static ::System::Int32* StaticGet__DoFTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A14);
		}
		static ::System::Int32* StaticGet__OcclusionMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A18);
		}
		static ::System::Int32* StaticGet__WaterReflectionRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A1C);
		}
		static ::System::Int32* StaticGet__CameraMotionVectorsTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A20);
		}
		static ::System::Int32* StaticGet__PostShadowFadeTint()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A24);
		}
		static ::System::Int32* StaticGet__CurrSSPRDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A28);
		}
		static ::System::Int32* StaticGet__SSSFallOff()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A2C);
		}
		static ::System::Int32* StaticGet_scaledScreenParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A30);
		}
		static ::System::Int32* StaticGet__MidSegmentA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A34);
		}
		static ::System::Int32* StaticGet__PingTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A38);
		}
		static ::System::Int32* StaticGet__LightSweepColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A3C);
		}
		static ::System::Int32* StaticGet__DecalIndexShift()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A40);
		}
		static ::System::Int32* StaticGet__GlitchMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A44);
		}
		static ::System::Int32* StaticGet__PerObjectShadowStencilReadMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A48);
		}
		static ::System::Int32* StaticGet__OldCRTPattern()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A4C);
		}
		static ::System::Int32* StaticGet__NumTileClusteredX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A50);
		}
		static ::System::Int32* StaticGet__FlareDatas0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A54);
		}
		static ::System::Int32* StaticGet__TempRTXRTInDeferredShadingPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A58);
		}
		static ::System::Int32* StaticGet__ShoSegmentB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A5C);
		}
		static ::System::Int32* StaticGet__ScreenScaleFactor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A60);
		}
		static ::System::Int32* StaticGet__ScrFxDissolveTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A64);
		}
		static ::System::Int32* StaticGet__PerObjectShadowStencilPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A68);
		}
		static ::System::Int32* StaticGet__NapEntityBlendLight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A6C);
		}
		static ::System::Int32* StaticGet__LightLocaShadowFade()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A70);
		}
		static ::System::Int32* StaticGet__InputTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A74);
		}
		static ::System::Int32* StaticGet__RWWorldLightGridInfo()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A78);
		}
		static ::System::Int32* StaticGet__ScreenOutlineTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A7C);
		}
		static ::System::Int32* StaticGet__WetnessNoise()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A80);
		}
		static ::System::Int32* StaticGet__MiddlePointPosition()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A84);
		}
		static ::System::Int32* StaticGet__FullCoCTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A88);
		}
		static ::System::Int32* StaticGet_inverseViewMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A8C);
		}
		static ::System::Int32* StaticGet__InteriorDayAndNight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A90);
		}
		static ::System::Int32* StaticGet__FlareData5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A94);
		}
		static ::System::Int32* StaticGet__RainNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A98);
		}
		static ::System::Int32* StaticGet__PrevProjMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1A9C);
		}
		static ::System::Int32* StaticGet__DeferredStencilCompFunc()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AA0);
		}
		static ::System::Int32* StaticGet__FXCD_DotColor1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AA4);
		}
		static ::System::Int32* StaticGet__MirrorArrayDataCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AA8);
		}
		static ::System::Int32* StaticGet_OutNewLockMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AAC);
		}
		static ::System::Int32* StaticGet__SkySHAb()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AB0);
		}
		static ::System::Int32* StaticGet__SSSSun()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AB4);
		}
		static ::System::Int32* StaticGet__PostLightParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AB8);
		}
		static ::System::Int32* StaticGet__RainDropTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1ABC);
		}
		static ::System::Int32* StaticGet_unity_DeltaTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AC0);
		}
		static ::System::Int32* StaticGet__SourceDepthMipMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AC4);
		}
		static ::System::Int32* StaticGet__GalaxyOnSky()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AC8);
		}
		static ::System::Int32* StaticGet__ScrFxBoundaryUvAspect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1ACC);
		}
		static ::System::Int32* StaticGet_OutDilatedDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AD0);
		}
		static ::System::Int32* StaticGet__PreInvViewProjMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AD4);
		}
		static ::System::Int32* StaticGet_g_isLogBaseBufferEnabled()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AD8);
		}
		static ::System::Int32* StaticGet__RenderEntityPrepareInput()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1ADC);
		}
		static ::System::Int32* StaticGet__CharacterMainLightData1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AE0);
		}
		static ::System::Int32* StaticGet__PrevViewProjMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AE4);
		}
		static ::System::Int32* StaticGet__InputTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AE8);
		}
		static ::System::Int32* StaticGet_projectionMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AEC);
		}
		static ::System::Int32* StaticGet__OptimizeCharacterFacingFactor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AF0);
		}
		static ::System::Int32* StaticGet__AOBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AF4);
		}
		static ::System::Int32* StaticGet_g_mInvScrProjectionArr()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AF8);
		}
		static ::System::Int32* StaticGet__WetnessNoiseParam2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1AFC);
		}
		static ::System::Int32* StaticGet__VolumetricFog_PunctualLightMultiplier()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B00);
		}
		static ::System::Int32* StaticGet_local_SHAr()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B04);
		}
		static ::System::Int32* StaticGet__WorldLightGridInfo()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B08);
		}
		static ::System::Int32* StaticGet__CloudNoiseIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B0C);
		}
		static ::System::Int32* StaticGet__Gain()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B10);
		}
		static ::System::Int32* StaticGet__NormalToWorldID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B14);
		}
		static ::System::Int32* StaticGet__CharacterMainLightData()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B18);
		}
		static ::System::Int32* StaticGet__MaxSteppingScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B1C);
		}
		static ::System::Int32* StaticGet__CAO_K()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B20);
		}
		static ::System::Int32* StaticGet__BokehKernel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B24);
		}
		static ::System::Int32* StaticGet__RadialBlurInnerAndOuterCircleRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B28);
		}
		static ::System::Int32* StaticGet__AOPackedData()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B2C);
		}
		static ::System::Int32* StaticGet__PerObjectShadowData()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B30);
		}
		static ::System::Int32* StaticGet__LightCookieTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B34);
		}
		static ::System::Int32* StaticGet__RampTexParams1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B38);
		}
		static ::System::Int32* StaticGet__CurveBlue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B3C);
		}
		static ::System::Int32* StaticGet_ambientGroundColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B40);
		}
		static ::System::Int32* StaticGet_OutLumaHistory()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B44);
		}
		static ::System::Int32* StaticGet__IsStencilReceiverPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B48);
		}
		static ::System::Int32* StaticGet__ToeSegmentB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B4C);
		}
		static ::System::Int32* StaticGet__PerObjectShadowAtlasSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B50);
		}
		static ::System::Int32* StaticGet__TempTargetFSR()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B54);
		}
		static ::System::Int32* StaticGet__WorldLightGridTopKEnable()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B58);
		}
		static ::System::Int32* StaticGet__CloudShadowColor2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B5C);
		}
		static ::System::Int32* StaticGet__SkyGradientKeys()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B60);
		}
		static ::System::Int32* StaticGet__HalfAlphaBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B64);
		}
		static ::System::Int32* StaticGet__UIBlurTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B68);
		}
		static ::System::Int32* StaticGet_OutputTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B6C);
		}
		static ::System::Int32* StaticGet__Center()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B70);
		}
		static ::System::Int32* StaticGet__ScrFxDistortionUvSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B74);
		}
		static ::System::Int32* StaticGet__WaterReflectionTint()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B78);
		}
		static ::System::Int32* StaticGet__FXCD_DotType1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B7C);
		}
		static ::System::Int32* StaticGet_CameraMotionVectorsTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B80);
		}
		static ::System::Int32* StaticGet__NapBloomTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B84);
		}
		static ::System::Int32* StaticGet__EdgeTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B88);
		}
		static ::System::Int32* StaticGet__CAO_Lights()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B8C);
		}
		static ::System::Int32* StaticGet__MaxCellNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B90);
		}
		static ::System::Int32* StaticGet__CAO_ViewToWorldMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B94);
		}
		static ::System::Int32* StaticGet_FSR2Params()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B98);
		}
		static ::System::Int32* StaticGet__ScrFxScrDistTexUvMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1B9C);
		}
		static ::System::Int32* StaticGet__Caustics_Indirect_Scale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BA0);
		}
		static ::System::Int32* StaticGet__AOParams4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BA4);
		}
		static ::System::Int32* StaticGet_g_mScrProjectionArr()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BA8);
		}
		static ::System::Int32* StaticGet__DebugViewType()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BAC);
		}
		static ::System::Int32* StaticGet__NapContactShadowSampleCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BB0);
		}
		static ::System::Int32* StaticGet__TempColorBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BB4);
		}
		static ::System::Int32* StaticGet_g_logBaseBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BB8);
		}
		static ::System::Int32* StaticGet__ScrFxDissolve()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BBC);
		}
		static ::System::Int32* StaticGet__AddLightIndices0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BC0);
		}
		static ::System::Int32* StaticGet__ScrFxDissolveUvSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BC4);
		}
		static ::System::Int32* StaticGet__IndirectSpecularIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BC8);
		}
		static ::System::Int32* StaticGet__DecalFadeFactor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BCC);
		}
		static ::System::Int32* StaticGet__Caustics_Strength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BD0);
		}
		static ::System::Int32* StaticGet_GSRViewportInfo()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BD4);
		}
		static ::System::Int32* StaticGet__SceneDesaturation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BD8);
		}
		static ::System::Int32* StaticGet__DepthMipChainOffsetList()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BDC);
		}
		static ::System::Int32* StaticGet__NavMeshBoundBox()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BE0);
		}
		static ::System::Int32* StaticGet__RainDropSizeRangesGlobal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BE4);
		}
		static ::System::Int32* StaticGet__LightProxyFogSource2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BE8);
		}
		static ::System::Int32* StaticGet__SSPRIndexed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BEC);
		}
		static ::System::Int32* StaticGet__RTSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BF0);
		}
		static ::System::Int32* StaticGet__LightShaftThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BF4);
		}
		static ::System::Int32* StaticGet__SecondaryGlareWeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BF8);
		}
		static ::System::Int32* StaticGet_local_SHC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1BFC);
		}
		static ::System::Int32* StaticGet__FxCustomFogColorFinal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C00);
		}
		static ::System::Int32* StaticGet__FXCD_SourceImage()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C04);
		}
		static ::System::Int32* StaticGet_OutHistoryStatus()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C08);
		}
		static ::System::Int32* StaticGet__BloomCompositeBeforeBlur()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C0C);
		}
		static ::System::Int32* StaticGet__ChannelMixerRed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C10);
		}
		static ::System::Int32* StaticGet__SSPRInputTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C14);
		}
		static ::System::Int32* StaticGet__InvProjMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C18);
		}
		static ::System::Int32* StaticGet__FXCD_Saturation0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C1C);
		}
		static ::System::Int32* StaticGet_DilatedMotionVectors()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C20);
		}
		static ::System::Int32* StaticGet__NapGaussScaler()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C24);
		}
		static ::System::Int32* StaticGet_g_TileFeatureFlags()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C28);
		}
		static ::System::Int32* StaticGet__ScrFxMaxOpacity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C2C);
		}
		static ::System::Int32* StaticGet__TempHalfAngleTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C30);
		}
		static ::System::Int32* StaticGet__MoonTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C34);
		}
		static ::System::Int32* StaticGet__RgbShiftParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C38);
		}
		static ::System::Int32* StaticGet__ScrFxMainTex_ST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C3C);
		}
		static ::System::Int32* StaticGet__OutlineOpacity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C40);
		}
		static ::System::Int32* StaticGet__PostShadowTint()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C44);
		}
		static ::System::Int32* StaticGet__FXCC_Hardness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C48);
		}
		static ::System::Int32* StaticGet__BlurSharpness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C4C);
		}
		static ::System::Int32* StaticGet__InternalLut_Char()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C50);
		}
		static ::System::Int32* StaticGet__GlitchRandomOpacity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C54);
		}
		static ::System::Int32* StaticGet__PongTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C58);
		}
		static ::System::Int32* StaticGet_LumaMipTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C5C);
		}
		static ::System::Int32* StaticGet__SSPRLodSteps()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C60);
		}
		static ::System::Int32* StaticGet__UseCustomLightList()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C64);
		}
		static ::System::Int32* StaticGet__RWWorldLightGrid()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C68);
		}
		static ::System::Int32* StaticGet__MainTex2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C6C);
		}
		static ::System::Int32* StaticGet__PerObjectShadowCS_ST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C70);
		}
		static ::System::Int32* StaticGet__UVMoveSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C74);
		}
		static ::System::Int32* StaticGet__NapBloomAtlasTemp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C78);
		}
		static ::System::Int32* StaticGet__NapContactShadowWorldSpaceLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C7C);
		}
		static ::System::Int32* StaticGet__GaussianBlurTemp1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C80);
		}
		static ::System::Int32* StaticGet__CloudChromaAmountIntensityMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C84);
		}
		static ::System::Int32* StaticGet__CloudChromaticParams1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C88);
		}
		static ::System::Int32* StaticGet__CAO_LightGrid()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C8C);
		}
		static ::System::Int32* StaticGet__GlobalEtherFXParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C90);
		}
		static ::System::Int32* StaticGet__NapBloomScaler()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C94);
		}
		static ::System::Int32* StaticGet__ScrFxPolarUvAspect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C98);
		}
		static ::System::Int32* StaticGet__is_main_light_shadows_on()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1C9C);
		}
		static ::System::Int32* StaticGet__CurveHueVsSat()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CA0);
		}
		static ::System::Int32* StaticGet__FlareColorValues()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CA4);
		}
		static ::System::Int32* StaticGet__LightShaftColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CA8);
		}
		static ::System::Int32* StaticGet__FlareData6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CAC);
		}
		static ::System::Int32* StaticGet__MainLightShadowmapTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CB0);
		}
		static ::System::Int32* StaticGet__GaussianBlurFlipDownSample()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CB4);
		}
		static ::System::Int32* StaticGet__CoCParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CB8);
		}
		static ::System::Int32* StaticGet__UserLut_Params()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CBC);
		}
		static ::System::Int32* StaticGet__LightShaftTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CC0);
		}
		static ::System::Int32* StaticGet__AreaTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CC4);
		}
		static ::System::Int32* StaticGet__ReactiveMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CC8);
		}
		static ::System::Int32* StaticGet__AddLightData0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CCC);
		}
		static ::System::Int32* StaticGet__EnvCubemapTextures()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CD0);
		}
		static ::System::Int32* StaticGet__FogColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CD4);
		}
		static ::System::Int32* StaticGet__BloomIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CD8);
		}
		static ::System::Int32* StaticGet__RippleParam2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CDC);
		}
		static ::System::Int32* StaticGet__HalfDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CE0);
		}
		static ::System::Int32* StaticGet__SSRInputTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CE4);
		}
		static ::System::Int32* StaticGet__StencilRef()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CE8);
		}
		static ::System::Int32* StaticGet__AODepthToViewParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CEC);
		}
		static ::System::Int32* StaticGet__Shadows()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CF0);
		}
		static ::System::Int32* StaticGet__CurveGreen()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CF4);
		}
		static ::System::Int32* StaticGet_screenParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CF8);
		}
		static ::System::Int32* StaticGet__Lut_Params()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1CFC);
		}
		static ::System::Int32* StaticGet_local_SHBb()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D00);
		}
		static ::System::Int32* StaticGet_g_BaseFeatureFlags()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D04);
		}
		static ::System::Int32* StaticGet__DepthMipMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D08);
		}
		static ::System::Int32* StaticGet__ColorBalance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D0C);
		}
		static ::System::Int32* StaticGet__Intensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D10);
		}
		static ::System::Int32* StaticGet__ScreenSpacePlanarReflection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D14);
		}
		static ::System::Int32* StaticGet__CurrentOcclusionDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D18);
		}
		static ::System::Int32* StaticGet__VR_SourceImage()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D1C);
		}
		static ::System::Int32* StaticGet__CloudAtlas()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D20);
		}
		static ::System::Int32* StaticGet__ScrFxAlphaCutoff()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D24);
		}
		static ::System::Int32* StaticGet__BumpScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D28);
		}
		static ::System::Int32* StaticGet__is_enviro_simple_fog_on()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D2C);
		}
		static ::System::Int32* StaticGet__VolumetricFog0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D30);
		}
		static ::System::Int32* StaticGet__FXCD_Saturation1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D34);
		}
		static ::System::Int32* StaticGet__WorldLightResidual()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D38);
		}
		static ::System::Int32* StaticGet__SSPRRenderTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D3C);
		}
		static ::System::Int32* StaticGet__LightRenderLayer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D40);
		}
		static ::System::Int32* StaticGet__FillHoleInput()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D44);
		}
		static ::System::Int32* StaticGet__Levels()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D48);
		}
		static ::System::Int32* StaticGet__TileParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D4C);
		}
		static ::System::Int32* StaticGet__SkySHAg()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D50);
		}
		static ::System::Int32* StaticGet__CharacterOffset0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D54);
		}
		static ::System::Int32* StaticGet__Caustics_Range()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D58);
		}
		static ::System::Int32* StaticGet__SSPRDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D5C);
		}
		static ::System::Int32* StaticGet__NumTileFtplY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D60);
		}
		static ::System::Int32* StaticGet__CharacterAmbient()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D64);
		}
		static ::System::Int32* StaticGet__MainLightShadowParams0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D68);
		}
		static ::System::Int32* StaticGet__ExtraLightShadowNormalBias()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D6C);
		}
		static ::System::Int32* StaticGet__ScrFxInvert()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D70);
		}
		static ::System::Int32* StaticGet_ambientSkyColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D74);
		}
		static ::System::Int32* StaticGet__PerObjectShadowTargetIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D78);
		}
		static ::System::Int32* StaticGet__CurrSSPR()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D7C);
		}
		static ::System::Int32* StaticGet__FinalFilterOutput()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D80);
		}
		static ::System::Int32* StaticGet__PerObjectShadowResolve_ST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D84);
		}
		static ::System::Int32* StaticGet__NonJitteredViewProjMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D88);
		}
		static ::System::Int32* StaticGet__ssrParameters2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D8C);
		}
		static ::System::Int32* StaticGet__StretchScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D90);
		}
		static ::System::Int32* StaticGet__ScreenStretchThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D94);
		}
		static ::System::Int32* StaticGet__SSSBasePower()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D98);
		}
		static ::System::Int32* StaticGet__FXCD_DotParams1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1D9C);
		}
		static ::System::Int32* StaticGet__FXCD_DotType0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DA0);
		}
		static ::System::Int32* StaticGet__FinalFilterDepthInput()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DA4);
		}
		static ::System::Int32* StaticGet__PostShallowTint()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DA8);
		}
		static ::System::Int32* StaticGet__GlobalSceneEtherWaveTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DAC);
		}
		static ::System::Int32* StaticGet__NapBloomAtlas()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DB0);
		}
		static ::System::Int32* StaticGet__SceneBoundBox()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DB4);
		}
		static ::System::Int32* StaticGet_projectionParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DB8);
		}
		static ::System::Int32* StaticGet__Bias()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DBC);
		}
		static ::System::Int32* StaticGet__FXCD_ZClipParams0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DC0);
		}
		static ::System::Int32* StaticGet__ScrFxColorA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DC4);
		}
		static ::System::Int32* StaticGet_g_vLightList()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DC8);
		}
		static ::System::Int32* StaticGet__MainTexLowMip()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DCC);
		}
		static ::System::Int32* StaticGet__StarsMapOnSky()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DD0);
		}
		static ::System::Int32* StaticGet__CloudColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DD4);
		}
		static ::System::Int32* StaticGet__WaterSpecularScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DD8);
		}
		static ::System::Int32* StaticGet__RainDropFlow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DDC);
		}
		static ::System::Int32* StaticGet__TempHalfSingleBuffer2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DE0);
		}
		static ::System::Int32* StaticGet__HalfProjScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DE4);
		}
		static ::System::Int32* StaticGet__GBuffer1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DE8);
		}
		static ::System::Int32* StaticGet__CharacterOffset1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DEC);
		}
		static ::System::Int32* StaticGet__MetalSubpassForCharPPCompFunc()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DF0);
		}
		static ::System::Int32* StaticGet_worldToCameraMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DF4);
		}
		static ::System::Int32* StaticGet__TempTarget4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DF8);
		}
		static ::System::Int32* StaticGet_inverseViewAndProjectionMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1DFC);
		}
		static ::System::Int32* StaticGet__ScrFxDistortionChannel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E00);
		}
		static ::System::Int32* StaticGet__DistortionRgbShift()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E04);
		}
		static ::System::Int32* StaticGet__WaterBaseColor1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E08);
		}
		static ::System::Int32* StaticGet__GlitchTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E0C);
		}
		static ::System::Int32* StaticGet__SearchTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E10);
		}
		static ::System::Int32* StaticGet__FlareDatas2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E14);
		}
		static ::System::Int32* StaticGet__NoiseTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E18);
		}
		static ::System::Int32* StaticGet_g_vLightListGlobalForFPTL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E1C);
		}
		static ::System::Int32* StaticGet__GBuffer2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E20);
		}
		static ::System::Int32* StaticGet__FlareData1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E24);
		}
		static ::System::Int32* StaticGet__VolumetricFogParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E28);
		}
		static ::System::Int32* StaticGet__Caustics_Tex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E2C);
		}
		static ::System::Int32* StaticGet__BlitMipLevel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E30);
		}
		static ::System::Int32* StaticGet__RainDropMinMaxHeightInnerRadiusIsEasymode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E34);
		}
		static ::System::Int32* StaticGet__CloudEmmitParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E38);
		}
		static ::System::Int32* StaticGet__OffScreenParticlesDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E3C);
		}
		static ::System::Int32* StaticGet__HalfMotionVector()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E40);
		}
		static ::System::Int32* StaticGet__LightDistanceAndSpotAttenuation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E44);
		}
		static ::System::Int32* StaticGet__ScrFxSoftEdge()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E48);
		}
		static ::System::Int32* StaticGet_PartialBlurStandardDeviation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E4C);
		}
		static ::System::Int32* StaticGet__StencilShadowStencil()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E50);
		}
		static ::System::Int32* StaticGet_LumaHistory()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E54);
		}
		static ::System::Int32* StaticGet_PartialBlurSampleCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E58);
		}
		static ::System::Int32* StaticGet__LightCookie()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E5C);
		}
		static ::System::Int32* StaticGet__LightListToClear()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E60);
		}
		static ::System::Int32* StaticGet__CloudChromaAmountMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E64);
		}
		static ::System::Int32* StaticGet__TemporalFilterResult()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E68);
		}
		static ::System::Int32* StaticGet__FXCD_DotParams0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E6C);
		}
		static ::System::Int32* StaticGet_t_HeightParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E70);
		}
		static ::System::Int32* StaticGet__PerObjectShadowColorMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E74);
		}
		static ::System::Int32* StaticGet__MainLightShadowmapNativeTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E78);
		}
		static ::System::Int32* StaticGet__DepthInput()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E7C);
		}
		static ::System::Int32* StaticGet__CAO_Enabled()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E80);
		}
		static ::System::Int32* StaticGet_OutReconstructPrevRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E84);
		}
		static ::System::Int32* StaticGet__PunctualLightCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E88);
		}
		static ::System::Int32* StaticGet__RampTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E8C);
		}
		static ::System::Int32* StaticGet__BlendTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E90);
		}
		static ::System::Int32* StaticGet__DensityVolumeIndexShift()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E94);
		}
		static ::System::Int32* StaticGet_g_LayeredSingleIdxBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E98);
		}
		static ::System::Int32* StaticGet__CloudRenderDistance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1E9C);
		}
		static ::System::Int32* StaticGet__BlurAmount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EA0);
		}
		static ::System::Int32* StaticGet__BlitTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EA4);
		}
		static ::System::Int32* StaticGet__CAO_Data()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EA8);
		}
		static ::System::Int32* StaticGet__TaaJitterStrength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EAC);
		}
		static ::System::Int32* StaticGet__UIBlurDisable()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EB0);
		}
		static ::System::Int32* StaticGet__FXCD_CustomShape1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EB4);
		}
		static ::System::Int32* StaticGet__NonJitteredProjMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EB8);
		}
		static ::System::Int32* StaticGet__NapGIColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EBC);
		}
		static ::System::Int32* StaticGet_viewAndProjectionMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EC0);
		}
		static ::System::Int32* StaticGet__CloudShadowMoveSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EC4);
		}
		static ::System::Int32* StaticGet__FrameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EC8);
		}
		static ::System::Int32* StaticGet__CAO_LightsCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1ECC);
		}
		static ::System::Int32* StaticGet__RainParam2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1ED0);
		}
		static ::System::Int32* StaticGet_inverseCameraProjectionMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1ED4);
		}
		static ::System::Int32* StaticGet__ShaHiLimits()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1ED8);
		}
		static ::System::Int32* StaticGet__ParticleLightParams2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EDC);
		}
		static ::System::Int32* StaticGet__CAO_ShadowStrength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EE0);
		}
		static ::System::Int32* StaticGet__CharacterBlendLightIndices()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EE4);
		}
		static ::System::Int32* StaticGet__MirrorReflectionRTArray()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EE8);
		}
		static ::System::Int32* StaticGet__DecalEmissionIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EEC);
		}
		static ::System::Int32* StaticGet__PlanarReflectionCubeTex3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EF0);
		}
		static ::System::Int32* StaticGet__ScrFxFeather()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EF4);
		}
		static ::System::Int32* StaticGet__NumTileBigTileX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EF8);
		}
		static ::System::Int32* StaticGet__FlareOcclusion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1EFC);
		}
		static ::System::Int32* StaticGet__PostLightParams2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F00);
		}
		static ::System::Int32* StaticGet__ScreenSpaceReflection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F04);
		}
		static ::System::Int32* StaticGet__SceneLutContribution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F08);
		}
		static ::System::Int32* StaticGet__PlanarReflectionCubeCenter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F0C);
		}
		static ::System::Int32* StaticGet__CustomToneCurve()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F10);
		}
		static ::System::Int32* StaticGet__BlitScaleBias()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F14);
		}
		static ::System::Int32* StaticGet__RainSplashTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F18);
		}
		static ::System::Int32* StaticGet__MetalSubpassForCharPPReadMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F1C);
		}
		static ::System::Int32* StaticGet__RWWorldLightResidual()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F20);
		}
		static ::System::Int32* StaticGet__FlareDatas3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F24);
		}
		static ::System::Int32* StaticGet__MoonGlowOnSky()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F28);
		}
		static ::System::Int32* StaticGet__VolumetricFog_PunctualLightFadePower()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F2C);
		}
		static ::System::Int32* StaticGet__FadeToTint()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F30);
		}
		static ::System::Int32* StaticGet_local_SHAb()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F34);
		}
		static ::System::Int32* StaticGet_g_vLightListGlobal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F38);
		}
		static ::System::Int32* StaticGet__LightOccluderMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F3C);
		}
		static ::System::Int32* StaticGet__CAO_CurrentIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F40);
		}
		static ::System::Int32* StaticGet__CameraDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F44);
		}
		static ::System::Int32* StaticGet__GlobalEffectWaterColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F48);
		}
		static ::System::Int32* StaticGet__ScrFxMaskTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F4C);
		}
		static ::System::Int32* StaticGet_worldSpaceCameraPos()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F50);
		}
		static ::System::Int32* StaticGet_g_data()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F54);
		}
		static ::System::Int32* StaticGet__Punctual_ShadowMapSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F58);
		}
		static ::System::Int32* StaticGet__AOPackedBlurred()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F5C);
		}
		static ::System::Int32* StaticGet__GlobalEmissionIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F60);
		}
		static ::System::Int32* StaticGet__CapsuleLightPositionWS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F64);
		}
		static ::System::Int32* StaticGet__UVTransformSource2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F68);
		}
		static ::System::Int32* StaticGet__Vignette_Params2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F6C);
		}
		static ::System::Int32* StaticGet__ThicknessDecay()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F70);
		}
		static ::System::Int32* StaticGet__SkySHBg()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F74);
		}
		static ::System::Int32* StaticGet__EmissionColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F78);
		}
		static ::System::Int32* StaticGet__BlurMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F7C);
		}
		static ::System::Int32* StaticGet__OffScreenParticlesParameters()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F80);
		}
		static ::System::Int32* StaticGet__DrawObjectPassData()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F84);
		}
		static ::System::Int32* StaticGet__Chroma_Params()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F88);
		}
		static ::System::Int32* StaticGet__Desaturate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F8C);
		}
		static ::System::Int32* StaticGet__MotionBlurDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F90);
		}
		static ::System::Int32* StaticGet__ChannelMixerBlue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F94);
		}
		static ::System::Int32* StaticGet__ColorTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F98);
		}
		static ::System::Int32* StaticGet__CloudHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1F9C);
		}
		static ::System::Int32* StaticGet__CurveSatVsSat()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FA0);
		}
		static ::System::Int32* StaticGet__RainOcclusionMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FA4);
		}
		static ::System::Int32* StaticGet__TempRTInDeferredShadingPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FA8);
		}
		static ::System::Int32* StaticGet__ScrFxMaskTexUvMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FAC);
		}
		static ::System::Int32* StaticGet__PerObjectShadowWorldToUVMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FB0);
		}
		static ::System::Int32* StaticGet__GlobalWindParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FB4);
		}
		static ::System::Int32* StaticGet__CurveLumVsSat()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FB8);
		}
		static ::System::Int32* StaticGet__PixelCoordToViewDirWS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FBC);
		}
		static ::System::Int32* StaticGet__CosTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FC0);
		}
		static ::System::Int32* StaticGet__Distortion_DepthClip()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FC4);
		}
		static ::System::Int32* StaticGet__CameraDistortionTextureOverlay()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FC8);
		}
		static ::System::Int32* StaticGet__Time()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FCC);
		}
		static ::System::Int32* StaticGet__ScrFxColorB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FD0);
		}
		static ::System::Int32* StaticGet__RenderedEntityCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FD4);
		}
		static ::System::Int32* StaticGet__CloudShadow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FD8);
		}
		static ::System::Int32* StaticGet__DofTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FDC);
		}
		static ::System::Int32* StaticGet__Caustics_Local_Scale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FE0);
		}
		static ::System::Int32* StaticGet__LinearHalfDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FE4);
		}
		static ::System::Int32* StaticGet__RainSplashParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FE8);
		}
		static ::System::Int32* StaticGet__HalfTempMotionVector()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FEC);
		}
		static ::System::Int32* StaticGet__SceneSaturation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FF0);
		}
		static ::System::Int32* StaticGet__PunctualShadow_WorldToShadow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FF4);
		}
		static ::System::Int32* StaticGet__ParticleLightParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FF8);
		}
		static ::System::Int32* StaticGet__WaterBaseColor2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1FFC);
		}
		static ::System::Int32* StaticGet__SampleOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2000);
		}
		static ::System::Int32* StaticGet__FadeToValues()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2004);
		}
		static ::System::Int32* StaticGet_cameraProjectionMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2008);
		}
		static ::System::Int32* StaticGet__WorldLightGrid()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x200C);
		}
		static ::System::Int32* StaticGet__DepthMipChain()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2010);
		}
		static ::System::Int32* StaticGet__NapBloomDownSampleTemp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2014);
		}
		static ::System::Int32* StaticGet__LightListEntries()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2018);
		}
		static ::System::Int32* StaticGet__Caustics_Speed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x201C);
		}
		static ::System::Int32* StaticGet__FinalFilterInput()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2020);
		}
		static ::System::Int32* StaticGet__WaterShallowColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2024);
		}
		static ::System::Int32* StaticGet__PerObjectShadowAtlas()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2028);
		}
		static ::System::Int32* StaticGet__PreIntegratedFGD_GGXDisneyDiffuse()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x202C);
		}
		static ::System::Int32* StaticGet__SurfaceMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2030);
		}
		static ::System::Int32* StaticGet__WaterNormalStrength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2034);
		}
		static ::System::Int32* StaticGet__FaceIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2038);
		}
		static ::System::Int32* StaticGet__LightColorForCharacter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x203C);
		}
		static ::System::Int32* StaticGet__AOParams2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2040);
		}
		static ::System::Int32* StaticGet__NapTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2044);
		}
		static ::System::Int32* StaticGet__PrevViewMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2048);
		}
		static ::System::Int32* StaticGet_CameraDepthTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x204C);
		}
		static ::System::Int32* StaticGet__MirrorReflectionRTDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2050);
		}
		static ::System::Int32* StaticGet__ScrFxDistortionTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2054);
		}
		static ::System::Int32* StaticGet__SceneSampleTextureBias()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2058);
		}
		static ::System::Int32* StaticGet__FlareTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x205C);
		}
		static ::System::Int32* StaticGet__AddLightIndices1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2060);
		}
		static ::System::Int32* StaticGet__FXCD_PositionWSAsOffset1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2064);
		}
		static ::System::Int32* StaticGet__PlanarReflectionCubeTex2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2068);
		}
		static ::System::Int32* StaticGet__IsFirstFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x206C);
		}
		static ::System::Int32* StaticGet__Caustics_Tint()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2070);
		}
		static ::System::Int32* StaticGet__ShadowBias()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2074);
		}
		static ::System::Int32* StaticGet__AlbedoSmoothness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2078);
		}
		static ::System::Int32* StaticGet__DstOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x207C);
		}
		static ::System::Int32* StaticGet__FXCC_Invert()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2080);
		}
		static ::System::Int32* StaticGet__FXCD_ZClipParams1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2084);
		}
		static ::System::Int32* StaticGet__PlanarReflectionCubeCenter2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2088);
		}
		static ::System::Int32* StaticGet__PerObjectShadowUvMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x208C);
		}
		static ::System::Int32* StaticGet__ProxyMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2090);
		}
		static ::System::Int32* StaticGet__SceneWaterPoolMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2094);
		}
		static ::System::Int32* StaticGet__HalfCoCTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2098);
		}
		static ::System::Int32* StaticGet__VolumetricFogReprojectionMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x209C);
		}
		static ::System::Int32* StaticGet__Size()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20A0);
		}
		static ::System::Int32* StaticGet__LightShaftParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20A4);
		}
		static ::System::Int32* StaticGet__LightProxyFogSource()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20A8);
		}
		static ::System::Int32* StaticGet__SampleCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20AC);
		}
		static ::System::Int32* StaticGet__SceneHeightMap2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20B0);
		}
		static ::System::Int32* StaticGet__DecalUVOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20B4);
		}
		static ::System::Int32* StaticGet__GlobalEtherColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20B8);
		}
		static ::System::Int32* StaticGet__LightType()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20BC);
		}
		static ::System::Int32* StaticGet__HalfResIBL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20C0);
		}
		static ::System::Int32* StaticGet__PerObjectShadowResolveCull()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20C4);
		}
		static ::System::Int32* StaticGet__DownSample4XBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20C8);
		}
		static ::System::Int32* StaticGet__CloudOnSky()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20CC);
		}
		static ::System::Int32* StaticGet__ReflectionDistortion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20D0);
		}
		static ::System::Int32* StaticGet__MainLightShadowNormalBias()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20D4);
		}
		static ::System::Int32* StaticGet__PlanarReflectionCubeTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20D8);
		}
		static ::System::Int32* StaticGet__BentNormalsTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20DC);
		}
		static ::System::Int32* StaticGet__PreIntegratedFGD_CharlieAndFabric()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20E0);
		}
		static ::System::Int32* StaticGet__EnvLightIndexShift()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20E4);
		}
		static ::System::Int32* StaticGet__ScrFxDissolveRandomUV()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20E8);
		}
		static ::System::Int32* StaticGet__ScrFxBlendMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20EC);
		}
		static ::System::Int32* StaticGet__MirrorReflectionPos()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20F0);
		}
		static ::System::Int32* StaticGet__FXCC_MiddlePoint()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20F4);
		}
		static ::System::Int32* StaticGet__CharacterStencilWriteMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20F8);
		}
		static ::System::Int32* StaticGet__GBuffer0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x20FC);
		}
		static ::System::Int32* StaticGet__ScrFxDistortionTex_ST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2100);
		}
		static ::System::Int32* StaticGet__CharacterStencilComp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2104);
		}
		static ::System::Int32* StaticGet__LightPosition()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2108);
		}
		static ::System::Int32* StaticGet__UVTransformTarget()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x210C);
		}
		static ::System::Int32* StaticGet__HueSatCon()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2110);
		}
		static ::System::Int32* StaticGet__TargetTexelSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2114);
		}
		static ::System::Int32* StaticGet__Params()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2118);
		}
		static ::System::Int32* StaticGet__Distortion_Params1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x211C);
		}
		static ::System::Int32* StaticGet__ScreenSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2120);
		}
		static ::System::Int32* StaticGet__RainDropColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2124);
		}
		static ::System::Int32* StaticGet__TileOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2128);
		}
		static ::System::Int32* StaticGet__GlobalEtherEffectColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x212C);
		}
		static ::System::Int32* StaticGet__TempHalfSingleBuffer3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2130);
		}
		static ::System::Int32* StaticGet_GOperationMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2134);
		}
		static ::System::Int32* StaticGet__GlassBlurCoCTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2138);
		}
		static ::System::Int32* StaticGet__SplitHighlights()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x213C);
		}
		static ::System::Int32* StaticGet__BufferDepthToLinearEye()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2140);
		}
		static ::System::Int32* StaticGet_OffsreenUI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2144);
		}
		static ::System::Int32* StaticGet__AOParams1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2148);
		}
		static ::System::Int32* StaticGet__Midtones()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x214C);
		}
		static ::System::Int32* StaticGet_g_fNearPlane()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2150);
		}
		static ::System::Int32* StaticGet__GlobalAdditionalLightIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2154);
		}
		static ::System::Int32* StaticGet__FxCustomFogParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2158);
		}
		static ::System::Int32* StaticGet__GlobalEtherWaveColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x215C);
		}
		static ::System::Int32* StaticGet_ditherMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2160);
		}
		static ::System::Int32* StaticGet__BlurTmp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2164);
		}
		static ::System::Int32* StaticGet__ScrFxScrDistTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2168);
		}
		static ::System::Int32* StaticGet__CloudChromaticParams4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x216C);
		}
		static ::System::Int32* StaticGet__ScrFxDissolveDistortionIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2170);
		}
		static ::System::Int32* StaticGet__Bloom_Texture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2174);
		}
		static ::System::Int32* StaticGet__CurveRed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2178);
		}
		static ::System::Int32* StaticGet_g_LayeredOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x217C);
		}
		static ::System::Int32* StaticGet__ToeSegmentA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2180);
		}
		static ::System::Int32* StaticGet__RainDropSizeRanges()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2184);
		}
		static ::System::Int32* StaticGet_g_ClusterTileCountX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2188);
		}
		static ::System::Int32* StaticGet__CAO_MaxCapsulePerTile()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x218C);
		}
		static ::System::Int32* StaticGet__ShoSegmentA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2190);
		}
		static ::System::Int32* StaticGet_g_mInvProjectionArr()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2194);
		}
		static ::System::Int32* StaticGet__PerObjectShadowStencilRef()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2198);
		}
		static ::System::Int32* StaticGet__PrevSSPR()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x219C);
		}
		static ::System::Int32* StaticGet__BlitTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21A0);
		}
		static ::System::Int32* StaticGet__RadialBlurParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21A4);
		}
		static ::System::Int32* StaticGet__LightCookieTempRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21A8);
		}
		static ::System::Int32* StaticGet__CloudRimColor_Curve()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21AC);
		}
		static ::System::Int32* StaticGet__MotionBlurMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21B0);
		}
		static ::System::Int32* StaticGet__UIBlurHidden()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21B4);
		}
		static ::System::Int32* StaticGet_DirtTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21B8);
		}
		static ::System::Int32* StaticGet_g_ClusterTileCountY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21BC);
		}
		static ::System::Int32* StaticGet_DirtTexTillingOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21C0);
		}
		static ::System::Int32* StaticGet__LineParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21C4);
		}
		static ::System::Int32* StaticGet__PostSssTint()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21C8);
		}
		static ::System::Int32* StaticGet__CloudFogParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21CC);
		}
		static ::System::Int32* StaticGet__LightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21D0);
		}
		static ::System::Int32* StaticGet__ScrFxMaskChannelMapping()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21D4);
		}
		static ::System::Int32* StaticGet__FadeParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21D8);
		}
		static ::System::Int32* StaticGet__RainDropEmitParam2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21DC);
		}
		static ::System::Int32* StaticGet__LightSpecularMinRoughness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21E0);
		}
		static ::System::Int32* StaticGet_avatarPosition0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21E4);
		}
		static ::System::Int32* StaticGet__ScrFxUvMoveSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21E8);
		}
		static ::System::Int32* StaticGet__LightShadowIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21EC);
		}
		static ::System::Int32* StaticGet_g_fFarPlane()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21F0);
		}
		static ::System::Int32* StaticGet__LightMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21F4);
		}
		static ::System::Int32* StaticGet__CharacterSampleTextureBias()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21F8);
		}
		static ::System::Int32* StaticGet__BlurParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x21FC);
		}
		static ::System::Int32* StaticGet__CameraCharacterOpaqueTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SHADERIDS__CCTOR_OFFSET))();
		}
	};
}
