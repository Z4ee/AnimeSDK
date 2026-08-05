#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyName.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace UnityEngine::Timeline { class SignalAsset; }

#define UNITYENGINE_TIMELINE_SIGNALEMITTER_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1F9961F0)
#define UNITYENGINE_TIMELINE_SIGNALEMITTER_GET_EMITONCE_OFFSET UNITYSDK_OFFSET(0x1F9961D0)
#define UNITYENGINE_TIMELINE_SIGNALEMITTER_GET_RETROACTIVE_OFFSET UNITYSDK_OFFSET(0x1F9961B0)
#define UNITYENGINE_TIMELINE_SIGNALEMITTER_SET_ASSET_OFFSET UNITYSDK_OFFSET(0x1F996200)
#define UNITYENGINE_TIMELINE_SIGNALEMITTER_SET_EMITONCE_OFFSET UNITYSDK_OFFSET(0x1F9961E0)
#define UNITYENGINE_TIMELINE_SIGNALEMITTER_SET_RETROACTIVE_OFFSET UNITYSDK_OFFSET(0x1F9961C0)
#define UNITYENGINE_TIMELINE_SIGNALEMITTER_UNITYENGINE_PLAYABLES_INOTIFICATION_GET_ID_OFFSET UNITYSDK_OFFSET(0x1F996210)
#define UNITYENGINE_TIMELINE_SIGNALEMITTER_UNITYENGINE_TIMELINE_INOTIFICATIONOPTIONPROVIDER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1F9963F0)
#define UNITYENGINE_TIMELINE_SIGNALEMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F996410)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SignalEmitter_TypeDefinitionIndex = 33009;

	class SignalEmitter : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::Boolean m_Retroactive; // 0x28
		::System::Boolean m_EmitOnce; // 0x29
		::UnityEngine::Timeline::SignalAsset* m_Asset; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALEMITTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_retroactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALEMITTER_GET_RETROACTIVE_OFFSET))(this);
		}

		::System::Void set_retroactive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALEMITTER_SET_RETROACTIVE_OFFSET))(this, value);
		}

		::System::Boolean get_emitOnce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALEMITTER_GET_EMITONCE_OFFSET))(this);
		}

		::System::Void set_emitOnce(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALEMITTER_SET_EMITONCE_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::SignalAsset* get_asset()
		{
			return ((::UnityEngine::Timeline::SignalAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALEMITTER_GET_ASSET_OFFSET))(this);
		}

		::System::Void set_asset(::UnityEngine::Timeline::SignalAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::SignalAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALEMITTER_SET_ASSET_OFFSET))(this, value);
		}

		::UnityEngine::PropertyName UnityEngine_Playables_INotification_get_id()
		{
			return ((::UnityEngine::PropertyName(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALEMITTER_UNITYENGINE_PLAYABLES_INOTIFICATION_GET_ID_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags UnityEngine_Timeline_INotificationOptionProvider_get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALEMITTER_UNITYENGINE_TIMELINE_INOTIFICATIONOPTIONPROVIDER_GET_FLAGS_OFFSET))(this);
		}
	};
}
