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

#define UNITYENGINE_UI_LAYOUTUTILITY_CLEARCACHEDACTIVELAYOUT_OFFSET UNITYSDK_OFFSET(0x1EE5CDF0)
#define UNITYENGINE_UI_LAYOUTUTILITY_CLEARCACHEDLAYOUT_OFFSET UNITYSDK_OFFSET(0x1EE59FB0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETACTIVEENDENABLEDLAYOUTBEHAVIOURS_OFFSET UNITYSDK_OFFSET(0x1EE5B330)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETACTIVEENDENABLEDLAYOUTCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x1EE5B9F0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1EE5E440)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLESIZE_OFFSET UNITYSDK_OFFSET(0x1EE5E2C0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1EE5E310)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x1EE5D2E0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTGROUP_OFFSET UNITYSDK_OFFSET(0x1EE5A840)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x1EE5E5C0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1EE5E570)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTROOT_OFFSET UNITYSDK_OFFSET(0x1EE5C190)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETMINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1EE5DA00)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETMINSIZE_OFFSET UNITYSDK_OFFSET(0x1EE5D880)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETMINWIDTH_OFFSET UNITYSDK_OFFSET(0x1EE5D8D0)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1EE5DF20)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDSIZE_OFFSET UNITYSDK_OFFSET(0x1EE5DB30)
#define UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1EE5DB80)
#define UNITYENGINE_UI_LAYOUTUTILITY_GET_CACHEACTIVELAYOUT_OFFSET UNITYSDK_OFFSET(0x1EE5CD80)
#define UNITYENGINE_UI_LAYOUTUTILITY_SET_CACHEACTIVELAYOUT_OFFSET UNITYSDK_OFFSET(0x1EE5CDC0)
#define UNITYENGINE_UI_LAYOUTUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE5E860)
#define UNITYENGINE_UI_LAYOUTUTILITY__GETACTIVEENDENABLEDLAYOUTCONTROLLERS_G__GETACTIVEANDENABLEDLAYOUTCONTROLLERS_16_0_OFFSET UNITYSDK_OFFSET(0x1EE5D580)
#define UNITYENGINE_UI_LAYOUTUTILITY__GETLAYOUTGROUP_G__GETLAYOUTGROUPIMPL_14_0_OFFSET UNITYSDK_OFFSET(0x1EE5D140)
#define UNITYENGINE_UI_LAYOUTUTILITY__GETLAYOUTROOT_G__GETLAYOUTROOTIMPL_17_0_OFFSET UNITYSDK_OFFSET(0x1EE5D7B0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutUtility_TypeDefinitionIndex = 6777;

	class LayoutUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Boolean>>** StaticGet_m_LayoutGroupInfoDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility_TypeDefinitionIndex)->GetStaticField(0x120C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*>** StaticGet_m_LayoutActiveBehavioursDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility_TypeDefinitionIndex)->GetStaticField(0x120C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*>** StaticGet_m_LayoutActiveControllerDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility_TypeDefinitionIndex)->GetStaticField(0x120D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>** StaticGet_m_LayoutRootDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility_TypeDefinitionIndex)->GetStaticField(0x120D8);
		}
		static ::System::Type** StaticGet_LayoutControllerType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility_TypeDefinitionIndex)->GetStaticField(0x120E0);
		}
		static ::System::Type** StaticGet_LayoutElementType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility_TypeDefinitionIndex)->GetStaticField(0x120E8);
		}
		static ::System::Type** StaticGet_LayoutGroupType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility_TypeDefinitionIndex)->GetStaticField(0x120F0);
		}
		static ::System::Boolean* StaticGet__CacheActiveLayout_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility_TypeDefinitionIndex)->GetStaticField(0x7A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_CacheActiveLayout()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GET_CACHEACTIVELAYOUT_OFFSET))();
		}

		static ::System::Void set_CacheActiveLayout(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_SET_CACHEACTIVELAYOUT_OFFSET))(a1);
		}

		static ::System::Void ClearCachedLayout()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_CLEARCACHEDLAYOUT_OFFSET))();
		}

		static ::System::Void ClearCachedActiveLayout()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_CLEARCACHEDACTIVELAYOUT_OFFSET))();
		}

		static ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>* GetActiveEndEnabledLayoutBehaviours(::UnityEngine::RectTransform* a1)
		{
			return ((::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETACTIVEENDENABLEDLAYOUTBEHAVIOURS_OFFSET))(a1);
		}

		static ::System::ValueTuple_2<::System::Int32, ::System::Boolean> GetLayoutGroup(::UnityEngine::RectTransform* a1)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Boolean>(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTGROUP_OFFSET))(a1);
		}

		static ::System::Void GetLayoutControllers(::UnityEngine::RectTransform* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTCONTROLLERS_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>* GetActiveEndEnabledLayoutControllers(::UnityEngine::RectTransform* a1)
		{
			return ((::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETACTIVEENDENABLEDLAYOUTCONTROLLERS_OFFSET))(a1);
		}

		static ::UnityEngine::RectTransform* GetLayoutRoot(::UnityEngine::RectTransform* a1)
		{
			return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTROOT_OFFSET))(a1);
		}

		static ::System::Single GetMinSize(::UnityEngine::RectTransform* a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETMINSIZE_OFFSET))(a1, a2);
		}

		static ::System::Single GetPreferredSize(::UnityEngine::RectTransform* a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDSIZE_OFFSET))(a1, a2);
		}

		static ::System::Single GetFlexibleSize(::UnityEngine::RectTransform* a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLESIZE_OFFSET))(a1, a2);
		}

		static ::System::Single GetMinWidth(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETMINWIDTH_OFFSET))(a1);
		}

		static ::System::Single GetPreferredWidth(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDWIDTH_OFFSET))(a1);
		}

		static ::System::Single GetFlexibleWidth(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLEWIDTH_OFFSET))(a1);
		}

		static ::System::Single GetMinHeight(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETMINHEIGHT_OFFSET))(a1);
		}

		static ::System::Single GetPreferredHeight(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETPREFERREDHEIGHT_OFFSET))(a1);
		}

		static ::System::Single GetFlexibleHeight(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETFLEXIBLEHEIGHT_OFFSET))(a1);
		}

		static ::System::Single GetLayoutProperty(::UnityEngine::RectTransform* a1, ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>* a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*, ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_OFFSET))(a1, a2, a3);
		}

		static ::System::Single GetLayoutProperty_1(::UnityEngine::RectTransform* a1, ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>* a2, ::System::Single a3, ::UnityEngine::UI::ILayoutElement*& a4)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*, ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>*, ::System::Single, ::UnityEngine::UI::ILayoutElement*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY_GETLAYOUTPROPERTY_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::ValueTuple_2<::System::Int32, ::System::Boolean> _GetLayoutGroup_g__GetLayoutGroupImpl_14_0(::UnityEngine::UI::LayoutUtility___c__DisplayClass14_0& a1)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Boolean>(*)(::UnityEngine::UI::LayoutUtility___c__DisplayClass14_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY__GETLAYOUTGROUP_G__GETLAYOUTGROUPIMPL_14_0_OFFSET))(a1);
		}

		static ::System::Void _GetActiveEndEnabledLayoutControllers_g__GetActiveAndEnabledLayoutControllers_16_0(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>* a1, ::UnityEngine::UI::LayoutUtility___c__DisplayClass16_0& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*, ::UnityEngine::UI::LayoutUtility___c__DisplayClass16_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY__GETACTIVEENDENABLEDLAYOUTCONTROLLERS_G__GETACTIVEANDENABLEDLAYOUTCONTROLLERS_16_0_OFFSET))(a1, a2);
		}

		static ::UnityEngine::RectTransform* _GetLayoutRoot_g__GetLayoutRootImpl_17_0(::UnityEngine::UI::LayoutUtility___c__DisplayClass17_0& a1)
		{
			return ((::UnityEngine::RectTransform*(*)(::UnityEngine::UI::LayoutUtility___c__DisplayClass17_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY__GETLAYOUTROOT_G__GETLAYOUTROOTIMPL_17_0_OFFSET))(a1);
		}
	};
}
