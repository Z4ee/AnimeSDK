#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TapTap::Sdk { class ContainerWindow; }
namespace UnityEngine { class CanvasGroup; }

#define TAPTAP_SDK_CONTAINERWINDOW__PLAYEXIT_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D1D39D0)
#define TAPTAP_SDK_CONTAINERWINDOW__PLAYEXIT_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D1D3B30)
#define TAPTAP_SDK_CONTAINERWINDOW__PLAYEXIT_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D1D3B90)
#define TAPTAP_SDK_CONTAINERWINDOW__PLAYEXIT_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D1D3B40)
#define TAPTAP_SDK_CONTAINERWINDOW__PLAYEXIT_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D1D39C0)
#define TAPTAP_SDK_CONTAINERWINDOW__PLAYEXIT_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D3760)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int ContainerWindow__PlayExit_d__2_TypeDefinitionIndex = 7066;

	class ContainerWindow__PlayExit_d__2 : public ::System::Object
	{
	public:
		::UnityEngine::CanvasGroup* _canvasGroup_5__4; // 0x10
		::TapTap::Sdk::ContainerWindow* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Single _endTime_5__3; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Single _startTime_5__2; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW__PLAYEXIT_D__2__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW__PLAYEXIT_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW__PLAYEXIT_D__2_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW__PLAYEXIT_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW__PLAYEXIT_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW__PLAYEXIT_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
