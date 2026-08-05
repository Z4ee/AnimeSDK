#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UITableViewCell; }

#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW___C__DISPLAYCLASS63_0__ADDDATAAT_B__0_OFFSET UNITYSDK_OFFSET(0x18B512F0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B512E0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableView___c__DisplayClass63_0_TypeDefinitionIndex = 65413;

	class UITableView___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::Void _AddDataAt_b__0(::UnityEngine::UI::Extension::UITableViewCell* cell)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITableViewCell*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW___C__DISPLAYCLASS63_0__ADDDATAAT_B__0_OFFSET))(this, cell);
		}
	};
}
