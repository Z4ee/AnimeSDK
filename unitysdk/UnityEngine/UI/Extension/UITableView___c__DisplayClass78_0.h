#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UITableView; }
namespace UnityEngine::UI::Extension { class UITableViewCell; }

#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW___C__DISPLAYCLASS78_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D62A0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW___C__DISPLAYCLASS78_0__GETCELL_B__0_OFFSET UNITYSDK_OFFSET(0x1D5D62B0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableView___c__DisplayClass78_0_TypeDefinitionIndex = 65411;

	class UITableView___c__DisplayClass78_0 : public ::System::Object
	{
	public:
		::System::Object* data; // 0x10
		::UnityEngine::UI::Extension::UITableView* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW___C__DISPLAYCLASS78_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCell_b__0(::UnityEngine::UI::Extension::UITableViewCell* cell)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UITableViewCell*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW___C__DISPLAYCLASS78_0__GETCELL_B__0_OFFSET))(this, cell);
		}
	};
}
