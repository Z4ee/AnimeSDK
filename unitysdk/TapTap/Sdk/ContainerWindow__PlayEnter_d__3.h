#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TapTap::Sdk { class ContainerWindow; }
namespace UnityEngine { class CanvasGroup; }

#define TAPTAP_SDK_CONTAINERWINDOW__PLAYENTER_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A1BA990)
#define TAPTAP_SDK_CONTAINERWINDOW__PLAYENTER_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A1BAAE0)
#define TAPTAP_SDK_CONTAINERWINDOW__PLAYENTER_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A1BAB40)
#define TAPTAP_SDK_CONTAINERWINDOW__PLAYENTER_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A1BAAF0)
#define TAPTAP_SDK_CONTAINERWINDOW__PLAYENTER_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A1BA980)
#define TAPTAP_SDK_CONTAINERWINDOW__PLAYENTER_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BA950)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int ContainerWindow__PlayEnter_d__3_TypeDefinitionIndex = 6445;

	class ContainerWindow__PlayEnter_d__3 : public ::System::Object
	{
	public:
		::UnityEngine::CanvasGroup* _canvasGroup_5__4; // 0x10
		::TapTap::Sdk::ContainerWindow* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Single _endTime_5__3; // 0x28
		::System::Single _startTime_5__2; // 0x2C
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW__PLAYENTER_D__3__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW__PLAYENTER_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW__PLAYENTER_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW__PLAYENTER_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW__PLAYENTER_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW__PLAYENTER_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
