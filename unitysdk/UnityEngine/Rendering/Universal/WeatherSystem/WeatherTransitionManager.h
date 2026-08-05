#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine::Rendering::Universal::WeatherSystem { class IWeatherTransitionInterface; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER_CLEANUPNULLREFERENCES_OFFSET UNITYSDK_OFFSET(0x1CCA8AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER_GETREGISTEREDCOUNT_OFFSET UNITYSDK_OFFSET(0x1CCA9360)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CCA8570)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1CCA8920)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1CCA8CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER_UPDATEWEATHERTRANSITION_OFFSET UNITYSDK_OFFSET(0x1CCA8E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCA94A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA8860)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int WeatherTransitionManager_TypeDefinitionIndex = 27496;

	class WeatherTransitionManager : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet__lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(WeatherTransitionManager_TypeDefinitionIndex)->GetStaticField(0x23590);
		}
		static ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherTransitionManager** StaticGet__instance()
		{
			return (::UnityEngine::Rendering::Universal::WeatherSystem::WeatherTransitionManager**)Il2CppClass::FromTypeDefinitionIndex(WeatherTransitionManager_TypeDefinitionIndex)->GetStaticField(0x23598);
		}
		::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::WeatherSystem::IWeatherTransitionInterface*>* _transitionObjects; // 0x10
		::System::Boolean _needsCleanup; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherTransitionManager* get_Instance()
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::WeatherTransitionManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void Register(::UnityEngine::Rendering::Universal::WeatherSystem::IWeatherTransitionInterface* transitionObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::IWeatherTransitionInterface*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER_REGISTER_OFFSET))(this, transitionObject);
		}

		::System::Void Unregister(::UnityEngine::Rendering::Universal::WeatherSystem::IWeatherTransitionInterface* transitionObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::IWeatherTransitionInterface*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER_UNREGISTER_OFFSET))(this, transitionObject);
		}

		::System::Void UpdateWeatherTransition(::System::Single foggyIntensity, ::System::Single specialRedIntensity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER_UPDATEWEATHERTRANSITION_OFFSET))(this, foggyIntensity, specialRedIntensity);
		}

		::System::Void CleanupNullReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER_CLEANUPNULLREFERENCES_OFFSET))(this);
		}

		::System::Int32 GetRegisteredCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER_GETREGISTEREDCOUNT_OFFSET))(this);
		}
	};
}
