#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/PointerEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_POINTEROUTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBEEAA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerOutEvent_TypeDefinitionIndex = 27566;

	class PointerOutEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerOutEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEROUTEVENT__CTOR_OFFSET))(this);
		}
	};
}
