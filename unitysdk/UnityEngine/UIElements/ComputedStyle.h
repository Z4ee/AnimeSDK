#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/DisplayStyle.h"
#include "unitysdk/UnityEngine/UIElements/Overflow.h"
#include "unitysdk/UnityEngine/UIElements/Visibility.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements::StyleSheets { class InheritedStylesData; }
namespace UnityEngine::UIElements::StyleSheets { class VisualElementStylesData; }

#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_DISPLAY_OFFSET UNITYSDK_OFFSET(0x3A42AA0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_INHERITEDSTYLESDATA_OFFSET UNITYSDK_OFFSET(0x3A42A00)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_OVERFLOW_OFFSET UNITYSDK_OFFSET(0x3A42A20)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_STYLESDATA_OFFSET UNITYSDK_OFFSET(0x3A429E0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x3A42B20)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ComputedStyle_TypeDefinitionIndex = 6254;

	struct alignas(8) ComputedStyle
	{
		::UnityEngine::UIElements::VisualElement* m_Element; // 0x10

		::UnityEngine::UIElements::StyleSheets::VisualElementStylesData* get_stylesData()
		{
			return ((::UnityEngine::UIElements::StyleSheets::VisualElementStylesData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_STYLESDATA_OFFSET))(this);
		}

		::UnityEngine::UIElements::StyleSheets::InheritedStylesData* get_inheritedStylesData()
		{
			return ((::UnityEngine::UIElements::StyleSheets::InheritedStylesData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_INHERITEDSTYLESDATA_OFFSET))(this);
		}

		/*
		::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow> get_overflow()
		{
			return ((::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_OVERFLOW_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> get_display()
		{
			return ((::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_DISPLAY_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> get_visibility()
		{
			return ((::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_VISIBILITY_OFFSET))(this);
		}
		*/
	};
}
