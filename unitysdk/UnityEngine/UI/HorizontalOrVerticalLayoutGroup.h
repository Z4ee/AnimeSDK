#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_RowColumnPair.h"
#include "unitysdk/UnityEngine/UI/LayoutGroup.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { template <typename T> class ObjectPool_1; }

#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CALCALONGAXIS_OFFSET UNITYSDK_OFFSET(0x18B19CD0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CLEARDICT_OFFSET UNITYSDK_OFFSET(0x18B1B420)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x18B1B880)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CLEAR_OFFSET UNITYSDK_OFFSET(0x18B1B810)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GETCHILDSIZES_OFFSET UNITYSDK_OFFSET(0x18B1B220)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B1B100)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLWIDTH_OFFSET UNITYSDK_OFFSET(0x18B1B0A0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDFORCEEXPANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B1B040)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDFORCEEXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0x18B1AFE0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDSCALEHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B1B1C0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDSCALEWIDTH_OFFSET UNITYSDK_OFFSET(0x18B1B160)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_RECORDINDEX_OFFSET UNITYSDK_OFFSET(0x18B1B610)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_ROWCOLUMNINDEX_OFFSET UNITYSDK_OFFSET(0x18B1B710)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_ROWCOLUMNREVERSEINDEX_OFFSET UNITYSDK_OFFSET(0x18B1B720)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_SPACING_OFFSET UNITYSDK_OFFSET(0x18B1AF40)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_INITDICT_OFFSET UNITYSDK_OFFSET(0x18B1B640)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18B1B730)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_ONSETITEM_OFFSET UNITYSDK_OFFSET(0x18B1B500)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SETCHILDRENALONGAXIS_OFFSET UNITYSDK_OFFSET(0x18B1A220)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B1B110)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLWIDTH_OFFSET UNITYSDK_OFFSET(0x18B1B0B0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDFORCEEXPANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B1B050)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDFORCEEXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0x18B1AFF0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDSCALEHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B1B1D0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDSCALEWIDTH_OFFSET UNITYSDK_OFFSET(0x18B1B170)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_RECORDINDEX_OFFSET UNITYSDK_OFFSET(0x18B1B620)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_SPACING_OFFSET UNITYSDK_OFFSET(0x18B1AF50)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B1B8F0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18B19C10)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int HorizontalOrVerticalLayoutGroup_TypeDefinitionIndex = 5642;

	class HorizontalOrVerticalLayoutGroup : public ::UnityEngine::UI::LayoutGroup
	{
	public:
		static ::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>*>** StaticGet_reversePool()
		{
			return (::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>*>**)Il2CppClass::FromTypeDefinitionIndex(HorizontalOrVerticalLayoutGroup_TypeDefinitionIndex)->GetStaticField(0x50B0);
		}
		static ::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>*>** StaticGet_dictPool()
		{
			return (::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>*>**)Il2CppClass::FromTypeDefinitionIndex(HorizontalOrVerticalLayoutGroup_TypeDefinitionIndex)->GetStaticField(0x50B8);
		}
		::System::Single m_Spacing; // 0x60
		::System::Boolean m_ChildForceExpandWidth; // 0x64
		::System::Boolean m_ChildForceExpandHeight; // 0x65
		::System::Boolean m_ChildControlWidth; // 0x66
		::System::Boolean m_ChildControlHeight; // 0x67
		::System::Boolean m_ChildScaleWidth; // 0x68
		::System::Boolean m_ChildScaleHeight; // 0x69
		::System::Boolean mRecordIndex; // 0x6A
		::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>* rowColumnDict; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>* rowColumnReverseDict; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP__CCTOR_OFFSET))();
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

		::System::Boolean get_RecordIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_RECORDINDEX_OFFSET))(this);
		}

		::System::Void set_RecordIndex(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_RECORDINDEX_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>* get_RowColumnIndex()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_ROWCOLUMNINDEX_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>* get_RowColumnReverseIndex()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_ROWCOLUMNREVERSEINDEX_OFFSET))(this);
		}

		::System::Void ClearDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CLEARDICT_OFFSET))(this);
		}

		::System::Void InitDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_INITDICT_OFFSET))(this);
		}

		::System::Void OnSetItem(::UnityEngine::RectTransform* rect, ::System::Boolean isVertical, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_ONSETITEM_OFFSET))(this, rect, isVertical, index);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void Clear(::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>* g)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CLEAR_OFFSET))(g);
		}

		static ::System::Void Clear_1(::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>* g)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CLEAR_1_OFFSET))(g);
		}
	};
}
