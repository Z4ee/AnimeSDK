#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ApplicationInstallMode.h"
#include "unitysdk/UnityEngine/ApplicationSandboxType.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/UnityEngine/NetworkReachability.h"
#include "unitysdk/UnityEngine/PooledName.h"
#include "unitysdk/UnityEngine/RuntimePlatform.h"
#include "unitysdk/UnityEngine/StackTraceLogType.h"
#include "unitysdk/UnityEngine/SystemLanguage.h"
#include "unitysdk/UnityEngine/ThreadPriority.h"
#include "unitysdk/UnityEngine/UserAuthorization.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Application_AdvertisingIdentifierCallback; }
namespace UnityEngine { class Application_LogCallback; }
namespace UnityEngine { class Application_LowMemoryCallback; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Events { class UnityAction; }

#define UNITYENGINE_APPLICATION_ADD_DEEPLINKACTIVATED_OFFSET UNITYSDK_OFFSET(0x1B27AEF0)
#define UNITYENGINE_APPLICATION_ADD_FOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1B27ADD0)
#define UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVEDTHREADED_OFFSET UNITYSDK_OFFSET(0x1B279A60)
#define UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0x1B2799C0)
#define UNITYENGINE_APPLICATION_ADD_LOWMEMORY_OFFSET UNITYSDK_OFFSET(0x1B279860)
#define UNITYENGINE_APPLICATION_ADD_ONBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x1B27A5F0)
#define UNITYENGINE_APPLICATION_ADD_QUITTING_OFFSET UNITYSDK_OFFSET(0x1B27B1B0)
#define UNITYENGINE_APPLICATION_ADD_WANTSTOQUIT_OFFSET UNITYSDK_OFFSET(0x1B27B050)
#define UNITYENGINE_APPLICATION_BUILDINVOCATIONFORARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1B27A290)
#define UNITYENGINE_APPLICATION_CALLLOGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B279B00)
#define UNITYENGINE_APPLICATION_CALLLOWMEMORY_OFFSET UNITYSDK_OFFSET(0x1B279980)
#define UNITYENGINE_APPLICATION_CANCELQUIT_OFFSET UNITYSDK_OFFSET(0x1B279180)
#define UNITYENGINE_APPLICATION_CANSTREAMEDLEVELBELOADED_1_OFFSET UNITYSDK_OFFSET(0x1B279270)
#define UNITYENGINE_APPLICATION_CANSTREAMEDLEVELBELOADED_OFFSET UNITYSDK_OFFSET(0x1B279230)
#define UNITYENGINE_APPLICATION_CAPTURESCREENSHOT_1_OFFSET UNITYSDK_OFFSET(0x1B27A5A0)
#define UNITYENGINE_APPLICATION_CAPTURESCREENSHOT_OFFSET UNITYSDK_OFFSET(0x1B27A550)
#define UNITYENGINE_APPLICATION_CUSTOMFINDSCRIPTBYCLASSOPT_OFFSET UNITYSDK_OFFSET(0x1B279730)
#define UNITYENGINE_APPLICATION_CUSTOMUPDATEPRELOADMANAGER_OFFSET UNITYSDK_OFFSET(0x1B279720)
#define UNITYENGINE_APPLICATION_DONTDESTROYONLOAD_OFFSET UNITYSDK_OFFSET(0x1B27A530)
#define UNITYENGINE_APPLICATION_EXTERNALCALL_OFFSET UNITYSDK_OFFSET(0x1B27A270)
#define UNITYENGINE_APPLICATION_EXTERNALEVAL_OFFSET UNITYSDK_OFFSET(0x1B2794F0)
#define UNITYENGINE_APPLICATION_FORCECRASH_OFFSET UNITYSDK_OFFSET(0x1B279620)
#define UNITYENGINE_APPLICATION_GETAVAILABLEDISKSPACE_OFFSET UNITYSDK_OFFSET(0x1B2794E0)
#define UNITYENGINE_APPLICATION_GETBUILDTAGS_OFFSET UNITYSDK_OFFSET(0x1B2792E0)
#define UNITYENGINE_APPLICATION_GETGFXRENDERTHREADKERNELIDANDROID_OFFSET UNITYSDK_OFFSET(0x1B279790)
#define UNITYENGINE_APPLICATION_GETINTEGRATEQUEUESIZE_OFFSET UNITYSDK_OFFSET(0x1B279770)
#define UNITYENGINE_APPLICATION_GETJOBQUEUETHREADKERNELIDSANDROID_OFFSET UNITYSDK_OFFSET(0x1B2797B0)
#define UNITYENGINE_APPLICATION_GETLOADINGTHREADKERNELIDANDROID_OFFSET UNITYSDK_OFFSET(0x1B2797A0)
#define UNITYENGINE_APPLICATION_GETMAINTHREADKERNELIDANDROID_OFFSET UNITYSDK_OFFSET(0x1B279780)
#define UNITYENGINE_APPLICATION_GETPRELOADQUEUESIZE_OFFSET UNITYSDK_OFFSET(0x1B279750)
#define UNITYENGINE_APPLICATION_GETSTACKTRACELOGTYPE_OFFSET UNITYSDK_OFFSET(0x1B279680)
#define UNITYENGINE_APPLICATION_GETSTREAMPROGRESSFORLEVEL_1_OFFSET UNITYSDK_OFFSET(0x1B279200)
#define UNITYENGINE_APPLICATION_GETSTREAMPROGRESSFORLEVEL_OFFSET UNITYSDK_OFFSET(0x1B2791B0)
#define UNITYENGINE_APPLICATION_GETVALUEFORARGV_OFFSET UNITYSDK_OFFSET(0x1B279380)
#define UNITYENGINE_APPLICATION_GET_ABSOLUTEURL_OFFSET UNITYSDK_OFFSET(0x1B2794D0)
#define UNITYENGINE_APPLICATION_GET_BACKGROUNDLOADINGPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B2796B0)
#define UNITYENGINE_APPLICATION_GET_BUILDGUID_OFFSET UNITYSDK_OFFSET(0x1B279300)
#define UNITYENGINE_APPLICATION_GET_CLOUDPROJECTID_OFFSET UNITYSDK_OFFSET(0x1B2795F0)
#define UNITYENGINE_APPLICATION_GET_COMPANYNAME_OFFSET UNITYSDK_OFFSET(0x1B2795E0)
#define UNITYENGINE_APPLICATION_GET_CONSOLELOGPATH_OFFSET UNITYSDK_OFFSET(0x1B2796A0)
#define UNITYENGINE_APPLICATION_GET_DATAPATHNAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2793D0)
#define UNITYENGINE_APPLICATION_GET_DATAPATHNAME_OFFSET UNITYSDK_OFFSET(0x1B2793A0)
#define UNITYENGINE_APPLICATION_GET_DATAPATH_OFFSET UNITYSDK_OFFSET(0x1B279390)
#define UNITYENGINE_APPLICATION_GET_GENUINECHECKAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1B2796E0)
#define UNITYENGINE_APPLICATION_GET_GENUINE_OFFSET UNITYSDK_OFFSET(0x1B2796D0)
#define UNITYENGINE_APPLICATION_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1B2795A0)
#define UNITYENGINE_APPLICATION_GET_INSTALLERNAME_OFFSET UNITYSDK_OFFSET(0x1B279590)
#define UNITYENGINE_APPLICATION_GET_INSTALLMODE_OFFSET UNITYSDK_OFFSET(0x1B2795B0)
#define UNITYENGINE_APPLICATION_GET_INTERNETREACHABILITY_OFFSET UNITYSDK_OFFSET(0x1B279850)
#define UNITYENGINE_APPLICATION_GET_ISBATCHMODE_OFFSET UNITYSDK_OFFSET(0x1B279340)
#define UNITYENGINE_APPLICATION_GET_ISCONSOLEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1B279810)
#define UNITYENGINE_APPLICATION_GET_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x1B27A520)
#define UNITYENGINE_APPLICATION_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x1B2792A0)
#define UNITYENGINE_APPLICATION_GET_ISFOREGROUNDWINDOW_OFFSET UNITYSDK_OFFSET(0x1B2792B0)
#define UNITYENGINE_APPLICATION_GET_ISHUMANCONTROLLINGUS_OFFSET UNITYSDK_OFFSET(0x1B279360)
#define UNITYENGINE_APPLICATION_GET_ISLOADINGLEVEL_OFFSET UNITYSDK_OFFSET(0x1B2791A0)
#define UNITYENGINE_APPLICATION_GET_ISMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1B2797D0)
#define UNITYENGINE_APPLICATION_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x1B27A510)
#define UNITYENGINE_APPLICATION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1B279280)
#define UNITYENGINE_APPLICATION_GET_ISTESTRUN_OFFSET UNITYSDK_OFFSET(0x1B279350)
#define UNITYENGINE_APPLICATION_GET_LEVELCOUNT_OFFSET UNITYSDK_OFFSET(0x1B27B7B0)
#define UNITYENGINE_APPLICATION_GET_LOADEDLEVELNAME_OFFSET UNITYSDK_OFFSET(0x1B27B840)
#define UNITYENGINE_APPLICATION_GET_LOADEDLEVEL_OFFSET UNITYSDK_OFFSET(0x1B27B7E0)
#define UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATHNAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B279470)
#define UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATHNAME_OFFSET UNITYSDK_OFFSET(0x1B279440)
#define UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATH_OFFSET UNITYSDK_OFFSET(0x1B279430)
#define UNITYENGINE_APPLICATION_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x1B2797C0)
#define UNITYENGINE_APPLICATION_GET_PLAYERFASTQUIT_OFFSET UNITYSDK_OFFSET(0x1B2792C0)
#define UNITYENGINE_APPLICATION_GET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x1B2795D0)
#define UNITYENGINE_APPLICATION_GET_RUNINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1B279310)
#define UNITYENGINE_APPLICATION_GET_SANDBOXTYPE_OFFSET UNITYSDK_OFFSET(0x1B2795C0)
#define UNITYENGINE_APPLICATION_GET_STACKTRACELOGTYPE_OFFSET UNITYSDK_OFFSET(0x1B279660)
#define UNITYENGINE_APPLICATION_GET_STREAMEDBYTES_OFFSET UNITYSDK_OFFSET(0x1B279210)
#define UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATHNAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B279420)
#define UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATHNAME_OFFSET UNITYSDK_OFFSET(0x1B2793F0)
#define UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATH_OFFSET UNITYSDK_OFFSET(0x1B2793E0)
#define UNITYENGINE_APPLICATION_GET_SUBMITANALYTICS_OFFSET UNITYSDK_OFFSET(0x1B279710)
#define UNITYENGINE_APPLICATION_GET_SYSTEMLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1B279840)
#define UNITYENGINE_APPLICATION_GET_TARGETFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1B279630)
#define UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATHNAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2794C0)
#define UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATHNAME_OFFSET UNITYSDK_OFFSET(0x1B279490)
#define UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATH_OFFSET UNITYSDK_OFFSET(0x1B279480)
#define UNITYENGINE_APPLICATION_GET_UNITYVERSION_OFFSET UNITYSDK_OFFSET(0x1B279570)
#define UNITYENGINE_APPLICATION_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1B279580)
#define UNITYENGINE_APPLICATION_GET_WEBSECURITYENABLED_OFFSET UNITYSDK_OFFSET(0x1B279220)
#define UNITYENGINE_APPLICATION_HASARGV_OFFSET UNITYSDK_OFFSET(0x1B279370)
#define UNITYENGINE_APPLICATION_HASPROLICENSE_OFFSET UNITYSDK_OFFSET(0x1B279330)
#define UNITYENGINE_APPLICATION_HASUSERAUTHORIZATION_OFFSET UNITYSDK_OFFSET(0x1B279700)
#define UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1B27B410)
#define UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONWANTSTOQUIT_OFFSET UNITYSDK_OFFSET(0x1B27B2D0)
#define UNITYENGINE_APPLICATION_INTERNAL_EXTERNALCALL_OFFSET UNITYSDK_OFFSET(0x1B279560)
#define UNITYENGINE_APPLICATION_INVOKEDEEPLINKACTIVATED_OFFSET UNITYSDK_OFFSET(0x1B27B630)
#define UNITYENGINE_APPLICATION_INVOKEFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1B27B600)
#define UNITYENGINE_APPLICATION_INVOKEONADVERTISINGIDENTIFIERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B279BA0)
#define UNITYENGINE_APPLICATION_INVOKEONBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x1B27B440)
#define UNITYENGINE_APPLICATION_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1B279290)
#define UNITYENGINE_APPLICATION_LOADLEVELADDITIVEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B27BB30)
#define UNITYENGINE_APPLICATION_LOADLEVELADDITIVEASYNC_OFFSET UNITYSDK_OFFSET(0x1B27BAA0)
#define UNITYENGINE_APPLICATION_LOADLEVELADDITIVE_1_OFFSET UNITYSDK_OFFSET(0x1B27B930)
#define UNITYENGINE_APPLICATION_LOADLEVELADDITIVE_OFFSET UNITYSDK_OFFSET(0x1B27B900)
#define UNITYENGINE_APPLICATION_LOADLEVELASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B27BA00)
#define UNITYENGINE_APPLICATION_LOADLEVELASYNC_OFFSET UNITYSDK_OFFSET(0x1B27B970)
#define UNITYENGINE_APPLICATION_LOADLEVEL_1_OFFSET UNITYSDK_OFFSET(0x1B27B8D0)
#define UNITYENGINE_APPLICATION_LOADLEVEL_OFFSET UNITYSDK_OFFSET(0x1B27B8A0)
#define UNITYENGINE_APPLICATION_OBJECTTOJSSTRING_OFFSET UNITYSDK_OFFSET(0x1B279C00)
#define UNITYENGINE_APPLICATION_OPENURL_OFFSET UNITYSDK_OFFSET(0x1B279610)
#define UNITYENGINE_APPLICATION_QUIT_1_OFFSET UNITYSDK_OFFSET(0x1B279170)
#define UNITYENGINE_APPLICATION_QUIT_OFFSET UNITYSDK_OFFSET(0x1B279160)
#define UNITYENGINE_APPLICATION_REGISTERLOGCALLBACKTHREADED_OFFSET UNITYSDK_OFFSET(0x1B27B7A0)
#define UNITYENGINE_APPLICATION_REGISTERLOGCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1B27B670)
#define UNITYENGINE_APPLICATION_REGISTERLOGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B27B660)
#define UNITYENGINE_APPLICATION_REMOVE_DEEPLINKACTIVATED_OFFSET UNITYSDK_OFFSET(0x1B27AFA0)
#define UNITYENGINE_APPLICATION_REMOVE_FOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1B27AE60)
#define UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVEDTHREADED_OFFSET UNITYSDK_OFFSET(0x1B279AB0)
#define UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0x1B279A10)
#define UNITYENGINE_APPLICATION_REMOVE_LOWMEMORY_OFFSET UNITYSDK_OFFSET(0x1B2798F0)
#define UNITYENGINE_APPLICATION_REMOVE_ONBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x1B27A9D0)
#define UNITYENGINE_APPLICATION_REMOVE_QUITTING_OFFSET UNITYSDK_OFFSET(0x1B27B240)
#define UNITYENGINE_APPLICATION_REMOVE_WANTSTOQUIT_OFFSET UNITYSDK_OFFSET(0x1B27B100)
#define UNITYENGINE_APPLICATION_REQUESTADVERTISINGIDENTIFIERASYNC_OFFSET UNITYSDK_OFFSET(0x1B279600)
#define UNITYENGINE_APPLICATION_REQUESTUSERAUTHORIZATION_OFFSET UNITYSDK_OFFSET(0x1B2796F0)
#define UNITYENGINE_APPLICATION_SETBUILDTAGS_OFFSET UNITYSDK_OFFSET(0x1B2792F0)
#define UNITYENGINE_APPLICATION_SETLOGCALLBACKDEFINED_OFFSET UNITYSDK_OFFSET(0x1B279650)
#define UNITYENGINE_APPLICATION_SETSTACKTRACELOGTYPE_OFFSET UNITYSDK_OFFSET(0x1B279690)
#define UNITYENGINE_APPLICATION_SET_BACKGROUNDLOADINGPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B2796C0)
#define UNITYENGINE_APPLICATION_SET_PLAYERFASTQUIT_OFFSET UNITYSDK_OFFSET(0x1B2792D0)
#define UNITYENGINE_APPLICATION_SET_RUNINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1B279320)
#define UNITYENGINE_APPLICATION_SET_STACKTRACELOGTYPE_OFFSET UNITYSDK_OFFSET(0x1B279670)
#define UNITYENGINE_APPLICATION_SET_TARGETFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1B279640)
#define UNITYENGINE_APPLICATION_TRYFREEZEPRELOADOPERATION_OFFSET UNITYSDK_OFFSET(0x1B279740)
#define UNITYENGINE_APPLICATION_UNFREEZEPRELOADOPERATION_OFFSET UNITYSDK_OFFSET(0x1B279760)
#define UNITYENGINE_APPLICATION_UNLOADLEVEL_1_OFFSET UNITYSDK_OFFSET(0x1B27BC70)
#define UNITYENGINE_APPLICATION_UNLOADLEVEL_OFFSET UNITYSDK_OFFSET(0x1B27BBD0)
#define UNITYENGINE_APPLICATION_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1B279190)
#define UNITYENGINE_APPLICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B27BD00)

namespace UnityEngine
{
	inline static constexpr unsigned int Application_TypeDefinitionIndex = 4013;

