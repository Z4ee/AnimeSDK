#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace UnityEngine::Timeline { class INapNotifyData; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_SCENESWITCHMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C532A90)
#define UNITYENGINE_TIMELINE_SCENESWITCHMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1C532AD0)
#define UNITYENGINE_TIMELINE_SCENESWITCHMARKER_LOADSCENE_OFFSET UNITYSDK_OFFSET(0x1C532AF0)
#define UNITYENGINE_TIMELINE_SCENESWITCHMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1C532AC0)
#define UNITYENGINE_TIMELINE_SCENESWITCHMARKER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C532AE0)
#define UNITYENGINE_TIMELINE_SCENESWITCHMARKER_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C532AA0)
#define UNITYENGINE_TIMELINE_SCENESWITCHMARKER_SETSCENEACTIVE_OFFSET UNITYSDK_OFFSET(0x1C532B10)
#define UNITYENGINE_TIMELINE_SCENESWITCHMARKER_SWITCHCURRENTSCENE_OFFSET UNITYSDK_OFFSET(0x1C532AB0)
#define UNITYENGINE_TIMELINE_SCENESWITCHMARKER_SWITCHSCENE_OFFSET UNITYSDK_OFFSET(0x1C532B00)
#define UNITYENGINE_TIMELINE_SCENESWITCHMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C532D40)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SceneSwitchMarker_TypeDefinitionIndex = 30786;

	class SceneSwitchMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::UnityEngine::SceneManagement::Scene loadedScene; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCENESWITCHMARKER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCENESWITCHMARKER_GETDATA_OFFSET))(this);
		}

		::System::Void OnInitialize(::UnityEngine::Timeline::TrackAsset* aPent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCENESWITCHMARKER_ONINITIALIZE_OFFSET))(this, aPent);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCENESWITCHMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCENESWITCHMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCENESWITCHMARKER_ONENABLE_OFFSET))(this);
		}

		::System::Void LoadScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCENESWITCHMARKER_LOADSCENE_OFFSET))(this);
		}

		::System::Void SwitchScene(::System::Double curTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCENESWITCHMARKER_SWITCHSCENE_OFFSET))(this, curTime);
		}

		::System::Void SwitchCurrentScene(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCENESWITCHMARKER_SWITCHCURRENTSCENE_OFFSET))(this, isShow);
		}

		::System::Void SetSceneActive(::UnityEngine::SceneManagement::Scene scene, ::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCENESWITCHMARKER_SETSCENEACTIVE_OFFSET))(this, scene, isActive);
		}
	};
}
