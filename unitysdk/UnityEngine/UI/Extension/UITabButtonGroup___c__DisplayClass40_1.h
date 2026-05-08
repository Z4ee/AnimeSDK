#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EBC86B04CFFF8F2C.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__DISPLAYCLASS40_1__ADDLOCKTAB_B__2_OFFSET UNITYSDK_OFFSET(0x1AE4F9E0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__DISPLAYCLASS40_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE4F9D0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITabButtonGroup___c__DisplayClass40_1_TypeDefinitionIndex = 73575;

	class UITabButtonGroup___c__DisplayClass40_1 : public ::System::Object
	{
	public:
		::Struct_2_EBC86B04CFFF8F2C lockTypeTips; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__DISPLAYCLASS40_1__CTOR_OFFSET))(this);
		}

		::System::Void _AddLockTab_b__2(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__DISPLAYCLASS40_1__ADDLOCKTAB_B__2_OFFSET))(this, _);
		}
	};
}
