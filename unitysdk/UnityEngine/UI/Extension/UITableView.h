#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/UI/Extension/UIScroller.h"
#include "unitysdk/UnityEngine/UI/Extension/UITableViewCell_State.h"
#include "unitysdk/UnityEngine/UI/Extension/UITableView_Data.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectOffset; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class UITableViewCell; }
namespace UnityEngine::UI::Extension { class UITableView_OnCellEvent; }
namespace UnityEngine::UI::Extension { class UITableView_OnCellTouchEvent; }
namespace UnityEngine::UI::Extension { class UITableView_OnDataEvent; }
namespace UnityEngine::UI::Extension { class UITableView_OnSnapCompleted; }

#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ACTIVEDRAG_OFFSET UNITYSDK_OFFSET(0x18E307B0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ADDCELL_OFFSET UNITYSDK_OFFSET(0x18E32FE0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ADDDATAAT_1_OFFSET UNITYSDK_OFFSET(0x18E2E780)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ADDDATAAT_OFFSET UNITYSDK_OFFSET(0x18E2E6D0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ADDDATA_1_OFFSET UNITYSDK_OFFSET(0x18E2E630)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ADDDATA_OFFSET UNITYSDK_OFFSET(0x18E2E4E0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x18E317A0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CALCULATEACTIVECELLSASYNC_OFFSET UNITYSDK_OFFSET(0x18E352D0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CALCULATEACTIVECELLS_OFFSET UNITYSDK_OFFSET(0x18E34E60)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CALCULATECELLOFFSETS_OFFSET UNITYSDK_OFFSET(0x18E337F0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CALCULATECELLSIZES_OFFSET UNITYSDK_OFFSET(0x18E33970)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CALCULATECONTAINERSIZE_OFFSET UNITYSDK_OFFSET(0x18E34510)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CALCULATECURRENTACTIVECELLRANGE_OFFSET UNITYSDK_OFFSET(0x18E35020)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CALCULATESCROLLPOSITION_OFFSET UNITYSDK_OFFSET(0x18E32690)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CHECKDATASTATE_OFFSET UNITYSDK_OFFSET(0x18E30B80)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CLEARDELAY_OFFSET UNITYSDK_OFFSET(0x18E30370)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CLEAR_OFFSET UNITYSDK_OFFSET(0x18E2FEB0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_DEQUEUEORCREATECELL_OFFSET UNITYSDK_OFFSET(0x18E32AA0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_EXPANDLINESIZE_OFFSET UNITYSDK_OFFSET(0x18E33710)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETCELLAT_OFFSET UNITYSDK_OFFSET(0x18E2ECA0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETCELL_OFFSET UNITYSDK_OFFSET(0x18E2FDD0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETCONTAINERSIZE_OFFSET UNITYSDK_OFFSET(0x18E35C30)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETDATAAT_OFFSET UNITYSDK_OFFSET(0x18E2F2E0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETDATAINDEXBYCELL_OFFSET UNITYSDK_OFFSET(0x18E2FC60)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETDATAINDEX_OFFSET UNITYSDK_OFFSET(0x18E2F660)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETDATA_OFFSET UNITYSDK_OFFSET(0x18E2F220)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETLINEINDEXATPOSITION_1_OFFSET UNITYSDK_OFFSET(0x18E357C0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETLINEINDEXATPOSITION_OFFSET UNITYSDK_OFFSET(0x18E32580)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETONETABLEVIEWCELL_OFFSET UNITYSDK_OFFSET(0x18E32CB0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GET_AXISRECTS_OFFSET UNITYSDK_OFFSET(0x18E32630)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GET_DATACOUNT_OFFSET UNITYSDK_OFFSET(0x18E2E3C0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GET_ISCALCULATE_OFFSET UNITYSDK_OFFSET(0x18E2E180)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GET_MAXPERLINE_OFFSET UNITYSDK_OFFSET(0x18E2E110)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x18E32A20)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GET_SCROLLPOSITION_OFFSET UNITYSDK_OFFSET(0x18E2E1A0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GET_SCROLLRECTSIZE_OFFSET UNITYSDK_OFFSET(0x18E2E2D0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GET_SELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0x18E2E470)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GET_SELECTEDITEM_OFFSET UNITYSDK_OFFSET(0x18E2E3E0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_HANDLECLICK_OFFSET UNITYSDK_OFFSET(0x18E315A0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_HANDLEPRESS_OFFSET UNITYSDK_OFFSET(0x18E314E0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ISDISABLED_OFFSET UNITYSDK_OFFSET(0x18E30C10)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x18E30AC0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_JUMPTO_1_OFFSET UNITYSDK_OFFSET(0x18E30A50)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_JUMPTO_OFFSET UNITYSDK_OFFSET(0x18E309C0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_LINEAR_OFFSET UNITYSDK_OFFSET(0x18E35B90)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18E35CA0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18E32490)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18E32440)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x18E311E0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x18E31070)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x18E31470)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONPOSITIONCHANGED_OFFSET UNITYSDK_OFFSET(0x18E35400)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_RECYCLECELL_OFFSET UNITYSDK_OFFSET(0x18E2F0D0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_REFRESHPOSITION_OFFSET UNITYSDK_OFFSET(0x18E35AC0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_REFRESH_OFFSET UNITYSDK_OFFSET(0x18E30810)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_RELEASECACHES_OFFSET UNITYSDK_OFFSET(0x18E30600)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_REMOVEDATAAT_OFFSET UNITYSDK_OFFSET(0x18E2EE60)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_REMOVEDATA_OFFSET UNITYSDK_OFFSET(0x18E2ED70)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_RESIZEARRAY_OFFSET UNITYSDK_OFFSET(0x18E33620)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETCELLPOSITION_OFFSET UNITYSDK_OFFSET(0x18E331A0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETDATAAT_1_OFFSET UNITYSDK_OFFSET(0x18E2EA60)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETDATAAT_OFFSET UNITYSDK_OFFSET(0x18E2E9A0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETDISABLEAT_1_OFFSET UNITYSDK_OFFSET(0x18E2F3C0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETDISABLEAT_OFFSET UNITYSDK_OFFSET(0x18E2F360)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETSELECTAT_1_OFFSET UNITYSDK_OFFSET(0x18E2F840)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETSELECTAT_OFFSET UNITYSDK_OFFSET(0x18E2F910)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETSELECT_1_OFFSET UNITYSDK_OFFSET(0x18E2F5E0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETSELECT_OFFSET UNITYSDK_OFFSET(0x18E2F530)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETSTATE_1_OFFSET UNITYSDK_OFFSET(0x18E2F470)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETSTATE_OFFSET UNITYSDK_OFFSET(0x18E30E60)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SET_ISCALCULATE_OFFSET UNITYSDK_OFFSET(0x18E2E190)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SET_MAXPERLINE_OFFSET UNITYSDK_OFFSET(0x18E2E120)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SET_SCROLLPOSITION_OFFSET UNITYSDK_OFFSET(0x18E2E1B0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_TRYCALCULATEACTIVECELLS_OFFSET UNITYSDK_OFFSET(0x18E34D70)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_TRYJUMPTO_OFFSET UNITYSDK_OFFSET(0x18E35620)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_TRYSHOULDKEEPPOSITION_OFFSET UNITYSDK_OFFSET(0x18E35350)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_TRYSTARTSNAP_OFFSET UNITYSDK_OFFSET(0x18E31270)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_TRYSTOPCALCULATEACTIVECELLS_OFFSET UNITYSDK_OFFSET(0x18E301B0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_TRYSTOPSNAP_OFFSET UNITYSDK_OFFSET(0x18E302A0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_TWEENPOSITION_OFFSET UNITYSDK_OFFSET(0x18E32940)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_UPDATEACTIVECELLSTATES_OFFSET UNITYSDK_OFFSET(0x18E30CD0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_UPDATESELECTION_OFFSET UNITYSDK_OFFSET(0x18E2F970)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x18E35880)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x18E35D50)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x18E36090)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18E360A0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18E361B0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18E361C0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW___BASE_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x18E361D0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW___BASE_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x18E36280)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW___BASE_ONPOSITIONCHANGED_OFFSET UNITYSDK_OFFSET(0x18E36330)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableView_TypeDefinitionIndex = 63947;

	class UITableView : public ::UnityEngine::UI::Extension::UIScroller
	{
	public:
		::UnityEngine::UI::Extension::UITableView_OnCellEvent* onCellInit; // 0xE8
		::UnityEngine::UI::Extension::UITableView_OnCellTouchEvent* onCellClick; // 0xF0
		::UnityEngine::UI::Extension::UITableView_OnCellTouchEvent* onCellPress; // 0xF8
		::UnityEngine::UI::Extension::UITableView_OnCellTouchEvent* onCellDelayPress; // 0x100
		::UnityEngine::UI::Extension::UITableView_OnCellTouchEvent* onCellLongPress; // 0x108
		::UnityEngine::UI::Extension::UITableView_OnDataEvent* onSelected; // 0x110
		::UnityEngine::UI::Extension::UITableView_OnDataEvent* onDeselected; // 0x118
		::UnityEngine::UI::Extension::UITableView_OnSnapCompleted* onSnapCompleted; // 0x120
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITableViewCell*>* m_CellList; // 0x128
		::UnityEngine::TextAnchor m_Alignment; // 0x130
		::UnityEngine::TextAnchor m_ChildAlignment; // 0x134
		::UnityEngine::RectOffset* m_Padding; // 0x138
		::UnityEngine::Vector2 m_Spacing; // 0x140
		::System::Int32 m_MaxPerLine; // 0x148
		::System::Boolean m_SubFrames; // 0x14C
		::System::Int32 m_MaxSelection; // 0x150
		::System::Boolean m_Snapping; // 0x154
		::System::Boolean m_SnapCellCenter; // 0x155
		::System::Single m_SnapVelocityThreshold; // 0x158
		::System::Boolean m_Loop; // 0x15C
		::System::Int32 m_DelayFrames; // 0x160
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::UI::Extension::UITableViewCell*>* m_CellPrefabs; // 0x168
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Bounds>* m_CellPrefabBounds; // 0x170
		::UnityEngine::Vector2 m_SnapOffset; // 0x178
		::UnityEngine::Vector2 m_LayoutOffset; // 0x180
		::UnityEngine::RectTransform* m_Container; // 0x188
		::UnityEngine::RectTransform* m_RecycledContainer; // 0x190
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITableView_Data>* m_Datas; // 0x198
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITableViewCell*>* m_ActiveCells; // 0x1A0
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITableViewCell*>* m_RecycledCells; // 0x1A8
		::System::Int32 m_ActiveCellsStartIndex; // 0x1B0
		::System::Int32 m_ActiveCellsEndIndex; // 0x1B4
		::System::Boolean m_IsFirstInitCell; // 0x1B8
		::System::Boolean m_IsCellAniming; // 0x1B9
		::System::Boolean _IsCalculate_k__BackingField; // 0x1BA
		::System::Single m_ScrollPosition; // 0x1BC
		::System::Collections::Generic::List_1<::System::Int32>* m_SelectedIndices; // 0x1C0
		::System::Boolean m_DataDirty; // 0x1C8
		::System::Boolean m_ShouldKeepPosition; // 0x1C9
		::System::Int32 m_JumpToIndex; // 0x1CC
		::System::Single m_JumpToInterval; // 0x1D0
		::System::Int32 m_LongPressHandle; // 0x1D4
		::System::Single m_LongPressDelay; // 0x1D8
		::System::Single m_LongPressInterval; // 0x1DC
		::System::Single m_StoredScrollRectSize; // 0x1E0
		::System::Single m_StoredMaxScrollPosition; // 0x1E4
		::UnityEngine::Coroutine* m_SnapCoroutine; // 0x1E8
		::System::Int32 m_CellCount; // 0x1F0
		::System::Int32 m_LineCount; // 0x1F4
		::Il2CppArray<::UnityEngine::Vector2>* m_RowRects; // 0x1F8
		::Il2CppArray<::UnityEngine::Vector2>* m_ColRects; // 0x200
		::System::Single m_LoopPosition; // 0x208
		::System::Single m_LoopFirstJumpTrigger; // 0x20C
		::System::Single m_LoopLastJumpTrigger; // 0x210
		::UnityEngine::Coroutine* m_ActiveCellsAsync; // 0x218
		::System::Single _tweenTimeLeft; // 0x220

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW__CTOR_OFFSET))(this);
		}

		::System::Int32 get_maxPerLine()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GET_MAXPERLINE_OFFSET))(this);
		}

		::System::Void set_maxPerLine(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SET_MAXPERLINE_OFFSET))(this, value);
		}

		::System::Boolean get_IsCalculate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GET_ISCALCULATE_OFFSET))(this);
		}

		::System::Void set_IsCalculate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SET_ISCALCULATE_OFFSET))(this, value);
		}

		::System::Single get_scrollPosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GET_SCROLLPOSITION_OFFSET))(this);
		}

		::System::Void set_scrollPosition(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SET_SCROLLPOSITION_OFFSET))(this, value);
		}

		::System::Single get_scrollRectSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GET_SCROLLRECTSIZE_OFFSET))(this);
		}

		::System::Int32 get_dataCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GET_DATACOUNT_OFFSET))(this);
		}

		::System::Object* get_selectedItem()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GET_SELECTEDITEM_OFFSET))(this);
		}

		::System::Int32 get_selectedIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GET_SELECTEDINDEX_OFFSET))(this);
		}

		::System::Void AddData(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ADDDATA_OFFSET))(this, data);
		}

		::System::Void AddData_1(::System::Object* data, ::System::String* identifier)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ADDDATA_1_OFFSET))(this, data, identifier);
		}

		::System::Void AddDataAt(::System::Int32 index, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ADDDATAAT_OFFSET))(this, index, data);
		}

		::System::Void AddDataAt_1(::System::Int32 index, ::System::Object* data, ::System::String* identifier)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ADDDATAAT_1_OFFSET))(this, index, data, identifier);
		}

		::System::Void SetDataAt(::System::Int32 index, ::System::Object* newData, ::System::Boolean refreshSingleCell)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETDATAAT_OFFSET))(this, index, newData, refreshSingleCell);
		}

		::System::Void SetDataAt_1(::System::Int32 index, ::System::Object* newData, ::System::String* identifier, ::System::Boolean refreshSingleCell)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETDATAAT_1_OFFSET))(this, index, newData, identifier, refreshSingleCell);
		}

		::System::Void RemoveData(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_REMOVEDATA_OFFSET))(this, data);
		}

		::System::Void RemoveDataAt(::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_REMOVEDATAAT_OFFSET))(this, dataIndex);
		}

		::System::Object* GetData(::UnityEngine::UI::Extension::UITableViewCell* cell)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::UI::Extension::UITableViewCell*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETDATA_OFFSET))(this, cell);
		}

		::System::Object* GetDataAt(::System::Int32 dataIndex)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETDATAAT_OFFSET))(this, dataIndex);
		}

		::System::Void SetDisableAt(::System::Int32 dataIndex, ::System::Boolean disabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETDISABLEAT_OFFSET))(this, dataIndex, disabled);
		}

		::System::Void SetDisableAt_1(::System::Int32 dataIndex, ::System::Boolean disabled, ::System::Boolean fireEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETDISABLEAT_1_OFFSET))(this, dataIndex, disabled, fireEvent);
		}

		::System::Void SetSelect(::System::Object* data, ::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETSELECT_OFFSET))(this, data, selected);
		}

		::System::Void SetSelect_1(::System::Object* data, ::System::Boolean selected, ::System::Boolean fireEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETSELECT_1_OFFSET))(this, data, selected, fireEvent);
		}

		::System::Void SetSelectAt(::System::Int32 dataIndex, ::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETSELECTAT_OFFSET))(this, dataIndex, selected);
		}

		::System::Void SetSelectAt_1(::System::Int32 dataIndex, ::System::Boolean selected, ::System::Boolean fireEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETSELECTAT_1_OFFSET))(this, dataIndex, selected, fireEvent);
		}

		::System::Int32 GetDataIndexByCell(::UnityEngine::UI::Extension::UITableViewCell* cell)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::UI::Extension::UITableViewCell*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETDATAINDEXBYCELL_OFFSET))(this, cell);
		}

		::System::Int32 GetDataIndex(::System::Object* data)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETDATAINDEX_OFFSET))(this, data);
		}

		::UnityEngine::UI::Extension::UITableViewCell* GetCell(::System::Object* data)
		{
			return ((::UnityEngine::UI::Extension::UITableViewCell*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETCELL_OFFSET))(this, data);
		}

		::UnityEngine::UI::Extension::UITableViewCell* GetCellAt(::System::Int32 dataIndex)
		{
			return ((::UnityEngine::UI::Extension::UITableViewCell*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETCELLAT_OFFSET))(this, dataIndex);
		}

		::System::Void Clear(::System::Boolean keepPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CLEAR_OFFSET))(this, keepPosition);
		}

		::System::Void ClearDelay(::System::Boolean keepPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CLEARDELAY_OFFSET))(this, keepPosition);
		}

		::System::Void ReleaseCaches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_RELEASECACHES_OFFSET))(this);
		}

		::System::Void ActiveDrag(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ACTIVEDRAG_OFFSET))(this, active);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_REFRESH_OFFSET))(this);
		}

		::System::Void JumpTo(::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_JUMPTO_OFFSET))(this, dataIndex);
		}

		::System::Void JumpTo_1(::System::Int32 dataIndex, ::System::Single interval)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_JUMPTO_1_OFFSET))(this, dataIndex, interval);
		}

		::System::Boolean IsSelected(::System::Int32 dataIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ISSELECTED_OFFSET))(this, dataIndex);
		}

		::System::Boolean IsDisabled(::System::Int32 dataIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ISDISABLED_OFFSET))(this, dataIndex);
		}

		::System::Boolean CheckDataState(::System::Int32 dataIndex, ::UnityEngine::UI::Extension::UITableViewCell_State state)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::UITableViewCell_State))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CHECKDATASTATE_OFFSET))(this, dataIndex, state);
		}

		::System::Void UpdateActiveCellStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_UPDATEACTIVECELLSTATES_OFFSET))(this);
		}

		::System::Void UpdateSelection(::System::Int32 dataIndex, ::System::Boolean fireEvent, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_UPDATESELECTION_OFFSET))(this, dataIndex, fireEvent, force);
		}

		::System::Void SetState(::UnityEngine::UI::Extension::UITableViewCell* cell, ::UnityEngine::UI::Extension::UITableViewCell_State state, ::System::Boolean fireEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITableViewCell*, ::UnityEngine::UI::Extension::UITableViewCell_State, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETSTATE_OFFSET))(this, cell, state, fireEvent);
		}

		::System::Void SetState_1(::System::Int32 dataIndex, ::UnityEngine::UI::Extension::UITableViewCell_State state, ::System::Boolean fireEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::UITableViewCell_State, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETSTATE_1_OFFSET))(this, dataIndex, state, fireEvent);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void HandlePress(::System::Boolean pressed, ::UnityEngine::UI::Extension::UITableViewCell* cell, ::UnityEngine::GameObject* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::UI::Extension::UITableViewCell*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_HANDLEPRESS_OFFSET))(this, pressed, cell, target);
		}

		::System::Void HandleClick(::UnityEngine::UI::Extension::UITableViewCell* cell, ::UnityEngine::GameObject* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITableViewCell*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_HANDLECLICK_OFFSET))(this, cell, target);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONDISABLE_OFFSET))(this);
		}

		::System::Void TryStartSnap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_TRYSTARTSNAP_OFFSET))(this);
		}

		::System::Void TryStopSnap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_TRYSTOPSNAP_OFFSET))(this);
		}

		::System::Single CalculateScrollPosition(::System::Int32 lineIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CALCULATESCROLLPOSITION_OFFSET))(this, lineIndex);
		}

		::UnityEngine::UI::Extension::UITableViewCell* DequeueOrCreateCell(::System::String* identifier)
		{
			return ((::UnityEngine::UI::Extension::UITableViewCell*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_DEQUEUEORCREATECELL_OFFSET))(this, identifier);
		}

		::UnityEngine::UI::Extension::UITableViewCell* GetOneTableViewCell(::System::String* identifier, ::UnityEngine::Transform* parentTf)
		{
			return ((::UnityEngine::UI::Extension::UITableViewCell*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETONETABLEVIEWCELL_OFFSET))(this, identifier, parentTf);
		}

		::System::Void AddCell(::System::Int32 cellIndex, ::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ADDCELL_OFFSET))(this, cellIndex, dataIndex);
		}

		::System::Void SetCellPosition(::UnityEngine::UI::Extension::UITableViewCell* cell)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITableViewCell*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_SETCELLPOSITION_OFFSET))(this, cell);
		}

		::System::Void RecycleCell(::UnityEngine::UI::Extension::UITableViewCell* cell)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITableViewCell*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_RECYCLECELL_OFFSET))(this, cell);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_axisRects()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GET_AXISRECTS_OFFSET))(this);
		}

		::System::Void ResizeArray(::System::Int32 newSize, ::System::Boolean reset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_RESIZEARRAY_OFFSET))(this, newSize, reset);
		}

		::System::Void ExpandLineSize(::System::Int32 cellIndex, ::UnityEngine::Rect rect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_EXPANDLINESIZE_OFFSET))(this, cellIndex, rect);
		}

		::UnityEngine::Vector2 CalculateCellOffsets()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CALCULATECELLOFFSETS_OFFSET))(this);
		}

		::System::Void CalculateCellSizes(::System::Boolean isForce)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CALCULATECELLSIZES_OFFSET))(this, isForce);
		}

		::System::Void CalculateContainerSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CALCULATECONTAINERSIZE_OFFSET))(this);
		}

		::System::Void CalculateActiveCells()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CALCULATEACTIVECELLS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CalculateActiveCellsAsync()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CALCULATEACTIVECELLSASYNC_OFFSET))(this);
		}

		::System::Void TryCalculateActiveCells()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_TRYCALCULATEACTIVECELLS_OFFSET))(this);
		}

		::System::Void TryStopCalculateActiveCells()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_TRYSTOPCALCULATEACTIVECELLS_OFFSET))(this);
		}

		::System::Void TryShouldKeepPosition(::System::Single cachedPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_TRYSHOULDKEEPPOSITION_OFFSET))(this, cachedPosition);
		}

		::System::Void TryJumpTo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_TRYJUMPTO_OFFSET))(this);
		}

		::System::Void CalculateCurrentActiveCellRange(::System::Int32& startIndex, ::System::Int32& endIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_CALCULATECURRENTACTIVECELLRANGE_OFFSET))(this, startIndex, endIndex);
		}

		::System::Single get_padding()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GET_PADDING_OFFSET))(this);
		}

		::System::Int32 GetLineIndexAtPosition(::System::Single position)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETLINEINDEXATPOSITION_OFFSET))(this, position);
		}

		::System::Int32 GetLineIndexAtPosition_1(::Il2CppArray<::UnityEngine::Vector2>* array, ::System::Single position, ::System::Int32 startIndex, ::System::Int32 endIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETLINEINDEXATPOSITION_1_OFFSET))(this, array, position, startIndex, endIndex);
		}

		::System::Void OnPositionChanged(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONPOSITIONCHANGED_OFFSET))(this, val);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void RefreshPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_REFRESHPOSITION_OFFSET))(this);
		}

		::System::Collections::IEnumerator* TweenPosition(::System::Single time, ::System::Single start, ::System::Single end, ::System::Int32 lineIndex)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_TWEENPOSITION_OFFSET))(this, time, start, end, lineIndex);
		}

		::System::Single linear(::System::Single start, ::System::Single end, ::System::Single val)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_LINEAR_OFFSET))(this, start, end, val);
		}

		::UnityEngine::Vector2 GetContainerSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_GETCONTAINERSIZE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnEndDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW___BASE_ONENDDRAG_OFFSET))(this, P0);
		}

		::System::Void __base_OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW___BASE_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, P0);
		}

		::System::Void __base_OnPositionChanged(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW___BASE_ONPOSITIONCHANGED_OFFSET))(this, P0);
		}
	};
}
