#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_CHANGECOORDINATESTO_OFFSET UNITYSDK_OFFSET(0x1EDFF850)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_LOCALTOWORLD_OFFSET UNITYSDK_OFFSET(0x1EE00590)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_WORLDTOLOCAL_1_OFFSET UNITYSDK_OFFSET(0x1EE00270)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x1EDE86B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementExtensions_TypeDefinitionIndex = 5896;

	class VisualElementExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2 WorldToLocal(::UnityEngine::UIElements::VisualElement* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_WORLDTOLOCAL_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect WorldToLocal_1(::UnityEngine::UIElements::VisualElement* a1, ::UnityEngine::Rect a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_WORLDTOLOCAL_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect LocalToWorld(::UnityEngine::UIElements::VisualElement* a1, ::UnityEngine::Rect a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_LOCALTOWORLD_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect ChangeCoordinatesTo(::UnityEngine::UIElements::VisualElement* a1, ::UnityEngine::UIElements::VisualElement* a2, ::UnityEngine::Rect a3)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_CHANGECOORDINATESTO_OFFSET))(a1, a2, a3);
		}
	};
}
