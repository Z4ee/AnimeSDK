#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_CHANGECOORDINATESTO_OFFSET UNITYSDK_OFFSET(0x197C3000)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_LOCALTOWORLD_OFFSET UNITYSDK_OFFSET(0x197C6130)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_WORLDTOLOCAL_1_OFFSET UNITYSDK_OFFSET(0x197C5E10)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x197A84A0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementExtensions_TypeDefinitionIndex = 24976;

	class VisualElementExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2 WorldToLocal(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Vector2 p)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_WORLDTOLOCAL_OFFSET))(ele, p);
		}

		static ::UnityEngine::Rect WorldToLocal_1(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Rect r)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_WORLDTOLOCAL_1_OFFSET))(ele, r);
		}

		static ::UnityEngine::Rect LocalToWorld(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Rect r)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_LOCALTOWORLD_OFFSET))(ele, r);
		}

		static ::UnityEngine::Rect ChangeCoordinatesTo(::UnityEngine::UIElements::VisualElement* src, ::UnityEngine::UIElements::VisualElement* dest, ::UnityEngine::Rect rect)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTEXTENSIONS_CHANGECOORDINATESTO_OFFSET))(src, dest, rect);
		}
	};
}
