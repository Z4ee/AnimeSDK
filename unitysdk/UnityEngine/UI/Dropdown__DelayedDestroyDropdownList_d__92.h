#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Dropdown; }

#define UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__92_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EE2AF30)
#define UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__92_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EE2AFB0)
#define UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__92_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EE2B010)
#define UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__92_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EE2AFC0)
#define UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__92_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EE2AF20)
#define UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__92__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE2AB50)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Dropdown__DelayedDestroyDropdownList_d__92_TypeDefinitionIndex = 6704;

	class Dropdown__DelayedDestroyDropdownList_d__92 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single delay; // 0x20
		::UnityEngine::UI::Dropdown* __4__this; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__92__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__92_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__92_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__92_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__92_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__92_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
