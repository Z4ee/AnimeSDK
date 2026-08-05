#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering::Universal::Internal { class FootPrintGroundProxy; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_COMMONSUBVOLUME_CHECKINSUBVOLUME_OFFSET UNITYSDK_OFFSET(0x1CF185E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_COMMONSUBVOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CF18330)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_COMMONSUBVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CF18520)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_COMMONSUBVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF18720)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int CommonSubVolume_TypeDefinitionIndex = 27588;

	class CommonSubVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Bounds bounds; // 0x18
		::UnityEngine::Color previewColor; // 0x30
		::UnityEngine::Rendering::Universal::Internal::FootPrintGroundProxy* parent; // 0x40
		::UnityEngine::Matrix4x4 m_WorldToLocalMatrix; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_COMMONSUBVOLUME__CTOR_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_COMMONSUBVOLUME_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_COMMONSUBVOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Boolean CheckInSubVolume(::UnityEngine::Vector3 posWS)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_COMMONSUBVOLUME_CHECKINSUBVOLUME_OFFSET))(this, posWS);
		}
	};
}
