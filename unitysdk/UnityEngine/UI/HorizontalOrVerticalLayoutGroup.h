#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/LayoutGroup.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CALCALONGAXIS_OFFSET UNITYSDK_OFFSET(0x1E769400)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GETCHILDSIZES_OFFSET UNITYSDK_OFFSET(0x1E76B0B0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GETCOLROW_OFFSET UNITYSDK_OFFSET(0x1E76B070)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E76AC10)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLPOSX_OFFSET UNITYSDK_OFFSET(0x1E76ACF0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLPOSY_OFFSET UNITYSDK_OFFSET(0x1E76ADD0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLWIDTH_OFFSET UNITYSDK_OFFSET(0x1E76AB30)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDFORCEEXPANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E76AA50)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDFORCEEXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0x1E76A970)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDSCALEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E76AF90)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDSCALEWIDTH_OFFSET UNITYSDK_OFFSET(0x1E76AEB0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_SPACING_OFFSET UNITYSDK_OFFSET(0x1E76A840)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SETCHILDRENALONGAXIS_OFFSET UNITYSDK_OFFSET(0x1E769B10)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E76AC20)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLPOSX_OFFSET UNITYSDK_OFFSET(0x1E76AD00)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLPOSY_OFFSET UNITYSDK_OFFSET(0x1E76ADE0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLWIDTH_OFFSET UNITYSDK_OFFSET(0x1E76AB40)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDFORCEEXPANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E76AA60)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDFORCEEXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0x1E76A980)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDSCALEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E76AFA0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDSCALEWIDTH_OFFSET UNITYSDK_OFFSET(0x1E76AEC0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_SPACING_OFFSET UNITYSDK_OFFSET(0x1E76A850)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E769390)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP___BASE_GETCOLROW_OFFSET UNITYSDK_OFFSET(0x1E76B390)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int HorizontalOrVerticalLayoutGroup_TypeDefinitionIndex = 18905;

	class HorizontalOrVerticalLayoutGroup : public ::UnityEngine::UI::LayoutGroup
	{
	public:
		::System::Single m_Spacing; // 0x58
		::System::Boolean m_ChildForceExpandWidth; // 0x5C
		::System::Boolean m_ChildForceExpandHeight; // 0x5D
		::System::Boolean m_ChildControlWidth; // 0x5E
		::System::Boolean m_ChildControlHeight; // 0x5F
		::System::Boolean m_ChildControlPosX; // 0x60
		::System::Boolean m_ChildControlPosY; // 0x61
		::System::Boolean m_ChildScaleWidth; // 0x62
		::System::Boolean m_ChildScaleHeight; // 0x63
		::System::Int32 lastCellCountX; // 0x64
		::System::Int32 lastCellCountY; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP__CTOR_OFFSET))(this);
		}

		::System::Single get_spacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_SPACING_OFFSET))(this);
		}

		::System::Void set_spacing(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_SPACING_OFFSET))(this, value);
		}

		::System::Boolean get_childForceExpandWidth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDFORCEEXPANDWIDTH_OFFSET))(this);
		}

		::System::Void set_childForceExpandWidth(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDFORCEEXPANDWIDTH_OFFSET))(this, value);
		}

		::System::Boolean get_childForceExpandHeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDFORCEEXPANDHEIGHT_OFFSET))(this);
		}

		::System::Void set_childForceExpandHeight(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDFORCEEXPANDHEIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_childControlWidth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLWIDTH_OFFSET))(this);
		}

		::System::Void set_childControlWidth(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLWIDTH_OFFSET))(this, value);
		}

		::System::Boolean get_childControlHeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLHEIGHT_OFFSET))(this);
		}

		::System::Void set_childControlHeight(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLHEIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_childControlPosX()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLPOSX_OFFSET))(this);
		}

		::System::Void set_childControlPosX(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLPOSX_OFFSET))(this, value);
		}

		::System::Boolean get_childControlPosY()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLPOSY_OFFSET))(this);
		}

		::System::Void set_childControlPosY(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLPOSY_OFFSET))(this, value);
		}

		::System::Boolean get_childScaleWidth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDSCALEWIDTH_OFFSET))(this);
		}

		::System::Void set_childScaleWidth(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDSCALEWIDTH_OFFSET))(this, value);
		}

		::System::Boolean get_childScaleHeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDSCALEHEIGHT_OFFSET))(this);
		}

		::System::Void set_childScaleHeight(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDSCALEHEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::Vector2Int GetColRow()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GETCOLROW_OFFSET))(this);
		}

		::System::Void CalcAlongAxis(::System::Int32 axis, ::System::Boolean isVertical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CALCALONGAXIS_OFFSET))(this, axis, isVertical);
		}

		::System::Void SetChildrenAlongAxis(::System::Int32 axis, ::System::Boolean isVertical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SETCHILDRENALONGAXIS_OFFSET))(this, axis, isVertical);
		}

		::System::Void GetChildSizes(::UnityEngine::RectTransform* child, ::System::Int32 axis, ::System::Boolean controlSize, ::System::Boolean childForceExpand, ::System::Single& min, ::System::Single& preferred, ::System::Single& flexible)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GETCHILDSIZES_OFFSET))(this, child, axis, controlSize, childForceExpand, min, preferred, flexible);
		}

		::UnityEngine::Vector2Int __base_GetColRow()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP___BASE_GETCOLROW_OFFSET))(this);
		}
	};
}
