#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleObjectT_1; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCONSOLEVARIABLES_GET_RTX_AO_DEBUG_VISUALIZEMODEVALUE_OFFSET UNITYSDK_OFFSET(0x1D6ED9F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCONSOLEVARIABLES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6EDB40)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapConsoleVariables_TypeDefinitionIndex = 27177;

	class NapConsoleVariables : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIShadingTraceShadow()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22560);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_EditorUIParticleOptOn()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22568);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIHueExcludeFade()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22570);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGILightMapBoost()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22578);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIAddLocallightExtraMinDist()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22580);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIDirBiasStrength()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22588);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIHitValThresholdMax()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22590);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIHitValBoost()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22598);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISpecularHitSatBoost()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x225A0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIScreenSteerEnabled()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x225A8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISpecularHitValBoost()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x225B0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTX_AO_Debug_VisualizeMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x225B8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIExtraEmissionScaleHighLum()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x225C0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>** StaticGet__RTXGIMultiBounceAlbedoLut()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x225C8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_Shadow_MaxBoundsHalfExtent()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x225D0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIRayBudget()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x225D8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIHueBoostSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x225E0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIHitValThreshold()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x225E8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIAddLocallightMaxDist()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x225F0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIUpSuppressStrength()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x225F8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISpecularHitValThreshold()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22600);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISkyDiffuseScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22608);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIAddLocallightExtraMaxDist()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22610);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISpecularHueBoostSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22618);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIHitSatBoost()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22620);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIRestirSatWeight()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22628);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIHueExcludeMax()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22630);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIHitHueExcludeFade()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22638);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIUseVolumeCG()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22640);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIDistWeightExp()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22648);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISpecularScatterScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22650);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIResolutionScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22658);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIExtraEmissionScaleSpecular()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22660);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISpecBoost()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22668);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIInverseBentBiasStrength()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22670);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTASScreenCoverageCullingEnable()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22678);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISpecularValThreshold()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22680);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>** StaticGet_RTXGILut()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22688);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIHueBoostVal()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22690);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIHitSatThresholdMax()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22698);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXLocalLightTopKEnable()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x226A0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIExtraEmissionMaxDist()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x226A8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIReceiverSatMinMultiplier()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x226B0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTX_GI_Debug_VisualizeMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x226B8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISpecularSatThreshold()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x226C0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIColorBleedSatSimThreshold()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x226C8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIHitScatterScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x226D0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>** StaticGet_RTXGIRoughnessLut()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x226D8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTASDistanceCullingEnable()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x226E0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIAddLocallightScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x226E8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIAddLocallightExtraScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x226F0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIDistWeightEnabled()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x226F8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIReceiverCameraZDiffThreshold()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22700);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIHueExcludeMin()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22708);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIAreaLightEnabled()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22710);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIMultiBounceScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22718);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIBoost()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22720);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXLocalLightTopK()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22728);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISpecularSatThresholdMax()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22730);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISpecularHitSatThresholdMax()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22738);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIReceiverSatRangeMin()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22740);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXGIQualityPreset()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22748);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTASScreenCoverageCullingDynamicGeometryMinCoverage()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22750);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIThresholdRelax()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22758);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIShadingTraceShadowSpecular()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22760);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIHitSatThreshold()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22768);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIReceiverSatRangeMax()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22770);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTASDistanceCullingDynamicGeometryDistance()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22778);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIReceiverDownDotThreshold()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22780);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIExtraEmissionScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22788);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISpecularHueBoostVal()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22790);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIHitHueExcludeMin()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22798);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXGIHighQualityShader()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x227A0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIInverseBentBiasEnabled()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x227A8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_EnableForwardGBuffer()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x227B0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIResponseSpeed()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x227B8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIExtraEmissionLumMax()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x227C0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTASDistanceCullingDistance()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x227C8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISpecularHitSatThreshold()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x227D0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIColorBleedValSimThreshold()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x227D8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIReceiverDownDotScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x227E0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIAddLocallightMinDist()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x227E8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISplitSpecThreshold()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x227F0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIHitHueExcludeMax()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x227F8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXGIPVSubStepNum()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22800);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISpecularValThresholdMax()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22808);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIScreenSteerStrength()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22810);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIHistorySatWeight()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22818);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTASScreenCoverageCullingCullInScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22820);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTASDistanceCullingCullOutScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22828);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIShadingTraceShadowDiffuse()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22830);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTASDistanceCullingCullInScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22838);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISkySpecularScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22840);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTASScreenCoverageCullingMinCoverage()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22848);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIValThresholdMax()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22850);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISpecularHitValThresholdMax()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22858);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISatThresholdMax()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22860);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIColorBleedChromaBoost()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22868);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIValThreshold()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22870);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIBandBiasPower()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22878);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIExtraEmissionLumMin()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22880);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIEmissionScatterScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22888);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIColorBleedHueSimThreshold()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22890);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTX_AO_Visualize()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x22898);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIExtraEmissionMinDist()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x228A0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_EnableRTXGI()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x228A8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISatThreshold()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x228B0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGICacheSatInjectScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x228B8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIMicroAO()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapConsoleVariables_TypeDefinitionIndex)->GetStaticField(0x228C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCONSOLEVARIABLES__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_RTX_AO_Debug_VisualizeModeValue()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCONSOLEVARIABLES_GET_RTX_AO_DEBUG_VISUALIZEMODEVALUE_OFFSET))();
		}
	};
}
