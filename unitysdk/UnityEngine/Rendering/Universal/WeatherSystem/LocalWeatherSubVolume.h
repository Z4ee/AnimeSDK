#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering::Universal::WeatherSystem { class LocalWeatherVolume; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERSUBVOLUME_CHECKCAMERAINSUBVOLUME_OFFSET UNITYSDK_OFFSET(0x1C457AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERSUBVOLUME_GETNOSHEARLOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x1C4578F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERSUBVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x1C457C80)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int LocalWeatherSubVolume_TypeDefinitionIndex = 27879;

	class LocalWeatherSubVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Bounds bounds; // 0x18
		::UnityEngine::Color previewColor; // 0x30
		::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolume* parent; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERSUBVOLUME__CTOR_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetNoShearLocalToWorldMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERSUBVOLUME_GETNOSHEARLOCALTOWORLDMATRIX_OFFSET))(this);
		}

		::System::Boolean CheckCameraInSubVolume(::UnityEngine::Vector3 camPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERSUBVOLUME_CHECKCAMERAINSUBVOLUME_OFFSET))(this, camPos);
		}
	};
}
