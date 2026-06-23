#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VolumetricCloudV2Quality.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine::Rendering::Universal { class VolumetricCloudV2Config_VolumetricCloudPerformanceProfile; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_APPLYMOBILEPROFILECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C41D040)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_CONVERTTORESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x1C41E240)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_COPYPROFILEPARAMS_OFFSET UNITYSDK_OFFSET(0x1C41D110)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_ENSURERUNTIMETEXTURES_OFFSET UNITYSDK_OFFSET(0x1C41D7E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_GETCLOUDQUALITY_OFFSET UNITYSDK_OFFSET(0x1C41D310)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_GETPROFILE_OFFSET UNITYSDK_OFFSET(0x1C41CE80)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_GET_HASRUNTIMENOISE_OFFSET UNITYSDK_OFFSET(0x1C41D6D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_GET_HASRUNTIMEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1C41D490)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_GET_RUNTIMEVOLUMETRICCLOUDMODELDATA_OFFSET UNITYSDK_OFFSET(0x1C41D460)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_GET_RUNTIMEVOLUMETRICCLOUDNOISE_OFFSET UNITYSDK_OFFSET(0x1C41D480)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_GET_RUNTIMEVOLUMETRICCLOUDSDF_OFFSET UNITYSDK_OFFSET(0x1C41D470)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_LOADTEXTURE2D_OFFSET UNITYSDK_OFFSET(0x1C41DAA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_LOADTEXTURE3D_OFFSET UNITYSDK_OFFSET(0x1C41DBD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C41E3A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C41D190)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_RELEASERUNTIMETEXTURES_OFFSET UNITYSDK_OFFSET(0x1C41DA10)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_RELEASETEXTURE2D_OFFSET UNITYSDK_OFFSET(0x1C41DD00)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_RELEASETEXTURE3D_OFFSET UNITYSDK_OFFSET(0x1C41DFA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_SHOULDLOADRUNTIMETEXTURES_OFFSET UNITYSDK_OFFSET(0x1C41D9C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C41E870)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C41E450)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricCloudV2Config_TypeDefinitionIndex = 27221;

	class VolumetricCloudV2Config : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::UnityEngine::Rendering::Universal::VolumetricCloudV2Config_VolumetricCloudPerformanceProfile** StaticGet_previewProfile()
		{
			return (::UnityEngine::Rendering::Universal::VolumetricCloudV2Config_VolumetricCloudPerformanceProfile**)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2Config_TypeDefinitionIndex)->GetStaticField(0x22010);
		}
		static ::System::Boolean* StaticGet_previewMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2Config_TypeDefinitionIndex)->GetStaticField(0x6FD0);
		}
		static ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality* StaticGet_previewQuality()
		{
			return (::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality*)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudV2Config_TypeDefinitionIndex)->GetStaticField(0x6FD4);
		}
		// static const ::System::Single FixedDetailMipMapDistanceScale; // 0x0
		// static const ::System::Single MobileMaxTracingDistance; // 0x0
		// static const ::System::Int32 MobileMaxStepCount = 0x14; // 0x0
		// static const ::System::Single MobileMinStepDistance; // 0x0
		// static const ::System::Single MobileMinDensityMultiplier; // 0x0
		// static const ::System::Single MobileMinDetailNoiseMipLevel; // 0x0
		// static const ::System::Single MobileMinJitterStrength; // 0x0
		// static const ::System::Single MobileMaxJitterStrength; // 0x0
		// static const ::System::Single MobileMinAbsorption; // 0x0
		// static const ::System::Single MobileMaxAbsorption; // 0x0
		::UnityEngine::Vector3 centerWS; // 0x18
		::UnityEngine::Vector3 halfExtentWS; // 0x24
		::UnityEngine::Texture2D* legacyVolumetricCloudModelData; // 0x30
		::UnityEngine::Texture2D* legacyVolumetricCloudSDF; // 0x38
		::UnityEngine::Texture3D* legacyVolumetricCloudNoise; // 0x40
		::System::String* volumetricCloudModelDataPath; // 0x48
		::System::String* volumetricCloudSDFPath; // 0x50
		::System::String* volumetricCloudNoisePath; // 0x58
		::UnityEngine::Texture2D* runtimeVolumetricCloudModelData; // 0x60
		::UnityEngine::Texture2D* runtimeVolumetricCloudSDF; // 0x68
		::UnityEngine::Texture3D* runtimeVolumetricCloudNoise; // 0x70
		::System::String* loadedVolumetricCloudModelDataPath; // 0x78
		::System::String* loadedVolumetricCloudSDFPath; // 0x80
		::System::String* loadedVolumetricCloudNoisePath; // 0x88
		::Foundation::AssetRequestHandle runtimeVolumetricCloudModelDataHandle; // 0x90
		::Foundation::AssetRequestHandle runtimeVolumetricCloudSDFHandle; // 0xB0
		::Foundation::AssetRequestHandle runtimeVolumetricCloudNoiseHandle; // 0xD0
		::UnityEngine::Color atmosphericLightCloudScatteredLuminanceScale; // 0xF0
		::UnityEngine::Color distantSkyLightLuminance; // 0x100
		::System::Boolean useRampColor; // 0x110
		::UnityEngine::Gradient* rampColor; // 0x118
		::UnityEngine::Texture2D* rampTexture; // 0x120
		::System::Single skyLightCloudBottomOcclusion; // 0x128
		::System::Single fogWeight; // 0x12C
		::UnityEngine::Vector3 windDirection; // 0x130
		::UnityEngine::Vector3 detailNoiseScale; // 0x13C
		::System::Single detailNoiseMipLevel; // 0x148
		::System::Single detailMipMapDistanceScale; // 0x14C
		::System::UInt32 shadowSampleCountMax; // 0x150
		::System::Single shadowTracingDistance; // 0x154
		::UnityEngine::Rendering::Universal::VolumetricCloudV2Config_VolumetricCloudPerformanceProfile* lowProfile; // 0x158
		::UnityEngine::Rendering::Universal::VolumetricCloudV2Config_VolumetricCloudPerformanceProfile* mobileProfile; // 0x160
		::UnityEngine::Texture2D* mobileDensityMap; // 0x168
		::System::Single mobileDensityMapSize; // 0x170
		::System::Single mobileDensityThreshold; // 0x174
		::UnityEngine::Color mobileCloudColor; // 0x178
		::System::Single mobileCloudHeight; // 0x188
		::System::Single mobileStartOffset; // 0x18C
		::UnityEngine::Vector2 mobileWindSpeed; // 0x190
		::UnityEngine::Rendering::Universal::VolumetricCloudV2Config_VolumetricCloudPerformanceProfile* mediumProfile; // 0x198
		::UnityEngine::Rendering::Universal::VolumetricCloudV2Config_VolumetricCloudPerformanceProfile* highProfile; // 0x1A0
		::UnityEngine::Rendering::Universal::VolumetricCloudV2Config_VolumetricCloudPerformanceProfile* ultraProfile; // 0x1A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG__CCTOR_OFFSET))();
		}

		::UnityEngine::Rendering::Universal::VolumetricCloudV2Config_VolumetricCloudPerformanceProfile* GetProfile(::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality quality)
		{
			return ((::UnityEngine::Rendering::Universal::VolumetricCloudV2Config_VolumetricCloudPerformanceProfile*(*)(::PVOID, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_GETPROFILE_OFFSET))(this, quality);
		}

		static ::System::Void CopyProfileParams(::UnityEngine::Rendering::Universal::VolumetricCloudV2Config_VolumetricCloudPerformanceProfile* from, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Config_VolumetricCloudPerformanceProfile* to)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::VolumetricCloudV2Config_VolumetricCloudPerformanceProfile*, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Config_VolumetricCloudPerformanceProfile*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_COPYPROFILEPARAMS_OFFSET))(from, to);
		}

		static ::System::Void ApplyMobileProfileConstraints(::UnityEngine::Rendering::Universal::VolumetricCloudV2Config_VolumetricCloudPerformanceProfile* profile)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::VolumetricCloudV2Config_VolumetricCloudPerformanceProfile*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_APPLYMOBILEPROFILECONSTRAINTS_OFFSET))(profile);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_ONVALIDATE_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality GetCloudQuality()
		{
			return ((::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_GETCLOUDQUALITY_OFFSET))();
		}

		::UnityEngine::Texture2D* get_RuntimeVolumetricCloudModelData()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_GET_RUNTIMEVOLUMETRICCLOUDMODELDATA_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_RuntimeVolumetricCloudSDF()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_GET_RUNTIMEVOLUMETRICCLOUDSDF_OFFSET))(this);
		}

		::UnityEngine::Texture3D* get_RuntimeVolumetricCloudNoise()
		{
			return ((::UnityEngine::Texture3D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_GET_RUNTIMEVOLUMETRICCLOUDNOISE_OFFSET))(this);
		}

		::System::Boolean get_HasRuntimeVolumeData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_GET_HASRUNTIMEVOLUMEDATA_OFFSET))(this);
		}

		::System::Boolean get_HasRuntimeNoise()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_GET_HASRUNTIMENOISE_OFFSET))(this);
		}

		::System::Void EnsureRuntimeTextures(::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality quality)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_ENSURERUNTIMETEXTURES_OFFSET))(this, quality);
		}

		::System::Void ReleaseRuntimeTextures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_RELEASERUNTIMETEXTURES_OFFSET))(this);
		}

		static ::System::Boolean ShouldLoadRuntimeTextures(::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality quality)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_SHOULDLOADRUNTIMETEXTURES_OFFSET))(quality);
		}

		::UnityEngine::Texture2D* LoadTexture2D(::System::String* path, ::System::String*& loadedPath, ::UnityEngine::Texture2D*& cachedTexture, ::Foundation::AssetRequestHandle& requestHandle)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::String*, ::System::String*&, ::UnityEngine::Texture2D*&, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_LOADTEXTURE2D_OFFSET))(this, path, loadedPath, cachedTexture, requestHandle);
		}

		::UnityEngine::Texture3D* LoadTexture3D(::System::String* path, ::System::String*& loadedPath, ::UnityEngine::Texture3D*& cachedTexture, ::Foundation::AssetRequestHandle& requestHandle)
		{
			return ((::UnityEngine::Texture3D*(*)(::PVOID, ::System::String*, ::System::String*&, ::UnityEngine::Texture3D*&, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_LOADTEXTURE3D_OFFSET))(this, path, loadedPath, cachedTexture, requestHandle);
		}

		::System::Void ReleaseTexture2D(::UnityEngine::Texture2D*& texture, ::System::String*& loadedPath, ::Foundation::AssetRequestHandle& requestHandle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*&, ::System::String*&, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_RELEASETEXTURE2D_OFFSET))(this, texture, loadedPath, requestHandle);
		}

		::System::Void ReleaseTexture3D(::UnityEngine::Texture3D*& texture, ::System::String*& loadedPath, ::Foundation::AssetRequestHandle& requestHandle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture3D*&, ::System::String*&, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_RELEASETEXTURE3D_OFFSET))(this, texture, loadedPath, requestHandle);
		}

		static ::System::String* ConvertToResourcePath(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_CONVERTTORESOURCEPATH_OFFSET))(path);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_ONDISABLE_OFFSET))(this);
		}
	};
}
