#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/EventBase_1.h"

namespace UnityEngine { class Event; }

#define UNITYENGINE_UIELEMENTS_IMGUIEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x1D613480)
#define UNITYENGINE_UIELEMENTS_IMGUIEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1D613590)
#define UNITYENGINE_UIELEMENTS_IMGUIEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1D6135B0)
#define UNITYENGINE_UIELEMENTS_IMGUIEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6135C0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IMGUIEvent_TypeDefinitionIndex = 5983;

	class IMGUIEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::IMGUIEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENT__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::UIElements::IMGUIEvent* GetPooled(::UnityEngine::Event* a1)
		{
			return ((::UnityEngine::UIElements::IMGUIEvent*(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENT_GETPOOLED_OFFSET))(a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENT_LOCALINIT_OFFSET))(this);
		}
	};
}
