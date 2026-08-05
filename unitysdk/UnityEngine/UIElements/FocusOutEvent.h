#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/FocusEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1CFFA120)
#define UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1CFFA160)
#define UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFA170)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FocusOutEvent_TypeDefinitionIndex = 28118;

	class FocusOutEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::FocusOutEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT_LOCALINIT_OFFSET))(this);
		}
	};
}
