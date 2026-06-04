#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TapTap::Sdk { class QRCodeWindow; }
namespace TapTap::Sdk { class QRCodeWindow___c__DisplayClass38_0; }

#define TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B027260)
#define TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B027AF0)
#define TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B027B50)
#define TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B027B00)
#define TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B027250)
#define TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38__CTOR_OFFSET UNITYSDK_OFFSET(0x1B024870)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int QRCodeWindow__AutoCheck_d__38_TypeDefinitionIndex = 7058;

	class QRCodeWindow__AutoCheck_d__38 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::TapTap::Sdk::QRCodeWindow___c__DisplayClass38_0* __8__1; // 0x18
		::TapTap::Sdk::QRCodeWindow* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
