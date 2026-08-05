#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/MouseEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_CONTEXTCLICKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF3E60)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ContextClickEvent_TypeDefinitionIndex = 28140;

	class ContextClickEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::ContextClickEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CONTEXTCLICKEVENT__CTOR_OFFSET))(this);
		}
	};
}
