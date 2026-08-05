#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Dropdown; }

#define UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__74_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EAE31A0)
#define UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__74_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EAE3240)
#define UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EAE32A0)
#define UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EAE3250)
#define UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__74_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EAE3190)
#define UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__74__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE3180)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Dropdown__DelayedDestroyDropdownList_d__74_TypeDefinitionIndex = 19209;

	class Dropdown__DelayedDestroyDropdownList_d__74 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single delay; // 0x20
		::UnityEngine::UI::Dropdown* __4__this; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__74__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__74_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__74_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__74_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN__DELAYEDDESTROYDROPDOWNLIST_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
