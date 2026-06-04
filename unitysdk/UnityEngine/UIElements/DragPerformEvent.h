#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/DragAndDropEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_DRAGPERFORMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B352FB0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DragPerformEvent_TypeDefinitionIndex = 6181;

	class DragPerformEvent : public ::UnityEngine::UIElements::DragAndDropEventBase_1<::UnityEngine::UIElements::DragPerformEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGPERFORMEVENT__CTOR_OFFSET))(this);
		}
	};
}
