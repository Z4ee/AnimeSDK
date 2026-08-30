#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/DiagnosticSwitch.h"
#include "unitysdk/UnityEngine/LogMaskType.h"
#include "unitysdk/UnityEngine/LogOption.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ILogger; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_DEBUG_ASSERTFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1DECE5E0)
#define UNITYENGINE_DEBUG_ASSERTFORMAT_OFFSET UNITYSDK_OFFSET(0x1DECE560)
#define UNITYENGINE_DEBUG_ASSERT_1_OFFSET UNITYSDK_OFFSET(0x1DECE310)
#define UNITYENGINE_DEBUG_ASSERT_2_OFFSET UNITYSDK_OFFSET(0x1DECE380)
#define UNITYENGINE_DEBUG_ASSERT_3_OFFSET UNITYSDK_OFFSET(0x1DECE3F0)
#define UNITYENGINE_DEBUG_ASSERT_4_OFFSET UNITYSDK_OFFSET(0x1DECE460)
#define UNITYENGINE_DEBUG_ASSERT_5_OFFSET UNITYSDK_OFFSET(0x1DECE4E0)
#define UNITYENGINE_DEBUG_ASSERT_6_OFFSET UNITYSDK_OFFSET(0x1DECEE80)
#define UNITYENGINE_DEBUG_ASSERT_OFFSET UNITYSDK_OFFSET(0x1DECE2A0)
#define UNITYENGINE_DEBUG_BREAK_OFFSET UNITYSDK_OFFSET(0x1DECD4B0)
#define UNITYENGINE_DEBUG_CALLOVERRIDENDEBUGHANDLER_OFFSET UNITYSDK_OFFSET(0x1DECEA40)
#define UNITYENGINE_DEBUG_CLEARDEVELOPERCONSOLE_OFFSET UNITYSDK_OFFSET(0x1DECDD70)
#define UNITYENGINE_DEBUG_DEBUGBREAK_OFFSET UNITYSDK_OFFSET(0x1DECD4C0)
#define UNITYENGINE_DEBUG_DRAWLINE_1_OFFSET UNITYSDK_OFFSET(0x1DECCEF0)
#define UNITYENGINE_DEBUG_DRAWLINE_2_OFFSET UNITYSDK_OFFSET(0x1DECCFB0)
#define UNITYENGINE_DEBUG_DRAWLINE_3_OFFSET UNITYSDK_OFFSET(0x1DECCE90)
#define UNITYENGINE_DEBUG_DRAWLINE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DECD060)
#define UNITYENGINE_DEBUG_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1DECCDC0)
#define UNITYENGINE_DEBUG_DRAWRAY_1_OFFSET UNITYSDK_OFFSET(0x1DECD2A0)
#define UNITYENGINE_DEBUG_DRAWRAY_2_OFFSET UNITYSDK_OFFSET(0x1DECD3B0)
#define UNITYENGINE_DEBUG_DRAWRAY_3_OFFSET UNITYSDK_OFFSET(0x1DECD1A0)
#define UNITYENGINE_DEBUG_DRAWRAY_OFFSET UNITYSDK_OFFSET(0x1DECD070)
#define UNITYENGINE_DEBUG_EXTRACTSTACKTRACENOALLOC_OFFSET UNITYSDK_OFFSET(0x1DECD4D0)
#define UNITYENGINE_DEBUG_GETDIAGNOSTICSWITCHES_OFFSET UNITYSDK_OFFSET(0x1DECEA10)
#define UNITYENGINE_DEBUG_GETDIAGNOSTICSWITCH_OFFSET UNITYSDK_OFFSET(0x1DECEA20)
#define UNITYENGINE_DEBUG_GET_DEVELOPERCONSOLEPOPUPIFERROR_OFFSET UNITYSDK_OFFSET(0x1DECDDA0)
#define UNITYENGINE_DEBUG_GET_DEVELOPERCONSOLEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1DECDD80)
#define UNITYENGINE_DEBUG_GET_ISDEBUGBUILD_OFFSET UNITYSDK_OFFSET(0x1DECE9F0)
#define UNITYENGINE_DEBUG_GET_LOGGER_OFFSET UNITYSDK_OFFSET(0x1DECEF00)
#define UNITYENGINE_DEBUG_GET_UNITYLOGGER_OFFSET UNITYSDK_OFFSET(0x1DECCD90)
#define UNITYENGINE_DEBUG_ISLOGGINGENABLED_OFFSET UNITYSDK_OFFSET(0x1DECED50)
#define UNITYENGINE_DEBUG_LOGASSERTIONFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1DECE890)
#define UNITYENGINE_DEBUG_LOGASSERTIONFORMAT_OFFSET UNITYSDK_OFFSET(0x1DECE820)
#define UNITYENGINE_DEBUG_LOGASSERTION_1_OFFSET UNITYSDK_OFFSET(0x1DECE7B0)
#define UNITYENGINE_DEBUG_LOGASSERTION_OFFSET UNITYSDK_OFFSET(0x1DECE750)
#define UNITYENGINE_DEBUG_LOGERRORFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1DECDC20)
#define UNITYENGINE_DEBUG_LOGERRORFORMAT_OFFSET UNITYSDK_OFFSET(0x1DECDBB0)
#define UNITYENGINE_DEBUG_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0x1DECDB40)
#define UNITYENGINE_DEBUG_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1DECB4A0)
#define UNITYENGINE_DEBUG_LOGEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1DECDF10)
#define UNITYENGINE_DEBUG_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DECDDC0)
#define UNITYENGINE_DEBUG_LOGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1DECD620)
#define UNITYENGINE_DEBUG_LOGFORMAT_2_OFFSET UNITYSDK_OFFSET(0x1DECD780)
#define UNITYENGINE_DEBUG_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x1DECD5B0)
#define UNITYENGINE_DEBUG_LOGWARNINGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1DECE140)
#define UNITYENGINE_DEBUG_LOGWARNINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1DECE0D0)
#define UNITYENGINE_DEBUG_LOGWARNING_1_OFFSET UNITYSDK_OFFSET(0x1DECE060)
#define UNITYENGINE_DEBUG_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1DEC9970)
#define UNITYENGINE_DEBUG_LOG_1_OFFSET UNITYSDK_OFFSET(0x1DECD540)
#define UNITYENGINE_DEBUG_LOG_OFFSET UNITYSDK_OFFSET(0x1DECD4E0)
#define UNITYENGINE_DEBUG_OPENCONSOLEFILE_OFFSET UNITYSDK_OFFSET(0x1DECEA00)
#define UNITYENGINE_DEBUG_SETDIAGNOSTICSWITCH_OFFSET UNITYSDK_OFFSET(0x1DECEA30)
#define UNITYENGINE_DEBUG_SETLOGMASK_OFFSET UNITYSDK_OFFSET(0x1DECEE50)
#define UNITYENGINE_DEBUG_SET_DEVELOPERCONSOLEPOPUPIFERROR_OFFSET UNITYSDK_OFFSET(0x1DECDDB0)
#define UNITYENGINE_DEBUG_SET_DEVELOPERCONSOLEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1DECDD90)
#define UNITYENGINE_DEBUG_STARTRPGENGINELOG_OFFSET UNITYSDK_OFFSET(0x1DECEE60)
#define UNITYENGINE_DEBUG_STOPRPGENGINELOG_OFFSET UNITYSDK_OFFSET(0x1DECEE70)
#define UNITYENGINE_DEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DECEF40)
#define UNITYENGINE_DEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DECEF30)

