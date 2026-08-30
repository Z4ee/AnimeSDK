#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/StringID.h"
#include "unitysdk/UnityEngine/SyncMarker.h"

namespace UnityEngine
{
	inline static constexpr unsigned int SyncMarkerTrack_TypeDefinitionIndex = 5725;

	class SyncMarkerTrack : public ::System::Object
	{
	public:
		::UnityEngine::StringID trackName; // 0x10
		::Il2CppArray<::UnityEngine::SyncMarker>* syncMarkers; // 0x18
		::Il2CppArray<::System::Single>* markerTimes; // 0x20
	};
}
