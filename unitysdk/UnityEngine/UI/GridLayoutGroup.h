#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_Axis.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_Constraint.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_Corner.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_RowColumnPair.h"
#include "unitysdk/UnityEngine/UI/LayoutGroup.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_UI_GRIDLAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1B3A1190)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1B3A12D0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0x1B3A0DC0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_CONSTRAINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B3A0F40)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1B3A0EE0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_RECORDMINCOUNTHORIZONAL_OFFSET UNITYSDK_OFFSET(0x1B3A1DE0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_RECORDMINCOUNTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1B3A1DF0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_ROWCOLUMNINDEX_OFFSET UNITYSDK_OFFSET(0x1B3A1E00)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_ROWCOLUMNREVERSEINDEX_OFFSET UNITYSDK_OFFSET(0x1B3A1E10)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_SPACING_OFFSET UNITYSDK_OFFSET(0x1B3A0E50)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_STARTAXIS_OFFSET UNITYSDK_OFFSET(0x1B3A0D60)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_STARTCORNER_OFFSET UNITYSDK_OFFSET(0x1B3A0D00)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SETCELLSALONGAXIS_OFFSET UNITYSDK_OFFSET(0x1B3A14C0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1B3A14B0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1B3A1DC0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0x1B3A0DD0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_CONSTRAINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B3A0F50)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1B3A0EF0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_SPACING_OFFSET UNITYSDK_OFFSET(0x1B3A0E60)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_STARTAXIS_OFFSET UNITYSDK_OFFSET(0x1B3A0D70)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_STARTCORNER_OFFSET UNITYSDK_OFFSET(0x1B3A0D10)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A0FB0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GridLayoutGroup_TypeDefinitionIndex = 5924;

	class GridLayoutGroup : public ::UnityEngine::UI::LayoutGroup
	{
	public:
		::UnityEngine::UI::GridLayoutGroup_Corner m_StartCorner; // 0x60
		::UnityEngine::UI::GridLayoutGroup_Axis m_StartAxis; // 0x64
		::UnityEngine::Vector2 m_CellSize; // 0x68
		::UnityEngine::Vector2 m_Spacing; // 0x70
		::UnityEngine::UI::GridLayoutGroup_Constraint m_Constraint; // 0x78
		::System::Int32 m_ConstraintCount; // 0x7C
		::System::Boolean recordIndex; // 0x80
		::System::Int32 mRecordMinCountHorizonal; // 0x84
		::System::Int32 mRecordMinCountVertical; // 0x88
		::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>* rowColumnDict; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>* rowColumnReverseDict; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::GridLayoutGroup_Corner get_startCorner()
		{
			return ((::UnityEngine::UI::GridLayoutGroup_Corner(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_STARTCORNER_OFFSET))(this);
		}

		::System::Void set_startCorner(::UnityEngine::UI::GridLayoutGroup_Corner a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup_Corner))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_STARTCORNER_OFFSET))(this, a1);
		}

		::UnityEngine::UI::GridLayoutGroup_Axis get_startAxis()
		{
			return ((::UnityEngine::UI::GridLayoutGroup_Axis(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_STARTAXIS_OFFSET))(this);
		}

		::System::Void set_startAxis(::UnityEngine::UI::GridLayoutGroup_Axis a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup_Axis))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_STARTAXIS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_cellSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_CELLSIZE_OFFSET))(this);
		}

		::System::Void set_cellSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_CELLSIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_spacing()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_SPACING_OFFSET))(this);
		}

		::System::Void set_spacing(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_SPACING_OFFSET))(this, a1);
		}

		::UnityEngine::UI::GridLayoutGroup_Constraint get_constraint()
		{
			return ((::UnityEngine::UI::GridLayoutGroup_Constraint(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_CONSTRAINT_OFFSET))(this);
		}

		::System::Void set_constraint(::UnityEngine::UI::GridLayoutGroup_Constraint a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup_Constraint))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_CONSTRAINT_OFFSET))(this, a1);
		}

		::System::Int32 get_constraintCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_CONSTRAINTCOUNT_OFFSET))(this);
		}

		::System::Void set_constraintCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SET_CONSTRAINTCOUNT_OFFSET))(this, a1);
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

		::System::Void SetCellsAlongAxis(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_SETCELLSALONGAXIS_OFFSET))(this, a1);
		}

		::System::Int32 get_RecordMinCountHorizonal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_RECORDMINCOUNTHORIZONAL_OFFSET))(this);
		}

		::System::Int32 get_RecordMinCountVertical()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_RECORDMINCOUNTVERTICAL_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>* get_RowColumnIndex()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_ROWCOLUMNINDEX_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>* get_RowColumnReverseIndex()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_GET_ROWCOLUMNREVERSEINDEX_OFFSET))(this);
		}
	};
}
