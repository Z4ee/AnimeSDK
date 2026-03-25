#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TapTap::Sdk { class QRCodeWindow; }
namespace TapTap::Sdk { class QRCodeWindow___c__DisplayClass38_0; }

#define TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18788C40)
#define TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x187894A0)
#define TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18789500)
#define TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x187894B0)
#define TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18788C30)
#define TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38__CTOR_OFFSET UNITYSDK_OFFSET(0x187868C0)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int QRCodeWindow__AutoCheck_d__38_TypeDefinitionIndex = 6409;

	class QRCodeWindow__AutoCheck_d__38 : public ::System::Object
	{
	public:
		::TapTap::Sdk::QRCodeWindow___c__DisplayClass38_0* __8__1; // 0x10
		::TapTap::Sdk::QRCodeWindow* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW__AUTOCHECK_D__38__CTOR_OFFSET))(this, __1__state);
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
