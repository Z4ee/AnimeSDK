#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_LOCALSHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5EB620)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricFog_LocalShaderIDs_TypeDefinitionIndex = 27283;

	class VolumetricFog_LocalShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__PanDirectionAndSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricFog_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5BD0);
		}
		static ::System::Int32* StaticGet__DensityTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricFog_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5BD4);
		}
		static ::System::Int32* StaticGet__DistortionTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricFog_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5BD8);
		}
		static ::System::Int32* StaticGet__DensityAndDistortionTilling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricFog_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5BDC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_LOCALSHADERIDS__CCTOR_OFFSET))();
		}
	};
}
