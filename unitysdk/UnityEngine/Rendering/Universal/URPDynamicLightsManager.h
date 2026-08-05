#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_URPDYNAMICLIGHTSMANAGER_GET_S_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CF09D60)
#define UNITYENGINE_RENDERING_UNIVERSAL_URPDYNAMICLIGHTSMANAGER_REFRESHDYNAMICLIGHT_OFFSET UNITYSDK_OFFSET(0x1CF09F10)
#define UNITYENGINE_RENDERING_UNIVERSAL_URPDYNAMICLIGHTSMANAGER_REGISTERDYNAMICLIGHT_OFFSET UNITYSDK_OFFSET(0x1CF0A100)
#define UNITYENGINE_RENDERING_UNIVERSAL_URPDYNAMICLIGHTSMANAGER_UNREGISTERDYNAMICLIGHT_OFFSET UNITYSDK_OFFSET(0x1CF0A1B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_URPDYNAMICLIGHTSMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF0A240)
#define UNITYENGINE_RENDERING_UNIVERSAL_URPDYNAMICLIGHTSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF09CA0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int URPDynamicLightsManager_TypeDefinitionIndex = 27711;

	class URPDynamicLightsManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::URPDynamicLightsManager** StaticGet__s_instance()
		{
			return (::UnityEngine::Rendering::Universal::URPDynamicLightsManager**)Il2CppClass::FromTypeDefinitionIndex(URPDynamicLightsManager_TypeDefinitionIndex)->GetStaticField(0x22D90);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_RefreshAllDynamicLight()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(URPDynamicLightsManager_TypeDefinitionIndex)->GetStaticField(0x22D98);
		}
		::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>* m_DynamicLightsList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_URPDYNAMICLIGHTSMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_URPDYNAMICLIGHTSMANAGER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::URPDynamicLightsManager* get_s_Instance()
		{
			return ((::UnityEngine::Rendering::Universal::URPDynamicLightsManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_URPDYNAMICLIGHTSMANAGER_GET_S_INSTANCE_OFFSET))();
		}

		::System::Void RefreshDynamicLight(::UnityEngine::Transform* mainCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_URPDYNAMICLIGHTSMANAGER_REFRESHDYNAMICLIGHT_OFFSET))(this, mainCamera);
		}

		::System::Void RegisterDynamicLight(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_URPDYNAMICLIGHTSMANAGER_REGISTERDYNAMICLIGHT_OFFSET))(this, target);
		}

		::System::Void UnregisterDynamicLight(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_URPDYNAMICLIGHTSMANAGER_UNREGISTERDYNAMICLIGHT_OFFSET))(this, target);
		}
	};
}
