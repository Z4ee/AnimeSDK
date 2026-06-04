#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/FocusEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1B3589A0)
#define UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1B3589E0)
#define UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3589F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FocusOutEvent_TypeDefinitionIndex = 6195;

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
