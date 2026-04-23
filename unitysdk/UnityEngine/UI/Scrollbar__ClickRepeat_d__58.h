#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::UI { class Scrollbar; }

#define UNITYENGINE_UI_SCROLLBAR__CLICKREPEAT_D__58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A59FF10)
#define UNITYENGINE_UI_SCROLLBAR__CLICKREPEAT_D__58_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A5A0290)
#define UNITYENGINE_UI_SCROLLBAR__CLICKREPEAT_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A5A02F0)
#define UNITYENGINE_UI_SCROLLBAR__CLICKREPEAT_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A5A02A0)
#define UNITYENGINE_UI_SCROLLBAR__CLICKREPEAT_D__58_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A59FF00)
#define UNITYENGINE_UI_SCROLLBAR__CLICKREPEAT_D__58__CTOR_OFFSET UNITYSDK_OFFSET(0x1A59EF70)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Scrollbar__ClickRepeat_d__58_TypeDefinitionIndex = 5716;

	class Scrollbar__ClickRepeat_d__58 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::UI::Scrollbar* __4__this; // 0x20
		::UnityEngine::Vector2 screenPosition; // 0x28
		::UnityEngine::Camera* camera; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR__CLICKREPEAT_D__58__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR__CLICKREPEAT_D__58_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR__CLICKREPEAT_D__58_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR__CLICKREPEAT_D__58_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR__CLICKREPEAT_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR__CLICKREPEAT_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
