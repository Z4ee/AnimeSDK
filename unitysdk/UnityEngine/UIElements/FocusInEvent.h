#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/FocusEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_FOCUSINEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1BBE2B70)
#define UNITYENGINE_UIELEMENTS_FOCUSINEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1BBE2BB0)
#define UNITYENGINE_UIELEMENTS_FOCUSINEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBE2BC0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FocusInEvent_TypeDefinitionIndex = 27518;

	class FocusInEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::FocusInEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSINEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSINEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSINEVENT_LOCALINIT_OFFSET))(this);
		}
	};
}
