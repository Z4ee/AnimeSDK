#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/MouseEventBase_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Event; }

#define UNITYENGINE_UIELEMENTS_WHEELEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x18AE29A0)
#define UNITYENGINE_UIELEMENTS_WHEELEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x18AE4EB0)
#define UNITYENGINE_UIELEMENTS_WHEELEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x18AE4F60)
#define UNITYENGINE_UIELEMENTS_WHEELEVENT_SET_DELTA_OFFSET UNITYSDK_OFFSET(0x18AE4E90)
#define UNITYENGINE_UIELEMENTS_WHEELEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE4F80)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int WheelEvent_TypeDefinitionIndex = 5929;

	class WheelEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::WheelEvent*>
	{
	public:
		::UnityEngine::Vector3 _delta_k__BackingField; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_WHEELEVENT__CTOR_OFFSET))(this);
		}

		::System::Void set_delta(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_WHEELEVENT_SET_DELTA_OFFSET))(this, value);
		}

		static ::UnityEngine::UIElements::WheelEvent* GetPooled(::UnityEngine::Event* systemEvent)
		{
			return ((::UnityEngine::UIElements::WheelEvent*(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_WHEELEVENT_GETPOOLED_OFFSET))(systemEvent);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_WHEELEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_WHEELEVENT_LOCALINIT_OFFSET))(this);
		}
	};
}
