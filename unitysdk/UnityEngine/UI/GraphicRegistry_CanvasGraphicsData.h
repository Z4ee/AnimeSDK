#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI::Collections { template <typename T> class IndexedSet_1; }

#define UNITYENGINE_UI_GRAPHICREGISTRY_CANVASGRAPHICSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18B18970)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicRegistry_CanvasGraphicsData_TypeDefinitionIndex = 5590;

	class GraphicRegistry_CanvasGraphicsData : public ::System::Object
	{
	public:
		::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>* Graphics; // 0x10
		::System::Action_2<::UnityEngine::UI::Graphic*, ::System::Boolean>* ChangeCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_CANVASGRAPHICSDATA__CTOR_OFFSET))(this);
		}
	};
}
