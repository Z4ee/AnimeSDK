#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TapTap::Sdk { class UIAnimator_Action; }

#define TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BB6AF80)
#define TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BB6B010)
#define TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BB6B070)
#define TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BB6B020)
#define TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BB6AF70)
#define TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB6AF00)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIAnimator__BlockCoroutine_d__4_TypeDefinitionIndex = 9476;

	class UIAnimator__BlockCoroutine_d__4 : public ::System::Object
	{
	public:
		::TapTap::Sdk::UIAnimator_Action* onBlockEnd; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single blockDuration; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
