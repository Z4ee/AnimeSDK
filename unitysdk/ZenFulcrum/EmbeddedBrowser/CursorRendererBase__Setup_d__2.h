#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class CursorRendererBase; }

#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B4F4A40)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B4F4DA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B4F4E00)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B4F4DB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B4F4A30)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F4A10)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int CursorRendererBase__Setup_d__2_TypeDefinitionIndex = 36530;

	class CursorRendererBase__Setup_d__2 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::CursorRendererBase* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
