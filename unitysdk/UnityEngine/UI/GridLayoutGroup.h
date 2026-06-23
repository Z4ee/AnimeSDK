#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_Axis.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_Constraint.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_Corner.h"
#include "unitysdk/UnityEngine/UI/LayoutGroup.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define UNITYENGINE_UI_GRIDLAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1DC135A0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1DC137B0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GETCOLROW_OFFSET UNITYSDK_OFFSET(0x1DC14070)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0x1DC13280)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_CONSTRAINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1DC13490)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1DC13400)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_SPACING_OFFSET UNITYSDK_OFFSET(0x1DC13340)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_STARTAXIS_OFFSET UNITYSDK_OFFSET(0x1DC131F0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_STARTCORNER_OFFSET UNITYSDK_OFFSET(0x1DC13160)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SETCELLSALONGAXIS_OFFSET UNITYSDK_OFFSET(0x1DC13A00)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1DC139B0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1DC14020)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0x1DC13290)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_CONSTRAINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1DC134A0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1DC13410)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_SPACING_OFFSET UNITYSDK_OFFSET(0x1DC13350)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_STARTAXIS_OFFSET UNITYSDK_OFFSET(0x1DC13200)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_STARTCORNER_OFFSET UNITYSDK_OFFSET(0x1DC13170)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC13570)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP___BASE_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1DC140B0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP___BASE_GETCOLROW_OFFSET UNITYSDK_OFFSET(0x1DC140C0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GridLayoutGroup_TypeDefinitionIndex = 18900;

	class GridLayoutGroup : public ::UnityEngine::UI::LayoutGroup
	{
	public:
		::UnityEngine::UI::GridLayoutGroup_Corner m_StartCorner; // 0x58
		::UnityEngine::UI::GridLayoutGroup_Axis m_StartAxis; // 0x5C
		::UnityEngine::Vector2 m_CellSize; // 0x60
		::UnityEngine::Vector2 m_Spacing; // 0x68
		::UnityEngine::UI::GridLayoutGroup_Constraint m_Constraint; // 0x70
		::System::Int32 m_ConstraintCount; // 0x74
		::System::Int32 lastCellCountX; // 0x78
		::System::Int32 lastCellCountY; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::GridLayoutGroup_Corner get_startCorner()
		{
			return ((::UnityEngine::UI::GridLayoutGroup_Corner(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_STARTCORNER_OFFSET))(this);
		}

		::System::Void set_startCorner(::UnityEngine::UI::GridLayoutGroup_Corner value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup_Corner))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_STARTCORNER_OFFSET))(this, value);
		}

		::UnityEngine::UI::GridLayoutGroup_Axis get_startAxis()
		{
			return ((::UnityEngine::UI::GridLayoutGroup_Axis(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_STARTAXIS_OFFSET))(this);
		}

		::System::Void set_startAxis(::UnityEngine::UI::GridLayoutGroup_Axis value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup_Axis))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_STARTAXIS_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_cellSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_CELLSIZE_OFFSET))(this);
		}

		::System::Void set_cellSize(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_CELLSIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_spacing()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_SPACING_OFFSET))(this);
		}

		::System::Void set_spacing(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_SPACING_OFFSET))(this, value);
		}

		::UnityEngine::UI::GridLayoutGroup_Constraint get_constraint()
		{
			return ((::UnityEngine::UI::GridLayoutGroup_Constraint(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_CONSTRAINT_OFFSET))(this);
		}

		::System::Void set_constraint(::UnityEngine::UI::GridLayoutGroup_Constraint value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup_Constraint))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_CONSTRAINT_OFFSET))(this, value);
		}

		::System::Int32 get_constraintCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_CONSTRAINTCOUNT_OFFSET))(this);
		}

		::System::Void set_constraintCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_CONSTRAINTCOUNT_OFFSET))(this, value);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Void SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET))(this);
		}

		::UnityEngine::Vector2Int GetColRow()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GETCOLROW_OFFSET))(this);
		}

		::System::Void SetCellsAlongAxis(::System::Int32 axis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SETCELLSALONGAXIS_OFFSET))(this, axis);
		}

		::System::Void __base_CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP___BASE_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::UnityEngine::Vector2Int __base_GetColRow()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP___BASE_GETCOLROW_OFFSET))(this);
		}
	};
}
