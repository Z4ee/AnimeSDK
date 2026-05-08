#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/UnityEngine/NetworkReachability.h"
#include "unitysdk/UnityEngine/PreloadOperationSyncOpt.h"
#include "unitysdk/UnityEngine/RuntimePlatform.h"
#include "unitysdk/UnityEngine/SystemLanguage.h"
#include "unitysdk/UnityEngine/ThreadPriority.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Application_LogCallback; }
namespace UnityEngine { class Application_LowMemoryCallback; }

#define UNITYENGINE_APPLICATION_ADD_FOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1B73A580)
#define UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVEDTHREADED_OFFSET UNITYSDK_OFFSET(0x1B73A3F0)
#define UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0x1B73A2D0)
#define UNITYENGINE_APPLICATION_ADD_LOWMEMORY_OFFSET UNITYSDK_OFFSET(0x1B73A150)
#define UNITYENGINE_APPLICATION_ADD_QUITTING_OFFSET UNITYSDK_OFFSET(0x1B73A6E0)
#define UNITYENGINE_APPLICATION_CALLLOGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B73A510)
#define UNITYENGINE_APPLICATION_CALLLOWMEMORY_OFFSET UNITYSDK_OFFSET(0x1B73A2B0)
#define UNITYENGINE_APPLICATION_GET_COMPANYNAME_OFFSET UNITYSDK_OFFSET(0x1B73A050)
#define UNITYENGINE_APPLICATION_GET_DATAPATH_OFFSET UNITYSDK_OFFSET(0x1B739FD0)
#define UNITYENGINE_APPLICATION_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1B73A030)
#define UNITYENGINE_APPLICATION_GET_INTERNETREACHABILITY_OFFSET UNITYSDK_OFFSET(0x1B73A140)
#define UNITYENGINE_APPLICATION_GET_ISBATCHMODE_OFFSET UNITYSDK_OFFSET(0x1B739FC0)
#define UNITYENGINE_APPLICATION_GET_ISCONSOLEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1B73A100)
#define UNITYENGINE_APPLICATION_GET_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x1B73AAE0)
#define UNITYENGINE_APPLICATION_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x1B739FA0)
#define UNITYENGINE_APPLICATION_GET_ISLOADINGORQUEUED_OFFSET UNITYSDK_OFFSET(0x1B739F60)
#define UNITYENGINE_APPLICATION_GET_ISMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1B73A0C0)
#define UNITYENGINE_APPLICATION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1B739F90)
#define UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATH_OFFSET UNITYSDK_OFFSET(0x1B739FF0)
#define UNITYENGINE_APPLICATION_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x1B73A0B0)
#define UNITYENGINE_APPLICATION_GET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x1B73A040)
#define UNITYENGINE_APPLICATION_GET_RUNINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1B739FB0)
#define UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATH_OFFSET UNITYSDK_OFFSET(0x1B739FE0)
#define UNITYENGINE_APPLICATION_GET_SYSTEMLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1B73A130)
#define UNITYENGINE_APPLICATION_GET_TARGETFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1B73A070)
#define UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATH_OFFSET UNITYSDK_OFFSET(0x1B73A000)
#define UNITYENGINE_APPLICATION_GET_UNITYVERSION_OFFSET UNITYSDK_OFFSET(0x1B73A010)
#define UNITYENGINE_APPLICATION_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1B73A020)
#define UNITYENGINE_APPLICATION_HELPPRELOADMANAGERTICK_OFFSET UNITYSDK_OFFSET(0x1B739F70)
#define UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1B73A990)
#define UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONWANTSTOQUIT_OFFSET UNITYSDK_OFFSET(0x1B73A840)
#define UNITYENGINE_APPLICATION_INVOKEDEEPLINKACTIVATED_OFFSET UNITYSDK_OFFSET(0x1B73AA70)
#define UNITYENGINE_APPLICATION_INVOKEFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1B73AA10)
#define UNITYENGINE_APPLICATION_INVOKEONBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x1B73A9B0)
#define UNITYENGINE_APPLICATION_OPENURL_OFFSET UNITYSDK_OFFSET(0x1B73A060)
#define UNITYENGINE_APPLICATION_QUIT_1_OFFSET UNITYSDK_OFFSET(0x1B739F50)
#define UNITYENGINE_APPLICATION_QUIT_OFFSET UNITYSDK_OFFSET(0x1B739F40)
#define UNITYENGINE_APPLICATION_REMOVE_FOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1B73A630)
#define UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVEDTHREADED_OFFSET UNITYSDK_OFFSET(0x1B73A480)
#define UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0x1B73A360)
#define UNITYENGINE_APPLICATION_REMOVE_LOWMEMORY_OFFSET UNITYSDK_OFFSET(0x1B73A200)
#define UNITYENGINE_APPLICATION_REMOVE_QUITTING_OFFSET UNITYSDK_OFFSET(0x1B73A790)
#define UNITYENGINE_APPLICATION_SETLOGCALLBACKDEFINED_OFFSET UNITYSDK_OFFSET(0x1B73A090)
#define UNITYENGINE_APPLICATION_SET_BACKGROUNDLOADINGPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B73A0A0)
#define UNITYENGINE_APPLICATION_SET_PRELOADOPERATIONSYNCOPT_OFFSET UNITYSDK_OFFSET(0x1B739F80)
#define UNITYENGINE_APPLICATION_SET_TARGETFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1B73A080)
#define UNITYENGINE_APPLICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B73AAF0)

namespace UnityEngine
{
	inline static constexpr unsigned int Application_TypeDefinitionIndex = 5130;

