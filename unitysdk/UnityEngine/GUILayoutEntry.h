#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }
namespace UnityEngine { class GUILayoutOption; }
namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_GUILAYOUTENTRY_APPLYOPTIONS_OFFSET UNITYSDK_OFFSET(0x1ACECD50)
#define UNITYENGINE_GUILAYOUTENTRY_APPLYSTYLESETTINGS_OFFSET UNITYSDK_OFFSET(0x1ACECCB0)
#define UNITYENGINE_GUILAYOUTENTRY_CALCHEIGHT_OFFSET UNITYSDK_OFFSET(0x1ACECC80)
#define UNITYENGINE_GUILAYOUTENTRY_CALCWIDTH_OFFSET UNITYSDK_OFFSET(0x1ACECC70)
#define UNITYENGINE_GUILAYOUTENTRY_GET_MARGINBOTTOM_OFFSET UNITYSDK_OFFSET(0x1ACEC9A0)
#define UNITYENGINE_GUILAYOUTENTRY_GET_MARGINHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1ACECA20)
#define UNITYENGINE_GUILAYOUTENTRY_GET_MARGINLEFT_OFFSET UNITYSDK_OFFSET(0x1ACEC820)
#define UNITYENGINE_GUILAYOUTENTRY_GET_MARGINRIGHT_OFFSET UNITYSDK_OFFSET(0x1ACEC8A0)
#define UNITYENGINE_GUILAYOUTENTRY_GET_MARGINTOP_OFFSET UNITYSDK_OFFSET(0x1ACEC920)
#define UNITYENGINE_GUILAYOUTENTRY_GET_MARGINVERTICAL_OFFSET UNITYSDK_OFFSET(0x1ACECA50)
#define UNITYENGINE_GUILAYOUTENTRY_GET_STYLE_OFFSET UNITYSDK_OFFSET(0x1ACEC810)
#define UNITYENGINE_GUILAYOUTENTRY_SETHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1ACECC90)
#define UNITYENGINE_GUILAYOUTENTRY_SETVERTICAL_OFFSET UNITYSDK_OFFSET(0x1ACECCA0)
#define UNITYENGINE_GUILAYOUTENTRY_SET_STYLE_OFFSET UNITYSDK_OFFSET(0x1ACEC770)
#define UNITYENGINE_GUILAYOUTENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ACED240)
#define UNITYENGINE_GUILAYOUTENTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACEDD40)
#define UNITYENGINE_GUILAYOUTENTRY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ACECB80)
#define UNITYENGINE_GUILAYOUTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACECA80)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayoutEntry_TypeDefinitionIndex = 6380;

	class GUILayoutEntry : public ::System::Object
	{
	public:
		static ::UnityEngine::Rect* StaticGet_kDummyRect()
		{
			return (::UnityEngine::Rect*)Il2CppClass::FromTypeDefinitionIndex(GUILayoutEntry_TypeDefinitionIndex)->GetStaticField(0x2F90);
		}
		static ::System::Int32* StaticGet_indent()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUILayoutEntry_TypeDefinitionIndex)->GetStaticField(0x2FA0);
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

		::System::Void _ctor(::System::Single _minWidth, ::System::Single _maxWidth, ::System::Single _minHeight, ::System::Single _maxHeight, ::UnityEngine::GUIStyle* _style)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY__CTOR_OFFSET))(this, _minWidth, _maxWidth, _minHeight, _maxHeight, _style);
		}

		::System::Void _ctor_1(::System::Single _minWidth, ::System::Single _maxWidth, ::System::Single _minHeight, ::System::Single _maxHeight, ::UnityEngine::GUIStyle* _style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY__CTOR_1_OFFSET))(this, _minWidth, _maxWidth, _minHeight, _maxHeight, _style, options);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY__CCTOR_OFFSET))();
		}

		::UnityEngine::GUIStyle* get_style()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_GET_STYLE_OFFSET))(this);
		}

		::System::Void set_style(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_SET_STYLE_OFFSET))(this, value);
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

		::System::Void SetHorizontal(::System::Single x, ::System::Single width)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_SETHORIZONTAL_OFFSET))(this, x, width);
		}

		::System::Void SetVertical(::System::Single y, ::System::Single height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_SETVERTICAL_OFFSET))(this, y, height);
		}

		::System::Void ApplyStyleSettings(::UnityEngine::GUIStyle* style)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_APPLYSTYLESETTINGS_OFFSET))(this, style);
		}

		::System::Void ApplyOptions(::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_APPLYOPTIONS_OFFSET))(this, options);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_TOSTRING_OFFSET))(this);
		}
	};
}
