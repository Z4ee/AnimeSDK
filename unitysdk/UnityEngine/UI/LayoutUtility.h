#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/LayoutUtility___c__DisplayClass12_0.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ILayoutElement; }
namespace UnityEngine::UI { class ILayoutLimiter; }

#define UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1EAF8320)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLESIZE_OFFSET UNITYSDK_OFFSET(0x1EAF8160)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1EAF81C0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x1EAF8480)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_2_OFFSET UNITYSDK_OFFSET(0x1EAF8590)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_3_OFFSET UNITYSDK_OFFSET(0x1EAF89F0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1EAF8520)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETMINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1EAF7250)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETMINSIZE_OFFSET UNITYSDK_OFFSET(0x1EAF6EE0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETMINWIDTH_OFFSET UNITYSDK_OFFSET(0x1EAF6F40)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1EAF7B90)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDSIZE_OFFSET UNITYSDK_OFFSET(0x1EAF7560)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1EAF75C0)
#define UNITYENGINE_UI_LAYOUTUTILITY__GETLAYOUTPROPERTY_G__PROCESSLAYOUTELEMENT_12_1_OFFSET UNITYSDK_OFFSET(0x1EAF8EA0)
#define UNITYENGINE_UI_LAYOUTUTILITY__GETLAYOUTPROPERTY_G__PROCESSLAYOUTLIMITER_12_0_OFFSET UNITYSDK_OFFSET(0x1EAF8FD0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutUtility_TypeDefinitionIndex = 19262;

	class LayoutUtility : public ::System::Object
	{
	public:
		static ::System::Single GetMinSize(::UnityEngine::RectTransform* rect, ::System::Int32 axis)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETMINSIZE_OFFSET))(rect, axis);
		}

		static ::System::Single GetPreferredSize(::UnityEngine::RectTransform* rect, ::System::Int32 axis)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDSIZE_OFFSET))(rect, axis);
		}

		static ::System::Single GetFlexibleSize(::UnityEngine::RectTransform* rect, ::System::Int32 axis)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLESIZE_OFFSET))(rect, axis);
		}

		static ::System::Single GetMinWidth(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETMINWIDTH_OFFSET))(rect);
		}

		static ::System::Single GetPreferredWidth(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDWIDTH_OFFSET))(rect);
		}

		static ::System::Single GetFlexibleWidth(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLEWIDTH_OFFSET))(rect);
		}

		static ::System::Single GetMinHeight(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETMINHEIGHT_OFFSET))(rect);
		}

		static ::System::Single GetPreferredHeight(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDHEIGHT_OFFSET))(rect);
		}

		static ::System::Single GetFlexibleHeight(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLEHEIGHT_OFFSET))(rect);
		}

		static ::System::Single GetLayoutProperty(::UnityEngine::RectTransform* rect, ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>* property, ::System::Single defaultValue)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*, ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_OFFSET))(rect, property, defaultValue);
		}

		static ::System::Single GetLayoutProperty_1(::UnityEngine::RectTransform* rect, ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>* property, ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>* propertyMinLimiter, ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>* propertyMaxLimiter, ::System::Single defaultValue)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*, ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>*, ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>*, ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_1_OFFSET))(rect, property, propertyMinLimiter, propertyMaxLimiter, defaultValue);
		}

		static ::System::Single GetLayoutProperty_2(::UnityEngine::RectTransform* rect, ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>* property, ::System::Single defaultValue, ::UnityEngine::UI::ILayoutElement*& source)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*, ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>*, ::System::Single, ::UnityEngine::UI::ILayoutElement*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_2_OFFSET))(rect, property, defaultValue, source);
		}

		static ::System::Single GetLayoutProperty_3(::UnityEngine::RectTransform* rect, ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>* property, ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>* propertyMinLimiter, ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>* propertyMaxLimiter, ::System::Single defaultValue, ::UnityEngine::UI::ILayoutElement*& source)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*, ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>*, ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>*, ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>*, ::System::Single, ::UnityEngine::UI::ILayoutElement*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_3_OFFSET))(rect, property, propertyMinLimiter, propertyMaxLimiter, defaultValue, source);
		}

		static ::System::Void _GetLayoutProperty_g__ProcessLayoutLimiter_12_0(::UnityEngine::UI::ILayoutLimiter* layoutLimiter, ::UnityEngine::UI::LayoutUtility___c__DisplayClass12_0& a2)
		{
			return ((::System::Void(*)(::UnityEngine::UI::ILayoutLimiter*, ::UnityEngine::UI::LayoutUtility___c__DisplayClass12_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY__GETLAYOUTPROPERTY_G__PROCESSLAYOUTLIMITER_12_0_OFFSET))(layoutLimiter, a2);
		}

		static ::System::Void _GetLayoutProperty_g__ProcessLayoutElement_12_1(::UnityEngine::UI::ILayoutElement* layoutComp_inner, ::UnityEngine::UI::ILayoutElement*& source_inner, ::UnityEngine::UI::LayoutUtility___c__DisplayClass12_0& a3)
		{
			return ((::System::Void(*)(::UnityEngine::UI::ILayoutElement*, ::UnityEngine::UI::ILayoutElement*&, ::UnityEngine::UI::LayoutUtility___c__DisplayClass12_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY__GETLAYOUTPROPERTY_G__PROCESSLAYOUTELEMENT_12_1_OFFSET))(layoutComp_inner, source_inner, a3);
		}
	};
}