	class Application : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet_deepLinkActivated()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x5730);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet_focusChanged()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x5738);
		}
		static ::System::Action** StaticGet_quitting()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x5740);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet_wantsToQuit()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x5748);
		}
		static ::UnityEngine::Application_LogCallback** StaticGet_s_LogCallbackHandler()
		{
			return (::UnityEngine::Application_LogCallback**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x5750);
		}
		static ::UnityEngine::Application_LogCallback** StaticGet_s_LogCallbackHandlerThreaded()
		{
			return (::UnityEngine::Application_LogCallback**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x5758);
		}
		static ::UnityEngine::Application_LowMemoryCallback** StaticGet_lowMemory()
		{
			return (::UnityEngine::Application_LowMemoryCallback**)Il2CppClass::FromTypeDefinitionIndex(Application_TypeDefinitionIndex)->GetStaticField(0x5760);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Quit(::System::Int32 exitCode)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_QUIT_OFFSET))(exitCode);
		}

		static ::System::Void Quit_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_QUIT_1_OFFSET))();
		}

		static ::System::Boolean get_IsLoadingOrQueued()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISLOADINGORQUEUED_OFFSET))();
		}

		static ::System::Void HelpPreloadManagerTick(::System::Int32 ms)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_HELPPRELOADMANAGERTICK_OFFSET))(ms);
		}

		static ::System::Void set_preloadOperationSyncOpt(::UnityEngine::PreloadOperationSyncOpt value)
		{
			return ((::System::Void(*)(::UnityEngine::PreloadOperationSyncOpt))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_PRELOADOPERATIONSYNCOPT_OFFSET))(value);
		}

		static ::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISPLAYING_OFFSET))();
		}

		static ::System::Boolean get_isFocused()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISFOCUSED_OFFSET))();
		}

		static ::System::Boolean get_runInBackground()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_RUNINBACKGROUND_OFFSET))();
		}

		static ::System::Boolean get_isBatchMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISBATCHMODE_OFFSET))();
		}

		static ::System::String* get_dataPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_DATAPATH_OFFSET))();
		}

		static ::System::String* get_streamingAssetsPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATH_OFFSET))();
		}

		static ::System::String* get_persistentDataPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATH_OFFSET))();
		}

		static ::System::String* get_temporaryCachePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATH_OFFSET))();
		}

		static ::System::String* get_unityVersion()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_UNITYVERSION_OFFSET))();
		}

		static ::System::String* get_version()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_VERSION_OFFSET))();
		}

		static ::System::String* get_identifier()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_IDENTIFIER_OFFSET))();
		}

		static ::System::String* get_productName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PRODUCTNAME_OFFSET))();
		}

		static ::System::String* get_companyName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_COMPANYNAME_OFFSET))();
		}

		static ::System::Void OpenURL(::System::String* url)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_OPENURL_OFFSET))(url);
		}

		static ::System::Int32 get_targetFrameRate()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_TARGETFRAMERATE_OFFSET))();
		}

		static ::System::Void set_targetFrameRate(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_TARGETFRAMERATE_OFFSET))(value);
		}

		static ::System::Void SetLogCallbackDefined(::System::Boolean defined)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SETLOGCALLBACKDEFINED_OFFSET))(defined);
		}

		static ::System::Void set_backgroundLoadingPriority(::UnityEngine::ThreadPriority value)
		{
			return ((::System::Void(*)(::UnityEngine::ThreadPriority))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_BACKGROUNDLOADINGPRIORITY_OFFSET))(value);
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

		static ::System::Void add_lowMemory(::UnityEngine::Application_LowMemoryCallback* value)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LowMemoryCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_LOWMEMORY_OFFSET))(value);
		}

		static ::System::Void remove_lowMemory(::UnityEngine::Application_LowMemoryCallback* value)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LowMemoryCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_LOWMEMORY_OFFSET))(value);
		}

		static ::System::Void CallLowMemory()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CALLLOWMEMORY_OFFSET))();
		}

		static ::System::Void add_logMessageReceived(::UnityEngine::Application_LogCallback* value)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVED_OFFSET))(value);
		}

		static ::System::Void remove_logMessageReceived(::UnityEngine::Application_LogCallback* value)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVED_OFFSET))(value);
		}

		static ::System::Void add_logMessageReceivedThreaded(::UnityEngine::Application_LogCallback* value)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVEDTHREADED_OFFSET))(value);
		}

		static ::System::Void remove_logMessageReceivedThreaded(::UnityEngine::Application_LogCallback* value)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVEDTHREADED_OFFSET))(value);
		}

		static ::System::Void CallLogCallback(::System::String* logString, ::System::String* stackTrace, ::UnityEngine::LogType type, ::System::Boolean invokedOnMainThread)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CALLLOGCALLBACK_OFFSET))(logString, stackTrace, type, invokedOnMainThread);
		}

		static ::System::Void add_focusChanged(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_FOCUSCHANGED_OFFSET))(value);
		}

		static ::System::Void remove_focusChanged(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_FOCUSCHANGED_OFFSET))(value);
		}

		static ::System::Void add_quitting(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_QUITTING_OFFSET))(value);
		}

		static ::System::Void remove_quitting(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_QUITTING_OFFSET))(value);
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

		static ::System::Void InvokeFocusChanged(::System::Boolean focus)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INVOKEFOCUSCHANGED_OFFSET))(focus);
		}

		static ::System::Void InvokeDeepLinkActivated(::System::String* url)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INVOKEDEEPLINKACTIVATED_OFFSET))(url);
		}

		static ::System::Boolean get_isEditor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISEDITOR_OFFSET))();
		}
	};
}
