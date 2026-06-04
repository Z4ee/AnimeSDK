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

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADDURLTOLOCAPATHMAPPING_OFFSET UNITYSDK_OFFSET(0x1B4D8DB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_AFTERRESIZE_OFFSET UNITYSDK_OFFSET(0x1B4D9040)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONANYBROWSERCREATED_OFFSET UNITYSDK_OFFSET(0x1B4D9FC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONANYBROWSERDESTROYED_OFFSET UNITYSDK_OFFSET(0x1B4DA100)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONBEFORENAVIGATIONMSGRECEIVE_OFFSET UNITYSDK_OFFSET(0x1B4D9DC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONBROWSERFOCUS_OFFSET UNITYSDK_OFFSET(0x1B4D9EC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONCERTERROR_OFFSET UNITYSDK_OFFSET(0x1B4D9620)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONCONSOLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B4D8EA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONDESTROYFUN_OFFSET UNITYSDK_OFFSET(0x1B4DA240)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONDOWNLOADSTATUS_OFFSET UNITYSDK_OFFSET(0x1B4D9AC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONFETCHERROR_OFFSET UNITYSDK_OFFSET(0x1B4D9520)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONFETCH_OFFSET UNITYSDK_OFFSET(0x1B4D9420)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONLOADFINISHED_OFFSET UNITYSDK_OFFSET(0x1B4D9320)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONLOADSTARTS_OFFSET UNITYSDK_OFFSET(0x1B4D9220)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x1B4D9120)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONNAVSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1B4D98E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONNODEFOCUS_OFFSET UNITYSDK_OFFSET(0x1B4D9BC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONREPORT_OFFSET UNITYSDK_OFFSET(0x1B4D99C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONSADTAB_OFFSET UNITYSDK_OFFSET(0x1B4D9720)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONTEXTUREUPDATED_OFFSET UNITYSDK_OFFSET(0x1B4D9800)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONUNIWEBVIEWMSGRECEIVE_OFFSET UNITYSDK_OFFSET(0x1B4D9CC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B4DA340)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CALLFUNCTIONDIRECTLY_1_OFFSET UNITYSDK_OFFSET(0x1B4E1A30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CALLFUNCTIONDIRECTLY_OFFSET UNITYSDK_OFFSET(0x1B4E17C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CALLFUNCTION_1_OFFSET UNITYSDK_OFFSET(0x1B4DEBC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CALLFUNCTION_OFFSET UNITYSDK_OFFSET(0x1B4E1550)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_CHANGEFUNC_OFFSET UNITYSDK_OFFSET(0x1B4D6EC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_CONSOLEFUNC_OFFSET UNITYSDK_OFFSET(0x1B4D7BD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_DISPLAYDIALOGFUNC_OFFSET UNITYSDK_OFFSET(0x1B4D76C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_FORWARDJSCALLFUNC_OFFSET UNITYSDK_OFFSET(0x1B4D6CB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_NAVSTATEFUNC_OFFSET UNITYSDK_OFFSET(0x1B4D8000)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_NEWWINDOWFUNC_OFFSET UNITYSDK_OFFSET(0x1B4D8480)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_READYFUNC_OFFSET UNITYSDK_OFFSET(0x1B4D7E00)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_REPORTFUNC_OFFSET UNITYSDK_OFFSET(0x1B4D8250)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_SHOWCONTEXTMENUFUNC_OFFSET UNITYSDK_OFFSET(0x1B4D7910)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CHECKSANITY_OFFSET UNITYSDK_OFFSET(0x1B4DDC10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CREATEDIALOGHANDLER_OFFSET UNITYSDK_OFFSET(0x1B4DD7C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_DEFERUNREADY_OFFSET UNITYSDK_OFFSET(0x1B4DDCE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_DISABLEURLJUMP_OFFSET UNITYSDK_OFFSET(0x1B4DF750)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_DOWNLOADCOMMAND_OFFSET UNITYSDK_OFFSET(0x1B4DD720)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_EVALJSASYNC_OFFSET UNITYSDK_OFFSET(0x1B4E0870)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_EVALJSCSP_OFFSET UNITYSDK_OFFSET(0x1B4E1100)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_EVALJSDIRECTLY_OFFSET UNITYSDK_OFFSET(0x1B4E0DD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_EVALJS_OFFSET UNITYSDK_OFFSET(0x1B4E0890)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GETBROWSER_OFFSET UNITYSDK_OFFSET(0x1B4E3910)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ADJUSTDPI_OFFSET UNITYSDK_OFFSET(0x1B4E0700)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_BROWSERID_OFFSET UNITYSDK_OFFSET(0x1B4D9020)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_CANGOBACK_OFFSET UNITYSDK_OFFSET(0x1B4DEB10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_CANGOFORWARD_OFFSET UNITYSDK_OFFSET(0x1B4DEBE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_COOKIEMANAGER_OFFSET UNITYSDK_OFFSET(0x1B4D9000)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ENABLEINPUT_OFFSET UNITYSDK_OFFSET(0x1B4D8FE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ENABLERENDERING_OFFSET UNITYSDK_OFFSET(0x1B4D8FC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_GOBACKACTION_OFFSET UNITYSDK_OFFSET(0x1B4D8E60)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1B4DF880)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ISLOADINGRAW_OFFSET UNITYSDK_OFFSET(0x1B4DF860)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x1B4DAC50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_LOCALURLPREFIX_OFFSET UNITYSDK_OFFSET(0x1B4D8DC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_NEWWINDOWHANDLER_OFFSET UNITYSDK_OFFSET(0x1B4D8FA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1B4DFBA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1B4D9030)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_UIHANDLER_OFFSET UNITYSDK_OFFSET(0x1B4D8E80)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_URL_OFFSET UNITYSDK_OFFSET(0x1B4DE400)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ZOOM_OFFSET UNITYSDK_OFFSET(0x1B4E0580)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GOBACK_OFFSET UNITYSDK_OFFSET(0x1B4DEB30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GOFORWARD_OFFSET UNITYSDK_OFFSET(0x1B4DEC00)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_HANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x1B4E21A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_HIDERAWIMAGE_OFFSET UNITYSDK_OFFSET(0x1B4DAC60)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_HIDE_OFFSET UNITYSDK_OFFSET(0x1B4DF6C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ISWINDOWVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B4D8920)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ISWINDOW_OFFSET UNITYSDK_OFFSET(0x1B4D8860)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B4E21F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_LOADHTML_OFFSET UNITYSDK_OFFSET(0x1B4DE6E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_LOADURL_OFFSET UNITYSDK_OFFSET(0x1B4DE430)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_NATIVEHIDE_OFFSET UNITYSDK_OFFSET(0x1B4DF1E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_NATIVESHOW_OFFSET UNITYSDK_OFFSET(0x1B4DECA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_NOTIFYVISIBLECHANGED_OFFSET UNITYSDK_OFFSET(0x1B4DE340)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1B4E3220)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1B4E3430)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B4DDD20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B4DDD10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONITEMCHANGE_OFFSET UNITYSDK_OFFSET(0x1B4DC440)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_PRESSKEY_OFFSET UNITYSDK_OFFSET(0x1B4E36B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_PROCESSCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1B4E1D50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_QUEUEPAGEREPLACER_OFFSET UNITYSDK_OFFSET(0x1B4DEAE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REGISTERFUNCTIONDIRECTLY_OFFSET UNITYSDK_OFFSET(0x1B4E1BD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REGISTERFUNCTION_OFFSET UNITYSDK_OFFSET(0x1B4E1A50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RELOAD_OFFSET UNITYSDK_OFFSET(0x1B4DF9B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_AFTERRESIZE_OFFSET UNITYSDK_OFFSET(0x1B4D90B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONANYBROWSERCREATED_OFFSET UNITYSDK_OFFSET(0x1B4DA060)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONANYBROWSERDESTROYED_OFFSET UNITYSDK_OFFSET(0x1B4DA1A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONBEFORENAVIGATIONMSGRECEIVE_OFFSET UNITYSDK_OFFSET(0x1B4D9E40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONBROWSERFOCUS_OFFSET UNITYSDK_OFFSET(0x1B4D9F40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONCERTERROR_OFFSET UNITYSDK_OFFSET(0x1B4D96A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONCONSOLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B4D8F20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONDESTROYFUN_OFFSET UNITYSDK_OFFSET(0x1B4DA2C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONDOWNLOADSTATUS_OFFSET UNITYSDK_OFFSET(0x1B4D9B40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONFETCHERROR_OFFSET UNITYSDK_OFFSET(0x1B4D95A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONFETCH_OFFSET UNITYSDK_OFFSET(0x1B4D94A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONLOADFINISHED_OFFSET UNITYSDK_OFFSET(0x1B4D93A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONLOADSTARTS_OFFSET UNITYSDK_OFFSET(0x1B4D92A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x1B4D91A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONNAVSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1B4D9950)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONNODEFOCUS_OFFSET UNITYSDK_OFFSET(0x1B4D9C40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONREPORT_OFFSET UNITYSDK_OFFSET(0x1B4D9A40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONSADTAB_OFFSET UNITYSDK_OFFSET(0x1B4D9790)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONTEXTUREUPDATED_OFFSET UNITYSDK_OFFSET(0x1B4D9870)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONUNIWEBVIEWMSGRECEIVE_OFFSET UNITYSDK_OFFSET(0x1B4D9D40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RENDER_OFFSET UNITYSDK_OFFSET(0x1B4E2300)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REQUESTNATIVEBROWSER_OFFSET UNITYSDK_OFFSET(0x1B4DB2F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RESIZE_1_OFFSET UNITYSDK_OFFSET(0x1B4DFEB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RESIZE_OFFSET UNITYSDK_OFFSET(0x1B4DFEC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RUNONMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1B4DAF90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SENDFRAMECOMMAND_OFFSET UNITYSDK_OFFSET(0x1B4DE9A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETAUDIOMUTED_OFFSET UNITYSDK_OFFSET(0x1B4DF7D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETCACHEFOLDER_OFFSET UNITYSDK_OFFSET(0x1B4D8C80)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETFOCUS_OFFSET UNITYSDK_OFFSET(0x1B4D8CC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETFOREGROUNDWINDOW_OFFSET UNITYSDK_OFFSET(0x1B4D8AB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1B4DB130)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETNEWWINDOWHANDLER_OFFSET UNITYSDK_OFFSET(0x1B4DA910)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETOVERLAY_OFFSET UNITYSDK_OFFSET(0x1B4E2690)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETWINDOWPOS_OFFSET UNITYSDK_OFFSET(0x1B4D8B70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_ADJUSTDPI_OFFSET UNITYSDK_OFFSET(0x1B4E0710)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_COOKIEMANAGER_OFFSET UNITYSDK_OFFSET(0x1B4D9010)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_ENABLEINPUT_OFFSET UNITYSDK_OFFSET(0x1B4D8FF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_ENABLERENDERING_OFFSET UNITYSDK_OFFSET(0x1B4D8FD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_GOBACKACTION_OFFSET UNITYSDK_OFFSET(0x1B4D8E70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_NEWWINDOWHANDLER_OFFSET UNITYSDK_OFFSET(0x1B4D8FB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_UIHANDLER_OFFSET UNITYSDK_OFFSET(0x1B4D8E90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_URL_OFFSET UNITYSDK_OFFSET(0x1B4DE420)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_ZOOM_OFFSET UNITYSDK_OFFSET(0x1B4E0590)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SHOWDEVTOOLS_OFFSET UNITYSDK_OFFSET(0x1B4DFA60)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SHOWWINDOW_OFFSET UNITYSDK_OFFSET(0x1B4D89E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SHOW_OFFSET UNITYSDK_OFFSET(0x1B4DF5E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_STOP_OFFSET UNITYSDK_OFFSET(0x1B4DF920)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_TYPETEXT_OFFSET UNITYSDK_OFFSET(0x1B4E34E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_UPDATECURSOR_OFFSET UNITYSDK_OFFSET(0x1B4DD130)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B4E2100)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_WHENLOADED_OFFSET UNITYSDK_OFFSET(0x1B4DB0B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_WHENREADY_OFFSET UNITYSDK_OFFSET(0x1B4DAD10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_0_OFFSET UNITYSDK_OFFSET(0x1B4E4C30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_2_OFFSET UNITYSDK_OFFSET(0x1B4E4D70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_3_OFFSET UNITYSDK_OFFSET(0x1B4E4F00)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_4_OFFSET UNITYSDK_OFFSET(0x1B4E4FF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_7_OFFSET UNITYSDK_OFFSET(0x1B4E5090)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4E4A40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__CREATEDIALOGHANDLER_B__168_0_OFFSET UNITYSDK_OFFSET(0x1B4E51A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__CREATEDIALOGHANDLER_B__168_1_OFFSET UNITYSDK_OFFSET(0x1B4E5260)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E3C30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__EVALJS_OFFSET UNITYSDK_OFFSET(0x1B4E0D40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__HIDE_B__193_0_OFFSET UNITYSDK_OFFSET(0x1B4E52D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__RAISEFOCUSEVENT_OFFSET UNITYSDK_OFFSET(0x1B4E38C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__RESIZE_OFFSET UNITYSDK_OFFSET(0x1B4DFBC0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_TypeDefinitionIndex = 36392;

	class Browser : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>** StaticGet_onAnyBrowserDestroyed()
		{
			return (::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>**)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0xABA0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::ZenFulcrum::EmbeddedBrowser::Browser*>** StaticGet_allBrowsers()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::ZenFulcrum::EmbeddedBrowser::Browser*>**)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0xABA8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::Browser_VisibleChangedDelegate** StaticGet_VisibleChanged()
		{
			return (::ZenFulcrum::EmbeddedBrowser::Browser_VisibleChangedDelegate**)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0xABB0);
		}
		static ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>** StaticGet_onAnyBrowserCreated()
		{
			return (::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>**)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0xABB8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_allThingsToRemember()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0xABC0);
		}
		static ::System::Int32* StaticGet_reportEvents()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0x4530);
		}
		static ::System::Boolean* StaticGet_isLinear()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0x4534);
		}
		static ::System::Boolean* StaticGet_debugModel()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0x4535);
		}
		static ::System::Boolean* StaticGet_showPerfHUD()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0x4536);
		}
		static ::System::IntPtr* StaticGet_ownerHWnd()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(Browser_TypeDefinitionIndex)->GetStaticField(0x4538);
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

		static ::System::Boolean IsWindow(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ISWINDOW_OFFSET))(a1);
		}

		static ::System::Boolean IsWindowVisible(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ISWINDOWVISIBLE_OFFSET))(a1);
		}

		static ::System::Boolean ShowWindow(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SHOWWINDOW_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetForegroundWindow(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETFOREGROUNDWINDOW_OFFSET))(a1);
		}

		static ::System::Boolean SetWindowPos(::System::IntPtr a1, ::System::IntPtr a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::UInt32 a7)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETWINDOWPOS_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void SetCacheFolder(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETCACHEFOLDER_OFFSET))(a1);
		}

		::System::Void SetFocus(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETFOCUS_OFFSET))(this, a1);
		}

		static ::System::Void AddUrlToLocaPathMapping(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADDURLTOLOCAPATHMAPPING_OFFSET))(a1, a2);
		}

		static ::System::String* get_LocalUrlPrefix()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_LOCALURLPREFIX_OFFSET))();
		}

		::System::Func_1<::System::Boolean>* get_GoBackAction()
		{
			return ((::System::Func_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_GOBACKACTION_OFFSET))(this);
		}

		::System::Void set_GoBackAction(::System::Func_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_GOBACKACTION_OFFSET))(this, a1);
		}

		::ZenFulcrum::EmbeddedBrowser::IBrowserUI* get_UIHandler()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IBrowserUI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_UIHANDLER_OFFSET))(this);
		}

		::System::Void set_UIHandler(::ZenFulcrum::EmbeddedBrowser::IBrowserUI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::IBrowserUI*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_UIHANDLER_OFFSET))(this, a1);
		}

		::System::Void add_onConsoleMessage(::System::Action_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONCONSOLEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void remove_onConsoleMessage(::System::Action_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONCONSOLEMESSAGE_OFFSET))(this, a1);
		}

		::ZenFulcrum::EmbeddedBrowser::INewWindowHandler* get_NewWindowHandler()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::INewWindowHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_NEWWINDOWHANDLER_OFFSET))(this);
		}

		::System::Void set_NewWindowHandler(::ZenFulcrum::EmbeddedBrowser::INewWindowHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::INewWindowHandler*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_NEWWINDOWHANDLER_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableRendering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ENABLERENDERING_OFFSET))(this);
		}

		::System::Void set_EnableRendering(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_ENABLERENDERING_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ENABLEINPUT_OFFSET))(this);
		}

		::System::Void set_EnableInput(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_ENABLEINPUT_OFFSET))(this, a1);
		}

		::ZenFulcrum::EmbeddedBrowser::CookieManager* get_CookieManager()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::CookieManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_COOKIEMANAGER_OFFSET))(this);
		}

		::System::Void set_CookieManager(::ZenFulcrum::EmbeddedBrowser::CookieManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::CookieManager*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_COOKIEMANAGER_OFFSET))(this, a1);
		}

		::System::Int32 get_BrowserId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_BROWSERID_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_Texture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_TEXTURE_OFFSET))(this);
		}

		::System::Void add_afterResize(::System::Action_1<::UnityEngine::Texture2D*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_AFTERRESIZE_OFFSET))(this, a1);
		}

		::System::Void remove_afterResize(::System::Action_1<::UnityEngine::Texture2D*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_AFTERRESIZE_OFFSET))(this, a1);
		}

		::System::Void add_onNativeReady(::ZenFulcrum::EmbeddedBrowser::BrowserNative_ReadyFunc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ReadyFunc*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONNATIVEREADY_OFFSET))(this, a1);
		}

		::System::Void remove_onNativeReady(::ZenFulcrum::EmbeddedBrowser::BrowserNative_ReadyFunc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ReadyFunc*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONNATIVEREADY_OFFSET))(this, a1);
		}

		::System::Void add_onLoadStarts(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONLOADSTARTS_OFFSET))(this, a1);
		}

		::System::Void remove_onLoadStarts(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONLOADSTARTS_OFFSET))(this, a1);
		}

		::System::Void add_onLoadFinished(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONLOADFINISHED_OFFSET))(this, a1);
		}

		::System::Void remove_onLoadFinished(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONLOADFINISHED_OFFSET))(this, a1);
		}

		::System::Void add_onFetch(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONFETCH_OFFSET))(this, a1);
		}

		::System::Void remove_onFetch(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONFETCH_OFFSET))(this, a1);
		}

		::System::Void add_onFetchError(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONFETCHERROR_OFFSET))(this, a1);
		}

		::System::Void remove_onFetchError(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONFETCHERROR_OFFSET))(this, a1);
		}

		::System::Void add_onCertError(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONCERTERROR_OFFSET))(this, a1);
		}

		::System::Void remove_onCertError(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONCERTERROR_OFFSET))(this, a1);
		}

		::System::Void add_onSadTab(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONSADTAB_OFFSET))(this, a1);
		}

		::System::Void remove_onSadTab(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONSADTAB_OFFSET))(this, a1);
		}

		::System::Void add_onTextureUpdated(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONTEXTUREUPDATED_OFFSET))(this, a1);
		}

		::System::Void remove_onTextureUpdated(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONTEXTUREUPDATED_OFFSET))(this, a1);
		}

		::System::Void add_onNavStateChange(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONNAVSTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void remove_onNavStateChange(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONNAVSTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void add_onReport(::System::Action_4<::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_4<::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONREPORT_OFFSET))(this, a1);
		}

		::System::Void remove_onReport(::System::Action_4<::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_4<::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONREPORT_OFFSET))(this, a1);
		}

		::System::Void add_onDownloadStatus(::System::Action_2<::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONDOWNLOADSTATUS_OFFSET))(this, a1);
		}

		::System::Void remove_onDownloadStatus(::System::Action_2<::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONDOWNLOADSTATUS_OFFSET))(this, a1);
		}

		::System::Void add_onNodeFocus(::System::Action_3<::System::String*, ::System::Boolean, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::String*, ::System::Boolean, ::System::String*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONNODEFOCUS_OFFSET))(this, a1);
		}

		::System::Void remove_onNodeFocus(::System::Action_3<::System::String*, ::System::Boolean, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::String*, ::System::Boolean, ::System::String*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONNODEFOCUS_OFFSET))(this, a1);
		}

		::System::Void add_onUniWebviewMsgReceive(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONUNIWEBVIEWMSGRECEIVE_OFFSET))(this, a1);
		}

		::System::Void remove_onUniWebviewMsgReceive(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONUNIWEBVIEWMSGRECEIVE_OFFSET))(this, a1);
		}

		::System::Void add_onBeforeNavigationMsgReceive(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONBEFORENAVIGATIONMSGRECEIVE_OFFSET))(this, a1);
		}

		::System::Void remove_onBeforeNavigationMsgReceive(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONBEFORENAVIGATIONMSGRECEIVE_OFFSET))(this, a1);
		}

		::System::Void add_onBrowserFocus(::System::Action_2<::System::Boolean, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::System::Boolean>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONBROWSERFOCUS_OFFSET))(this, a1);
		}

		::System::Void remove_onBrowserFocus(::System::Action_2<::System::Boolean, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::System::Boolean>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONBROWSERFOCUS_OFFSET))(this, a1);
		}

		static ::System::Void add_onAnyBrowserCreated(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONANYBROWSERCREATED_OFFSET))(a1);
		}

		static ::System::Void remove_onAnyBrowserCreated(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONANYBROWSERCREATED_OFFSET))(a1);
		}

		static ::System::Void add_onAnyBrowserDestroyed(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONANYBROWSERDESTROYED_OFFSET))(a1);
		}

		static ::System::Void remove_onAnyBrowserDestroyed(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::ZenFulcrum::EmbeddedBrowser::Browser*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONANYBROWSERDESTROYED_OFFSET))(a1);
		}

		::System::Void add_onDestroyFun(::ZenFulcrum::EmbeddedBrowser::Browser_OnDestroyFun* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser_OnDestroyFun*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADD_ONDESTROYFUN_OFFSET))(this, a1);
		}

		::System::Void remove_onDestroyFun(::ZenFulcrum::EmbeddedBrowser::Browser_OnDestroyFun* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser_OnDestroyFun*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REMOVE_ONDESTROYFUN_OFFSET))(this, a1);
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

		::System::Void WhenReady(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_WHENREADY_OFFSET))(this, a1);
		}

		::System::Void RunOnMainThread(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RUNONMAINTHREAD_OFFSET))(this, a1);
		}

		::System::Void WhenLoaded(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_WHENLOADED_OFFSET))(this, a1);
		}

		::System::Void SetGeometry(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETGEOMETRY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RequestNativeBrowser(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REQUESTNATIVEBROWSER_OFFSET))(this, a1);
		}

		::System::Void OnItemChange(::ZenFulcrum::EmbeddedBrowser::BrowserNative_ChangeType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ChangeType, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONITEMCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void CreateDialogHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CREATEDIALOGHANDLER_OFFSET))(this);
		}

		::System::Void CheckSanity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CHECKSANITY_OFFSET))(this);
		}

		::System::Boolean DeferUnready(::System::Action* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_DEFERUNREADY_OFFSET))(this, a1);
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

		::System::Void set_Url(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_URL_OFFSET))(this, a1);
		}

		::System::Void LoadURL(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_LOADURL_OFFSET))(this, a1, a2);
		}

		::System::Void LoadHTML(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_LOADHTML_OFFSET))(this, a1, a2);
		}

		::System::Void SetNewWindowHandler(::ZenFulcrum::EmbeddedBrowser::Browser_NewWindowAction a1, ::ZenFulcrum::EmbeddedBrowser::INewWindowHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser_NewWindowAction, ::ZenFulcrum::EmbeddedBrowser::INewWindowHandler*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETNEWWINDOWHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void SendFrameCommand(::ZenFulcrum::EmbeddedBrowser::BrowserNative_FrameCommand a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_FrameCommand))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SENDFRAMECOMMAND_OFFSET))(this, a1);
		}

		::System::Void QueuePageReplacer(::System::Action* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_QUEUEPAGEREPLACER_OFFSET))(this, a1, a2);
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

		::System::Void NotifyVisibleChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_NOTIFYVISIBLECHANGED_OFFSET))(this, a1);
		}

		::System::Void NativeShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_NATIVESHOW_OFFSET))(this, a1);
		}

		::System::Void NativeHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_NATIVEHIDE_OFFSET))(this);
		}

		::System::Void Show(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SHOW_OFFSET))(this, a1);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_HIDE_OFFSET))(this);
		}

		::System::Void DisableUrlJump(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_DISABLEURLJUMP_OFFSET))(this, a1);
		}

		::System::Void SetAudioMuted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETAUDIOMUTED_OFFSET))(this, a1);
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

		::System::Void Reload(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RELOAD_OFFSET))(this, a1);
		}

		::System::Void ShowDevTools(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SHOWDEVTOOLS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_Size()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_SIZE_OFFSET))(this);
		}

		::System::Void _Resize(::UnityEngine::Texture2D* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__RESIZE_OFFSET))(this, a1, a2);
		}

		::System::Void Resize(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RESIZE_OFFSET))(this, a1, a2);
		}

		::System::Void Resize_1(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_RESIZE_1_OFFSET))(this, a1);
		}

		::System::Single get_Zoom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ZOOM_OFFSET))(this);
		}

		::System::Void set_Zoom(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_ZOOM_OFFSET))(this, a1);
		}

		::System::Boolean get_AdjustDPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GET_ADJUSTDPI_OFFSET))(this);
		}

		::System::Void set_AdjustDPI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SET_ADJUSTDPI_OFFSET))(this, a1);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* EvalJSAsync(::System::String* a1, ::System::String* a2)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_EVALJSASYNC_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* EvalJS(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_EVALJS_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* EvalJSDirectly(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_EVALJSDIRECTLY_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* EvalJSCSP(::System::String* a1, ::System::String* a2)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_EVALJSCSP_OFFSET))(this, a1, a2);
		}

		::System::Void _EvalJS(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__EVALJS_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* CallFunction(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a4)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CALLFUNCTION_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* CallFunction_1(::System::String* a1, ::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a2)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CALLFUNCTION_1_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* CallFunctionDirectly(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a4)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CALLFUNCTIONDIRECTLY_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* CallFunctionDirectly_1(::System::String* a1, ::System::Int32 a2, ::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a3)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::PVOID, ::System::String*, ::System::Int32, ::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CALLFUNCTIONDIRECTLY_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RegisterFunction(::System::String* a1, ::ZenFulcrum::EmbeddedBrowser::Browser_JSCallback* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ZenFulcrum::EmbeddedBrowser::Browser_JSCallback*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REGISTERFUNCTION_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterFunctionDirectly(::System::String* a1, ::ZenFulcrum::EmbeddedBrowser::Browser_JSCallback* a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ZenFulcrum::EmbeddedBrowser::Browser_JSCallback*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_REGISTERFUNCTIONDIRECTLY_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Void SetOverlay(::ZenFulcrum::EmbeddedBrowser::Browser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_SETOVERLAY_OFFSET))(this, a1);
		}

		::System::Void HandleInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_HANDLEINPUT_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONAPPLICATIONFOCUS_OFFSET))(this, a1);
		}

		::System::Void OnApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONAPPLICATIONPAUSE_OFFSET))(this, a1);
		}

		::System::Void UpdateCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_UPDATECURSOR_OFFSET))(this);
		}

		::System::Void DownloadCommand(::System::Int32 a1, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DownloadAction a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DownloadAction, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_DOWNLOADCOMMAND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TypeText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_TYPETEXT_OFFSET))(this, a1);
		}

		::System::Void PressKey(::UnityEngine::KeyCode a1, ::ZenFulcrum::EmbeddedBrowser::KeyAction a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::KeyCode, ::ZenFulcrum::EmbeddedBrowser::KeyAction))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_PRESSKEY_OFFSET))(this, a1, a2);
		}

		::System::Void _RaiseFocusEvent(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__RAISEFOCUSEVENT_OFFSET))(this, a1, a2);
		}

		static ::ZenFulcrum::EmbeddedBrowser::Browser* GetBrowser(::System::Int32 a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::Browser*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_GETBROWSER_OFFSET))(a1);
		}

		static ::System::Void CB_ForwardJSCallFunc(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_FORWARDJSCALLFUNC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CB_ChangeFunc(::System::Int32 a1, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ChangeType a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ChangeType, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_CHANGEFUNC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CB_DisplayDialogFunc(::System::Int32 a1, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DialogType a2, ::System::IntPtr a3, ::System::IntPtr a4, ::System::IntPtr a5)
		{
			return ((::System::Void(*)(::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DialogType, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_DISPLAYDIALOGFUNC_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void CB_ShowContextMenuFunc(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ContextMenuOrigin a5)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ContextMenuOrigin))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_SHOWCONTEXTMENUFUNC_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void CB_ConsoleFunc(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_CONSOLEFUNC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CB_ReadyFunc(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_READYFUNC_OFFSET))(a1);
		}

		static ::System::Void CB_NavStateFunc(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::IntPtr a5)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_NAVSTATEFUNC_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void CB_ReportFunc(::System::Int32 a1, ::System::Int32 a2, ::System::Int64 a3, ::System::Int64 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_REPORTFUNC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CB_NewWindowFunc(::System::Int32 a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_CB_NEWWINDOWFUNC_OFFSET))(a1, a2, a3);
		}

		::System::Void _Awake_b__158_0(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_0_OFFSET))(this, a1);
		}

		::System::Void _Awake_b__158_2(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_2_OFFSET))(this, a1);
		}

		::System::Void _Awake_b__158_3(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_3_OFFSET))(this, a1);
		}

		::System::Void _Awake_b__158_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_4_OFFSET))(this);
		}

		::System::Void _Awake_b__158_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__AWAKE_B__158_7_OFFSET))(this);
		}

		::System::Void _CreateDialogHandler_b__168_0(::System::Boolean a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__CREATEDIALOGHANDLER_B__168_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CreateDialogHandler_b__168_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__CREATEDIALOGHANDLER_B__168_1_OFFSET))(this, a1);
		}

		::System::Void _Hide_b__193_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER__HIDE_B__193_0_OFFSET))(this);
		}
	};
}
