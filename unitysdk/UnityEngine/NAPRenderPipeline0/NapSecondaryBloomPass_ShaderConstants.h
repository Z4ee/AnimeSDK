#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPSECONDARYBLOOMPASS_SHADERCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D812200)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapSecondaryBloomPass_ShaderConstants_TypeDefinitionIndex = 5835;

	class NapSecondaryBloomPass_ShaderConstants : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_SecondaryBlurTemp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapSecondaryBloomPass_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x2770);
		}
		static ::System::Int32* StaticGet_NapBloomTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapSecondaryBloomPass_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x2774);
		}
		static ::System::Int32* StaticGet_NapBloomSecondaryContrast()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapSecondaryBloomPass_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x2778);
		}
		static ::System::Int32* StaticGet_NapBloomSecondaryThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapSecondaryBloomPass_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x277C);
		}
		static ::System::Int32* StaticGet_NapGaussScaler()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapSecondaryBloomPass_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x2780);
		}
		static ::System::Int32* StaticGet_SecondaryBloomTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapSecondaryBloomPass_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x2784);
		}
		static ::System::Int32* StaticGet__NapBloomPacked1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapSecondaryBloomPass_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x2788);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPSECONDARYBLOOMPASS_SHADERCONSTANTS__CCTOR_OFFSET))();
		}
	};
}
