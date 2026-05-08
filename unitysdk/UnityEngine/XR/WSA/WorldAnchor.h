#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"

namespace UnityEngine::XR::WSA { class WorldAnchor_OnTrackingChangedDelegate; }

#define UNITYENGINE_XR_WSA_WORLDANCHOR_INTERNAL_TRIGGEREVENTONTRACKINGLOST_OFFSET UNITYSDK_OFFSET(0x1C550CF0)
#define UNITYENGINE_XR_WSA_WORLDANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C550CA0)

namespace UnityEngine::XR::WSA
{
	inline static constexpr unsigned int WorldAnchor_TypeDefinitionIndex = 8565;

	class WorldAnchor : public ::UnityEngine::Component
	{
	public:
		::UnityEngine::XR::WSA::WorldAnchor_OnTrackingChangedDelegate* OnTrackingChanged; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WSA_WORLDANCHOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_TriggerEventOnTrackingLost(::UnityEngine::XR::WSA::WorldAnchor* worldAnchor, ::System::Boolean located)
		{
			return ((::System::Void(*)(::UnityEngine::XR::WSA::WorldAnchor*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WSA_WORLDANCHOR_INTERNAL_TRIGGEREVENTONTRACKINGLOST_OFFSET))(worldAnchor, located);
		}
	};
}
