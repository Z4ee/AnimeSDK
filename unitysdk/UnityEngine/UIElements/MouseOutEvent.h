#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/MouseEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_MOUSEOUTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D001C10)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseOutEvent_TypeDefinitionIndex = 28147;

	class MouseOutEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseOutEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEOUTEVENT__CTOR_OFFSET))(this);
		}
	};
}
