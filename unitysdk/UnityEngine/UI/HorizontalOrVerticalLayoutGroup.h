#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_RowColumnPair.h"
#include "unitysdk/UnityEngine/UI/LayoutGroup.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { template <typename T> class ObjectPool_1; }

#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CALCALONGAXIS_OFFSET UNITYSDK_OFFSET(0x1B796C00)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CLEARDICT_OFFSET UNITYSDK_OFFSET(0x1B798090)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x1B7984B0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B798450)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GETCHILDSIZES_OFFSET UNITYSDK_OFFSET(0x1B797E90)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B797D40)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLWIDTH_OFFSET UNITYSDK_OFFSET(0x1B797CD0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDFORCEEXPANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B797C60)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDFORCEEXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0x1B797BF0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDSCALEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B797E20)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDSCALEWIDTH_OFFSET UNITYSDK_OFFSET(0x1B797DB0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_RECORDINDEX_OFFSET UNITYSDK_OFFSET(0x1B798260)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_ROWCOLUMNINDEX_OFFSET UNITYSDK_OFFSET(0x1B798350)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_ROWCOLUMNREVERSEINDEX_OFFSET UNITYSDK_OFFSET(0x1B798360)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_SPACING_OFFSET UNITYSDK_OFFSET(0x1B797B50)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_INITDICT_OFFSET UNITYSDK_OFFSET(0x1B798280)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B798370)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_ONSETITEM_OFFSET UNITYSDK_OFFSET(0x1B798150)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SETCHILDRENALONGAXIS_OFFSET UNITYSDK_OFFSET(0x1B797090)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B797D50)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLWIDTH_OFFSET UNITYSDK_OFFSET(0x1B797CE0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDFORCEEXPANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B797C70)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDFORCEEXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0x1B797C00)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDSCALEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B797E30)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDSCALEWIDTH_OFFSET UNITYSDK_OFFSET(0x1B797DC0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_RECORDINDEX_OFFSET UNITYSDK_OFFSET(0x1B798270)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_SPACING_OFFSET UNITYSDK_OFFSET(0x1B797B60)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B798510)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B796B40)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int HorizontalOrVerticalLayoutGroup_TypeDefinitionIndex = 6766;

	class HorizontalOrVerticalLayoutGroup : public ::UnityEngine::UI::LayoutGroup
	{
	public:
		static ::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>*>** StaticGet_dictPool()
		{
			return (::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>*>**)Il2CppClass::FromTypeDefinitionIndex(HorizontalOrVerticalLayoutGroup_TypeDefinitionIndex)->GetStaticField(0x2BDC0);
		}
		static ::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>*>** StaticGet_reversePool()
		{
			return (::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>*>**)Il2CppClass::FromTypeDefinitionIndex(HorizontalOrVerticalLayoutGroup_TypeDefinitionIndex)->GetStaticField(0x2BDC8);
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

		::System::Void set_spacing(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_SPACING_OFFSET))(this, a1);
		}

		::System::Boolean get_childForceExpandWidth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDFORCEEXPANDWIDTH_OFFSET))(this);
		}

		::System::Void set_childForceExpandWidth(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDFORCEEXPANDWIDTH_OFFSET))(this, a1);
		}

		::System::Boolean get_childForceExpandHeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDFORCEEXPANDHEIGHT_OFFSET))(this);
		}

		::System::Void set_childForceExpandHeight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDFORCEEXPANDHEIGHT_OFFSET))(this, a1);
		}

		::System::Boolean get_childControlWidth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLWIDTH_OFFSET))(this);
		}

		::System::Void set_childControlWidth(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLWIDTH_OFFSET))(this, a1);
		}

		::System::Boolean get_childControlHeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLHEIGHT_OFFSET))(this);
		}

		::System::Void set_childControlHeight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLHEIGHT_OFFSET))(this, a1);
		}

		::System::Boolean get_childScaleWidth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDSCALEWIDTH_OFFSET))(this);
		}

		::System::Void set_childScaleWidth(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDSCALEWIDTH_OFFSET))(this, a1);
		}

		::System::Boolean get_childScaleHeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDSCALEHEIGHT_OFFSET))(this);
		}

		::System::Void set_childScaleHeight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDSCALEHEIGHT_OFFSET))(this, a1);
		}

		::System::Void CalcAlongAxis(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CALCALONGAXIS_OFFSET))(this, a1, a2);
		}

		::System::Void SetChildrenAlongAxis(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SETCHILDRENALONGAXIS_OFFSET))(this, a1, a2);
		}

		::System::Void GetChildSizes(::UnityEngine::RectTransform* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Single& a5, ::System::Single& a6, ::System::Single& a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GETCHILDSIZES_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean get_RecordIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_RECORDINDEX_OFFSET))(this);
		}

		::System::Void set_RecordIndex(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_RECORDINDEX_OFFSET))(this, a1);
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

		::System::Void OnSetItem(::UnityEngine::RectTransform* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_ONSETITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void Clear(::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CLEAR_OFFSET))(a1);
		}

		static ::System::Void Clear_1(::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CLEAR_1_OFFSET))(a1);
		}
	};
}
