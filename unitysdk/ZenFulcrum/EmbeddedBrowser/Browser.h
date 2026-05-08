#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_ChangeType.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_ContextMenuOrigin.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_DialogType.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_DownloadAction.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_FrameCommand.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/Browser_NewWindowAction.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/KeyAction.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/ZFDefines_AnnouncementOpenMethod.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserFocusState; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserInput; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_ReadyFunc; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNavState; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser_JSCallback; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser_JSResultFunc; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser_OnDestroyFun; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser_VisibleChangedDelegate; }
namespace ZenFulcrum::EmbeddedBrowser { class CookieManager; }
namespace ZenFulcrum::EmbeddedBrowser { class DialogHandler; }
namespace ZenFulcrum::EmbeddedBrowser { class IBrowserUI; }
namespace ZenFulcrum::EmbeddedBrowser { class INewWindowHandler; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class IPromise_1; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADDURLTOLOCAPATHMAPPING_OFFSET UNITYSDK_OFFSET(0x1B93C900)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_AFTERRESIZE_OFFSET UNITYSDK_OFFSET(0x1B93CB70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONANYBROWSERCREATED_OFFSET UNITYSDK_OFFSET(0x1B93DB70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONANYBROWSERDESTROYED_OFFSET UNITYSDK_OFFSET(0x1B93DD30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONBEFORENAVIGATIONMSGRECEIVE_OFFSET UNITYSDK_OFFSET(0x1B93D970)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONBROWSERFOCUS_OFFSET UNITYSDK_OFFSET(0x1B93DA70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONCERTERROR_OFFSET UNITYSDK_OFFSET(0x1B93D170)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONCONSOLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B93C9D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONDESTROYFUN_OFFSET UNITYSDK_OFFSET(0x1B93DEF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONDOWNLOADSTATUS_OFFSET UNITYSDK_OFFSET(0x1B93D670)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONFETCHERROR_OFFSET UNITYSDK_OFFSET(0x1B93D070)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONFETCH_OFFSET UNITYSDK_OFFSET(0x1B93CF70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONLOADFINISHED_OFFSET UNITYSDK_OFFSET(0x1B93CE70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONLOADSTARTS_OFFSET UNITYSDK_OFFSET(0x1B93CD70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x1B93CC70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONNAVSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1B93D470)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONNODEFOCUS_OFFSET UNITYSDK_OFFSET(0x1B93D770)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONREPORT_OFFSET UNITYSDK_OFFSET(0x1B93D570)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONSADTAB_OFFSET UNITYSDK_OFFSET(0x1B93D270)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONTEXTUREUPDATED_OFFSET UNITYSDK_OFFSET(0x1B93D370)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONUNIWEBVIEWMSGRECEIVE_OFFSET UNITYSDK_OFFSET(0x1B93D870)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B93DFF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CALLFUNCTIONDIRECTLY_1_OFFSET UNITYSDK_OFFSET(0x1B945BD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CALLFUNCTIONDIRECTLY_OFFSET UNITYSDK_OFFSET(0x1B945950)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CALLFUNCTION_1_OFFSET UNITYSDK_OFFSET(0x1B9422F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CALLFUNCTION_OFFSET UNITYSDK_OFFSET(0x1B9456D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_CHANGEFUNC_OFFSET UNITYSDK_OFFSET(0x1B93A670)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_CONSOLEFUNC_OFFSET UNITYSDK_OFFSET(0x1B93B530)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_DISPLAYDIALOGFUNC_OFFSET UNITYSDK_OFFSET(0x1B93AF30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_FORWARDJSCALLFUNC_OFFSET UNITYSDK_OFFSET(0x1B93A3D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_NAVSTATEFUNC_OFFSET UNITYSDK_OFFSET(0x1B93BA70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_NEWWINDOWFUNC_OFFSET UNITYSDK_OFFSET(0x1B93BFE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_READYFUNC_OFFSET UNITYSDK_OFFSET(0x1B93B7E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_REPORTFUNC_OFFSET UNITYSDK_OFFSET(0x1B93BD30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_SHOWCONTEXTMENUFUNC_OFFSET UNITYSDK_OFFSET(0x1B93B1F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CHECKSANITY_OFFSET UNITYSDK_OFFSET(0x1B941060)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CREATEDIALOGHANDLER_OFFSET UNITYSDK_OFFSET(0x1B940ED0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_DEFERUNREADY_OFFSET UNITYSDK_OFFSET(0x1B941130)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_DISABLEURLJUMP_OFFSET UNITYSDK_OFFSET(0x1B942AF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_DOWNLOADCOMMAND_OFFSET UNITYSDK_OFFSET(0x1B940AF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_EVALJSASYNC_OFFSET UNITYSDK_OFFSET(0x1B9441E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_EVALJSCSP_OFFSET UNITYSDK_OFFSET(0x1B945010)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_EVALJSDIRECTLY_OFFSET UNITYSDK_OFFSET(0x1B944A00)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_EVALJS_OFFSET UNITYSDK_OFFSET(0x1B944200)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GETBROWSER_OFFSET UNITYSDK_OFFSET(0x1B947550)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ADJUSTDPI_OFFSET UNITYSDK_OFFSET(0x1B9440A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_BROWSERID_OFFSET UNITYSDK_OFFSET(0x1B93CB50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_CANGOBACK_OFFSET UNITYSDK_OFFSET(0x1B942240)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_CANGOFORWARD_OFFSET UNITYSDK_OFFSET(0x1B942310)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_COOKIEMANAGER_OFFSET UNITYSDK_OFFSET(0x1B93CB30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ENABLEINPUT_OFFSET UNITYSDK_OFFSET(0x1B93CB10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ENABLERENDERING_OFFSET UNITYSDK_OFFSET(0x1B93CAF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_GOBACKACTION_OFFSET UNITYSDK_OFFSET(0x1B93C990)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1B942F80)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ISLOADINGRAW_OFFSET UNITYSDK_OFFSET(0x1B942F60)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x1B93E6C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_LOCALURLPREFIX_OFFSET UNITYSDK_OFFSET(0x1B93C910)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_NEWWINDOWHANDLER_OFFSET UNITYSDK_OFFSET(0x1B93CAD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1B9432C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1B93CB60)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_UIHANDLER_OFFSET UNITYSDK_OFFSET(0x1B93C9B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_URL_OFFSET UNITYSDK_OFFSET(0x1B941C20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ZOOM_OFFSET UNITYSDK_OFFSET(0x1B943F60)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GOBACK_OFFSET UNITYSDK_OFFSET(0x1B942260)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GOFORWARD_OFFSET UNITYSDK_OFFSET(0x1B942330)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_HANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x1B946760)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_HIDERAWIMAGE_OFFSET UNITYSDK_OFFSET(0x1B93E6D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_HIDE_OFFSET UNITYSDK_OFFSET(0x1B942A70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ISWINDOWVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B93C430)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ISWINDOW_OFFSET UNITYSDK_OFFSET(0x1B93C370)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B9467B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_LOADHTML_OFFSET UNITYSDK_OFFSET(0x1B941ED0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_LOADURL_OFFSET UNITYSDK_OFFSET(0x1B941C50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_NATIVEHIDE_OFFSET UNITYSDK_OFFSET(0x1B9426F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_NATIVESHOW_OFFSET UNITYSDK_OFFSET(0x1B9423D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_NOTIFYVISIBLECHANGED_OFFSET UNITYSDK_OFFSET(0x1B941B50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1B9471C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1B9471E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B941170)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B941160)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONITEMCHANGE_OFFSET UNITYSDK_OFFSET(0x1B93F8B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_PRESSKEY_OFFSET UNITYSDK_OFFSET(0x1B947380)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_PROCESSCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1B9462A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_QUEUEPAGEREPLACER_OFFSET UNITYSDK_OFFSET(0x1B942210)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REGISTERFUNCTIONDIRECTLY_OFFSET UNITYSDK_OFFSET(0x1B945F40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REGISTERFUNCTION_OFFSET UNITYSDK_OFFSET(0x1B945BF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RELOAD_OFFSET UNITYSDK_OFFSET(0x1B9430C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_AFTERRESIZE_OFFSET UNITYSDK_OFFSET(0x1B93CBF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONANYBROWSERCREATED_OFFSET UNITYSDK_OFFSET(0x1B93DC50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONANYBROWSERDESTROYED_OFFSET UNITYSDK_OFFSET(0x1B93DE10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONBEFORENAVIGATIONMSGRECEIVE_OFFSET UNITYSDK_OFFSET(0x1B93D9F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONBROWSERFOCUS_OFFSET UNITYSDK_OFFSET(0x1B93DAF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONCERTERROR_OFFSET UNITYSDK_OFFSET(0x1B93D1F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONCONSOLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B93CA50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONDESTROYFUN_OFFSET UNITYSDK_OFFSET(0x1B93DF70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONDOWNLOADSTATUS_OFFSET UNITYSDK_OFFSET(0x1B93D6F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONFETCHERROR_OFFSET UNITYSDK_OFFSET(0x1B93D0F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONFETCH_OFFSET UNITYSDK_OFFSET(0x1B93CFF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONLOADFINISHED_OFFSET UNITYSDK_OFFSET(0x1B93CEF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONLOADSTARTS_OFFSET UNITYSDK_OFFSET(0x1B93CDF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x1B93CCF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONNAVSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1B93D4F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONNODEFOCUS_OFFSET UNITYSDK_OFFSET(0x1B93D7F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONREPORT_OFFSET UNITYSDK_OFFSET(0x1B93D5F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONSADTAB_OFFSET UNITYSDK_OFFSET(0x1B93D2F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONTEXTUREUPDATED_OFFSET UNITYSDK_OFFSET(0x1B93D3F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONUNIWEBVIEWMSGRECEIVE_OFFSET UNITYSDK_OFFSET(0x1B93D8F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RENDER_OFFSET UNITYSDK_OFFSET(0x1B9468D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REQUESTNATIVEBROWSER_OFFSET UNITYSDK_OFFSET(0x1B93ED30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RESIZE_1_OFFSET UNITYSDK_OFFSET(0x1B9439B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RESIZE_OFFSET UNITYSDK_OFFSET(0x1B9439C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RUNONMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1B93EA90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SENDFRAMECOMMAND_OFFSET UNITYSDK_OFFSET(0x1B942110)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETAUDIOMUTED_OFFSET UNITYSDK_OFFSET(0x1B942EC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETCACHEFOLDER_OFFSET UNITYSDK_OFFSET(0x1B93C790)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETFOCUS_OFFSET UNITYSDK_OFFSET(0x1B93C7E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETFOREGROUNDWINDOW_OFFSET UNITYSDK_OFFSET(0x1B93C5C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1B93EBE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETNEWWINDOWHANDLER_OFFSET UNITYSDK_OFFSET(0x1B93E470)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETOVERLAY_OFFSET UNITYSDK_OFFSET(0x1B946C60)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETWINDOWPOS_OFFSET UNITYSDK_OFFSET(0x1B93C680)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_ADJUSTDPI_OFFSET UNITYSDK_OFFSET(0x1B9440B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_COOKIEMANAGER_OFFSET UNITYSDK_OFFSET(0x1B93CB40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_ENABLEINPUT_OFFSET UNITYSDK_OFFSET(0x1B93CB20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_ENABLERENDERING_OFFSET UNITYSDK_OFFSET(0x1B93CB00)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_GOBACKACTION_OFFSET UNITYSDK_OFFSET(0x1B93C9A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_NEWWINDOWHANDLER_OFFSET UNITYSDK_OFFSET(0x1B93CAE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_UIHANDLER_OFFSET UNITYSDK_OFFSET(0x1B93C9C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_URL_OFFSET UNITYSDK_OFFSET(0x1B941C40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_ZOOM_OFFSET UNITYSDK_OFFSET(0x1B943F70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SHOWDEVTOOLS_OFFSET UNITYSDK_OFFSET(0x1B9431B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SHOWWINDOW_OFFSET UNITYSDK_OFFSET(0x1B93C4F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SHOW_OFFSET UNITYSDK_OFFSET(0x1B9429C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_STOP_OFFSET UNITYSDK_OFFSET(0x1B943020)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_TYPETEXT_OFFSET UNITYSDK_OFFSET(0x1B947200)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_UPDATECURSOR_OFFSET UNITYSDK_OFFSET(0x1B940550)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B9466A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_WHENLOADED_OFFSET UNITYSDK_OFFSET(0x1B93EB80)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_WHENREADY_OFFSET UNITYSDK_OFFSET(0x1B93E860)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_0_OFFSET UNITYSDK_OFFSET(0x1B948870)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_2_OFFSET UNITYSDK_OFFSET(0x1B948A90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_3_OFFSET UNITYSDK_OFFSET(0x1B948BF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_4_OFFSET UNITYSDK_OFFSET(0x1B948CC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_7_OFFSET UNITYSDK_OFFSET(0x1B948D50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9486A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__CREATEDIALOGHANDLER_B__168_0_OFFSET UNITYSDK_OFFSET(0x1B948E60)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__CREATEDIALOGHANDLER_B__168_1_OFFSET UNITYSDK_OFFSET(0x1B948F00)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9477F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__EVALJS_OFFSET UNITYSDK_OFFSET(0x1B944950)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__HIDE_B__193_0_OFFSET UNITYSDK_OFFSET(0x1B948F90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__RAISEFOCUSEVENT_OFFSET UNITYSDK_OFFSET(0x1B9474D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__RESIZE_OFFSET UNITYSDK_OFFSET(0x1B9432E0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_TypeDefinitionIndex = 30960;

	class Browser : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::ZenFulcrum::EmbeddedBrowser::Browser*>** StaticGet_allBrowsers()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::ZenFulcrum::EmbeddedBrowser::Browser*>**)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0x25580);
		}
		static ::ZenFulcrum::EmbeddedBrowser::Browser_VisibleChangedDelegate** StaticGet_VisibleChanged()
		{
			return (::ZenFulcrum::EmbeddedBrowser::Browser_VisibleChangedDelegate**)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0x25588);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_allThingsToRemember()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0x25590);
		}
		static ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>** StaticGet_onAnyBrowserCreated()
		{
			return (::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>**)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0x25598);
		}
		static ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>** StaticGet_onAnyBrowserDestroyed()
		{
			return (::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>**)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0x255A0);
		}
		static ::System::IntPtr* StaticGet_ownerHWnd()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0x7BC0);
		}
		static ::System::Int32* StaticGet_reportEvents()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0x7BC8);
		}
		static ::System::Boolean* StaticGet_showPerfHUD()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0x7BCC);
		}
		static ::System::Boolean* StaticGet_isLinear()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0x7BCD);
		}
		static ::System::Boolean* StaticGet_debugModel()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0x7BCE);
		}
		// static const ::System::Int32 SW_SHOW = 0x5; // 0x0
		// static const ::System::Int32 SW_HIDE = 0x0; // 0x0
		// static const ::System::Int32 SWP_ASYNCWINDOWPOS = 0x4000; // 0x0
		// static const ::System::Int32 SWP_NOMOVE = 0x2; // 0x0
		// static const ::System::Int32 SWP_NOOWNERZORDER = 0x200; // 0x0
		// static const ::System::Int32 SWP_NOZORDER = 0x4; // 0x0
		// static const ::System::Int32 SWP_NOACTIVATE = 0x10; // 0x0
		::System::Boolean forbidIME; // 0x18
		::System::Boolean offScreen; // 0x19
		::System::Boolean animationEnable; // 0x1A
		::ZenFulcrum::EmbeddedBrowser::ZFDefines_AnnouncementOpenMethod announcementOpenMethod; // 0x1C
		::System::Boolean usingCustomErrorPage; // 0x20
		::System::Boolean _adjustDPI; // 0x21
		::System::IntPtr hwnd; // 0x28
		::System::Boolean mutedBGM; // 0x30
		::System::Func_1<::System::Boolean>* _GoBackAction_k__BackingField; // 0x38
		::ZenFulcrum::EmbeddedBrowser::IBrowserUI* _uiHandler; // 0x40
		::System::Boolean uiHandlerAssigned; // 0x48
		::System::String* _url; // 0x50
		::System::Int32 _width; // 0x58
		::System::Int32 _height; // 0x5C
		::System::Boolean generateMipmap; // 0x60
		::UnityEngine::Color32 baseColor; // 0x64
		::System::Single _zoom; // 0x68
		::System::Action_2<::System::String*, ::System::String*>* onConsoleMessage; // 0x70
		::ZenFulcrum::EmbeddedBrowser::BrowserNative_ContextMenuOrigin allowContextMenuOn; // 0x78
		::ZenFulcrum::EmbeddedBrowser::Browser_NewWindowAction newWindowAction; // 0x7C
		::ZenFulcrum::EmbeddedBrowser::INewWindowHandler* _NewWindowHandler_k__BackingField; // 0x80
		::System::Boolean _EnableRendering_k__BackingField; // 0x88
		::System::Boolean _EnableInput_k__BackingField; // 0x89
		::ZenFulcrum::EmbeddedBrowser::CookieManager* _CookieManager_k__BackingField; // 0x90
		::System::Int32 browserId; // 0x98
		::System::Int32 unsafeBrowserId; // 0x9C
		::System::Boolean browserIdRequested; // 0xA0
		::UnityEngine::Texture2D* texture; // 0xA8
		::System::Action_1<::UnityEngine::Texture2D*>* afterResize; // 0xB0
		::System::Boolean textureIsOurs; // 0xB8
		::System::Boolean forceNextRender; // 0xB9
		::System::Boolean isPopup; // 0xBA
		::System::Collections::Generic::List_1<::System::Action*>* thingsToDo; // 0xC0
		::System::Collections::Generic::List_1<::System::Action*>* onloadActions; // 0xC8
		::System::Collections::Generic::List_1<::System::Object*>* thingsToRemember; // 0xD0
		::System::Int32 nextCallbackId; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::ZenFulcrum::EmbeddedBrowser::Browser_JSResultFunc*>* registeredCallbacks; // 0xE0
		::ZenFulcrum::EmbeddedBrowser::BrowserNative_ReadyFunc* onNativeReady; // 0xE8
		::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* onLoadStarts; // 0xF0
		::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* onLoadFinished; // 0xF8
		::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* onFetch; // 0x100
		::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* onFetchError; // 0x108
		::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* onCertError; // 0x110
		::System::Action* onSadTab; // 0x118
		::System::Action* onTextureUpdated; // 0x120
		::System::Action* onNavStateChange; // 0x128
		::System::Action_4<::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64>* onReport; // 0x130
		::System::Action_2<::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>* onDownloadStarted; // 0x138
		::System::Action_2<::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>* onDownloadStatus; // 0x140
		::System::Action_3<::System::String*, ::System::Boolean, ::System::String*>* onNodeFocus; // 0x148
		::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* onUniWebviewMsgReceive; // 0x150
		::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* onBeforeNavigationMsgReceive; // 0x158
		::System::Action_2<::System::Boolean, ::System::Boolean>* onBrowserFocus; // 0x160
		::ZenFulcrum::EmbeddedBrowser::BrowserFocusState* focusState; // 0x168
		::ZenFulcrum::EmbeddedBrowser::BrowserInput* browserInput; // 0x170
		::ZenFulcrum::EmbeddedBrowser::Browser* overlay; // 0x178
		::System::Boolean skipNextLoad; // 0x180
		::System::Boolean loadPending; // 0x181
		::ZenFulcrum::EmbeddedBrowser::BrowserNavState* navState; // 0x188
		::System::Boolean newWindowHandlerSet; // 0x190
		::ZenFulcrum::EmbeddedBrowser::INewWindowHandler* newWindowHandler; // 0x198
		::ZenFulcrum::EmbeddedBrowser::DialogHandler* dialogHandler; // 0x1A0
		::System::IntPtr siblingHWnd; // 0x1A8
		::ZenFulcrum::EmbeddedBrowser::Browser_OnDestroyFun* onDestroyFun; // 0x1B0
		::System::Boolean visibleStatus; // 0x1B8
		::System::Action* pageReplacer; // 0x1C0
		::System::Single pageReplacerPriority; // 0x1C8
		::System::Collections::Generic::List_1<::System::Action*>* thingsToDoClone; // 0x1D0
		::Il2CppArray<::UnityEngine::Color32>* colorBuffer; // 0x1D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsWindow(::System::IntPtr hWnd)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ISWINDOW_OFFSET))(hWnd);
		}

		static ::System::Boolean IsWindowVisible(::System::IntPtr hWnd)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ISWINDOWVISIBLE_OFFSET))(hWnd);
		}

		static ::System::Boolean ShowWindow(::System::IntPtr hWnd, ::System::Int32 nCmdShow)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SHOWWINDOW_OFFSET))(hWnd, nCmdShow);
		}

		static ::System::Boolean SetForegroundWindow(::System::IntPtr hWnd)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETFOREGROUNDWINDOW_OFFSET))(hWnd);
		}

		static ::System::Boolean SetWindowPos(::System::IntPtr hWnd, ::System::IntPtr hWndInsertAfter, ::System::Int32 x, ::System::Int32 y, ::System::Int32 cx, ::System::Int32 cy, ::System::UInt32 uFlags)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETWINDOWPOS_OFFSET))(hWnd, hWndInsertAfter, x, y, cx, cy, uFlags);
		}

		static ::System::Void SetCacheFolder(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETCACHEFOLDER_OFFSET))(path);
		}

		::System::Void SetFocus(::System::IntPtr hWnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETFOCUS_OFFSET))(this, hWnd);
		}

		static ::System::Void AddUrlToLocaPathMapping(::System::String* url, ::System::String* path)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADDURLTOLOCAPATHMAPPING_OFFSET))(url, path);
		}

		static ::System::String* get_LocalUrlPrefix()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_LOCALURLPREFIX_OFFSET))();
		}

		::System::Func_1<::System::Boolean>* get_GoBackAction()
		{
			return ((::System::Func_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_GOBACKACTION_OFFSET))(this);
		}

		::System::Void set_GoBackAction(::System::Func_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_GOBACKACTION_OFFSET))(this, value);
		}

		::ZenFulcrum::EmbeddedBrowser::IBrowserUI* get_UIHandler()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IBrowserUI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_UIHANDLER_OFFSET))(this);
		}

		::System::Void set_UIHandler(::ZenFulcrum::EmbeddedBrowser::IBrowserUI* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::IBrowserUI*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_UIHANDLER_OFFSET))(this, value);
		}

		::System::Void add_onConsoleMessage(::System::Action_2<::System::String*, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONCONSOLEMESSAGE_OFFSET))(this, value);
		}

		::System::Void remove_onConsoleMessage(::System::Action_2<::System::String*, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONCONSOLEMESSAGE_OFFSET))(this, value);
		}

		::ZenFulcrum::EmbeddedBrowser::INewWindowHandler* get_NewWindowHandler()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::INewWindowHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_NEWWINDOWHANDLER_OFFSET))(this);
		}

		::System::Void set_NewWindowHandler(::ZenFulcrum::EmbeddedBrowser::INewWindowHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::INewWindowHandler*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_NEWWINDOWHANDLER_OFFSET))(this, value);
		}

		::System::Boolean get_EnableRendering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ENABLERENDERING_OFFSET))(this);
		}

		::System::Void set_EnableRendering(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_ENABLERENDERING_OFFSET))(this, value);
		}

		::System::Boolean get_EnableInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ENABLEINPUT_OFFSET))(this);
		}

		::System::Void set_EnableInput(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_ENABLEINPUT_OFFSET))(this, value);
		}

		::ZenFulcrum::EmbeddedBrowser::CookieManager* get_CookieManager()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::CookieManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_COOKIEMANAGER_OFFSET))(this);
		}

		::System::Void set_CookieManager(::ZenFulcrum::EmbeddedBrowser::CookieManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::CookieManager*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_COOKIEMANAGER_OFFSET))(this, value);
		}

		::System::Int32 get_BrowserId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_BROWSERID_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_Texture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_TEXTURE_OFFSET))(this);
		}

		::System::Void add_afterResize(::System::Action_1<::UnityEngine::Texture2D*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_AFTERRESIZE_OFFSET))(this, value);
		}

