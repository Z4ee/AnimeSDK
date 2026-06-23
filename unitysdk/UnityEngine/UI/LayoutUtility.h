#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/LayoutUtility___c__DisplayClass12_0.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ILayoutElement; }
namespace UnityEngine::UI { class ILayoutLimiter; }

#define UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D7739F0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLESIZE_OFFSET UNITYSDK_OFFSET(0x1D773830)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1D773890)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x1D773B50)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_2_OFFSET UNITYSDK_OFFSET(0x1D773C60)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_3_OFFSET UNITYSDK_OFFSET(0x1D7740C0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D773BF0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETMINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D7728F0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETMINSIZE_OFFSET UNITYSDK_OFFSET(0x1D772570)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETMINWIDTH_OFFSET UNITYSDK_OFFSET(0x1D7725D0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D773250)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDSIZE_OFFSET UNITYSDK_OFFSET(0x1D772C10)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1D772C70)
#define UNITYENGINE_UI_LAYOUTUTILITY__GETLAYOUTPROPERTY_G__PROCESSLAYOUTELEMENT_12_1_OFFSET UNITYSDK_OFFSET(0x1D774560)
#define UNITYENGINE_UI_LAYOUTUTILITY__GETLAYOUTPROPERTY_G__PROCESSLAYOUTLIMITER_12_0_OFFSET UNITYSDK_OFFSET(0x1D774680)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutUtility_TypeDefinitionIndex = 18920;

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