	class Application : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_quitting()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x2DBA0);
		}
		static ::UnityEngine::Application_LowMemoryCallback** StaticGet_lowMemory()
		{
			return (::UnityEngine::Application_LowMemoryCallback**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x2DBA8);
		}
		static ::UnityEngine::Application_AdvertisingIdentifierCallback** StaticGet_OnAdvertisingIdentifierCallback()
		{
			return (::UnityEngine::Application_AdvertisingIdentifierCallback**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x2DBB0);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet_wantsToQuit()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x2DBB8);
		}
		static ::UnityEngine::Application_LogCallback** StaticGet_s_RegisterLogCallbackDeprecated()
		{
			return (::UnityEngine::Application_LogCallback**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x2DBC0);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet_focusChanged()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x2DBC8);
		}
		static ::UnityEngine::Application_LogCallback** StaticGet_s_LogCallbackHandlerThreaded()
		{
			return (::UnityEngine::Application_LogCallback**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x2DBD0);
		}
		static ::UnityEngine::Application_LogCallback** StaticGet_s_LogCallbackHandler()
		{
			return (::UnityEngine::Application_LogCallback**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x2DBD8);
		}
		static ::System::Action_1<::System::String*>** StaticGet_deepLinkActivated()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x2DBE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Quit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_QUIT_OFFSET))(a1);
		}

		static ::System::Void Quit_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_QUIT_1_OFFSET))();
		}

		static ::System::Void CancelQuit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CANCELQUIT_OFFSET))();
		}

		static ::System::Void Unload()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_UNLOAD_OFFSET))();
		}

		static ::System::Boolean get_isLoadingLevel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISLOADINGLEVEL_OFFSET))();
		}

		static ::System::Single GetStreamProgressForLevel(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETSTREAMPROGRESSFORLEVEL_OFFSET))(a1);
		}

		static ::System::Single GetStreamProgressForLevel_1(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETSTREAMPROGRESSFORLEVEL_1_OFFSET))(a1);
		}

		static ::System::Int32 get_streamedBytes()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_STREAMEDBYTES_OFFSET))();
		}

		static ::System::Boolean get_webSecurityEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_WEBSECURITYENABLED_OFFSET))();
		}

		static ::System::Boolean CanStreamedLevelBeLoaded(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CANSTREAMEDLEVELBELOADED_OFFSET))(a1);
		}

		static ::System::Boolean CanStreamedLevelBeLoaded_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CANSTREAMEDLEVELBELOADED_1_OFFSET))(a1);
		}

		static ::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISPLAYING_OFFSET))();
		}

		static ::System::Boolean IsPlaying(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ISPLAYING_OFFSET))(a1);
		}

		static ::System::Boolean get_isFocused()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISFOCUSED_OFFSET))();
		}

		static ::System::Boolean get_isForegroundWindow()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISFOREGROUNDWINDOW_OFFSET))();
		}

		static ::System::Boolean get_playerFastQuit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PLAYERFASTQUIT_OFFSET))();
		}

		static ::System::Void set_playerFastQuit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_PLAYERFASTQUIT_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* GetBuildTags()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETBUILDTAGS_OFFSET))();
		}

		static ::System::Void SetBuildTags(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SETBUILDTAGS_OFFSET))(a1);
		}

		static ::System::String* get_buildGUID()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_BUILDGUID_OFFSET))();
		}

		static ::System::Boolean get_runInBackground()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_RUNINBACKGROUND_OFFSET))();
		}

		static ::System::Void set_runInBackground(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_RUNINBACKGROUND_OFFSET))(a1);
		}

		static ::System::Boolean HasProLicense()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_HASPROLICENSE_OFFSET))();
		}

		static ::System::Boolean get_isBatchMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISBATCHMODE_OFFSET))();
		}

		static ::System::Boolean get_isTestRun()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISTESTRUN_OFFSET))();
		}

		static ::System::Boolean get_isHumanControllingUs()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISHUMANCONTROLLINGUS_OFFSET))();
		}

		static ::System::Boolean HasARGV(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_HASARGV_OFFSET))(a1);
		}

		static ::System::String* GetValueForARGV(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETVALUEFORARGV_OFFSET))(a1);
		}

		static ::System::String* get_dataPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_DATAPATH_OFFSET))();
		}

		static ::UnityEngine::PooledName get_dataPathName()
		{
			return ((::UnityEngine::PooledName(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_DATAPATHNAME_OFFSET))();
		}

		static ::System::String* get_streamingAssetsPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATH_OFFSET))();
		}

		static ::UnityEngine::PooledName get_streamingAssetsPathName()
		{
			return ((::UnityEngine::PooledName(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATHNAME_OFFSET))();
		}

		static ::System::String* get_persistentDataPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATH_OFFSET))();
		}

		static ::UnityEngine::PooledName get_persistentDataPathName()
		{
			return ((::UnityEngine::PooledName(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATHNAME_OFFSET))();
		}

		static ::System::String* get_temporaryCachePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATH_OFFSET))();
		}

		static ::UnityEngine::PooledName get_temporaryCachePathName()
		{
			return ((::UnityEngine::PooledName(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATHNAME_OFFSET))();
		}

		static ::System::String* get_absoluteURL()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ABSOLUTEURL_OFFSET))();
		}

		static ::System::Boolean GetAvailableDiskSpace(::System::UInt64& a1, ::System::UInt64& a2)
		{
			return ((::System::Boolean(*)(::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETAVAILABLEDISKSPACE_OFFSET))(a1, a2);
		}

		static ::System::Void ExternalEval(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_EXTERNALEVAL_OFFSET))(a1);
		}

		static ::System::Void Internal_ExternalCall(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INTERNAL_EXTERNALCALL_OFFSET))(a1);
		}

		static ::System::String* get_unityVersion()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_UNITYVERSION_OFFSET))();
		}

		static ::System::String* get_version()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_VERSION_OFFSET))();
		}

		static ::System::String* get_installerName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_INSTALLERNAME_OFFSET))();
		}

		static ::System::String* get_identifier()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_IDENTIFIER_OFFSET))();
		}

		static ::UnityEngine::ApplicationInstallMode get_installMode()
		{
			return ((::UnityEngine::ApplicationInstallMode(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_INSTALLMODE_OFFSET))();
		}

		static ::UnityEngine::ApplicationSandboxType get_sandboxType()
		{
			return ((::UnityEngine::ApplicationSandboxType(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_SANDBOXTYPE_OFFSET))();
		}

		static ::System::String* get_productName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PRODUCTNAME_OFFSET))();
		}

		static ::System::String* get_companyName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_COMPANYNAME_OFFSET))();
		}

		static ::System::String* get_cloudProjectId()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_CLOUDPROJECTID_OFFSET))();
		}

		static ::System::Boolean RequestAdvertisingIdentifierAsync(::UnityEngine::Application_AdvertisingIdentifierCallback* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Application_AdvertisingIdentifierCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REQUESTADVERTISINGIDENTIFIERASYNC_OFFSET))(a1);
		}

		static ::System::Void OpenURL(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_OPENURL_OFFSET))(a1);
		}

		static ::System::Void ForceCrash(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_FORCECRASH_OFFSET))(a1);
		}

		static ::System::Int32 get_targetFrameRate()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_TARGETFRAMERATE_OFFSET))();
		}

		static ::System::Void set_targetFrameRate(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_TARGETFRAMERATE_OFFSET))(a1);
		}

		static ::System::Void SetLogCallbackDefined(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SETLOGCALLBACKDEFINED_OFFSET))(a1);
		}

		static ::UnityEngine::StackTraceLogType get_stackTraceLogType()
		{
			return ((::UnityEngine::StackTraceLogType(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_STACKTRACELOGTYPE_OFFSET))();
		}

		static ::System::Void set_stackTraceLogType(::UnityEngine::StackTraceLogType a1)
		{
			return ((::System::Void(*)(::UnityEngine::StackTraceLogType))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_STACKTRACELOGTYPE_OFFSET))(a1);
		}

		static ::UnityEngine::StackTraceLogType GetStackTraceLogType(::UnityEngine::LogType a1)
		{
			return ((::UnityEngine::StackTraceLogType(*)(::UnityEngine::LogType))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETSTACKTRACELOGTYPE_OFFSET))(a1);
		}

		static ::System::Void SetStackTraceLogType(::UnityEngine::LogType a1, ::UnityEngine::StackTraceLogType a2)
		{
			return ((::System::Void(*)(::UnityEngine::LogType, ::UnityEngine::StackTraceLogType))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SETSTACKTRACELOGTYPE_OFFSET))(a1, a2);
		}

		static ::System::String* get_consoleLogPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_CONSOLELOGPATH_OFFSET))();
		}

		static ::UnityEngine::ThreadPriority get_backgroundLoadingPriority()
		{
			return ((::UnityEngine::ThreadPriority(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_BACKGROUNDLOADINGPRIORITY_OFFSET))();
		}

		static ::System::Void set_backgroundLoadingPriority(::UnityEngine::ThreadPriority a1)
		{
			return ((::System::Void(*)(::UnityEngine::ThreadPriority))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_BACKGROUNDLOADINGPRIORITY_OFFSET))(a1);
		}

		static ::System::Boolean get_genuine()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_GENUINE_OFFSET))();
		}

		static ::System::Boolean get_genuineCheckAvailable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_GENUINECHECKAVAILABLE_OFFSET))();
		}

		static ::UnityEngine::AsyncOperation* RequestUserAuthorization(::UnityEngine::UserAuthorization a1)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::UnityEngine::UserAuthorization))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REQUESTUSERAUTHORIZATION_OFFSET))(a1);
		}

		static ::System::Boolean HasUserAuthorization(::UnityEngine::UserAuthorization a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::UserAuthorization))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_HASUSERAUTHORIZATION_OFFSET))(a1);
		}

		static ::System::Boolean get_submitAnalytics()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_SUBMITANALYTICS_OFFSET))();
		}

		static ::System::Boolean CustomUpdatePreloadManager(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CUSTOMUPDATEPRELOADMANAGER_OFFSET))(a1);
		}

		static ::System::Void CustomFindScriptByClassOpt(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CUSTOMFINDSCRIPTBYCLASSOPT_OFFSET))(a1);
		}

		static ::System::Boolean TryFreezePreloadOperation()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_TRYFREEZEPRELOADOPERATION_OFFSET))();
		}

		static ::System::Int32 GetPreloadQueueSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETPRELOADQUEUESIZE_OFFSET))();
		}

		static ::System::Void UnFreezePreloadOperation()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_UNFREEZEPRELOADOPERATION_OFFSET))();
		}

		static ::System::Int32 GetIntegrateQueueSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETINTEGRATEQUEUESIZE_OFFSET))();
		}

		static ::System::Int32 GetMainThreadKernelIdAndroid()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETMAINTHREADKERNELIDANDROID_OFFSET))();
		}

		static ::System::Int32 GetGfxRenderThreadKernelIdAndroid()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETGFXRENDERTHREADKERNELIDANDROID_OFFSET))();
		}

		static ::System::Int32 GetLoadingThreadKernelIdAndroid()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETLOADINGTHREADKERNELIDANDROID_OFFSET))();
		}

		static ::Il2CppArray<::System::Int32>* GetJobQueueThreadKernelIdsAndroid()
		{
			return ((::Il2CppArray<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETJOBQUEUETHREADKERNELIDSANDROID_OFFSET))();
		}

		static ::UnityEngine::RuntimePlatform get_platform()
		{
			return ((::UnityEngine::RuntimePlatform(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PLATFORM_OFFSET))();
		}

		static ::System::Boolean get_isMobilePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISMOBILEPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_isConsolePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISCONSOLEPLATFORM_OFFSET))();
		}

		static ::UnityEngine::SystemLanguage get_systemLanguage()
		{
			return ((::UnityEngine::SystemLanguage(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_SYSTEMLANGUAGE_OFFSET))();
		}

		static ::UnityEngine::NetworkReachability get_internetReachability()
		{
			return ((::UnityEngine::NetworkReachability(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_INTERNETREACHABILITY_OFFSET))();
		}

		static ::System::Void add_lowMemory(::UnityEngine::Application_LowMemoryCallback* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LowMemoryCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_LOWMEMORY_OFFSET))(a1);
		}

		static ::System::Void remove_lowMemory(::UnityEngine::Application_LowMemoryCallback* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LowMemoryCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_LOWMEMORY_OFFSET))(a1);
		}

		static ::System::Void CallLowMemory()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CALLLOWMEMORY_OFFSET))();
		}

		static ::System::Void add_logMessageReceived(::UnityEngine::Application_LogCallback* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVED_OFFSET))(a1);
		}

		static ::System::Void remove_logMessageReceived(::UnityEngine::Application_LogCallback* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVED_OFFSET))(a1);
		}

		static ::System::Void add_logMessageReceivedThreaded(::UnityEngine::Application_LogCallback* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVEDTHREADED_OFFSET))(a1);
		}

		static ::System::Void remove_logMessageReceivedThreaded(::UnityEngine::Application_LogCallback* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVEDTHREADED_OFFSET))(a1);
		}

		static ::System::Void CallLogCallback(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CALLLOGCALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void InvokeOnAdvertisingIdentifierCallback(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INVOKEONADVERTISINGIDENTIFIERCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::String* ObjectToJSString(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_OBJECTTOJSSTRING_OFFSET))(a1);
		}

		static ::System::Void ExternalCall(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_EXTERNALCALL_OFFSET))(a1, a2);
		}

		static ::System::String* BuildInvocationForArguments(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_BUILDINVOCATIONFORARGUMENTS_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_isPlayer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISPLAYER_OFFSET))();
		}

		static ::System::Void DontDestroyOnLoad(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_DONTDESTROYONLOAD_OFFSET))(a1);
		}

		static ::System::Void CaptureScreenshot(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CAPTURESCREENSHOT_OFFSET))(a1, a2);
		}

		static ::System::Void CaptureScreenshot_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CAPTURESCREENSHOT_1_OFFSET))(a1);
		}

		static ::System::Void add_onBeforeRender(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_ONBEFORERENDER_OFFSET))(a1);
		}

		static ::System::Void remove_onBeforeRender(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_ONBEFORERENDER_OFFSET))(a1);
		}

		static ::System::Void add_focusChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_FOCUSCHANGED_OFFSET))(a1);
		}

		static ::System::Void remove_focusChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_FOCUSCHANGED_OFFSET))(a1);
		}

		static ::System::Void add_deepLinkActivated(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_DEEPLINKACTIVATED_OFFSET))(a1);
		}

		static ::System::Void remove_deepLinkActivated(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_DEEPLINKACTIVATED_OFFSET))(a1);
		}

		static ::System::Void add_wantsToQuit(::System::Func_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_WANTSTOQUIT_OFFSET))(a1);
		}

		static ::System::Void remove_wantsToQuit(::System::Func_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_WANTSTOQUIT_OFFSET))(a1);
		}

		static ::System::Void add_quitting(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_QUITTING_OFFSET))(a1);
		}

		static ::System::Void remove_quitting(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_QUITTING_OFFSET))(a1);
		}

		static ::System::Boolean Internal_ApplicationWantsToQuit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONWANTSTOQUIT_OFFSET))();
		}

		static ::System::Void Internal_ApplicationQuit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONQUIT_OFFSET))();
		}

		static ::System::Void InvokeOnBeforeRender()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INVOKEONBEFORERENDER_OFFSET))();
		}

		static ::System::Void InvokeFocusChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INVOKEFOCUSCHANGED_OFFSET))(a1);
		}

		static ::System::Void InvokeDeepLinkActivated(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INVOKEDEEPLINKACTIVATED_OFFSET))(a1);
		}

		static ::System::Void RegisterLogCallback(::UnityEngine::Application_LogCallback* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REGISTERLOGCALLBACK_OFFSET))(a1);
		}

		static ::System::Void RegisterLogCallbackThreaded(::UnityEngine::Application_LogCallback* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REGISTERLOGCALLBACKTHREADED_OFFSET))(a1);
		}

		static ::System::Void RegisterLogCallback_1(::UnityEngine::Application_LogCallback* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REGISTERLOGCALLBACK_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 get_levelCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_LEVELCOUNT_OFFSET))();
		}

		static ::System::Int32 get_loadedLevel()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_LOADEDLEVEL_OFFSET))();
		}

		static ::System::String* get_loadedLevelName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_LOADEDLEVELNAME_OFFSET))();
		}

		static ::System::Void LoadLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVEL_OFFSET))(a1);
		}

		static ::System::Void LoadLevel_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVEL_1_OFFSET))(a1);
		}

		static ::System::Void LoadLevelAdditive(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVELADDITIVE_OFFSET))(a1);
		}

		static ::System::Void LoadLevelAdditive_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVELADDITIVE_1_OFFSET))(a1);
		}

		static ::UnityEngine::AsyncOperation* LoadLevelAsync(::System::Int32 a1)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVELASYNC_OFFSET))(a1);
		}

		static ::UnityEngine::AsyncOperation* LoadLevelAsync_1(::System::String* a1)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVELASYNC_1_OFFSET))(a1);
		}

		static ::UnityEngine::AsyncOperation* LoadLevelAdditiveAsync(::System::Int32 a1)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVELADDITIVEASYNC_OFFSET))(a1);
		}

		static ::UnityEngine::AsyncOperation* LoadLevelAdditiveAsync_1(::System::String* a1)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVELADDITIVEASYNC_1_OFFSET))(a1);
		}

		static ::System::Boolean UnloadLevel(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_UNLOADLEVEL_OFFSET))(a1);
		}

		static ::System::Boolean UnloadLevel_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_UNLOADLEVEL_1_OFFSET))(a1);
		}

		static ::System::Boolean get_isEditor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISEDITOR_OFFSET))();
		}

		static ::System::Void get_dataPathName_Injected(::UnityEngine::PooledName& a1)
		{
			return ((::System::Void(*)(::UnityEngine::PooledName&))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_DATAPATHNAME_INJECTED_OFFSET))(a1);
		}

		static ::System::Void get_streamingAssetsPathName_Injected(::UnityEngine::PooledName& a1)
		{
			return ((::System::Void(*)(::UnityEngine::PooledName&))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATHNAME_INJECTED_OFFSET))(a1);
		}

		static ::System::Void get_persistentDataPathName_Injected(::UnityEngine::PooledName& a1)
		{
			return ((::System::Void(*)(::UnityEngine::PooledName&))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATHNAME_INJECTED_OFFSET))(a1);
		}

		static ::System::Void get_temporaryCachePathName_Injected(::UnityEngine::PooledName& a1)
		{
			return ((::System::Void(*)(::UnityEngine::PooledName&))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATHNAME_INJECTED_OFFSET))(a1);
		}
	};
}
