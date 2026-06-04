#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }
namespace UnityEngine { class GUILayoutOption; }
namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_GUILAYOUTENTRY_APPLYOPTIONS_OFFSET UNITYSDK_OFFSET(0x1B2FAD90)
#define UNITYENGINE_GUILAYOUTENTRY_APPLYSTYLESETTINGS_OFFSET UNITYSDK_OFFSET(0x1B2FAD10)
#define UNITYENGINE_GUILAYOUTENTRY_CALCHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B2FE3D0)
#define UNITYENGINE_GUILAYOUTENTRY_CALCWIDTH_OFFSET UNITYSDK_OFFSET(0x1B2FE3C0)
#define UNITYENGINE_GUILAYOUTENTRY_GET_MARGINBOTTOM_OFFSET UNITYSDK_OFFSET(0x1B2FE1A0)
#define UNITYENGINE_GUILAYOUTENTRY_GET_MARGINHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1B2FE200)
#define UNITYENGINE_GUILAYOUTENTRY_GET_MARGINLEFT_OFFSET UNITYSDK_OFFSET(0x1B2FE080)
#define UNITYENGINE_GUILAYOUTENTRY_GET_MARGINRIGHT_OFFSET UNITYSDK_OFFSET(0x1B2FE0E0)
#define UNITYENGINE_GUILAYOUTENTRY_GET_MARGINTOP_OFFSET UNITYSDK_OFFSET(0x1B2FE140)
#define UNITYENGINE_GUILAYOUTENTRY_GET_MARGINVERTICAL_OFFSET UNITYSDK_OFFSET(0x1B2FE230)
#define UNITYENGINE_GUILAYOUTENTRY_GET_STYLE_OFFSET UNITYSDK_OFFSET(0x1B2FE050)
#define UNITYENGINE_GUILAYOUTENTRY_SETHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1B2FE3E0)
#define UNITYENGINE_GUILAYOUTENTRY_SETVERTICAL_OFFSET UNITYSDK_OFFSET(0x1B2FE3F0)
#define UNITYENGINE_GUILAYOUTENTRY_SET_STYLE_OFFSET UNITYSDK_OFFSET(0x1B2FE060)
#define UNITYENGINE_GUILAYOUTENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B2FE420)
#define UNITYENGINE_GUILAYOUTENTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2FE9A0)
#define UNITYENGINE_GUILAYOUTENTRY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2FE260)
#define UNITYENGINE_GUILAYOUTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2FAB10)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayoutEntry_TypeDefinitionIndex = 5232;

	class GUILayoutEntry : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_indent()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUILayoutEntry_TypeDefinitionIndex)->GetStaticField(0xB060);
		}
		static ::UnityEngine::Rect* StaticGet_kDummyRect()
		{
			return (::UnityEngine::Rect*)Il2CppClass::FromTypeDefinitionIndex(GUILayoutEntry_TypeDefinitionIndex)->GetStaticField(0xB064);
		}
		::System::Single minWidth; // 0x10
		::System::Single maxWidth; // 0x14
		::System::Single minHeight; // 0x18
		::System::Single maxHeight; // 0x1C
		::UnityEngine::Rect rect; // 0x20
		::System::Int32 stretchWidth; // 0x30
		::System::Int32 stretchHeight; // 0x34
		::System::Boolean consideredForMargin; // 0x38
		::UnityEngine::GUIStyle* m_Style; // 0x40

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::GUIStyle* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::GUIStyle* a5, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY__CCTOR_OFFSET))();
		}

		::UnityEngine::GUIStyle* get_style()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_GET_STYLE_OFFSET))(this);
		}

		::System::Void set_style(::UnityEngine::GUIStyle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_SET_STYLE_OFFSET))(this, a1);
		}

		::System::Int32 get_marginLeft()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_GET_MARGINLEFT_OFFSET))(this);
		}

		::System::Int32 get_marginRight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_GET_MARGINRIGHT_OFFSET))(this);
		}

		::System::Int32 get_marginTop()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_GET_MARGINTOP_OFFSET))(this);
		}

		::System::Int32 get_marginBottom()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_GET_MARGINBOTTOM_OFFSET))(this);
		}

		::System::Int32 get_marginHorizontal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_GET_MARGINHORIZONTAL_OFFSET))(this);
		}

		::System::Int32 get_marginVertical()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_GET_MARGINVERTICAL_OFFSET))(this);
		}

		::System::Void CalcWidth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_CALCWIDTH_OFFSET))(this);
		}

		::System::Void CalcHeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_CALCHEIGHT_OFFSET))(this);
		}

		::System::Void SetHorizontal(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_SETHORIZONTAL_OFFSET))(this, a1, a2);
		}

		::System::Void SetVertical(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_SETVERTICAL_OFFSET))(this, a1, a2);
		}

		::System::Void ApplyStyleSettings(::UnityEngine::GUIStyle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_APPLYSTYLESETTINGS_OFFSET))(this, a1);
		}

		::System::Void ApplyOptions(::Il2CppArray<::UnityEngine::GUILayoutOption*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_APPLYOPTIONS_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_TOSTRING_OFFSET))(this);
		}
	};
}
