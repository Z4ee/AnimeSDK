#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class TMP_InputField; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define TMPRO_TMP_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__294_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18B53B80)
#define TMPRO_TMP_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__294_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18B53E80)
#define TMPRO_TMP_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__294_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18B53EE0)
#define TMPRO_TMP_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__294_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18B53E90)
#define TMPRO_TMP_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__294_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B53B70)
#define TMPRO_TMP_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__294__CTOR_OFFSET UNITYSDK_OFFSET(0x18B4A7C0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField__MouseDragOutsideRect_d__294_TypeDefinitionIndex = 43414;

	class TMP_InputField__MouseDragOutsideRect_d__294 : public ::System::Object
	{
	public:
		::UnityEngine::EventSystems::PointerEventData* eventData; // 0x10
		::System::Object* __2__current; // 0x18
		::TMPro::TMP_InputField* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__294__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__294_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__294_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__294_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__294_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__294_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
