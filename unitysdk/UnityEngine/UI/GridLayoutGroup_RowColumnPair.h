#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2129890)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_EQUALS_OFFSET UNITYSDK_OFFSET(0x20E84C0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7BBA0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18B19AF0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18B19B00)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x72EF0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GridLayoutGroup_RowColumnPair_TypeDefinitionIndex = 5639;

	struct alignas(4) GridLayoutGroup_RowColumnPair
	{
		::System::Int32 mRow; // 0x10
		::System::Int32 mColumn; // 0x14

		::System::Void _ctor(::System::Int32 row1, ::System::Int32 column1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR__CTOR_OFFSET))(this, row1, column1);
		}

		::System::Boolean Equals(::UnityEngine::UI::GridLayoutGroup_RowColumnPair other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_EQUALS_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::UnityEngine::UI::GridLayoutGroup_RowColumnPair a, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair b)
		{
			return ((::System::Boolean(*)(::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::UI::GridLayoutGroup_RowColumnPair a, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair b)
		{
			return ((::System::Boolean(*)(::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_EQUALS_1_OFFSET))(this, obj);
		}
	};
}
