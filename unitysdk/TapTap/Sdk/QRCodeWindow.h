#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TapTap/Sdk/UIElement.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace TapTap::Sdk { class AccessToken; }
namespace TapTap::Sdk::Utils { class Net; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI { class Text; }
namespace ZXing::Common { class BitMatrix; }

#define TAPTAP_SDK_QRCODEWINDOW_AUTOCHECK_OFFSET UNITYSDK_OFFSET(0x1D1DA5A0)
#define TAPTAP_SDK_QRCODEWINDOW_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D1D7E50)
#define TAPTAP_SDK_QRCODEWINDOW_CHECK_OFFSET UNITYSDK_OFFSET(0x1D1D9ED0)
#define TAPTAP_SDK_QRCODEWINDOW_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D1D8E90)
#define TAPTAP_SDK_QRCODEWINDOW_DELETEWHITE_OFFSET UNITYSDK_OFFSET(0x1D1DA2F0)
#define TAPTAP_SDK_QRCODEWINDOW_ENCODEQRIMAGE_OFFSET UNITYSDK_OFFSET(0x1D1D9EE0)
#define TAPTAP_SDK_QRCODEWINDOW_GETAUTHORIZATIONHEADER_OFFSET UNITYSDK_OFFSET(0x1D1D9200)
#define TAPTAP_SDK_QRCODEWINDOW_GETCODE_OFFSET UNITYSDK_OFFSET(0x1D1D8A50)
#define TAPTAP_SDK_QRCODEWINDOW_GETPROFILE_OFFSET UNITYSDK_OFFSET(0x1D1D9050)
#define TAPTAP_SDK_QRCODEWINDOW_GET_EXTRA_OFFSET UNITYSDK_OFFSET(0x1D1D7CF0)
#define TAPTAP_SDK_QRCODEWINDOW_GOTOTAPTAPPAGE_OFFSET UNITYSDK_OFFSET(0x1D1D8F60)
#define TAPTAP_SDK_QRCODEWINDOW_ONENTER_OFFSET UNITYSDK_OFFSET(0x1D1D8950)
#define TAPTAP_SDK_QRCODEWINDOW_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1D1D8E20)
#define TAPTAP_SDK_QRCODEWINDOW_REFRESHCODE_OFFSET UNITYSDK_OFFSET(0x1D1D8FB0)
#define TAPTAP_SDK_QRCODEWINDOW_SET_EXTRA_OFFSET UNITYSDK_OFFSET(0x1D1D7D00)
#define TAPTAP_SDK_QRCODEWINDOW_STARTCHECK_OFFSET UNITYSDK_OFFSET(0x1D1DA520)
#define TAPTAP_SDK_QRCODEWINDOW_STOPCHECK_OFFSET UNITYSDK_OFFSET(0x1D1DA560)
#define TAPTAP_SDK_QRCODEWINDOW_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D1D8940)
#define TAPTAP_SDK_QRCODEWINDOW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1DA620)
#define TAPTAP_SDK_QRCODEWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DA600)
#define TAPTAP_SDK_QRCODEWINDOW__GETCODE_B__32_0_OFFSET UNITYSDK_OFFSET(0x1D1DA6A0)
#define TAPTAP_SDK_QRCODEWINDOW__GETCODE_B__32_1_OFFSET UNITYSDK_OFFSET(0x1D1DB090)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int QRCodeWindow_TypeDefinitionIndex = 7061;

	class QRCodeWindow : public ::TapTap::Sdk::UIElement
	{
	public:
		static ::System::String** StaticGet_TEXT_CONFIRM_ON_PHONE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QRCodeWindow_TypeDefinitionIndex)->GetStaticField(0x580);
		}
		static ::System::String** StaticGet_TEXT_SCAN_SUCCESS()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QRCodeWindow_TypeDefinitionIndex)->GetStaticField(0x588);
		}
		static ::System::String** StaticGet_TEXT_PLEASE_RESCRAN()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QRCodeWindow_TypeDefinitionIndex)->GetStaticField(0x590);
		}
		static ::System::String** StaticGet_TEXT_CLICK_TO_REFRESH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QRCodeWindow_TypeDefinitionIndex)->GetStaticField(0x598);
		}
		static ::System::String** StaticGet_TEXT_CANCEL_LOGIN()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QRCodeWindow_TypeDefinitionIndex)->GetStaticField(0x5A0);
		}
		::UnityEngine::UI::RawImage* QRCodeRawImage; // 0x38
		::UnityEngine::UI::Text* StatusText; // 0x40
		::UnityEngine::UI::Text* SubStatusText; // 0x48
		::UnityEngine::UI::Image* RefreshImage; // 0x50
		::UnityEngine::UI::Button* RefreshButton; // 0x58
		::UnityEngine::UI::Button* CloseButton; // 0x60
		::UnityEngine::UI::Button* LogoButton; // 0x68
		::UnityEngine::UI::Button* Notice2Button; // 0x70
		::UnityEngine::UI::Image* NoticeImage; // 0x78
		::System::String* clientId; // 0x80
		::System::String* deviceCode; // 0x88
		::System::Int64 expireAt; // 0x90
		::System::Int64 lastCheckAt; // 0x98
		::System::Int64 interval; // 0xA0
		::TapTap::Sdk::Utils::Net* net; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* get_Extra()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_GET_EXTRA_OFFSET))(this);
		}

		::System::Void set_Extra(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_SET_EXTRA_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_UPDATE_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_ONENTER_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_ONEXIT_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_CLOSE_OFFSET))(this);
		}

		::System::Void GoToTapTapPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_GOTOTAPTAPPAGE_OFFSET))(this);
		}

		::System::Void RefreshCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_REFRESHCODE_OFFSET))(this);
		}

		::System::Void GetProfile(::TapTap::Sdk::AccessToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TapTap::Sdk::AccessToken*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_GETPROFILE_OFFSET))(this, a1);
		}

		::System::String* GetAuthorizationHeader(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_GETAUTHORIZATIONHEADER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void GetCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_GETCODE_OFFSET))(this);
		}

		::System::Void Check()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_CHECK_OFFSET))(this);
		}

		::System::Void EncodeQRImage(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_ENCODEQRIMAGE_OFFSET))(this, a1, a2, a3);
		}

		static ::ZXing::Common::BitMatrix* DeleteWhite(::ZXing::Common::BitMatrix* a1)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::ZXing::Common::BitMatrix*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_DELETEWHITE_OFFSET))(a1);
		}

		::System::Void StartCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_STARTCHECK_OFFSET))(this);
		}

		::System::Void StopCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_STOPCHECK_OFFSET))(this);
		}

		::System::Collections::IEnumerator* AutoCheck()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_AUTOCHECK_OFFSET))(this);
		}

		::System::Void _GetCode_b__32_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW__GETCODE_B__32_0_OFFSET))(this, a1);
		}

		::System::Void _GetCode_b__32_1(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW__GETCODE_B__32_1_OFFSET))(this, a1, a2);
		}
	};
}
