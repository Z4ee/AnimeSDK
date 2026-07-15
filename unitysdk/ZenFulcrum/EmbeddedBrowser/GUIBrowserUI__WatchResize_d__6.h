#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace ZenFulcrum::EmbeddedBrowser { class GUIBrowserUI; }

#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AB5BD50)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AB5BE80)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AB5BEE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AB5BE90)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AB5BD40)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB5ADC0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int GUIBrowserUI__WatchResize_d__6_TypeDefinitionIndex = 37324;

	class GUIBrowserUI__WatchResize_d__6 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::ZenFulcrum::EmbeddedBrowser::GUIBrowserUI* __4__this; // 0x18
		::UnityEngine::Rect _currentSize_5__2; // 0x20
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
