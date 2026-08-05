#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering::Universal::WeatherSystem { class LocalWeatherVolume; }
namespace UnityEngine::Rendering::Universal::WeatherSystem { class LocalWeatherVolumeContext; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUMEMANAGER_REGISTERLOCALWEATHERVOLUME_OFFSET UNITYSDK_OFFSET(0x1C5221D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUMEMANAGER_TRYGETLOCALWEATHERVOLUME_OFFSET UNITYSDK_OFFSET(0x1C521DC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUMEMANAGER_UNREGISTERLOCALWEATHERVOLUME_OFFSET UNITYSDK_OFFSET(0x1C5224B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUMEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5226A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUMEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C522690)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int LocalWeatherVolumeManager_TypeDefinitionIndex = 27413;

	class LocalWeatherVolumeManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolume*>*>** StaticGet_s_LocalWeatherVolumes()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolume*>*>**)Il2CppClass::FromTypeDefinitionIndex(LocalWeatherVolumeManager_TypeDefinitionIndex)->GetStaticField(0x23460);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUMEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUMEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void TryGetLocalWeatherVolume(::System::Int32 layer, ::UnityEngine::Camera* camera, ::UnityEngine::Vector3 triggerPosition, ::System::String* key, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolumeContext*>* resultArray)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolumeContext*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUMEMANAGER_TRYGETLOCALWEATHERVOLUME_OFFSET))(layer, camera, triggerPosition, key, resultArray);
		}

		static ::System::Void RegisterLocalWeatherVolume(::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolume* volume, ::System::Int32 layerId)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolume*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUMEMANAGER_REGISTERLOCALWEATHERVOLUME_OFFSET))(volume, layerId);
		}

		static ::System::Void UnRegisterLocalWeatherVolume(::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolume* volume)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUMEMANAGER_UNREGISTERLOCALWEATHERVOLUME_OFFSET))(volume);
		}
	};
}
