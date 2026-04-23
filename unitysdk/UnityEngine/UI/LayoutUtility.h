#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/UI/LayoutUtility___c__DisplayClass14_0.h"
#include "unitysdk/UnityEngine/UI/LayoutUtility___c__DisplayClass16_0.h"
#include "unitysdk/UnityEngine/UI/LayoutUtility___c__DisplayClass17_0.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { class ILayoutElement; }

#define UNITYENGINE_UI_LAYOUTUTILITY_CLEARCACHEDACTIVELAYOUT_OFFSET UNITYSDK_OFFSET(0x1A579260)
#define UNITYENGINE_UI_LAYOUTUTILITY_CLEARCACHEDLAYOUT_OFFSET UNITYSDK_OFFSET(0x1A576730)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETACTIVEENDENABLEDLAYOUTBEHAVIOURS_OFFSET UNITYSDK_OFFSET(0x1A5779A0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETACTIVEENDENABLEDLAYOUTCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x1A578000)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A57A770)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLESIZE_OFFSET UNITYSDK_OFFSET(0x1A57A610)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1A57A660)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x1A579770)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTGROUP_OFFSET UNITYSDK_OFFSET(0x1A576FA0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x1A57A8D0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1A57A880)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTROOT_OFFSET UNITYSDK_OFFSET(0x1A578810)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETMINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A579E50)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETMINSIZE_OFFSET UNITYSDK_OFFSET(0x1A579CF0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETMINWIDTH_OFFSET UNITYSDK_OFFSET(0x1A579D40)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A57A2E0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDSIZE_OFFSET UNITYSDK_OFFSET(0x1A579F60)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1A579FB0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GET_CACHEACTIVELAYOUT_OFFSET UNITYSDK_OFFSET(0x1A5791F0)
#define UNITYENGINE_UI_LAYOUTUTILITY_SET_CACHEACTIVELAYOUT_OFFSET UNITYSDK_OFFSET(0x1A579230)
#define UNITYENGINE_UI_LAYOUTUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A57AAF0)
#define UNITYENGINE_UI_LAYOUTUTILITY__GETACTIVEENDENABLEDLAYOUTCONTROLLERS_G__GETACTIVEANDENABLEDLAYOUTCONTROLLERS_16_0_OFFSET UNITYSDK_OFFSET(0x1A579A00)
#define UNITYENGINE_UI_LAYOUTUTILITY__GETLAYOUTGROUP_G__GETLAYOUTGROUPIMPL_14_0_OFFSET UNITYSDK_OFFSET(0x1A5795E0)
#define UNITYENGINE_UI_LAYOUTUTILITY__GETLAYOUTROOT_G__GETLAYOUTROOTIMPL_17_0_OFFSET UNITYSDK_OFFSET(0x1A579C20)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutUtility_TypeDefinitionIndex = 5665;

	class LayoutUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Boolean>>** StaticGet_m_LayoutGroupInfoDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility_TypeDefinitionIndex)->GetStaticField(0x15E60);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>** StaticGet_m_LayoutRootDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility_TypeDefinitionIndex)->GetStaticField(0x15E68);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*>** StaticGet_m_LayoutActiveControllerDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility_TypeDefinitionIndex)->GetStaticField(0x15E70);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*>** StaticGet_m_LayoutActiveBehavioursDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility_TypeDefinitionIndex)->GetStaticField(0x15E78);
		}
		static ::System::Type** StaticGet_LayoutGroupType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility_TypeDefinitionIndex)->GetStaticField(0x15E80);
		}
		static ::System::Type** StaticGet_LayoutControllerType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility_TypeDefinitionIndex)->GetStaticField(0x15E88);
		}
		static ::System::Type** StaticGet_LayoutElementType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility_TypeDefinitionIndex)->GetStaticField(0x15E90);
		}
		static ::System::Boolean* StaticGet__CacheActiveLayout_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility_TypeDefinitionIndex)->GetStaticField(0x62E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_CacheActiveLayout()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GET_CACHEACTIVELAYOUT_OFFSET))();
		}

		static ::System::Void set_CacheActiveLayout(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_SET_CACHEACTIVELAYOUT_OFFSET))(value);
		}

		static ::System::Void ClearCachedLayout()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_CLEARCACHEDLAYOUT_OFFSET))();
		}

		static ::System::Void ClearCachedActiveLayout()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_CLEARCACHEDACTIVELAYOUT_OFFSET))();
		}

		static ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>* GetActiveEndEnabledLayoutBehaviours(::UnityEngine::RectTransform* rect)
		{
			return ((::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETACTIVEENDENABLEDLAYOUTBEHAVIOURS_OFFSET))(rect);
		}

		static ::System::ValueTuple_2<::System::Int32, ::System::Boolean> GetLayoutGroup(::UnityEngine::RectTransform* rect)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Boolean>(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTGROUP_OFFSET))(rect);
		}

		static ::System::Void GetLayoutControllers(::UnityEngine::RectTransform* rect, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>* components)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTCONTROLLERS_OFFSET))(rect, components);
		}

		static ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>* GetActiveEndEnabledLayoutControllers(::UnityEngine::RectTransform* rect)
		{
			return ((::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETACTIVEENDENABLEDLAYOUTCONTROLLERS_OFFSET))(rect);
		}

		static ::UnityEngine::RectTransform* GetLayoutRoot(::UnityEngine::RectTransform* rect)
		{
			return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTROOT_OFFSET))(rect);
		}

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

		static ::System::Single GetLayoutProperty_1(::UnityEngine::RectTransform* rect, ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>* property, ::System::Single defaultValue, ::UnityEngine::UI::ILayoutElement*& source)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*, ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>*, ::System::Single, ::UnityEngine::UI::ILayoutElement*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_1_OFFSET))(rect, property, defaultValue, source);
		}

		static ::System::ValueTuple_2<::System::Int32, ::System::Boolean> _GetLayoutGroup_g__GetLayoutGroupImpl_14_0(::UnityEngine::UI::LayoutUtility___c__DisplayClass14_0& a1)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Boolean>(*)(::UnityEngine::UI::LayoutUtility___c__DisplayClass14_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY__GETLAYOUTGROUP_G__GETLAYOUTGROUPIMPL_14_0_OFFSET))(a1);
		}

		static ::System::Void _GetActiveEndEnabledLayoutControllers_g__GetActiveAndEnabledLayoutControllers_16_0(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>* components, ::UnityEngine::UI::LayoutUtility___c__DisplayClass16_0& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*, ::UnityEngine::UI::LayoutUtility___c__DisplayClass16_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY__GETACTIVEENDENABLEDLAYOUTCONTROLLERS_G__GETACTIVEANDENABLEDLAYOUTCONTROLLERS_16_0_OFFSET))(components, a2);
		}

		static ::UnityEngine::RectTransform* _GetLayoutRoot_g__GetLayoutRootImpl_17_0(::UnityEngine::UI::LayoutUtility___c__DisplayClass17_0& a1)
		{
			return ((::UnityEngine::RectTransform*(*)(::UnityEngine::UI::LayoutUtility___c__DisplayClass17_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY__GETLAYOUTROOT_G__GETLAYOUTROOTIMPL_17_0_OFFSET))(a1);
		}
	};
}
