#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/SphericalHarmonicsL2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering::Universal { class NapCharacterGI; }
namespace UnityEngine::Rendering::Universal::Internal { class NapCubeMapArrayPath; }
namespace UnityEngine::Rendering::Universal::Internal { class NapLightMapData_FakeReflectionCubeArrayReqHandle; }
namespace UnityEngine::Rendering::Universal::Internal { class NapLightProbe; }
namespace UnityEngine::Rendering::Universal::Internal { class NapReflectionProbeData; }
namespace UnityEngine::Rendering::Universal::Internal { class NapReflectionProbeDataV2; }
namespace UnityEngine::Rendering::Universal::Internal { class NapRendererLightMapData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPDATA_GETLOADEDSCENE_OFFSET UNITYSDK_OFFSET(0x19AB6BA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPDATA_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x19AB6CF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPDATA_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x19AB6CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPDATA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19AB69B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPDATA_REGISTERDYNAMICLOADEDTEXTURE_OFFSET UNITYSDK_OFFSET(0x19AB6860)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB6D30)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapLightMapData_TypeDefinitionIndex = 30385;

	class NapLightMapData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean isKodamaMode; // 0x18
		::Il2CppArray<::UnityEngine::Rendering::Universal::Internal::NapRendererLightMapData*>* renderDataForLightMap; // 0x20
		::Il2CppArray<::UnityEngine::Texture2D*>* lightMap; // 0x28
		::Il2CppArray<::UnityEngine::Texture2D*>* areaDirect; // 0x30
		::Il2CppArray<::UnityEngine::Texture2D*>* lightSkyOC; // 0x38
		::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* bakedProbes; // 0x40
		::Il2CppArray<::UnityEngine::Rendering::Universal::Internal::NapReflectionProbeData*>* reflectionProbeDatas; // 0x48
		::Il2CppArray<::System::String*>* reflectionProbeBakeWeatherKeys; // 0x50
		::System::String* kodamaData; // 0x58
		::Il2CppArray<::UnityEngine::Rendering::Universal::Internal::NapReflectionProbeDataV2*>* reflectionProbeDataV2s; // 0x60
		::UnityEngine::Rendering::Universal::Internal::NapCubeMapArrayPath* napCubeMapArrayPath; // 0x68
		::UnityEngine::Rendering::Universal::Internal::NapLightProbe* lightProbes; // 0x70
		::UnityEngine::Rendering::Universal::NapCharacterGI* characterGI; // 0x78
		::System::String* sceneName; // 0x80
		::UnityEngine::Rendering::Universal::Internal::NapLightMapData_FakeReflectionCubeArrayReqHandle* preCachedHandle; // 0x88
		::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::Internal::NapLightMapData_FakeReflectionCubeArrayReqHandle*>* assetHandleList; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPDATA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterDynamicLoadedTexture(::UnityEngine::Rendering::Universal::Internal::NapLightMapData_FakeReflectionCubeArrayReqHandle* assetRequestHandle, ::System::Boolean unloadOldHandle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::NapLightMapData_FakeReflectionCubeArrayReqHandle*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPDATA_REGISTERDYNAMICLOADEDTEXTURE_OFFSET))(this, assetRequestHandle, unloadOldHandle);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPDATA_ONDISABLE_OFFSET))(this);
		}

		::System::Void GetLoadedScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPDATA_GETLOADEDSCENE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPDATA_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPDATA_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
