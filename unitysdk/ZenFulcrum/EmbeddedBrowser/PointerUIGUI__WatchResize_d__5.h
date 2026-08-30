#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace ZenFulcrum::EmbeddedBrowser { class PointerUIGUI; }

#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI__WATCHRESIZE_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D7ED8C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI__WATCHRESIZE_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D7ED9F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI__WATCHRESIZE_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D7EDA50)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI__WATCHRESIZE_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D7EDA00)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI__WATCHRESIZE_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7ED8B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI__WATCHRESIZE_D__5__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7ED2A0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int PointerUIGUI__WatchResize_d__5_TypeDefinitionIndex = 38188;

	class PointerUIGUI__WatchResize_d__5 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::PointerUIGUI* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::Rect _currentSize_5__2; // 0x20
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI__WATCHRESIZE_D__5__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI__WATCHRESIZE_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI__WATCHRESIZE_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI__WATCHRESIZE_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI__WATCHRESIZE_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI__WATCHRESIZE_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
