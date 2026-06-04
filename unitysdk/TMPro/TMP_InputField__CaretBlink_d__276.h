#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class TMP_InputField; }

#define TMPRO_TMP_INPUTFIELD__CARETBLINK_D__276_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B1C9EC0)
#define TMPRO_TMP_INPUTFIELD__CARETBLINK_D__276_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B1CA0A0)
#define TMPRO_TMP_INPUTFIELD__CARETBLINK_D__276_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B1CA100)
#define TMPRO_TMP_INPUTFIELD__CARETBLINK_D__276_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B1CA0B0)
#define TMPRO_TMP_INPUTFIELD__CARETBLINK_D__276_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B1C9EB0)
#define TMPRO_TMP_INPUTFIELD__CARETBLINK_D__276__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1BBA30)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField__CaretBlink_d__276_TypeDefinitionIndex = 40987;

	class TMP_InputField__CaretBlink_d__276 : public ::System::Object
	{
	public:
		::TMPro::TMP_InputField* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD__CARETBLINK_D__276__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD__CARETBLINK_D__276_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD__CARETBLINK_D__276_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD__CARETBLINK_D__276_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD__CARETBLINK_D__276_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD__CARETBLINK_D__276_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
