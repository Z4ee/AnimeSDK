#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_LOCALSHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1AECD0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricFog_LocalShaderIDs_TypeDefinitionIndex = 26585;

	class VolumetricFog_LocalShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__DensityTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricFog_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5C70);
		}
		static ::System::Int32* StaticGet__PanDirectionAndSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricFog_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5C74);
		}
		static ::System::Int32* StaticGet__DensityAndDistortionTilling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricFog_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5C78);
		}
		static ::System::Int32* StaticGet__DistortionTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricFog_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5C7C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOG_LOCALSHADERIDS__CCTOR_OFFSET))();
		}
	};
}
