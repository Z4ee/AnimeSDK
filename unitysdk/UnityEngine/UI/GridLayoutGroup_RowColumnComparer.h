#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_RowColumnPair.h"

#define UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A555110)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A555120)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A555140)
#define UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A555130)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GridLayoutGroup_RowColumnComparer_TypeDefinitionIndex = 5652;

	class GridLayoutGroup_RowColumnComparer : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::GridLayoutGroup_RowColumnComparer** StaticGet_comparer()
		{
			return (::UnityEngine::UI::GridLayoutGroup_RowColumnComparer**)Il2CppClass::FromTypeDefinitionIndex(GridLayoutGroup_RowColumnComparer_TypeDefinitionIndex)->GetStaticField(0x114D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNCOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::UnityEngine::UI::GridLayoutGroup_RowColumnPair x, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair y)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::UnityEngine::UI::GridLayoutGroup_RowColumnPair obj)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRIDLAYOUTGROUP_ROWCOLUMNCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
