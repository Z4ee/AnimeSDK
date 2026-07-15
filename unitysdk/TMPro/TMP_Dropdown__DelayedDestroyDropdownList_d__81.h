#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class TMP_Dropdown; }

#define TMPRO_TMP_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__81_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1719E390)
#define TMPRO_TMP_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__81_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1719E410)
#define TMPRO_TMP_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__81_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1719E470)
#define TMPRO_TMP_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__81_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1719E420)
#define TMPRO_TMP_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__81_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1719E380)
#define TMPRO_TMP_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__81__CTOR_OFFSET UNITYSDK_OFFSET(0x1719E220)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Dropdown__DelayedDestroyDropdownList_d__81_TypeDefinitionIndex = 41763;

	class TMP_Dropdown__DelayedDestroyDropdownList_d__81 : public ::System::Object
	{
	public:
		::TMPro::TMP_Dropdown* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single delay; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__81__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__81_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__81_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__81_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__81_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__81_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
