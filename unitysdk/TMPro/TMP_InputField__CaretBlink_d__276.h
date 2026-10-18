#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class TMP_InputField; }

#define TMPRO_TMP_INPUTFIELD__CARETBLINK_D__276_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F3159B0)
#define TMPRO_TMP_INPUTFIELD__CARETBLINK_D__276_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F315B10)
#define TMPRO_TMP_INPUTFIELD__CARETBLINK_D__276_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F315B70)
#define TMPRO_TMP_INPUTFIELD__CARETBLINK_D__276_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F315B20)
#define TMPRO_TMP_INPUTFIELD__CARETBLINK_D__276_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F3159A0)
#define TMPRO_TMP_INPUTFIELD__CARETBLINK_D__276__CTOR_OFFSET UNITYSDK_OFFSET(0x1F308F40)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField__CaretBlink_d__276_TypeDefinitionIndex = 44605;

	class TMP_InputField__CaretBlink_d__276 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::TMPro::TMP_InputField* __4__this; // 0x18
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
