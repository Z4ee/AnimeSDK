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

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ADDURLTOFOLDERMAPPING_OFFSET UNITYSDK_OFFSET(0x1AB488E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CLEARSYMBOLS_OFFSET UNITYSDK_OFFSET(0x1AB4A880)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CLOSELIB_OFFSET UNITYSDK_OFFSET(0x1AB4AD80)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONFIGAPM_OFFSET UNITYSDK_OFFSET(0x1AB48B90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ENABLEAPM_OFFSET UNITYSDK_OFFSET(0x1AB48B40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FIXPROCESSPERMISSIONS_OFFSET UNITYSDK_OFFSET(0x1AB4A430)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FREELIBRARY_OFFSET UNITYSDK_OFFSET(0x1AB4AF40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETFUNC_OFFSET UNITYSDK_OFFSET(0x1AB4A6D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETLIBERROR_OFFSET UNITYSDK_OFFSET(0x1AB4AB60)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETPROCADDRESS_OFFSET UNITYSDK_OFFSET(0x1AB4B000)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GET_ASYNCINITED_OFFSET UNITYSDK_OFFSET(0x1AB48870)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GET_HOSTPROCESSID_OFFSET UNITYSDK_OFFSET(0x1AB3A030)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GET_LOCALURLPREFIX_OFFSET UNITYSDK_OFFSET(0x1AB36D60)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GET_PROFILEPATH_OFFSET UNITYSDK_OFFSET(0x1AB48980)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_HANDLOADSYMBOLS_OFFSET UNITYSDK_OFFSET(0x1AB49380)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_INITWEBVIEWASYNC_OFFSET UNITYSDK_OFFSET(0x1AB48C90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADLIBRARYW_OFFSET UNITYSDK_OFFSET(0x1AB4ACB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADNATIVECORE_OFFSET UNITYSDK_OFFSET(0x1AB49810)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADNATIVE_OFFSET UNITYSDK_OFFSET(0x1AB39F40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADSYMBOLS_OFFSET UNITYSDK_OFFSET(0x1AB3E4A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AB486F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOGTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1AB48A70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AB487A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_OPENLIB_OFFSET UNITYSDK_OFFSET(0x1AB4A520)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_PREPAREPATHFORLOADNATIVE_OFFSET UNITYSDK_OFFSET(0x1AB491D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_PREPAREWEBRESOURCESFORLOADNATIVE_OFFSET UNITYSDK_OFFSET(0x1AB490E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SET_ASYNCINITED_OFFSET UNITYSDK_OFFSET(0x1AB488B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SET_PROFILEPATH_OFFSET UNITYSDK_OFFSET(0x1AB489B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_UNLOADNATIVE_OFFSET UNITYSDK_OFFSET(0x1AB4B0E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB4B390)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_TypeDefinitionIndex = 37215;

	class BrowserNative : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setCallbacksEnabled** StaticGet_zfb_setCallbacksEnabled()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setCallbacksEnabled**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB2A0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getVersion** StaticGet_zfb_getVersion()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getVersion**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB2A8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getHWnd** StaticGet_zfb_getHWnd()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getHWnd**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB2B0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_changeLoading** StaticGet_zfb_changeLoading()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_changeLoading**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB2B8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_clearCookies** StaticGet_zfb_clearCookies()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_clearCookies**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB2C0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseMove** StaticGet_zfb_mouseMove()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseMove**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB2C8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_characterEvent** StaticGet_zfb_characterEvent()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_characterEvent**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB2D0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendContextMenuResults** StaticGet_zfb_sendContextMenuResults()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendContextMenuResults**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB2D8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setAudioMuted** StaticGet_zfb_setAudioMuted()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setAudioMuted**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB2E0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_noop** StaticGet_zfb_noop()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_noop**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB2E8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_goToHTML** StaticGet_zfb_goToHTML()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_goToHTML**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB2F0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setAPMCrashTest** StaticGet_zfb_setAPMCrashTest()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setAPMCrashTest**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB2F8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerContextMenuCallback** StaticGet_zfb_registerContextMenuCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerContextMenuCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB300);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_addUrlFolderMapping** StaticGet_zfb_addUrlFolderMapping()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_addUrlFolderMapping**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB308);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_show** StaticGet_zfb_show()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_show**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB310);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_commandLineSwitches()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB318);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setZoom** StaticGet_zfb_setZoom()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setZoom**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB320);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerConsoleCallback** StaticGet_zfb_registerConsoleCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerConsoleCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB328);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_init** StaticGet_zfb_init()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_init**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB330);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setDebugFunc** StaticGet_zfb_setDebugFunc()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setDebugFunc**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB338);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_createBrowser** StaticGet_zfb_createBrowser()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_createBrowser**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB340);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_downloadCommand** StaticGet_zfb_downloadCommand()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_downloadCommand**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB348);
		}
		static ::System::Object** StaticGet_symbolsLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB350);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setFocused** StaticGet_zfb_setFocused()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setFocused**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB358);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerChangeCallback** StaticGet_zfb_registerChangeCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerChangeCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB360);
		}
		static ::System::String** StaticGet_AceeptLanguage()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB368);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_editCookie** StaticGet_zfb_editCookie()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_editCookie**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB370);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_evalJS** StaticGet_zfb_evalJS()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_evalJS**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB378);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseScroll** StaticGet_zfb_mouseScroll()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseScroll**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB380);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_goToURL** StaticGet_zfb_goToURL()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_goToURL**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB388);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerPopupCallback** StaticGet_zfb_registerPopupCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerPopupCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB390);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getMouseCursor** StaticGet_zfb_getMouseCursor()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getMouseCursor**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB398);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_destroyBrowser** StaticGet_zfb_destroyBrowser()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_destroyBrowser**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB3A0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_copyToColor32** StaticGet_zfb_copyToColor32()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_copyToColor32**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB3A8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_addCLISwitch** StaticGet_zfb_addCLISwitch()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_addCLISwitch**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB3B0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_numBrowsers** StaticGet_zfb_numBrowsers()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_numBrowsers**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB3B8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_shutdown** StaticGet_zfb_shutdown()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_shutdown**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB3C0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setLocalRequestHandler** StaticGet_zfb_setLocalRequestHandler()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setLocalRequestHandler**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB3C8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_free** StaticGet_zfb_free()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_free**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB3D0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerNavStateCallback** StaticGet_zfb_registerNavStateCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerNavStateCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB3D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_urlToFolderMapping()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB3E0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_disableUrlJump** StaticGet_zfb_disableUrlJump()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_disableUrlJump**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB3E8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestData** StaticGet_zfb_sendRequestData()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestData**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB3F0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_destroyAllBrowsers** StaticGet_zfb_destroyAllBrowsers()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_destroyAllBrowsers**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB3F8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::WebResources** StaticGet_webResources()
		{
			return (::ZenFulcrum::EmbeddedBrowser::WebResources**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB400);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_hide** StaticGet_zfb_hide()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_hide**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB408);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_tick** StaticGet_zfb_tick()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_tick**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB410);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_doNav** StaticGet_zfb_doNav()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_doNav**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB418);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerDialogCallback** StaticGet_zfb_registerDialogCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerDialogCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB420);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendDialogResults** StaticGet_zfb_sendDialogResults()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendDialogResults**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB428);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendCommandToFocusedFrame** StaticGet_zfb_sendCommandToFocusedFrame()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendCommandToFocusedFrame**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB430);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerReportCallback** StaticGet_zfb_registerReportCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerReportCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB438);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_showDevTools** StaticGet_zfb_showDevTools()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_showDevTools**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB440);
		}
		static ::System::Object** StaticGet_asyncInitLocker()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB448);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setOverlay** StaticGet_zfb_setOverlay()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setOverlay**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB450);
		}
		static ::System::String** StaticGet__profilePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB458);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_flatColorTexture** StaticGet_zfb_flatColorTexture()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_flatColorTexture**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB460);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseButton** StaticGet_zfb_mouseButton()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseButton**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB468);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerJSCallback** StaticGet_zfb_registerJSCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerJSCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB470);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setAPMEnabled** StaticGet_zfb_setAPMEnabled()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setAPMEnabled**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB478);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_keyEvent** StaticGet_zfb_keyEvent()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_keyEvent**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB480);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_resize** StaticGet_zfb_resize()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_resize**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB488);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_memcpy** StaticGet_zfb_memcpy()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_memcpy**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB490);
		}
		static ::System::String** StaticGet_apmSettings()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB498);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getCookies** StaticGet_zfb_getCookies()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getCookies**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB4A0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestHeaders** StaticGet_zfb_sendRequestHeaders()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestHeaders**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB4A8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getMouseCustomCursor** StaticGet_zfb_getMouseCustomCursor()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getMouseCustomCursor**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB4B0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_geometry** StaticGet_zfb_geometry()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_geometry**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB4B8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getImage** StaticGet_zfb_getImage()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getImage**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB4C0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setReadyCallback** StaticGet_zfb_setReadyCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setReadyCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0xB4C8);
		}
		static ::System::IntPtr* StaticGet_moduleHandle()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x45D0);
		}
		static ::System::Nullable_1<::System::Int32>* StaticGet__hostProcessId()
		{
			return (::System::Nullable_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x45D8);
		}
		static ::System::Int32* StaticGet_AsyncFailedTimes()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x45E0);
		}
		static ::System::Int32* StaticGet_asyncInitMiliseconds()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x45E4);
		}
		static ::System::Boolean* StaticGet_NativeLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x45E8);
		}
		static ::System::Boolean* StaticGet_isAppDomainUnloading()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x45E9);
		}
		static ::System::Boolean* StaticGet_UseAsyncInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x45EA);
		}
		static ::System::Boolean* StaticGet_PreparedPathForLoadNative()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x45EB);
		}
		static ::System::Boolean* StaticGet_ZFBInited()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x45EC);
		}
		static ::System::Boolean* StaticGet_offscreen()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x45ED);
		}
		static ::System::Boolean* StaticGet_HasAsyncInitFeature()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x45EE);
		}
		static ::System::Boolean* StaticGet_SymbolsLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x45EF);
		}
		static ::System::Boolean* StaticGet__AsyncInited_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x45F0);
		}
		static ::System::Boolean* StaticGet_apmEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x45F1);
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
