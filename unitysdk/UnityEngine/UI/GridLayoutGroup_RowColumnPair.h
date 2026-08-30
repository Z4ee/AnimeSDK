#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B8ACE0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B7A7B0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182D0)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B796A20)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B796A30)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x6B4C20)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GridLayoutGroup_RowColumnPair_TypeDefinitionIndex = 6763;

	struct alignas(4) GridLayoutGroup_RowColumnPair
	{
		::System::Int32 mRow; // 0x10
		::System::Int32 mColumn; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::UnityEngine::UI::GridLayoutGroup_RowColumnPair a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_EQUALS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::UnityEngine::UI::GridLayoutGroup_RowColumnPair a1, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::UI::GridLayoutGroup_RowColumnPair a1, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNPAIR_EQUALS_1_OFFSET))(this, a1);
		}
	};
}
