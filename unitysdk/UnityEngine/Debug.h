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

#define UNITYENGINE_DEBUG_ASSERTFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1A4378A0)
#define UNITYENGINE_DEBUG_ASSERTFORMAT_OFFSET UNITYSDK_OFFSET(0x1A437760)
#define UNITYENGINE_DEBUG_ASSERT_1_OFFSET UNITYSDK_OFFSET(0x1A437510)
#define UNITYENGINE_DEBUG_ASSERT_2_OFFSET UNITYSDK_OFFSET(0x1A437580)
#define UNITYENGINE_DEBUG_ASSERT_3_OFFSET UNITYSDK_OFFSET(0x1A4375F0)
#define UNITYENGINE_DEBUG_ASSERT_4_OFFSET UNITYSDK_OFFSET(0x1A437660)
#define UNITYENGINE_DEBUG_ASSERT_5_OFFSET UNITYSDK_OFFSET(0x1A4376E0)
#define UNITYENGINE_DEBUG_ASSERT_6_OFFSET UNITYSDK_OFFSET(0x1A4380F0)
#define UNITYENGINE_DEBUG_ASSERT_OFFSET UNITYSDK_OFFSET(0x1A4374A0)
#define UNITYENGINE_DEBUG_BREAK_OFFSET UNITYSDK_OFFSET(0x1A436620)
#define UNITYENGINE_DEBUG_CALLOVERRIDENDEBUGHANDLER_OFFSET UNITYSDK_OFFSET(0x1A437D30)
#define UNITYENGINE_DEBUG_CLEARDEVELOPERCONSOLE_OFFSET UNITYSDK_OFFSET(0x1A436F90)
#define UNITYENGINE_DEBUG_DEBUGBREAK_OFFSET UNITYSDK_OFFSET(0x1A436630)
#define UNITYENGINE_DEBUG_DRAWLINE_1_OFFSET UNITYSDK_OFFSET(0x1A436060)
#define UNITYENGINE_DEBUG_DRAWLINE_2_OFFSET UNITYSDK_OFFSET(0x1A436120)
#define UNITYENGINE_DEBUG_DRAWLINE_3_OFFSET UNITYSDK_OFFSET(0x1A436000)
#define UNITYENGINE_DEBUG_DRAWLINE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4361D0)
#define UNITYENGINE_DEBUG_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1A435F30)
#define UNITYENGINE_DEBUG_DRAWRAY_1_OFFSET UNITYSDK_OFFSET(0x1A436410)
#define UNITYENGINE_DEBUG_DRAWRAY_2_OFFSET UNITYSDK_OFFSET(0x1A436520)
#define UNITYENGINE_DEBUG_DRAWRAY_3_OFFSET UNITYSDK_OFFSET(0x1A436310)
#define UNITYENGINE_DEBUG_DRAWRAY_OFFSET UNITYSDK_OFFSET(0x1A4361E0)
#define UNITYENGINE_DEBUG_EXTRACTSTACKTRACENOALLOC_OFFSET UNITYSDK_OFFSET(0x1A436640)
#define UNITYENGINE_DEBUG_GETDIAGNOSTICSWITCHES_OFFSET UNITYSDK_OFFSET(0x1A437D00)
#define UNITYENGINE_DEBUG_GETDIAGNOSTICSWITCH_OFFSET UNITYSDK_OFFSET(0x1A437D10)
#define UNITYENGINE_DEBUG_GET_DEVELOPERCONSOLEPOPUPIFERROR_OFFSET UNITYSDK_OFFSET(0x1A436FC0)
#define UNITYENGINE_DEBUG_GET_DEVELOPERCONSOLEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A436FA0)
#define UNITYENGINE_DEBUG_GET_ISDEBUGBUILD_OFFSET UNITYSDK_OFFSET(0x1A437CE0)
#define UNITYENGINE_DEBUG_GET_LOGGER_OFFSET UNITYSDK_OFFSET(0x1A438230)
#define UNITYENGINE_DEBUG_GET_UNITYLOGGER_OFFSET UNITYSDK_OFFSET(0x1A435F00)
#define UNITYENGINE_DEBUG_ISLOGGINGENABLED_OFFSET UNITYSDK_OFFSET(0x1A437FC0)
#define UNITYENGINE_DEBUG_LOGASSERTIONFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1A437BD0)
#define UNITYENGINE_DEBUG_LOGASSERTIONFORMAT_OFFSET UNITYSDK_OFFSET(0x1A437A90)
#define UNITYENGINE_DEBUG_LOGASSERTION_1_OFFSET UNITYSDK_OFFSET(0x1A437A20)
#define UNITYENGINE_DEBUG_LOGASSERTION_OFFSET UNITYSDK_OFFSET(0x1A4379C0)
#define UNITYENGINE_DEBUG_LOGERRORFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1A436E90)
#define UNITYENGINE_DEBUG_LOGERRORFORMAT_OFFSET UNITYSDK_OFFSET(0x1A436D50)
#define UNITYENGINE_DEBUG_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0x1A436CE0)
#define UNITYENGINE_DEBUG_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1A434290)
#define UNITYENGINE_DEBUG_LOGEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1A4370E0)
#define UNITYENGINE_DEBUG_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A436FE0)
#define UNITYENGINE_DEBUG_LOGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1A436860)
#define UNITYENGINE_DEBUG_LOGFORMAT_2_OFFSET UNITYSDK_OFFSET(0x1A436970)
#define UNITYENGINE_DEBUG_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x1A436720)
#define UNITYENGINE_DEBUG_LOGWARNINGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1A437390)
#define UNITYENGINE_DEBUG_LOGWARNINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1A437250)
#define UNITYENGINE_DEBUG_LOGWARNING_1_OFFSET UNITYSDK_OFFSET(0x1A4371E0)
#define UNITYENGINE_DEBUG_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1A432870)
#define UNITYENGINE_DEBUG_LOG_1_OFFSET UNITYSDK_OFFSET(0x1A4366B0)
#define UNITYENGINE_DEBUG_LOG_OFFSET UNITYSDK_OFFSET(0x1A436650)
#define UNITYENGINE_DEBUG_OPENCONSOLEFILE_OFFSET UNITYSDK_OFFSET(0x1A437CF0)
#define UNITYENGINE_DEBUG_SETDIAGNOSTICSWITCH_OFFSET UNITYSDK_OFFSET(0x1A437D20)
#define UNITYENGINE_DEBUG_SETLOGMASK_OFFSET UNITYSDK_OFFSET(0x1A4380C0)
#define UNITYENGINE_DEBUG_SET_DEVELOPERCONSOLEPOPUPIFERROR_OFFSET UNITYSDK_OFFSET(0x1A436FD0)
#define UNITYENGINE_DEBUG_SET_DEVELOPERCONSOLEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A436FB0)
#define UNITYENGINE_DEBUG_STARTRPGENGINELOG_OFFSET UNITYSDK_OFFSET(0x1A4380D0)
#define UNITYENGINE_DEBUG_STOPRPGENGINELOG_OFFSET UNITYSDK_OFFSET(0x1A4380E0)
#define UNITYENGINE_DEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A438270)
#define UNITYENGINE_DEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A438260)

