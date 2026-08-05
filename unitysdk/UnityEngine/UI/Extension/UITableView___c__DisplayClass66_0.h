#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/UITableView_Data.h"

#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B51320)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW___C__DISPLAYCLASS66_0__REMOVEDATA_B__0_OFFSET UNITYSDK_OFFSET(0x18B51330)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableView___c__DisplayClass66_0_TypeDefinitionIndex = 65406;

	class UITableView___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::System::Object* data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveData_b__0(::UnityEngine::UI::Extension::UITableView_Data v)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UITableView_Data))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW___C__DISPLAYCLASS66_0__REMOVEDATA_B__0_OFFSET))(this, v);
		}
	};
}
