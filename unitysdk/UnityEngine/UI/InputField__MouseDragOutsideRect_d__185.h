#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class InputField; }

#define UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B84CE40)
#define UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B84D220)
#define UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B84D280)
#define UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B84D230)
#define UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B84CE30)
#define UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185__CTOR_OFFSET UNITYSDK_OFFSET(0x1B84CE20)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputField__MouseDragOutsideRect_d__185_TypeDefinitionIndex = 8383;

	class InputField__MouseDragOutsideRect_d__185 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::EventSystems::PointerEventData* eventData; // 0x20
		::UnityEngine::UI::InputField* __4__this; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