namespace UnityEngine
{
	inline static constexpr unsigned int Debug_TypeDefinitionIndex = 4069;

	class Debug : public ::System::Object
	{
	public:
		static ::UnityEngine::ILogger** StaticGet_s_DefaultLogger()
		{
			return (::UnityEngine::ILogger**)Il2CppClass::FromTypeDefinitionIndex(Debug_TypeDefinitionIndex)->GetStaticField(0xF080);
		}
		static ::UnityEngine::ILogger** StaticGet_s_Logger()
		{
			return (::UnityEngine::ILogger**)Il2CppClass::FromTypeDefinitionIndex(Debug_TypeDefinitionIndex)->GetStaticField(0xF088);
		}
		static ::System::Boolean* StaticGet_IgnoreAllFilters()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Debug_TypeDefinitionIndex)->GetStaticField(0x4810);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG__CCTOR_OFFSET))();
		}

		static ::UnityEngine::ILogger* get_unityLogger()
		{
			return ((::UnityEngine::ILogger*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_GET_UNITYLOGGER_OFFSET))();
		}

		static ::System::Void DrawLine(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Color a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWLINE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DrawLine_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWLINE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DrawLine_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWLINE_2_OFFSET))(a1, a2);
		}

		static ::System::Void DrawLine_3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Color a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWLINE_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void DrawRay(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Color a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWRAY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DrawRay_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWRAY_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DrawRay_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWRAY_2_OFFSET))(a1, a2);
		}

		static ::System::Void DrawRay_3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Color a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWRAY_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Break()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_BREAK_OFFSET))();
		}

		static ::System::Void DebugBreak()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DEBUGBREAK_OFFSET))();
		}

		static ::System::Int32 ExtractStackTraceNoAlloc(::System::Byte* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::System::Byte*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_EXTRACTSTACKTRACENOALLOC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Log(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOG_OFFSET))(a1);
		}

		static ::System::Void Log_1(::System::Object* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOG_1_OFFSET))(a1, a2);
		}

		static ::System::Void LogFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGFORMAT_OFFSET))(a1, a2);
		}

		static ::System::Void LogFormat_1(::UnityEngine::Object* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGFORMAT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LogFormat_2(::UnityEngine::LogType a1, ::UnityEngine::LogOption a2, ::UnityEngine::Object* a3, ::System::String* a4, ::Il2CppArray<::System::Object*>* a5)
		{
			return ((::System::Void(*)(::UnityEngine::LogType, ::UnityEngine::LogOption, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGFORMAT_2_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void LogError(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGERROR_OFFSET))(a1);
		}

		static ::System::Void LogError_1(::System::Object* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGERROR_1_OFFSET))(a1, a2);
		}

		static ::System::Void LogErrorFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGERRORFORMAT_OFFSET))(a1, a2);
		}

		static ::System::Void LogErrorFormat_1(::UnityEngine::Object* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGERRORFORMAT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ClearDeveloperConsole()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_CLEARDEVELOPERCONSOLE_OFFSET))();
		}

		static ::System::Boolean get_developerConsoleVisible()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_GET_DEVELOPERCONSOLEVISIBLE_OFFSET))();
		}

		static ::System::Void set_developerConsoleVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_SET_DEVELOPERCONSOLEVISIBLE_OFFSET))(a1);
		}

		static ::System::Boolean get_developerConsolePopupIfError()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_GET_DEVELOPERCONSOLEPOPUPIFERROR_OFFSET))();
		}

		static ::System::Void set_developerConsolePopupIfError(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_SET_DEVELOPERCONSOLEPOPUPIFERROR_OFFSET))(a1);
		}

		static ::System::Void LogException(::System::Exception* a1)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void LogException_1(::System::Exception* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::System::Exception*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGEXCEPTION_1_OFFSET))(a1, a2);
		}

		static ::System::Void LogWarning(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGWARNING_OFFSET))(a1);
		}

		static ::System::Void LogWarning_1(::System::Object* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGWARNING_1_OFFSET))(a1, a2);
		}

		static ::System::Void LogWarningFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGWARNINGFORMAT_OFFSET))(a1, a2);
		}

		static ::System::Void LogWarningFormat_1(::UnityEngine::Object* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGWARNINGFORMAT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Assert(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERT_OFFSET))(a1);
		}

		static ::System::Void Assert_1(::System::Boolean a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERT_1_OFFSET))(a1, a2);
		}

		static ::System::Void Assert_2(::System::Boolean a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERT_2_OFFSET))(a1, a2);
		}

		static ::System::Void Assert_3(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERT_3_OFFSET))(a1, a2);
		}

		static ::System::Void Assert_4(::System::Boolean a1, ::System::Object* a2, ::UnityEngine::Object* a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERT_4_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Assert_5(::System::Boolean a1, ::System::String* a2, ::UnityEngine::Object* a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERT_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AssertFormat(::System::Boolean a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERTFORMAT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AssertFormat_1(::System::Boolean a1, ::UnityEngine::Object* a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERTFORMAT_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void LogAssertion(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGASSERTION_OFFSET))(a1);
		}

		static ::System::Void LogAssertion_1(::System::Object* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGASSERTION_1_OFFSET))(a1, a2);
		}

		static ::System::Void LogAssertionFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGASSERTIONFORMAT_OFFSET))(a1, a2);
		}

		static ::System::Void LogAssertionFormat_1(::UnityEngine::Object* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGASSERTIONFORMAT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean get_isDebugBuild()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_GET_ISDEBUGBUILD_OFFSET))();
		}

		static ::System::Void OpenConsoleFile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_OPENCONSOLEFILE_OFFSET))();
		}

		static ::System::Void GetDiagnosticSwitches(::System::Collections::Generic::List_1<::UnityEngine::DiagnosticSwitch>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::DiagnosticSwitch>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_GETDIAGNOSTICSWITCHES_OFFSET))(a1);
		}

		static ::System::Object* GetDiagnosticSwitch(::System::String* a1)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_GETDIAGNOSTICSWITCH_OFFSET))(a1);
		}

		static ::System::Void SetDiagnosticSwitch(::System::String* a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_SETDIAGNOSTICSWITCH_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CallOverridenDebugHandler(::System::Exception* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Exception*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_CALLOVERRIDENDEBUGHANDLER_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsLoggingEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ISLOGGINGENABLED_OFFSET))();
		}

		static ::System::Void SetLogMask(::UnityEngine::LogMaskType a1)
		{
			return ((::System::Void(*)(::UnityEngine::LogMaskType))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_SETLOGMASK_OFFSET))(a1);
		}

		static ::System::String* StartRpgEngineLog()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_STARTRPGENGINELOG_OFFSET))();
		}

		static ::System::Void StopRpgEngineLog()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_STOPRPGENGINELOG_OFFSET))();
		}

		static ::System::Void Assert_6(::System::Boolean a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERT_6_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ILogger* get_logger()
		{
			return ((::UnityEngine::ILogger*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_GET_LOGGER_OFFSET))();
		}

		static ::System::Void DrawLine_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Color& a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Color&, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWLINE_INJECTED_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
