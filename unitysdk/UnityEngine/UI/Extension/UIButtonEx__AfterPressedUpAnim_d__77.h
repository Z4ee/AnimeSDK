#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX__AFTERPRESSEDUPANIM_D__77_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1788F4B0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX__AFTERPRESSEDUPANIM_D__77_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1788F800)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX__AFTERPRESSEDUPANIM_D__77_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1788F860)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX__AFTERPRESSEDUPANIM_D__77_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1788F810)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX__AFTERPRESSEDUPANIM_D__77_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1788F4A0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX__AFTERPRESSEDUPANIM_D__77__CTOR_OFFSET UNITYSDK_OFFSET(0x1788D170)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx__AfterPressedUpAnim_d__77_TypeDefinitionIndex = 46953;

	class UIButtonEx__AfterPressedUpAnim_d__77 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Extension::UIButtonEx* __4__this; // 0x10
		::System::Single length; // 0x18
		::System::Int32 __1__state; // 0x1C
		::System::Single __2__current; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX__AFTERPRESSEDUPANIM_D__77__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX__AFTERPRESSEDUPANIM_D__77_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX__AFTERPRESSEDUPANIM_D__77_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX__AFTERPRESSEDUPANIM_D__77_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX__AFTERPRESSEDUPANIM_D__77_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX__AFTERPRESSEDUPANIM_D__77_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
