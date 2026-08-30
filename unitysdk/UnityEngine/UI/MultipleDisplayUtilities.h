#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_UI_MULTIPLEDISPLAYUTILITIES_GETMOUSEPOSITIONRELATIVETOMAINDISPLAYRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1EE63EA0)
#define UNITYENGINE_UI_MULTIPLEDISPLAYUTILITIES_GETRELATIVEMOUSEPOSITIONFORDRAG_OFFSET UNITYSDK_OFFSET(0x1EE4E260)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int MultipleDisplayUtilities_TypeDefinitionIndex = 6789;

	class MultipleDisplayUtilities : public ::System::Object
	{
	public:
		static ::System::Boolean GetRelativeMousePositionForDrag(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MULTIPLEDISPLAYUTILITIES_GETRELATIVEMOUSEPOSITIONFORDRAG_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 GetMousePositionRelativeToMainDisplayResolution()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MULTIPLEDISPLAYUTILITIES_GETMOUSEPOSITIONRELATIVETOMAINDISPLAYRESOLUTION_OFFSET))();
		}
	};
}
