#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1C5EB6A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME_GET_WATERHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C5EB770)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C5EBA70)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C5EB950)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C5EB830)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C5EBAE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME_REGISTERTOMANAGER_OFFSET UNITYSDK_OFFSET(0x1C5EB880)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME_UNREGISTERFROMMANAGER_OFFSET UNITYSDK_OFFSET(0x1C5EB9A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME_UPDATEMANAGER_OFFSET UNITYSDK_OFFSET(0x1C5EBB30)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5EBC00)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterInteractionVolume_TypeDefinitionIndex = 27181;

	class WaterInteractionVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 size; // 0x18
		::UnityEngine::Vector2Int resolution; // 0x24
		::UnityEngine::Vector2 interactionRenderRange; // 0x2C
		::System::Single renderCenterUpdateInterval; // 0x34
		::System::Single renderCenterUpdateDistanceThreshold; // 0x38
		::System::Single damping; // 0x3C
		::System::Single propagatSpeed; // 0x40
		::System::Single updateRate; // 0x44
		::System::Single interactHeightMulti; // 0x48
		::System::Single interactHeightMax; // 0x4C
		::System::Single interactHeightMin; // 0x50
		::System::Single interactHeightVertexMulti; // 0x54
		::System::Single interactHeightNormalMulti; // 0x58
		::System::Boolean showBounds; // 0x5C
		::UnityEngine::Color boundsColor; // 0x60
		::System::Boolean useGlobalWaterHeight; // 0x70
		::System::Single customWaterHeight; // 0x74
		::System::Single foamIntensity; // 0x78
		::UnityEngine::Material* m_WaterInteractionObjectMaterial; // 0x80
		::UnityEngine::Material* m_ClearObjectDepthMaterial; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME__CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds get_Bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME_GET_BOUNDS_OFFSET))(this);
		}

		::System::Single get_WaterHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME_GET_WATERHEIGHT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME_ONVALIDATE_OFFSET))(this);
		}

		::System::Void RegisterToManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME_REGISTERTOMANAGER_OFFSET))(this);
		}

		::System::Void UnregisterFromManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME_UNREGISTERFROMMANAGER_OFFSET))(this);
		}

		::System::Void UpdateManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONVOLUME_UPDATEMANAGER_OFFSET))(this);
		}
	};
}
