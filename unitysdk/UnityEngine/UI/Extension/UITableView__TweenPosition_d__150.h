#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UITableView; }

#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW__TWEENPOSITION_D__150_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x150AC590)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW__TWEENPOSITION_D__150_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x150ACC70)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW__TWEENPOSITION_D__150_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x150ACCD0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW__TWEENPOSITION_D__150_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x150ACC80)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW__TWEENPOSITION_D__150_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x150AC580)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW__TWEENPOSITION_D__150__CTOR_OFFSET UNITYSDK_OFFSET(0x150AC570)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableView__TweenPosition_d__150_TypeDefinitionIndex = 63959;

	class UITableView__TweenPosition_d__150 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Extension::UITableView* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 lineIndex; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Single time; // 0x28
		::System::Single start; // 0x2C
		::System::Single end; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW__TWEENPOSITION_D__150__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW__TWEENPOSITION_D__150_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW__TWEENPOSITION_D__150_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW__TWEENPOSITION_D__150_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW__TWEENPOSITION_D__150_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW__TWEENPOSITION_D__150_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
