#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }
namespace UnityEngine::Rendering::Universal { class WeatherGroupScriptableObject; }
namespace UnityEngine::Rendering::Universal::WeatherSystem { class LocalWeatherSubVolume; }
namespace UnityEngine::Rendering::Universal::WeatherSystem { class LocalWeatherVolumeContext; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_GETVALIDLOCALVOLUMECONTEXT_OFFSET UNITYSDK_OFFSET(0x196B7670)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_GET_CAMERAISINVOLUME_OFFSET UNITYSDK_OFFSET(0x196B7370)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x196B7380)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x196B74F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x196B7460)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x196B7390)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x196B80A0)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int LocalWeatherVolume_TypeDefinitionIndex = 30280;

	class LocalWeatherVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* weatherConfig; // 0x18
		::UnityEngine::Rendering::Universal::WeatherGroupScriptableObject* weatherGroup; // 0x20
		::System::Int32 priority; // 0x28
		::System::Single fadeInSpeed; // 0x2C
		::System::Single fadeOutSpeed; // 0x30
		::System::Boolean showPreviewBox; // 0x34
		::System::Boolean useMoreThanOneBox; // 0x35
		::System::Single extraHandleSize; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherSubVolume*>* subVolumes; // 0x40
		::System::Boolean enableLocalHeightMap; // 0x48
		::System::Int32 rainHeightExtension; // 0x4C
		::System::Single rainHeightOffset; // 0x50
		::UnityEngine::Texture* rainHeightMap; // 0x58
		::UnityEngine::Vector4 rainHeightMapParams; // 0x60
		::System::Boolean cameraIsInVolume; // 0x70
		::System::Single weight; // 0x74
		::System::Single preWeight; // 0x78
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* cachedWeatherConfig; // 0x80
		::System::Int32 cachedLayer; // 0x88
		::UnityEngine::Bounds defaultBoundBox; // 0x8C
		::UnityEngine::Vector3 preCameraPos; // 0xA4
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* preWeatherConfig; // 0xB0
		::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolumeContext* m_CachedVolumeContext; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CameraIsInVolume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_GET_CAMERAISINVOLUME_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolumeContext* GetValidLocalVolumeContext(::UnityEngine::Vector3 cameraPos, ::UnityEngine::Camera* camera, ::System::String* key)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolumeContext*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Camera*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUME_GETVALIDLOCALVOLUMECONTEXT_OFFSET))(this, cameraPos, camera, key);
		}
	};
}
