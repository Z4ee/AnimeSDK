#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class CursorRendererBase; }

#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FBF60A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FBF6330)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FBF6390)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1FBF6340)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FBF6090)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBF6080)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int CursorRendererBase__Setup_d__2_TypeDefinitionIndex = 33284;

	class CursorRendererBase__Setup_d__2 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::ZenFulcrum::EmbeddedBrowser::CursorRendererBase* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__SETUP_D__2__CTOR_OFFSET))(this, __1__state);
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
