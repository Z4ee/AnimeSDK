#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UITableViewCell; }

#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW___C__DISPLAYCLASS79_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D6340)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW___C__DISPLAYCLASS79_0__GETCELLAT_B__0_OFFSET UNITYSDK_OFFSET(0x1D5D6350)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableView___c__DisplayClass79_0_TypeDefinitionIndex = 65414;

	class UITableView___c__DisplayClass79_0 : public ::System::Object
	{
	public:
		::System::Int32 dataIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW___C__DISPLAYCLASS79_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCellAt_b__0(::UnityEngine::UI::Extension::UITableViewCell* cell)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UITableViewCell*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW___C__DISPLAYCLASS79_0__GETCELLAT_B__0_OFFSET))(this, cell);
		}
	};
}
