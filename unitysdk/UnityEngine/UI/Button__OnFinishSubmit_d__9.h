#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Button; }

#define UNITYENGINE_UI_BUTTON__ONFINISHSUBMIT_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19BEA5D0)
#define UNITYENGINE_UI_BUTTON__ONFINISHSUBMIT_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19BEA700)
#define UNITYENGINE_UI_BUTTON__ONFINISHSUBMIT_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19BEA760)
#define UNITYENGINE_UI_BUTTON__ONFINISHSUBMIT_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19BEA710)
#define UNITYENGINE_UI_BUTTON__ONFINISHSUBMIT_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19BEA5C0)
#define UNITYENGINE_UI_BUTTON__ONFINISHSUBMIT_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0x19BEA590)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Button__OnFinishSubmit_d__9_TypeDefinitionIndex = 5854;

	class Button__OnFinishSubmit_d__9 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::UI::Button* __4__this; // 0x20
		::System::Single _fadeTime_5__2; // 0x28
		::System::Single _elapsedTime_5__3; // 0x2C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON__ONFINISHSUBMIT_D__9__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON__ONFINISHSUBMIT_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON__ONFINISHSUBMIT_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON__ONFINISHSUBMIT_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON__ONFINISHSUBMIT_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON__ONFINISHSUBMIT_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