namespace UnityEngine
{
	inline static constexpr unsigned int Debug_TypeDefinitionIndex = 3882;

	class Debug : public ::System::Object
	{
	public:
		static ::UnityEngine::ILogger** StaticGet_s_DefaultLogger()
		{
			return (::UnityEngine::ILogger**)Il2CppClass::FromTypeDefinitionIndex(Debug_TypeDefinitionIndex)->GetStaticField(0x14990);
		}
		static ::UnityEngine::ILogger** StaticGet_s_Logger()
		{
			return (::UnityEngine::ILogger**)Il2CppClass::FromTypeDefinitionIndex(Debug_TypeDefinitionIndex)->GetStaticField(0x14998);
		}
		static ::System::Boolean* StaticGet_IgnoreAllFilters()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Debug_TypeDefinitionIndex)->GetStaticField(0x5DA0);
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

		static ::System::Void DrawLine(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color, ::System::Single duration)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWLINE_OFFSET))(start, end, color, duration);
		}

		static ::System::Void DrawLine_1(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWLINE_1_OFFSET))(start, end, color);
		}

		static ::System::Void DrawLine_2(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWLINE_2_OFFSET))(start, end);
		}

		static ::System::Void DrawLine_3(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWLINE_3_OFFSET))(start, end, color, duration, depthTest);
		}

		static ::System::Void DrawRay(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 dir, ::UnityEngine::Color color, ::System::Single duration)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWRAY_OFFSET))(start, dir, color, duration);
		}

		static ::System::Void DrawRay_1(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 dir, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWRAY_1_OFFSET))(start, dir, color);
		}

		static ::System::Void DrawRay_2(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 dir)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWRAY_2_OFFSET))(start, dir);
		}

		static ::System::Void DrawRay_3(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 dir, ::UnityEngine::Color color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWRAY_3_OFFSET))(start, dir, color, duration, depthTest);
		}

		static ::System::Void Break()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_BREAK_OFFSET))();
		}

		static ::System::Void DebugBreak()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DEBUGBREAK_OFFSET))();
		}

		static ::System::Int32 ExtractStackTraceNoAlloc(::System::Byte* buffer, ::System::Int32 bufferMax, ::System::String* projectFolder)
		{
			return ((::System::Int32(*)(::System::Byte*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_EXTRACTSTACKTRACENOALLOC_OFFSET))(buffer, bufferMax, projectFolder);
		}

		static ::System::Void Log(::System::Object* message)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOG_OFFSET))(message);
		}

		static ::System::Void Log_1(::System::Object* message, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOG_1_OFFSET))(message, context);
		}

		static ::System::Void LogFormat(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGFORMAT_OFFSET))(format, args);
		}

		static ::System::Void LogFormat_1(::UnityEngine::Object* context, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGFORMAT_1_OFFSET))(context, format, args);
		}

		static ::System::Void LogFormat_2(::UnityEngine::LogType logType, ::UnityEngine::LogOption logOptions, ::UnityEngine::Object* context, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::UnityEngine::LogType, ::UnityEngine::LogOption, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGFORMAT_2_OFFSET))(logType, logOptions, context, format, args);
		}

		static ::System::Void LogError(::System::Object* message)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGERROR_OFFSET))(message);
		}

		static ::System::Void LogError_1(::System::Object* message, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGERROR_1_OFFSET))(message, context);
		}

		static ::System::Void LogErrorFormat(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGERRORFORMAT_OFFSET))(format, args);
		}

		static ::System::Void LogErrorFormat_1(::UnityEngine::Object* context, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGERRORFORMAT_1_OFFSET))(context, format, args);
		}

		static ::System::Void ClearDeveloperConsole()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_CLEARDEVELOPERCONSOLE_OFFSET))();
		}

		static ::System::Boolean get_developerConsoleVisible()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_GET_DEVELOPERCONSOLEVISIBLE_OFFSET))();
		}

		static ::System::Void set_developerConsoleVisible(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_SET_DEVELOPERCONSOLEVISIBLE_OFFSET))(value);
		}

		static ::System::Boolean get_developerConsolePopupIfError()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_GET_DEVELOPERCONSOLEPOPUPIFERROR_OFFSET))();
		}

		static ::System::Void set_developerConsolePopupIfError(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_SET_DEVELOPERCONSOLEPOPUPIFERROR_OFFSET))(value);
		}

		static ::System::Void LogException(::System::Exception* exception)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGEXCEPTION_OFFSET))(exception);
		}

		static ::System::Void LogException_1(::System::Exception* exception, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Exception*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGEXCEPTION_1_OFFSET))(exception, context);
		}

		static ::System::Void LogWarning(::System::Object* message)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGWARNING_OFFSET))(message);
		}

		static ::System::Void LogWarning_1(::System::Object* message, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGWARNING_1_OFFSET))(message, context);
		}

		static ::System::Void LogWarningFormat(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGWARNINGFORMAT_OFFSET))(format, args);
		}

		static ::System::Void LogWarningFormat_1(::UnityEngine::Object* context, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGWARNINGFORMAT_1_OFFSET))(context, format, args);
		}

		static ::System::Void Assert(::System::Boolean condition)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERT_OFFSET))(condition);
		}

		static ::System::Void Assert_1(::System::Boolean condition, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERT_1_OFFSET))(condition, context);
		}

		static ::System::Void Assert_2(::System::Boolean condition, ::System::Object* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERT_2_OFFSET))(condition, message);
		}

		static ::System::Void Assert_3(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERT_3_OFFSET))(condition, message);
		}

		static ::System::Void Assert_4(::System::Boolean condition, ::System::Object* message, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERT_4_OFFSET))(condition, message, context);
		}

		static ::System::Void Assert_5(::System::Boolean condition, ::System::String* message, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERT_5_OFFSET))(condition, message, context);
		}

		static ::System::Void AssertFormat(::System::Boolean condition, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERTFORMAT_OFFSET))(condition, format, args);
		}

		static ::System::Void AssertFormat_1(::System::Boolean condition, ::UnityEngine::Object* context, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERTFORMAT_1_OFFSET))(condition, context, format, args);
		}

		static ::System::Void LogAssertion(::System::Object* message)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGASSERTION_OFFSET))(message);
		}

		static ::System::Void LogAssertion_1(::System::Object* message, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGASSERTION_1_OFFSET))(message, context);
		}

		static ::System::Void LogAssertionFormat(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGASSERTIONFORMAT_OFFSET))(format, args);
		}

		static ::System::Void LogAssertionFormat_1(::UnityEngine::Object* context, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGASSERTIONFORMAT_1_OFFSET))(context, format, args);
		}

		static ::System::Boolean get_isDebugBuild()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_GET_ISDEBUGBUILD_OFFSET))();
		}

		static ::System::Void OpenConsoleFile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_OPENCONSOLEFILE_OFFSET))();
		}

		static ::System::Void GetDiagnosticSwitches(::System::Collections::Generic::List_1<::UnityEngine::DiagnosticSwitch>* results)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::DiagnosticSwitch>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_GETDIAGNOSTICSWITCHES_OFFSET))(results);
		}

		static ::System::Object* GetDiagnosticSwitch(::System::String* name)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_GETDIAGNOSTICSWITCH_OFFSET))(name);
		}

		static ::System::Void SetDiagnosticSwitch(::System::String* name, ::System::Object* value, ::System::Boolean setPersistent)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_SETDIAGNOSTICSWITCH_OFFSET))(name, value, setPersistent);
		}

		static ::System::Boolean CallOverridenDebugHandler(::System::Exception* exception, ::UnityEngine::Object* obj)
		{
			return ((::System::Boolean(*)(::System::Exception*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_CALLOVERRIDENDEBUGHANDLER_OFFSET))(exception, obj);
		}

		static ::System::Boolean IsLoggingEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ISLOGGINGENABLED_OFFSET))();
		}

		static ::System::Void SetLogMask(::UnityEngine::LogMaskType logMask)
		{
			return ((::System::Void(*)(::UnityEngine::LogMaskType))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_SETLOGMASK_OFFSET))(logMask);
		}

		static ::System::String* StartRpgEngineLog()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_STARTRPGENGINELOG_OFFSET))();
		}

		static ::System::Void StopRpgEngineLog()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_STOPRPGENGINELOG_OFFSET))();
		}

		static ::System::Void Assert_6(::System::Boolean condition, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERT_6_OFFSET))(condition, format, args);
		}

		static ::UnityEngine::ILogger* get_logger()
		{
			return ((::UnityEngine::ILogger*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_GET_LOGGER_OFFSET))();
		}

		static ::System::Void DrawLine_Injected(::UnityEngine::Vector3& start, ::UnityEngine::Vector3& end, ::UnityEngine::Color& color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Color&, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWLINE_INJECTED_OFFSET))(start, end, color, duration, depthTest);
		}
	};
}
