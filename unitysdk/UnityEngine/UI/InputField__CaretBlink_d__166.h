#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class InputField; }

#define UNITYENGINE_UI_INPUTFIELD__CARETBLINK_D__166_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18B38AD0)
#define UNITYENGINE_UI_INPUTFIELD__CARETBLINK_D__166_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18B38BE0)
#define UNITYENGINE_UI_INPUTFIELD__CARETBLINK_D__166_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18B38C40)
#define UNITYENGINE_UI_INPUTFIELD__CARETBLINK_D__166_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18B38BF0)
#define UNITYENGINE_UI_INPUTFIELD__CARETBLINK_D__166_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B38AC0)
#define UNITYENGINE_UI_INPUTFIELD__CARETBLINK_D__166__CTOR_OFFSET UNITYSDK_OFFSET(0x18B2C530)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputField__CaretBlink_d__166_TypeDefinitionIndex = 5615;

	class InputField__CaretBlink_d__166 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::UI::InputField* __4__this; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__CARETBLINK_D__166__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__CARETBLINK_D__166_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__CARETBLINK_D__166_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__CARETBLINK_D__166_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__CARETBLINK_D__166_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__CARETBLINK_D__166_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
