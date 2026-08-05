#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/DisplayStyle.h"
#include "unitysdk/UnityEngine/UIElements/Overflow.h"
#include "unitysdk/UnityEngine/UIElements/OverflowClipBox.h"
#include "unitysdk/UnityEngine/UIElements/Visibility.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements::StyleSheets { class InheritedStylesData; }
namespace UnityEngine::UIElements::StyleSheets { class VisualElementStylesData; }

#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERBOTTOMWIDTH_OFFSET UNITYSDK_OFFSET(0x97E800)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERLEFTWIDTH_OFFSET UNITYSDK_OFFSET(0x97E740)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERRIGHTWIDTH_OFFSET UNITYSDK_OFFSET(0x97E7C0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERTOPWIDTH_OFFSET UNITYSDK_OFFSET(0x97E780)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_CURSOR_OFFSET UNITYSDK_OFFSET(0x97E900)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_DISPLAY_OFFSET UNITYSDK_OFFSET(0x97E840)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_INHERITEDSTYLESDATA_OFFSET UNITYSDK_OFFSET(0x97E5A0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_OVERFLOW_OFFSET UNITYSDK_OFFSET(0x97E5C0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_STYLESDATA_OFFSET UNITYSDK_OFFSET(0x97E580)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYOVERFLOWCLIPBOX_OFFSET UNITYSDK_OFFSET(0x97E680)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x97E950)
#define UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ComputedStyle_TypeDefinitionIndex = 28180;

	struct alignas(8) ComputedStyle
	{
		::UnityEngine::UIElements::VisualElement* m_Element; // 0x10

		::System::Void _ctor(::UnityEngine::UIElements::VisualElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::VisualElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE__CTOR_OFFSET))(this, element);
		}

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
		::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox> get_unityOverflowClipBox()
		{
			return ((::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_UNITYOVERFLOWCLIPBOX_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::UIElements::StyleFloat get_borderLeftWidth()
		{
			return ((::UnityEngine::UIElements::StyleFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERLEFTWIDTH_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::UIElements::StyleFloat get_borderTopWidth()
		{
			return ((::UnityEngine::UIElements::StyleFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERTOPWIDTH_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::UIElements::StyleFloat get_borderRightWidth()
		{
			return ((::UnityEngine::UIElements::StyleFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERRIGHTWIDTH_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::UIElements::StyleFloat get_borderBottomWidth()
		{
			return ((::UnityEngine::UIElements::StyleFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_BORDERBOTTOMWIDTH_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> get_display()
		{
			return ((::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_DISPLAY_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::UIElements::StyleCursor get_cursor()
		{
			return ((::UnityEngine::UIElements::StyleCursor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDSTYLE_GET_CURSOR_OFFSET))(this);
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
