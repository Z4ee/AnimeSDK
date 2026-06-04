#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_addCLISwitch; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_addUrlFolderMapping; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_changeLoading; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_characterEvent; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_clearCookies; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_copyToColor32; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_createBrowser; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_destroyAllBrowsers; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_destroyBrowser; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_disableUrlJump; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_doNav; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_downloadCommand; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_editCookie; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_evalJS; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_flatColorTexture; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_free; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_geometry; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_getCookies; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_getHWnd; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_getImage; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_getMouseCursor; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_getMouseCustomCursor; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_getVersion; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_goToHTML; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_goToURL; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_hide; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_init; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_keyEvent; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_memcpy; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_mouseButton; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_mouseMove; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_mouseScroll; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_noop; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_numBrowsers; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_registerChangeCallback; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_registerConsoleCallback; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_registerContextMenuCallback; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_registerDialogCallback; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_registerJSCallback; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_registerNavStateCallback; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_registerPopupCallback; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_registerReportCallback; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_resize; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_sendCommandToFocusedFrame; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_sendContextMenuResults; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_sendDialogResults; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_sendRequestData; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_sendRequestHeaders; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_setAPMCrashTest; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_setAPMEnabled; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_setAudioMuted; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_setCallbacksEnabled; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_setDebugFunc; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_setFocused; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_setLocalRequestHandler; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_setOverlay; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_setReadyCallback; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_setZoom; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_show; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_showDevTools; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_shutdown; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_Calltype_zfb_tick; }
namespace ZenFulcrum::EmbeddedBrowser { class FileLocations_CEFDirs; }
namespace ZenFulcrum::EmbeddedBrowser { class WebResources; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ADDURLTOFOLDERMAPPING_OFFSET UNITYSDK_OFFSET(0x1B4E9D70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CLEARSYMBOLS_OFFSET UNITYSDK_OFFSET(0x1B4EBAB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CLOSELIB_OFFSET UNITYSDK_OFFSET(0x1B4EBDD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONFIGAPM_OFFSET UNITYSDK_OFFSET(0x1B4EA020)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ENABLEAPM_OFFSET UNITYSDK_OFFSET(0x1B4E9FD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FIXPROCESSPERMISSIONS_OFFSET UNITYSDK_OFFSET(0x1B4EB660)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FREELIBRARY_OFFSET UNITYSDK_OFFSET(0x1B4EBF90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETFUNC_OFFSET UNITYSDK_OFFSET(0x1B4EB900)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETLIBERROR_OFFSET UNITYSDK_OFFSET(0x1B4EBC10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETPROCADDRESS_OFFSET UNITYSDK_OFFSET(0x1B4EC050)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GET_ASYNCINITED_OFFSET UNITYSDK_OFFSET(0x1B4E9D00)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GET_HOSTPROCESSID_OFFSET UNITYSDK_OFFSET(0x1B4DC140)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GET_LOCALURLPREFIX_OFFSET UNITYSDK_OFFSET(0x1B4D8E20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GET_PROFILEPATH_OFFSET UNITYSDK_OFFSET(0x1B4E9E10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_HANDLOADSYMBOLS_OFFSET UNITYSDK_OFFSET(0x1B4EA810)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_INITWEBVIEWASYNC_OFFSET UNITYSDK_OFFSET(0x1B4EA120)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADLIBRARYW_OFFSET UNITYSDK_OFFSET(0x1B4EBD00)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADNATIVECORE_OFFSET UNITYSDK_OFFSET(0x1B4EAA50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADNATIVE_OFFSET UNITYSDK_OFFSET(0x1B4DC050)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADSYMBOLS_OFFSET UNITYSDK_OFFSET(0x1B4E0330)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B4E9BE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOGTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1B4E9F00)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B4E9C90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_OPENLIB_OFFSET UNITYSDK_OFFSET(0x1B4EB750)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_PREPAREPATHFORLOADNATIVE_OFFSET UNITYSDK_OFFSET(0x1B4EA660)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_PREPAREWEBRESOURCESFORLOADNATIVE_OFFSET UNITYSDK_OFFSET(0x1B4EA570)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SET_ASYNCINITED_OFFSET UNITYSDK_OFFSET(0x1B4E9D40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SET_PROFILEPATH_OFFSET UNITYSDK_OFFSET(0x1B4E9E40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_UNLOADNATIVE_OFFSET UNITYSDK_OFFSET(0x1B4EC130)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4EC3E0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_TypeDefinitionIndex = 36433;

	class BrowserNative : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setCallbacksEnabled** StaticGet_zfb_setCallbacksEnabled()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setCallbacksEnabled**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xABE0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_changeLoading** StaticGet_zfb_changeLoading()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_changeLoading**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xABE8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_createBrowser** StaticGet_zfb_createBrowser()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_createBrowser**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xABF0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setZoom** StaticGet_zfb_setZoom()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setZoom**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xABF8);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_commandLineSwitches()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC00);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setAPMCrashTest** StaticGet_zfb_setAPMCrashTest()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setAPMCrashTest**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC08);
		}
		static ::System::Object** StaticGet_symbolsLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC10);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setAudioMuted** StaticGet_zfb_setAudioMuted()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setAudioMuted**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC18);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_tick** StaticGet_zfb_tick()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_tick**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC20);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setFocused** StaticGet_zfb_setFocused()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setFocused**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC28);
		}
		static ::System::String** StaticGet__profilePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC30);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_show** StaticGet_zfb_show()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_show**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC38);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getImage** StaticGet_zfb_getImage()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getImage**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC40);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_numBrowsers** StaticGet_zfb_numBrowsers()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_numBrowsers**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC48);
		}
		static ::System::Object** StaticGet_asyncInitLocker()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC50);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_urlToFolderMapping()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC58);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_addUrlFolderMapping** StaticGet_zfb_addUrlFolderMapping()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_addUrlFolderMapping**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC60);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_flatColorTexture** StaticGet_zfb_flatColorTexture()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_flatColorTexture**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC68);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_disableUrlJump** StaticGet_zfb_disableUrlJump()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_disableUrlJump**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC70);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_noop** StaticGet_zfb_noop()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_noop**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC78);
		}
		static ::ZenFulcrum::EmbeddedBrowser::WebResources** StaticGet_webResources()
		{
			return (::ZenFulcrum::EmbeddedBrowser::WebResources**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC80);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setReadyCallback** StaticGet_zfb_setReadyCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setReadyCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC88);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getHWnd** StaticGet_zfb_getHWnd()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getHWnd**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC90);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerDialogCallback** StaticGet_zfb_registerDialogCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerDialogCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAC98);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_resize** StaticGet_zfb_resize()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_resize**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xACA0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_showDevTools** StaticGet_zfb_showDevTools()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_showDevTools**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xACA8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendCommandToFocusedFrame** StaticGet_zfb_sendCommandToFocusedFrame()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendCommandToFocusedFrame**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xACB0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseButton** StaticGet_zfb_mouseButton()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseButton**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xACB8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_destroyAllBrowsers** StaticGet_zfb_destroyAllBrowsers()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_destroyAllBrowsers**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xACC0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_clearCookies** StaticGet_zfb_clearCookies()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_clearCookies**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xACC8);
		}
		static ::System::String** StaticGet_AceeptLanguage()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xACD0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_init** StaticGet_zfb_init()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_init**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xACD8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_copyToColor32** StaticGet_zfb_copyToColor32()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_copyToColor32**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xACE0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerPopupCallback** StaticGet_zfb_registerPopupCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerPopupCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xACE8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_destroyBrowser** StaticGet_zfb_destroyBrowser()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_destroyBrowser**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xACF0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendContextMenuResults** StaticGet_zfb_sendContextMenuResults()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendContextMenuResults**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xACF8);
		}
		static ::System::String** StaticGet_apmSettings()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD00);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setAPMEnabled** StaticGet_zfb_setAPMEnabled()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setAPMEnabled**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD08);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setLocalRequestHandler** StaticGet_zfb_setLocalRequestHandler()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setLocalRequestHandler**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD10);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerReportCallback** StaticGet_zfb_registerReportCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerReportCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD18);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setOverlay** StaticGet_zfb_setOverlay()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setOverlay**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD20);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_goToURL** StaticGet_zfb_goToURL()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_goToURL**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD28);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_free** StaticGet_zfb_free()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_free**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD30);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_keyEvent** StaticGet_zfb_keyEvent()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_keyEvent**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD38);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseScroll** StaticGet_zfb_mouseScroll()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseScroll**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD40);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_memcpy** StaticGet_zfb_memcpy()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_memcpy**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD48);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getMouseCursor** StaticGet_zfb_getMouseCursor()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getMouseCursor**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD50);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerConsoleCallback** StaticGet_zfb_registerConsoleCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerConsoleCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD58);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerChangeCallback** StaticGet_zfb_registerChangeCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerChangeCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD60);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerNavStateCallback** StaticGet_zfb_registerNavStateCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerNavStateCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD68);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestHeaders** StaticGet_zfb_sendRequestHeaders()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestHeaders**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD70);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getVersion** StaticGet_zfb_getVersion()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getVersion**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD78);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_doNav** StaticGet_zfb_doNav()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_doNav**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD80);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_goToHTML** StaticGet_zfb_goToHTML()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_goToHTML**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD88);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getCookies** StaticGet_zfb_getCookies()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getCookies**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD90);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_shutdown** StaticGet_zfb_shutdown()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_shutdown**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAD98);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestData** StaticGet_zfb_sendRequestData()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestData**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xADA0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_editCookie** StaticGet_zfb_editCookie()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_editCookie**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xADA8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getMouseCustomCursor** StaticGet_zfb_getMouseCustomCursor()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getMouseCustomCursor**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xADB0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_evalJS** StaticGet_zfb_evalJS()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_evalJS**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xADB8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendDialogResults** StaticGet_zfb_sendDialogResults()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendDialogResults**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xADC0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_addCLISwitch** StaticGet_zfb_addCLISwitch()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_addCLISwitch**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xADC8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerJSCallback** StaticGet_zfb_registerJSCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerJSCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xADD0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerContextMenuCallback** StaticGet_zfb_registerContextMenuCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerContextMenuCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xADD8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_hide** StaticGet_zfb_hide()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_hide**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xADE0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_downloadCommand** StaticGet_zfb_downloadCommand()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_downloadCommand**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xADE8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setDebugFunc** StaticGet_zfb_setDebugFunc()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setDebugFunc**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xADF0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_characterEvent** StaticGet_zfb_characterEvent()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_characterEvent**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xADF8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_geometry** StaticGet_zfb_geometry()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_geometry**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAE00);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseMove** StaticGet_zfb_mouseMove()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseMove**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xAE08);
		}
		static ::System::Nullable_1<::System::Int32>* StaticGet__hostProcessId()
		{
			return (::System::Nullable_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x4560);
		}
		static ::System::Boolean* StaticGet_isAppDomainUnloading()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x4568);
		}
		static ::System::Boolean* StaticGet__AsyncInited_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x4569);
		}
		static ::System::Boolean* StaticGet_HasAsyncInitFeature()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x456A);
		}
		static ::System::Boolean* StaticGet_UseAsyncInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x456B);
		}
		static ::System::IntPtr* StaticGet_moduleHandle()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x4570);
		}
		static ::System::Boolean* StaticGet_NativeLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x4578);
		}
		static ::System::Boolean* StaticGet_ZFBInited()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x4579);
		}
		static ::System::Int32* StaticGet_asyncInitMiliseconds()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x457C);
		}
		static ::System::Int32* StaticGet_AsyncFailedTimes()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x4580);
		}
		static ::System::Boolean* StaticGet_apmEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x4584);
		}
		static ::System::Boolean* StaticGet_SymbolsLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x4585);
		}
		static ::System::Boolean* StaticGet_offscreen()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x4586);
		}
		static ::System::Boolean* StaticGet_PreparedPathForLoadNative()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x4587);
		}
		// static const ::System::Int32 DebugPort = 0x2679; // 0x0
		// static const ::System::Int32 AsyncFailedMaxTimes = 0x2; // 0x0
		// static const ::System::Boolean UsingAPIProxy; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_HostProcessId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GET_HOSTPROCESSID_OFFSET))();
		}

		static ::System::Boolean get_AsyncInited()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GET_ASYNCINITED_OFFSET))();
		}

		static ::System::Void set_AsyncInited(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SET_ASYNCINITED_OFFSET))(a1);
		}

		static ::System::String* get_LocalUrlPrefix()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GET_LOCALURLPREFIX_OFFSET))();
		}

		static ::System::Void AddUrlToFolderMapping(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ADDURLTOFOLDERMAPPING_OFFSET))(a1, a2);
		}

		static ::System::Void LogCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOGCALLBACK_OFFSET))(a1);
		}

		static ::System::String* get_ProfilePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GET_PROFILEPATH_OFFSET))();
		}

		static ::System::Void set_ProfilePath(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SET_PROFILEPATH_OFFSET))(a1);
		}

		static ::System::Void LogThreadSafe(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOGTHREADSAFE_OFFSET))(a1);
		}

		static ::System::Void EnableAPM(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ENABLEAPM_OFFSET))(a1, a2);
		}

		static ::System::Void ConfigAPM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONFIGAPM_OFFSET))();
		}

		static ::System::Void InitWebViewAsync(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_INITWEBVIEWASYNC_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void LoadSymbols()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADSYMBOLS_OFFSET))();
		}

		static ::System::Void LoadNative(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADNATIVE_OFFSET))(a1, a2);
		}

		static ::System::Void PreparePathForLoadNative()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_PREPAREPATHFORLOADNATIVE_OFFSET))();
		}

		static ::System::Void PrepareWebResourcesForLoadNative()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_PREPAREWEBRESOURCESFORLOADNATIVE_OFFSET))();
		}

		static ::System::Void LoadNativeCore(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADNATIVECORE_OFFSET))(a1, a2);
		}

		static ::System::Void FixProcessPermissions(::ZenFulcrum::EmbeddedBrowser::FileLocations_CEFDirs* a1)
		{
			return ((::System::Void(*)(::ZenFulcrum::EmbeddedBrowser::FileLocations_CEFDirs*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FIXPROCESSPERMISSIONS_OFFSET))(a1);
		}

		static ::System::Void HandLoadSymbols(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_HANDLOADSYMBOLS_OFFSET))(a1);
		}

		static ::System::Void ClearSymbols()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CLEARSYMBOLS_OFFSET))();
		}

		static ::System::String* GetLibError()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETLIBERROR_OFFSET))();
		}

		static ::System::IntPtr OpenLib(::System::String* a1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_OPENLIB_OFFSET))(a1);
		}

		static ::System::Void CloseLib()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CLOSELIB_OFFSET))();
		}

		static ::System::IntPtr GetFunc(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETFUNC_OFFSET))(a1, a2);
		}

		static ::System::IntPtr LoadLibraryW(::System::String* a1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADLIBRARYW_OFFSET))(a1);
		}

		static ::System::IntPtr GetProcAddress(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETPROCADDRESS_OFFSET))(a1, a2);
		}

		static ::System::Boolean FreeLibrary(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FREELIBRARY_OFFSET))(a1);
		}

		static ::System::Void NewRequestCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void UnloadNative()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_UNLOADNATIVE_OFFSET))();
		}
	};
}
