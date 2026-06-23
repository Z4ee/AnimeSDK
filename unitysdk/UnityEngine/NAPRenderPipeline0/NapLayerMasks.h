#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPLAYERMASKS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D128D40)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapLayerMasks_TypeDefinitionIndex = 5848;

	class NapLayerMasks : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_transparentFxLayer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x2820);
		}
		static ::System::Int32* StaticGet_s_LayerDefault()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x2824);
		}
		static ::System::Int32* StaticGet_uiBlurLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x2828);
		}
		static ::System::Int32* StaticGet_uiLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x282C);
		}
		static ::System::Int32* StaticGet_s_LayerCharacter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x2830);
		}
		static ::System::Int32* StaticGet_s_MaskWorldUI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x2834);
		}
		static ::System::Int32* StaticGet_uiLayer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x2838);
		}
		static ::System::Int32* StaticGet_s_LayerUI3DModel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x283C);
		}
		static ::System::Int32* StaticGet_s_MaskDefault()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x2840);
		}
		static ::System::Int32* StaticGet_s_MaskUI3DModel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x2844);
		}
		static ::System::Int32* StaticGet_uiBlurLayer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x2848);
		}
		static ::System::Int32* StaticGet_s_TransparentFX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x284C);
		}
		static ::System::Int32* StaticGet_uiAndBlurLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x2850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPLAYERMASKS__CCTOR_OFFSET))();
		}
	};
}
