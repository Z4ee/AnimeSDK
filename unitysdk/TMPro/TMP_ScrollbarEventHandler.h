#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define TMPRO_TMP_SCROLLBAREVENTHANDLER_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x1F31E720)
#define TMPRO_TMP_SCROLLBAREVENTHANDLER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1F31E5B0)
#define TMPRO_TMP_SCROLLBAREVENTHANDLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1F31E660)
#define TMPRO_TMP_SCROLLBAREVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F31E7E0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_ScrollbarEventHandler_TypeDefinitionIndex = 44627;

	class TMP_ScrollbarEventHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean isSelected; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SCROLLBAREVENTHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SCROLLBAREVENTHANDLER_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SCROLLBAREVENTHANDLER_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SCROLLBAREVENTHANDLER_ONDESELECT_OFFSET))(this, a1);
		}
	};
}
