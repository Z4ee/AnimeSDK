#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UniversalAdditionalLightData_LightLodConfigData.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D6E9E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_GETMAXRANGEMULTIPLY_OFFSET UNITYSDK_OFFSET(0x1D6E9E80)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_GET_ENABLEPREVIEW_OFFSET UNITYSDK_OFFSET(0x1D6E9EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D6E93F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_LATEUPDATELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x1D6E9D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_REGISTERLIGHT_OFFSET UNITYSDK_OFFSET(0x1D6E9560)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UNREGISTERLIGHT_OFFSET UNITYSDK_OFFSET(0x1D6E9750)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UPDATELIGHTLODMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1D6E98A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UPDATELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x1D6E9850)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6E9EF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E94E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodManager_TypeDefinitionIndex = 27539;

	class LightLodManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::LightLodManager** StaticGet_m_instance()
		{
			return (::UnityEngine::Rendering::Universal::LightLodManager**)Il2CppClass::FromTypeDefinitionIndex(LightLodManager_TypeDefinitionIndex)->GetStaticField(0x22A50);
		}
		static ::System::Int32* StaticGet_s_MainCameraLihgtCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightLodManager_TypeDefinitionIndex)->GetStaticField(0x5BB0);
		}
		static ::System::Int32* StaticGet_s_SceneViewLightCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightLodManager_TypeDefinitionIndex)->GetStaticField(0x5BB4);
		}
		static ::System::Boolean* StaticGet_s_OptimizeSpotLightCullingSphere()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LightLodManager_TypeDefinitionIndex)->GetStaticField(0x5BB8);
		}
		// static const ::System::Int32 LIGHT_LOD_UPDATE_COUNT_PER_FRAME = 0x40; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>* m_lightDates; // 0x10
		::System::Int32 m_updateLightLodIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::LightLodManager* get_instance()
		{
			return ((::UnityEngine::Rendering::Universal::LightLodManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void RegisterLight(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_REGISTERLIGHT_OFFSET))(this, lightData);
		}

		::System::Void UnRegisterLight(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UNREGISTERLIGHT_OFFSET))(this, lightData);
		}

		::System::Void UpdateLightLod(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightLodConfigData& configData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightLodConfigData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UPDATELIGHTLOD_OFFSET))(this, configData);
		}

		::System::Void LateUpdateLightLod(::UnityEngine::Transform* trigger, ::UnityEngine::Rendering::Universal::LightLodQuality optimizeQuality, ::System::Single lightLodBias, ::UnityEngine::LayerMask triggerLayerMask, ::System::Boolean triggerActive)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Rendering::Universal::LightLodQuality, ::System::Single, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_LATEUPDATELIGHTLOD_OFFSET))(this, trigger, optimizeQuality, lightLodBias, triggerLayerMask, triggerActive);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void UpdateLightLODMainThread(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightLodConfigData& configData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightLodConfigData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UPDATELIGHTLODMAINTHREAD_OFFSET))(this, configData);
		}

		static ::System::Single GetMaxRangeMultiply(::UnityEngine::Rendering::Universal::LightLodQuality optimizeQuality)
		{
			return ((::System::Single(*)(::UnityEngine::Rendering::Universal::LightLodQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_GETMAXRANGEMULTIPLY_OFFSET))(optimizeQuality);
		}

		static ::System::Boolean get_enablePreview()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_GET_ENABLEPREVIEW_OFFSET))();
		}
	};
}
