#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::UI { class ILayoutElement; }
namespace UnityEngine::UI { class ILayoutLimiter; }

#define UNITYENGINE_UI_LAYOUTUTILITY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2F2DB0)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2F2DF0)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETFLEXIBLEHEIGHT_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C2F3530)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETFLEXIBLEWIDTH_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C2F3130)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETMINHEIGHT_B__6_0_OFFSET UNITYSDK_OFFSET(0x1C2F3200)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETMINHEIGHT_B__6_1_OFFSET UNITYSDK_OFFSET(0x1C2F32D0)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETMINHEIGHT_B__6_2_OFFSET UNITYSDK_OFFSET(0x1C2F32F0)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETMINWIDTH_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C2F2E00)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETMINWIDTH_B__3_1_OFFSET UNITYSDK_OFFSET(0x1C2F2ED0)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETMINWIDTH_B__3_2_OFFSET UNITYSDK_OFFSET(0x1C2F2EF0)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDHEIGHT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1C2F3310)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDHEIGHT_B__7_1_OFFSET UNITYSDK_OFFSET(0x1C2F33E0)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDHEIGHT_B__7_2_OFFSET UNITYSDK_OFFSET(0x1C2F3400)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDHEIGHT_B__7_3_OFFSET UNITYSDK_OFFSET(0x1C2F3420)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDHEIGHT_B__7_4_OFFSET UNITYSDK_OFFSET(0x1C2F34F0)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDHEIGHT_B__7_5_OFFSET UNITYSDK_OFFSET(0x1C2F3510)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDWIDTH_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C2F2F10)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDWIDTH_B__4_1_OFFSET UNITYSDK_OFFSET(0x1C2F2FE0)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDWIDTH_B__4_2_OFFSET UNITYSDK_OFFSET(0x1C2F3000)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDWIDTH_B__4_3_OFFSET UNITYSDK_OFFSET(0x1C2F3020)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDWIDTH_B__4_4_OFFSET UNITYSDK_OFFSET(0x1C2F30F0)
#define UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDWIDTH_B__4_5_OFFSET UNITYSDK_OFFSET(0x1C2F3110)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutUtility___c_TypeDefinitionIndex = 8413;

	class LayoutUtility___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>** StaticGet___9__4_4()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x7680);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x7688);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x7690);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x7698);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x76A0);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>** StaticGet___9__4_2()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x76A8);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__4_3()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x76B0);
		}
		static ::UnityEngine::UI::LayoutUtility___c** StaticGet___9()
		{
			return (::UnityEngine::UI::LayoutUtility___c**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x76B8);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x76C0);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>** StaticGet___9__4_5()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x76C8);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x76D0);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x76D8);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>** StaticGet___9__7_5()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x76E0);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x76E8);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x76F0);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>** StaticGet___9__7_4()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x76F8);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x7700);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__7_3()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x7708);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>** StaticGet___9__7_2()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x7710);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x7718);
		}
		static ::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LayoutUtility___c_TypeDefinitionIndex)->GetStaticField(0x7720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__CTOR_OFFSET))(this);
		}

		::System::Single _GetMinWidth_b__3_0(::UnityEngine::UI::ILayoutElement* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETMINWIDTH_B__3_0_OFFSET))(this, e);
		}

		::System::Single _GetMinWidth_b__3_1(::UnityEngine::UI::ILayoutLimiter* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutLimiter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETMINWIDTH_B__3_1_OFFSET))(this, e);
		}

		::System::Single _GetMinWidth_b__3_2(::UnityEngine::UI::ILayoutLimiter* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutLimiter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETMINWIDTH_B__3_2_OFFSET))(this, e);
		}

		::System::Single _GetPreferredWidth_b__4_0(::UnityEngine::UI::ILayoutElement* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDWIDTH_B__4_0_OFFSET))(this, e);
		}

		::System::Single _GetPreferredWidth_b__4_1(::UnityEngine::UI::ILayoutLimiter* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutLimiter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDWIDTH_B__4_1_OFFSET))(this, e);
		}

		::System::Single _GetPreferredWidth_b__4_2(::UnityEngine::UI::ILayoutLimiter* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutLimiter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDWIDTH_B__4_2_OFFSET))(this, e);
		}

		::System::Single _GetPreferredWidth_b__4_3(::UnityEngine::UI::ILayoutElement* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDWIDTH_B__4_3_OFFSET))(this, e);
		}

		::System::Single _GetPreferredWidth_b__4_4(::UnityEngine::UI::ILayoutLimiter* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutLimiter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDWIDTH_B__4_4_OFFSET))(this, e);
		}

		::System::Single _GetPreferredWidth_b__4_5(::UnityEngine::UI::ILayoutLimiter* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutLimiter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDWIDTH_B__4_5_OFFSET))(this, e);
		}

		::System::Single _GetFlexibleWidth_b__5_0(::UnityEngine::UI::ILayoutElement* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETFLEXIBLEWIDTH_B__5_0_OFFSET))(this, e);
		}

		::System::Single _GetMinHeight_b__6_0(::UnityEngine::UI::ILayoutElement* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETMINHEIGHT_B__6_0_OFFSET))(this, e);
		}

		::System::Single _GetMinHeight_b__6_1(::UnityEngine::UI::ILayoutLimiter* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutLimiter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETMINHEIGHT_B__6_1_OFFSET))(this, e);
		}

		::System::Single _GetMinHeight_b__6_2(::UnityEngine::UI::ILayoutLimiter* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutLimiter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETMINHEIGHT_B__6_2_OFFSET))(this, e);
		}

		::System::Single _GetPreferredHeight_b__7_0(::UnityEngine::UI::ILayoutElement* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDHEIGHT_B__7_0_OFFSET))(this, e);
		}

		::System::Single _GetPreferredHeight_b__7_1(::UnityEngine::UI::ILayoutLimiter* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutLimiter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDHEIGHT_B__7_1_OFFSET))(this, e);
		}

		::System::Single _GetPreferredHeight_b__7_2(::UnityEngine::UI::ILayoutLimiter* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutLimiter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDHEIGHT_B__7_2_OFFSET))(this, e);
		}

		::System::Single _GetPreferredHeight_b__7_3(::UnityEngine::UI::ILayoutElement* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDHEIGHT_B__7_3_OFFSET))(this, e);
		}

		::System::Single _GetPreferredHeight_b__7_4(::UnityEngine::UI::ILayoutLimiter* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutLimiter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDHEIGHT_B__7_4_OFFSET))(this, e);
		}

		::System::Single _GetPreferredHeight_b__7_5(::UnityEngine::UI::ILayoutLimiter* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutLimiter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETPREFERREDHEIGHT_B__7_5_OFFSET))(this, e);
		}

		::System::Single _GetFlexibleHeight_b__8_0(::UnityEngine::UI::ILayoutElement* e)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTUTILITY___C__GETFLEXIBLEHEIGHT_B__8_0_OFFSET))(this, e);
		}
	};
}
