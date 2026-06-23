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

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ADDURLTOFOLDERMAPPING_OFFSET UNITYSDK_OFFSET(0x1E611A00)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CLEARSYMBOLS_OFFSET UNITYSDK_OFFSET(0x1E6138F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CLOSELIB_OFFSET UNITYSDK_OFFSET(0x1E613BE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONFIGAPM_OFFSET UNITYSDK_OFFSET(0x1E611D00)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ENABLEAPM_OFFSET UNITYSDK_OFFSET(0x1E611C90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FIXPROCESSPERMISSIONS_OFFSET UNITYSDK_OFFSET(0x1E6134D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FREELIBRARY_OFFSET UNITYSDK_OFFSET(0x1E613DA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETFUNC_OFFSET UNITYSDK_OFFSET(0x1E6136C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETLIBERROR_OFFSET UNITYSDK_OFFSET(0x1E613A60)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETPROCADDRESS_OFFSET UNITYSDK_OFFSET(0x1E613E60)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GET_ASYNCINITED_OFFSET UNITYSDK_OFFSET(0x1E611900)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GET_HOSTPROCESSID_OFFSET UNITYSDK_OFFSET(0x1E611690)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GET_LOCALURLPREFIX_OFFSET UNITYSDK_OFFSET(0x1E6119C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GET_PROFILEPATH_OFFSET UNITYSDK_OFFSET(0x1E611AC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_HANDLOADSYMBOLS_OFFSET UNITYSDK_OFFSET(0x1E612710)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_INITWEBVIEWASYNC_OFFSET UNITYSDK_OFFSET(0x1E611E10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADLIBRARYW_OFFSET UNITYSDK_OFFSET(0x1E613B10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADNATIVECORE_OFFSET UNITYSDK_OFFSET(0x1E612A90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADNATIVE_OFFSET UNITYSDK_OFFSET(0x1E612970)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADSYMBOLS_OFFSET UNITYSDK_OFFSET(0x1E612540)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E611590)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOGTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1E611BE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E6115F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_OPENLIB_OFFSET UNITYSDK_OFFSET(0x1E613510)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_PREPAREPATHFORLOADNATIVE_OFFSET UNITYSDK_OFFSET(0x1E612390)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_PREPAREWEBRESOURCESFORLOADNATIVE_OFFSET UNITYSDK_OFFSET(0x1E6122A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SET_ASYNCINITED_OFFSET UNITYSDK_OFFSET(0x1E611960)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SET_PROFILEPATH_OFFSET UNITYSDK_OFFSET(0x1E611B20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_UNLOADNATIVE_OFFSET UNITYSDK_OFFSET(0x1E613F40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E614490)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_TypeDefinitionIndex = 32552;

	class BrowserNative : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getMouseCursor** StaticGet_zfb_getMouseCursor()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getMouseCursor**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26CF0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setFocused** StaticGet_zfb_setFocused()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setFocused**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26CF8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_goToHTML** StaticGet_zfb_goToHTML()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_goToHTML**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D00);
		}
		static ::System::String** StaticGet_AceeptLanguage()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D08);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerReportCallback** StaticGet_zfb_registerReportCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerReportCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D10);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setLocalRequestHandler** StaticGet_zfb_setLocalRequestHandler()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setLocalRequestHandler**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D18);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerContextMenuCallback** StaticGet_zfb_registerContextMenuCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerContextMenuCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D20);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendDialogResults** StaticGet_zfb_sendDialogResults()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendDialogResults**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D28);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendCommandToFocusedFrame** StaticGet_zfb_sendCommandToFocusedFrame()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendCommandToFocusedFrame**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D30);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_shutdown** StaticGet_zfb_shutdown()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_shutdown**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D38);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_addUrlFolderMapping** StaticGet_zfb_addUrlFolderMapping()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_addUrlFolderMapping**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D40);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setOverlay** StaticGet_zfb_setOverlay()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setOverlay**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D48);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_downloadCommand** StaticGet_zfb_downloadCommand()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_downloadCommand**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D50);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerPopupCallback** StaticGet_zfb_registerPopupCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerPopupCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D58);
		}
		static ::System::Object** StaticGet_symbolsLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D60);
		}
		static ::ZenFulcrum::EmbeddedBrowser::WebResources** StaticGet_webResources()
		{
			return (::ZenFulcrum::EmbeddedBrowser::WebResources**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D68);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerChangeCallback** StaticGet_zfb_registerChangeCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerChangeCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D70);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_disableUrlJump** StaticGet_zfb_disableUrlJump()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_disableUrlJump**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D78);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_changeLoading** StaticGet_zfb_changeLoading()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_changeLoading**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D80);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_showDevTools** StaticGet_zfb_showDevTools()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_showDevTools**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D88);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_goToURL** StaticGet_zfb_goToURL()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_goToURL**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D90);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setAPMCrashTest** StaticGet_zfb_setAPMCrashTest()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setAPMCrashTest**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26D98);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_tick** StaticGet_zfb_tick()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_tick**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26DA0);
		}
		static ::System::String** StaticGet__profilePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26DA8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseMove** StaticGet_zfb_mouseMove()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseMove**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26DB0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_destroyAllBrowsers** StaticGet_zfb_destroyAllBrowsers()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_destroyAllBrowsers**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26DB8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_init** StaticGet_zfb_init()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_init**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26DC0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_flatColorTexture** StaticGet_zfb_flatColorTexture()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_flatColorTexture**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26DC8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setReadyCallback** StaticGet_zfb_setReadyCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setReadyCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26DD0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendContextMenuResults** StaticGet_zfb_sendContextMenuResults()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendContextMenuResults**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26DD8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getHWnd** StaticGet_zfb_getHWnd()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getHWnd**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26DE0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getImage** StaticGet_zfb_getImage()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getImage**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26DE8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_addCLISwitch** StaticGet_zfb_addCLISwitch()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_addCLISwitch**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26DF0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerDialogCallback** StaticGet_zfb_registerDialogCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerDialogCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26DF8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_geometry** StaticGet_zfb_geometry()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_geometry**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E00);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_destroyBrowser** StaticGet_zfb_destroyBrowser()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_destroyBrowser**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E08);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerJSCallback** StaticGet_zfb_registerJSCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerJSCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E10);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_urlToFolderMapping()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E18);
		}
		static ::System::Object** StaticGet_asyncInitLocker()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E20);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setAudioMuted** StaticGet_zfb_setAudioMuted()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setAudioMuted**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E28);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setAPMEnabled** StaticGet_zfb_setAPMEnabled()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setAPMEnabled**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E30);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_editCookie** StaticGet_zfb_editCookie()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_editCookie**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E38);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerConsoleCallback** StaticGet_zfb_registerConsoleCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerConsoleCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E40);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_evalJS** StaticGet_zfb_evalJS()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_evalJS**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E48);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_createBrowser** StaticGet_zfb_createBrowser()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_createBrowser**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E50);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_doNav** StaticGet_zfb_doNav()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_doNav**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E58);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestHeaders** StaticGet_zfb_sendRequestHeaders()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestHeaders**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E60);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseButton** StaticGet_zfb_mouseButton()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseButton**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E68);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseScroll** StaticGet_zfb_mouseScroll()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseScroll**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E70);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getCookies** StaticGet_zfb_getCookies()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getCookies**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E78);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_characterEvent** StaticGet_zfb_characterEvent()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_characterEvent**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E80);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setDebugFunc** StaticGet_zfb_setDebugFunc()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setDebugFunc**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E88);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestData** StaticGet_zfb_sendRequestData()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestData**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E90);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_show** StaticGet_zfb_show()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_show**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26E98);
		}
		static ::System::String** StaticGet_apmSettings()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26EA0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setCallbacksEnabled** StaticGet_zfb_setCallbacksEnabled()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setCallbacksEnabled**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26EA8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerNavStateCallback** StaticGet_zfb_registerNavStateCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerNavStateCallback**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26EB0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_copyToColor32** StaticGet_zfb_copyToColor32()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_copyToColor32**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26EB8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_noop** StaticGet_zfb_noop()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_noop**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26EC0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_clearCookies** StaticGet_zfb_clearCookies()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_clearCookies**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26EC8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_hide** StaticGet_zfb_hide()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_hide**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26ED0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setZoom** StaticGet_zfb_setZoom()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setZoom**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26ED8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getMouseCustomCursor** StaticGet_zfb_getMouseCustomCursor()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getMouseCustomCursor**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26EE0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_free** StaticGet_zfb_free()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_free**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26EE8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_resize** StaticGet_zfb_resize()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_resize**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26EF0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getVersion** StaticGet_zfb_getVersion()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getVersion**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26EF8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_memcpy** StaticGet_zfb_memcpy()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_memcpy**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26F00);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_keyEvent** StaticGet_zfb_keyEvent()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_keyEvent**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26F08);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_numBrowsers** StaticGet_zfb_numBrowsers()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_numBrowsers**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26F10);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_commandLineSwitches()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x26F18);
		}
		static ::System::Int32* StaticGet_asyncInitMiliseconds()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x8040);
		}
		static ::System::Int32* StaticGet_AsyncFailedTimes()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x8044);
		}
		static ::System::Boolean* StaticGet__AsyncInited_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x8048);
		}
		static ::System::Boolean* StaticGet_SymbolsLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x8049);
		}
		static ::System::Boolean* StaticGet_isAppDomainUnloading()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x804A);
		}
		static ::System::Boolean* StaticGet_PreparedPathForLoadNative()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x804B);
		}
		static ::System::Boolean* StaticGet_ZFBInited()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x804C);
		}
		static ::System::Boolean* StaticGet_UseAsyncInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x804D);
		}
		static ::System::IntPtr* StaticGet_moduleHandle()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x8050);
		}
		static ::System::Boolean* StaticGet_NativeLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x8058);
		}
		static ::System::Boolean* StaticGet_apmEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x8059);
		}
		static ::System::Boolean* StaticGet_HasAsyncInitFeature()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x805A);
		}
		static ::System::Boolean* StaticGet_offscreen()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x805B);
		}
		static ::System::Nullable_1<::System::Int32>* StaticGet__hostProcessId()
		{
			return (::System::Nullable_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(BrowserNative_TypeDefinitionIndex)->GetStaticField(0x805C);
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

		static ::System::Void set_AsyncInited(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SET_ASYNCINITED_OFFSET))(value);
		}

		static ::System::String* get_LocalUrlPrefix()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GET_LOCALURLPREFIX_OFFSET))();
		}

		static ::System::Void AddUrlToFolderMapping(::System::String* url, ::System::String* folder)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ADDURLTOFOLDERMAPPING_OFFSET))(url, folder);
		}

		static ::System::Void LogCallback(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOGCALLBACK_OFFSET))(message);
		}

		static ::System::String* get_ProfilePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GET_PROFILEPATH_OFFSET))();
		}

		static ::System::Void set_ProfilePath(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SET_PROFILEPATH_OFFSET))(value);
		}

		static ::System::Void LogThreadSafe(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOGTHREADSAFE_OFFSET))(message);
		}

		static ::System::Void EnableAPM(::System::Boolean enable, ::System::String* apmSettings)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ENABLEAPM_OFFSET))(enable, apmSettings);
		}

		static ::System::Void ConfigAPM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONFIGAPM_OFFSET))();
		}

		static ::System::Void InitWebViewAsync(::System::String* param, ::System::Boolean debugModel, ::System::Int32 delaySeconds, ::System::Boolean simulateFailed, ::System::Boolean asyncLoad)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_INITWEBVIEWASYNC_OFFSET))(param, debugModel, delaySeconds, simulateFailed, asyncLoad);
		}

		static ::System::Void LoadSymbols()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADSYMBOLS_OFFSET))();
		}

		static ::System::Void LoadNative(::System::String* param, ::System::Boolean debugModel)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADNATIVE_OFFSET))(param, debugModel);
		}

		static ::System::Void PreparePathForLoadNative()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_PREPAREPATHFORLOADNATIVE_OFFSET))();
		}

		static ::System::Void PrepareWebResourcesForLoadNative()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_PREPAREWEBRESOURCESFORLOADNATIVE_OFFSET))();
		}

		static ::System::Void LoadNativeCore(::System::String* param, ::System::Boolean debugModel)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADNATIVECORE_OFFSET))(param, debugModel);
		}

		static ::System::Void FixProcessPermissions(::ZenFulcrum::EmbeddedBrowser::FileLocations_CEFDirs* dirs)
		{
			return ((::System::Void(*)(::ZenFulcrum::EmbeddedBrowser::FileLocations_CEFDirs*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FIXPROCESSPERMISSIONS_OFFSET))(dirs);
		}

		static ::System::Void HandLoadSymbols(::System::String* binariesPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_HANDLOADSYMBOLS_OFFSET))(binariesPath);
		}

		static ::System::Void ClearSymbols()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CLEARSYMBOLS_OFFSET))();
		}

		static ::System::String* GetLibError()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETLIBERROR_OFFSET))();
		}

		static ::System::IntPtr OpenLib(::System::String* name)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_OPENLIB_OFFSET))(name);
		}

		static ::System::Void CloseLib()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CLOSELIB_OFFSET))();
		}

		static ::System::IntPtr GetFunc(::System::IntPtr libHandle, ::System::String* fnName)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETFUNC_OFFSET))(libHandle, fnName);
		}

		static ::System::IntPtr LoadLibraryW(::System::String* lpFileName)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_LOADLIBRARYW_OFFSET))(lpFileName);
		}

		static ::System::IntPtr GetProcAddress(::System::IntPtr hModule, ::System::String* procName)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETPROCADDRESS_OFFSET))(hModule, procName);
		}

		static ::System::Boolean FreeLibrary(::System::IntPtr hModule)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FREELIBRARY_OFFSET))(hModule);
		}

		static ::System::Void NewRequestCallback(::System::Int32 requestId, ::System::String* url)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTCALLBACK_OFFSET))(requestId, url);
		}

		static ::System::Void UnloadNative()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_UNLOADNATIVE_OFFSET))();
		}
	};
}
