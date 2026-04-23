#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/GUILayoutEntry.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GUILayoutOption; }
namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_GUILAYOUTGROUP_ADD_OFFSET UNITYSDK_OFFSET(0x1A4AC010)
#define UNITYENGINE_GUILAYOUTGROUP_APPLYOPTIONS_OFFSET UNITYSDK_OFFSET(0x1A4AF500)
#define UNITYENGINE_GUILAYOUTGROUP_APPLYSTYLESETTINGS_OFFSET UNITYSDK_OFFSET(0x1A4B03D0)
#define UNITYENGINE_GUILAYOUTGROUP_CALCHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A4B19B0)
#define UNITYENGINE_GUILAYOUTGROUP_CALCWIDTH_OFFSET UNITYSDK_OFFSET(0x1A4B04E0)
#define UNITYENGINE_GUILAYOUTGROUP_GETNEXT_OFFSET UNITYSDK_OFFSET(0x1A4AC070)
#define UNITYENGINE_GUILAYOUTGROUP_GET_MARGINBOTTOM_OFFSET UNITYSDK_OFFSET(0x1A4B0280)
#define UNITYENGINE_GUILAYOUTGROUP_GET_MARGINLEFT_OFFSET UNITYSDK_OFFSET(0x1A4B0250)
#define UNITYENGINE_GUILAYOUTGROUP_GET_MARGINRIGHT_OFFSET UNITYSDK_OFFSET(0x1A4B0260)
#define UNITYENGINE_GUILAYOUTGROUP_GET_MARGINTOP_OFFSET UNITYSDK_OFFSET(0x1A4B0270)
#define UNITYENGINE_GUILAYOUTGROUP_RESETCURSOR_OFFSET UNITYSDK_OFFSET(0x1A4B04D0)
#define UNITYENGINE_GUILAYOUTGROUP_SETHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1A4B0CF0)
#define UNITYENGINE_GUILAYOUTGROUP_SETVERTICAL_OFFSET UNITYSDK_OFFSET(0x1A4B20F0)
#define UNITYENGINE_GUILAYOUTGROUP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A4B2DC0)
#define UNITYENGINE_GUILAYOUTGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4B30F0)
#define UNITYENGINE_GUILAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B0290)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayoutGroup_TypeDefinitionIndex = 5141;

	class GUILayoutGroup : public ::UnityEngine::GUILayoutEntry
	{
	public:
		static ::UnityEngine::GUILayoutEntry** StaticGet_none()
		{
			return (::UnityEngine::GUILayoutEntry**)Il2CppClass::FromTypeDefinitionIndex(GUILayoutGroup_TypeDefinitionIndex)->GetStaticField(0x16030);
		}
		::System::Collections::Generic::List_1<::UnityEngine::GUILayoutEntry*>* entries; // 0x48
		::System::Boolean isVertical; // 0x50
		::System::Boolean resetCoords; // 0x51
		::System::Single spacing; // 0x54
		::System::Boolean sameSize; // 0x58
		::System::Boolean isWindow; // 0x59
		::System::Int32 windowID; // 0x5C
		::System::Int32 m_Cursor; // 0x60
		::System::Int32 m_StretchableCountX; // 0x64
		::System::Int32 m_StretchableCountY; // 0x68
		::System::Boolean m_UserSpecifiedWidth; // 0x6C
		::System::Boolean m_UserSpecifiedHeight; // 0x6D
		::System::Single m_ChildMinWidth; // 0x70
		::System::Single m_ChildMaxWidth; // 0x74
		::System::Single m_ChildMinHeight; // 0x78
		::System::Single m_ChildMaxHeight; // 0x7C
		::System::Int32 m_MarginLeft; // 0x80
		::System::Int32 m_MarginRight; // 0x84
		::System::Int32 m_MarginTop; // 0x88
		::System::Int32 m_MarginBottom; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP__CCTOR_OFFSET))();
		}

		::System::Int32 get_marginLeft()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_GET_MARGINLEFT_OFFSET))(this);
		}

		::System::Int32 get_marginRight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_GET_MARGINRIGHT_OFFSET))(this);
		}

		::System::Int32 get_marginTop()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_GET_MARGINTOP_OFFSET))(this);
		}

		::System::Int32 get_marginBottom()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_GET_MARGINBOTTOM_OFFSET))(this);
		}

		::System::Void ApplyOptions(::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_APPLYOPTIONS_OFFSET))(this, options);
		}

		::System::Void ApplyStyleSettings(::UnityEngine::GUIStyle* style)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_APPLYSTYLESETTINGS_OFFSET))(this, style);
		}

		::System::Void ResetCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_RESETCURSOR_OFFSET))(this);
		}

		::UnityEngine::GUILayoutEntry* GetNext()
		{
			return ((::UnityEngine::GUILayoutEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_GETNEXT_OFFSET))(this);
		}

		::System::Void Add(::UnityEngine::GUILayoutEntry* e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUILayoutEntry*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_ADD_OFFSET))(this, e);
		}

		::System::Void CalcWidth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_CALCWIDTH_OFFSET))(this);
		}

		::System::Void SetHorizontal(::System::Single x, ::System::Single width)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_SETHORIZONTAL_OFFSET))(this, x, width);
		}

		::System::Void CalcHeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_CALCHEIGHT_OFFSET))(this);
		}

		::System::Void SetVertical(::System::Single y, ::System::Single height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_SETVERTICAL_OFFSET))(this, y, height);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTGROUP_TOSTRING_OFFSET))(this);
		}
	};
}
