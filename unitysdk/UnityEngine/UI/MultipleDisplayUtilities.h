#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_UI_MULTIPLEDISPLAYUTILITIES_GETMOUSEPOSITIONRELATIVETOMAINDISPLAYRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18B43BE0)
#define UNITYENGINE_UI_MULTIPLEDISPLAYUTILITIES_GETRELATIVEMOUSEPOSITIONFORDRAG_OFFSET UNITYSDK_OFFSET(0x18B30130)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int MultipleDisplayUtilities_TypeDefinitionIndex = 5665;

	class MultipleDisplayUtilities : public ::System::Object
	{
	public:
		static ::System::Boolean GetRelativeMousePositionForDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector2& position)
		{
			return ((::System::Boolean(*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MULTIPLEDISPLAYUTILITIES_GETRELATIVEMOUSEPOSITIONFORDRAG_OFFSET))(eventData, position);
		}

		static ::UnityEngine::Vector2 GetMousePositionRelativeToMainDisplayResolution()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MULTIPLEDISPLAYUTILITIES_GETMOUSEPOSITIONRELATIVETOMAINDISPLAYRESOLUTION_OFFSET))();
		}
	};
}
