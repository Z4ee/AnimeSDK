#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace TapTap::Sdk { class QRCodeWindow; }

#define TAPTAP_SDK_QRCODEWINDOW___C__DISPLAYCLASS38_0__AUTOCHECK_B__0_OFFSET UNITYSDK_OFFSET(0x1BB68790)
#define TAPTAP_SDK_QRCODEWINDOW___C__DISPLAYCLASS38_0__AUTOCHECK_B__1_OFFSET UNITYSDK_OFFSET(0x1BB68E00)
#define TAPTAP_SDK_QRCODEWINDOW___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB68780)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int QRCodeWindow___c__DisplayClass38_0_TypeDefinitionIndex = 9460;

	class QRCodeWindow___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::TapTap::Sdk::QRCodeWindow* __4__this; // 0x10
		::System::Boolean stop; // 0x18
		::System::Boolean wait; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _AutoCheck_b__0(::System::String* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW___C__DISPLAYCLASS38_0__AUTOCHECK_B__0_OFFSET))(this, result);
		}

		::System::Void _AutoCheck_b__1(::System::Int32 error, ::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW___C__DISPLAYCLASS38_0__AUTOCHECK_B__1_OFFSET))(this, error, msg);
		}
	};
}
