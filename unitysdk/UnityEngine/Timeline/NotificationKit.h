#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Timeline { class INapNotification; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define UNITYENGINE_TIMELINE_NOTIFICATIONKIT_NOTIFY_1_OFFSET UNITYSDK_OFFSET(0x1F0E57C0)
#define UNITYENGINE_TIMELINE_NOTIFICATIONKIT_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1F0E56C0)
#define UNITYENGINE_TIMELINE_NOTIFICATIONKIT_REGISTERNAPNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1F0E5820)
#define UNITYENGINE_TIMELINE_NOTIFICATIONKIT_UNREGISTERNAPNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1F0E5830)
#define UNITYENGINE_TIMELINE_NOTIFICATIONKIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0E5850)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int NotificationKit_TypeDefinitionIndex = 33066;

	class NotificationKit : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>** StaticGet_NotifyAction()
		{
			return (::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>**)Il2CppClass::FromTypeDefinitionIndex(NotificationKit_TypeDefinitionIndex)->GetStaticField(0x28080);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_NOTIFICATIONKIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Notify(::UnityEngine::Timeline::INapNotification* notify)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::INapNotification*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_NOTIFICATIONKIT_NOTIFY_OFFSET))(notify);
		}

		static ::System::Void Notify_1(::UnityEngine::Timeline::INapNotifyData* notifyData)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::INapNotifyData*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_NOTIFICATIONKIT_NOTIFY_1_OFFSET))(notifyData);
		}

		static ::System::Void RegisterNapNotification(::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* notifyAction)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_NOTIFICATIONKIT_REGISTERNAPNOTIFICATION_OFFSET))(notifyAction);
		}

		static ::System::Void UnRegisterNapNotification()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_NOTIFICATIONKIT_UNREGISTERNAPNOTIFICATION_OFFSET))();
		}
	};
}
