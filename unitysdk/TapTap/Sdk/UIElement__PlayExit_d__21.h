#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TapTap::Sdk { class UIElement; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define TAPTAP_SDK_UIELEMENT__PLAYEXIT_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1878A5E0)
#define TAPTAP_SDK_UIELEMENT__PLAYEXIT_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1878AB40)
#define TAPTAP_SDK_UIELEMENT__PLAYEXIT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1878ABA0)
#define TAPTAP_SDK_UIELEMENT__PLAYEXIT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1878AB50)
#define TAPTAP_SDK_UIELEMENT__PLAYEXIT_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1878A5D0)
#define TAPTAP_SDK_UIELEMENT__PLAYEXIT_D__21__CTOR_OFFSET UNITYSDK_OFFSET(0x18789F70)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIElement__PlayExit_d__21_TypeDefinitionIndex = 6418;

	class UIElement__PlayExit_d__21 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::UnityEngine::CanvasGroup* _canvasGroup_5__4; // 0x18
		::UnityEngine::RectTransform* _rectTransform_5__5; // 0x20
		::TapTap::Sdk::UIElement* __4__this; // 0x28
		::System::Single _startTime_5__2; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Single _endTime_5__3; // 0x38
		::System::Single _targetX_5__6; // 0x3C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT__PLAYEXIT_D__21__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT__PLAYEXIT_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT__PLAYEXIT_D__21_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT__PLAYEXIT_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT__PLAYEXIT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT__PLAYEXIT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
