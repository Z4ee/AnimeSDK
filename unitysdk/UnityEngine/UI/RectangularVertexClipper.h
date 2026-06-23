#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_UI_RECTANGULARVERTEXCLIPPER_GETCANVASRECT_OFFSET UNITYSDK_OFFSET(0x1E65DC90)
#define UNITYENGINE_UI_RECTANGULARVERTEXCLIPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E65E160)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RectangularVertexClipper_TypeDefinitionIndex = 18856;

	class RectangularVertexClipper : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* m_WorldCorners; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* m_CanvasCorners; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTANGULARVERTEXCLIPPER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rect GetCanvasRect(::UnityEngine::RectTransform* t, ::UnityEngine::Canvas* c)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTANGULARVERTEXCLIPPER_GETCANVASRECT_OFFSET))(this, t, c);
		}
	};
}