		::System::Void remove_afterResize(::System::Action_1<::UnityEngine::Texture2D*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_AFTERRESIZE_OFFSET))(this, value);
		}

		::System::Void add_onNativeReady(::ZenFulcrum::EmbeddedBrowser::BrowserNative_ReadyFunc* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ReadyFunc*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONNATIVEREADY_OFFSET))(this, value);
		}

		::System::Void remove_onNativeReady(::ZenFulcrum::EmbeddedBrowser::BrowserNative_ReadyFunc* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ReadyFunc*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONNATIVEREADY_OFFSET))(this, value);
		}

		::System::Void add_onLoadStarts(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONLOADSTARTS_OFFSET))(this, value);
		}

		::System::Void remove_onLoadStarts(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONLOADSTARTS_OFFSET))(this, value);
		}

		::System::Void add_onLoadFinished(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONLOADFINISHED_OFFSET))(this, value);
		}

		::System::Void remove_onLoadFinished(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONLOADFINISHED_OFFSET))(this, value);
		}

		::System::Void add_onFetch(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONFETCH_OFFSET))(this, value);
		}

		::System::Void remove_onFetch(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONFETCH_OFFSET))(this, value);
		}

		::System::Void add_onFetchError(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONFETCHERROR_OFFSET))(this, value);
		}

		::System::Void remove_onFetchError(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONFETCHERROR_OFFSET))(this, value);
		}

		::System::Void add_onCertError(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONCERTERROR_OFFSET))(this, value);
		}

		::System::Void remove_onCertError(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONCERTERROR_OFFSET))(this, value);
		}

		::System::Void add_onSadTab(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONSADTAB_OFFSET))(this, value);
		}

		::System::Void remove_onSadTab(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONSADTAB_OFFSET))(this, value);
		}

		::System::Void add_onTextureUpdated(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONTEXTUREUPDATED_OFFSET))(this, value);
		}

		::System::Void remove_onTextureUpdated(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONTEXTUREUPDATED_OFFSET))(this, value);
		}

		::System::Void add_onNavStateChange(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONNAVSTATECHANGE_OFFSET))(this, value);
		}

		::System::Void remove_onNavStateChange(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONNAVSTATECHANGE_OFFSET))(this, value);
		}

		::System::Void add_onReport(::System::Action_4<::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_4<::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONREPORT_OFFSET))(this, value);
		}

		::System::Void remove_onReport(::System::Action_4<::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_4<::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONREPORT_OFFSET))(this, value);
		}

		::System::Void add_onDownloadStatus(::System::Action_2<::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONDOWNLOADSTATUS_OFFSET))(this, value);
		}

		::System::Void remove_onDownloadStatus(::System::Action_2<::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONDOWNLOADSTATUS_OFFSET))(this, value);
		}

		::System::Void add_onNodeFocus(::System::Action_3<::System::String*, ::System::Boolean, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::String*, ::System::Boolean, ::System::String*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONNODEFOCUS_OFFSET))(this, value);
		}

		::System::Void remove_onNodeFocus(::System::Action_3<::System::String*, ::System::Boolean, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::String*, ::System::Boolean, ::System::String*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONNODEFOCUS_OFFSET))(this, value);
		}

		::System::Void add_onUniWebviewMsgReceive(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONUNIWEBVIEWMSGRECEIVE_OFFSET))(this, value);
		}

		::System::Void remove_onUniWebviewMsgReceive(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONUNIWEBVIEWMSGRECEIVE_OFFSET))(this, value);
		}

		::System::Void add_onBeforeNavigationMsgReceive(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONBEFORENAVIGATIONMSGRECEIVE_OFFSET))(this, value);
		}

		::System::Void remove_onBeforeNavigationMsgReceive(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONBEFORENAVIGATIONMSGRECEIVE_OFFSET))(this, value);
		}

		::System::Void add_onBrowserFocus(::System::Action_2<::System::Boolean, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::System::Boolean>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONBROWSERFOCUS_OFFSET))(this, value);
		}

		::System::Void remove_onBrowserFocus(::System::Action_2<::System::Boolean, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::System::Boolean>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONBROWSERFOCUS_OFFSET))(this, value);
		}

		static ::System::Void add_onAnyBrowserCreated(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONANYBROWSERCREATED_OFFSET))(value);
		}

		static ::System::Void remove_onAnyBrowserCreated(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONANYBROWSERCREATED_OFFSET))(value);
		}

		static ::System::Void add_onAnyBrowserDestroyed(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONANYBROWSERDESTROYED_OFFSET))(value);
		}

		static ::System::Void remove_onAnyBrowserDestroyed(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONANYBROWSERDESTROYED_OFFSET))(value);
		}

		::System::Void add_onDestroyFun(::ZenFulcrum::EmbeddedBrowser::Browser_OnDestroyFun* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser_OnDestroyFun*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONDESTROYFUN_OFFSET))(this, value);
		}

		::System::Void remove_onDestroyFun(::ZenFulcrum::EmbeddedBrowser::Browser_OnDestroyFun* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser_OnDestroyFun*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONDESTROYFUN_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AWAKE_OFFSET))(this);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ISREADY_OFFSET))(this);
		}

		::System::Void HideRawImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_HIDERAWIMAGE_OFFSET))(this);
		}

		::System::Void WhenReady(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_WHENREADY_OFFSET))(this, callback);
		}

		::System::Void RunOnMainThread(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RUNONMAINTHREAD_OFFSET))(this, callback);
		}

		::System::Void WhenLoaded(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_WHENLOADED_OFFSET))(this, callback);
		}

		::System::Void SetGeometry(::System::Int32 x, ::System::Int32 y, ::System::Int32 w, ::System::Int32 h)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETGEOMETRY_OFFSET))(this, x, y, w, h);
		}

		::System::Void RequestNativeBrowser(::System::Int32 newBrowserId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REQUESTNATIVEBROWSER_OFFSET))(this, newBrowserId);
		}

		::System::Void OnItemChange(::ZenFulcrum::EmbeddedBrowser::BrowserNative_ChangeType type, ::System::String* arg1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ChangeType, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONITEMCHANGE_OFFSET))(this, type, arg1);
		}

		::System::Void CreateDialogHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CREATEDIALOGHANDLER_OFFSET))(this);
		}

		::System::Void CheckSanity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CHECKSANITY_OFFSET))(this);
		}

		::System::Boolean DeferUnready(::System::Action* ifNotReady)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_DEFERUNREADY_OFFSET))(this, ifNotReady);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROY_OFFSET))(this);
		}

		::System::String* get_Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_URL_OFFSET))(this);
		}

		::System::Void set_Url(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_URL_OFFSET))(this, value);
		}

		::System::Void LoadURL(::System::String* url, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_LOADURL_OFFSET))(this, url, force);
		}

		::System::Void LoadHTML(::System::String* html, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_LOADHTML_OFFSET))(this, html, url);
		}

		::System::Void SetNewWindowHandler(::ZenFulcrum::EmbeddedBrowser::Browser_NewWindowAction action, ::ZenFulcrum::EmbeddedBrowser::INewWindowHandler* newWindowHandler)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser_NewWindowAction, ::ZenFulcrum::EmbeddedBrowser::INewWindowHandler*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETNEWWINDOWHANDLER_OFFSET))(this, action, newWindowHandler);
		}

		::System::Void SendFrameCommand(::ZenFulcrum::EmbeddedBrowser::BrowserNative_FrameCommand command)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_FrameCommand))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SENDFRAMECOMMAND_OFFSET))(this, command);
		}

		::System::Void QueuePageReplacer(::System::Action* replacePage, ::System::Single priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_QUEUEPAGEREPLACER_OFFSET))(this, replacePage, priority);
		}

		::System::Boolean get_CanGoBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_CANGOBACK_OFFSET))(this);
		}

		::System::Void GoBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GOBACK_OFFSET))(this);
		}

		::System::Boolean get_CanGoForward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_CANGOFORWARD_OFFSET))(this);
		}

		::System::Void GoForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GOFORWARD_OFFSET))(this);
		}

		::System::Void NotifyVisibleChanged(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_NOTIFYVISIBLECHANGED_OFFSET))(this, visible);
		}

		::System::Void NativeShow(::System::Boolean bringForeground)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_NATIVESHOW_OFFSET))(this, bringForeground);
		}

		::System::Void NativeHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_NATIVEHIDE_OFFSET))(this);
		}

		::System::Void Show(::System::Boolean bringForeground)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SHOW_OFFSET))(this, bringForeground);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_HIDE_OFFSET))(this);
		}

		::System::Void DisableUrlJump(::System::Boolean disable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_DISABLEURLJUMP_OFFSET))(this, disable);
		}

		::System::Void SetAudioMuted(::System::Boolean mute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETAUDIOMUTED_OFFSET))(this, mute);
		}

		::System::Boolean get_IsLoadingRaw()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ISLOADINGRAW_OFFSET))(this);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ISLOADED_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_STOP_OFFSET))(this);
		}

		::System::Void Reload(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RELOAD_OFFSET))(this, force);
		}

		::System::Void ShowDevTools(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SHOWDEVTOOLS_OFFSET))(this, show);
		}

		::UnityEngine::Vector2 get_Size()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_SIZE_OFFSET))(this);
		}

		::System::Void _Resize(::UnityEngine::Texture2D* newTexture, ::System::Boolean newTextureIsOurs)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__RESIZE_OFFSET))(this, newTexture, newTextureIsOurs);
		}

		::System::Void Resize(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RESIZE_OFFSET))(this, width, height);
		}

		::System::Void Resize_1(::UnityEngine::Texture2D* newTexture)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RESIZE_1_OFFSET))(this, newTexture);
		}

		::System::Single get_Zoom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ZOOM_OFFSET))(this);
		}

		::System::Void set_Zoom(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_ZOOM_OFFSET))(this, value);
		}

		::System::Boolean get_AdjustDPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ADJUSTDPI_OFFSET))(this);
		}

		::System::Void set_AdjustDPI(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_ADJUSTDPI_OFFSET))(this, value);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* EvalJSAsync(::System::String* script, ::System::String* scriptURL)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_EVALJSASYNC_OFFSET))(this, script, scriptURL);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* EvalJS(::System::String* script, ::System::String* scriptURL, ::System::Boolean block, ::System::Int32 timeout)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_EVALJS_OFFSET))(this, script, scriptURL, block, timeout);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* EvalJSDirectly(::System::String* script, ::System::String* scriptURL, ::System::Boolean block, ::System::Int32 timeout)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_EVALJSDIRECTLY_OFFSET))(this, script, scriptURL, block, timeout);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* EvalJSCSP(::System::String* script, ::System::String* scriptURL)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_EVALJSCSP_OFFSET))(this, script, scriptURL);
		}

		::System::Void _EvalJS(::System::String* script, ::System::String* scriptURL, ::System::Boolean block, ::System::Int32 timeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__EVALJS_OFFSET))(this, script, scriptURL, block, timeout);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* CallFunction(::System::String* name, ::System::Boolean block, ::System::Int32 timeout, ::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* arguments)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CALLFUNCTION_OFFSET))(this, name, block, timeout, arguments);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* CallFunction_1(::System::String* name, ::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* arguments)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CALLFUNCTION_1_OFFSET))(this, name, arguments);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* CallFunctionDirectly(::System::String* name, ::System::Boolean block, ::System::Int32 timeout, ::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* arguments)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CALLFUNCTIONDIRECTLY_OFFSET))(this, name, block, timeout, arguments);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* CallFunctionDirectly_1(::System::String* name, ::System::Int32 timeout, ::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* arguments)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::PVOID, ::System::String*, ::System::Int32, ::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CALLFUNCTIONDIRECTLY_1_OFFSET))(this, name, timeout, arguments);
		}

		::System::Void RegisterFunction(::System::String* name, ::ZenFulcrum::EmbeddedBrowser::Browser_JSCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ZenFulcrum::EmbeddedBrowser::Browser_JSCallback*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REGISTERFUNCTION_OFFSET))(this, name, callback);
		}

		::System::Void RegisterFunctionDirectly(::System::String* name, ::ZenFulcrum::EmbeddedBrowser::Browser_JSCallback* callback, ::System::Boolean block, ::System::Int32 timeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ZenFulcrum::EmbeddedBrowser::Browser_JSCallback*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REGISTERFUNCTIONDIRECTLY_OFFSET))(this, name, callback, block, timeout);
		}

		::System::Void ProcessCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_PROCESSCALLBACKS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Render()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RENDER_OFFSET))(this);
		}

		::System::Void SetOverlay(::ZenFulcrum::EmbeddedBrowser::Browser* overlayBrowser)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETOVERLAY_OFFSET))(this, overlayBrowser);
		}

		::System::Void HandleInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_HANDLEINPUT_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean focus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONAPPLICATIONFOCUS_OFFSET))(this, focus);
		}

		::System::Void OnApplicationPause(::System::Boolean paused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONAPPLICATIONPAUSE_OFFSET))(this, paused);
		}

		::System::Void UpdateCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_UPDATECURSOR_OFFSET))(this);
		}

		::System::Void DownloadCommand(::System::Int32 downloadId, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DownloadAction action, ::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DownloadAction, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_DOWNLOADCOMMAND_OFFSET))(this, downloadId, action, fileName);
		}

		::System::Void TypeText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_TYPETEXT_OFFSET))(this, text);
		}

		::System::Void PressKey(::UnityEngine::KeyCode key, ::ZenFulcrum::EmbeddedBrowser::KeyAction action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::KeyCode, ::ZenFulcrum::EmbeddedBrowser::KeyAction))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_PRESSKEY_OFFSET))(this, key, action);
		}

		::System::Void _RaiseFocusEvent(::System::Boolean mouseIsFocused, ::System::Boolean keyboardIsFocused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__RAISEFOCUSEVENT_OFFSET))(this, mouseIsFocused, keyboardIsFocused);
		}

		static ::ZenFulcrum::EmbeddedBrowser::Browser* GetBrowser(::System::Int32 browserId)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::Browser*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GETBROWSER_OFFSET))(browserId);
		}

		static ::System::Void CB_ForwardJSCallFunc(::System::Int32 browserId, ::System::Int32 callbackId, ::System::String* data, ::System::Int32 size)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_FORWARDJSCALLFUNC_OFFSET))(browserId, callbackId, data, size);
		}

		static ::System::Void CB_ChangeFunc(::System::Int32 browserId, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ChangeType changeType, ::System::String* arg1)
		{
			return ((::System::Void(*)(::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ChangeType, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_CHANGEFUNC_OFFSET))(browserId, changeType, arg1);
		}

		static ::System::Void CB_DisplayDialogFunc(::System::Int32 browserId, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DialogType dialogType, ::System::IntPtr textPtr, ::System::IntPtr promptTextPtr, ::System::IntPtr sourceURL)
		{
			return ((::System::Void(*)(::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DialogType, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_DISPLAYDIALOGFUNC_OFFSET))(browserId, dialogType, textPtr, promptTextPtr, sourceURL);
		}

		static ::System::Void CB_ShowContextMenuFunc(::System::Int32 browserId, ::System::String* json, ::System::Int32 x, ::System::Int32 y, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ContextMenuOrigin origin)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ContextMenuOrigin))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_SHOWCONTEXTMENUFUNC_OFFSET))(browserId, json, x, y, origin);
		}

		static ::System::Void CB_ConsoleFunc(::System::Int32 browserId, ::System::String* message, ::System::String* source, ::System::Int32 line)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_CONSOLEFUNC_OFFSET))(browserId, message, source, line);
		}

		static ::System::Void CB_ReadyFunc(::System::Int32 browserId)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_READYFUNC_OFFSET))(browserId);
		}

		static ::System::Void CB_NavStateFunc(::System::Int32 browserId, ::System::Boolean canGoBack, ::System::Boolean canGoForward, ::System::Boolean lodaing, ::System::IntPtr urlRaw)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_NAVSTATEFUNC_OFFSET))(browserId, canGoBack, canGoForward, lodaing, urlRaw);
		}

		static ::System::Void CB_ReportFunc(::System::Int32 browserId, ::System::Int32 eventId, ::System::Int64 param1, ::System::Int64 param2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_REPORTFUNC_OFFSET))(browserId, eventId, param1, param2);
		}

		static ::System::Void CB_NewWindowFunc(::System::Int32 creatorBrowserId, ::System::Int32 newBrowserId, ::System::IntPtr urlPtr)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_NEWWINDOWFUNC_OFFSET))(creatorBrowserId, newBrowserId, urlPtr);
		}

		::System::Void _Awake_b__158_0(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_0_OFFSET))(this, id);
		}

		::System::Void _Awake_b__158_2(::ZenFulcrum::EmbeddedBrowser::JSONNode* err)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_2_OFFSET))(this, err);
		}

		::System::Void _Awake_b__158_3(::ZenFulcrum::EmbeddedBrowser::JSONNode* err)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_3_OFFSET))(this, err);
		}

		::System::Void _Awake_b__158_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_4_OFFSET))(this);
		}

		::System::Void _Awake_b__158_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_7_OFFSET))(this);
		}

		::System::Void _CreateDialogHandler_b__168_0(::System::Boolean affirm, ::System::String* text1, ::System::String* text2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__CREATEDIALOGHANDLER_B__168_0_OFFSET))(this, affirm, text1, text2);
		}

		::System::Void _CreateDialogHandler_b__168_1(::System::Int32 commandId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__CREATEDIALOGHANDLER_B__168_1_OFFSET))(this, commandId);
		}

		::System::Void _Hide_b__193_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__HIDE_B__193_0_OFFSET))(this);
		}
	};
}
