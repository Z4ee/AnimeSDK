#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/PointerEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_POINTEROVEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBEEAE0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerOverEvent_TypeDefinitionIndex = 27565;

	class PointerOverEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerOverEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEROVEREVENT__CTOR_OFFSET))(this);
		}
	};
}
