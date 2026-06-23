#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Exception; }
namespace System { class String; }
namespace UnityEngine { class ILogger; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_DEBUG_ASSERT_1_OFFSET UNITYSDK_OFFSET(0x1D6EE580)
#define UNITYENGINE_DEBUG_ASSERT_OFFSET UNITYSDK_OFFSET(0x1D6EE4B0)
#define UNITYENGINE_DEBUG_BREAK_OFFSET UNITYSDK_OFFSET(0x1D6ED4D0)
#define UNITYENGINE_DEBUG_CALLOVERRIDENDEBUGHANDLER_OFFSET UNITYSDK_OFFSET(0x1D6EE730)
#define UNITYENGINE_DEBUG_DRAWLINE_1_OFFSET UNITYSDK_OFFSET(0x1D6ED070)
#define UNITYENGINE_DEBUG_DRAWLINE_2_OFFSET UNITYSDK_OFFSET(0x1D6ECFF0)
#define UNITYENGINE_DEBUG_DRAWLINE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6ED190)
#define UNITYENGINE_DEBUG_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1D6ECEC0)
#define UNITYENGINE_DEBUG_DRAWRAY_1_OFFSET UNITYSDK_OFFSET(0x1D6ED400)
#define UNITYENGINE_DEBUG_DRAWRAY_2_OFFSET UNITYSDK_OFFSET(0x1D6ED290)
#define UNITYENGINE_DEBUG_DRAWRAY_OFFSET UNITYSDK_OFFSET(0x1D6ED1A0)
#define UNITYENGINE_DEBUG_EXTRACTSTACKTRACENOALLOC_OFFSET UNITYSDK_OFFSET(0x1D6ED4E0)
#define UNITYENGINE_DEBUG_GET_ISDEBUGBUILD_OFFSET UNITYSDK_OFFSET(0x1D6EE720)
#define UNITYENGINE_DEBUG_GET_UNITYLOGGER_OFFSET UNITYSDK_OFFSET(0x1D6ECE60)
#define UNITYENGINE_DEBUG_HASCONFIGASYNCSRPFROMDEVCONFIG_OFFSET UNITYSDK_OFFSET(0x1D6EEC50)
#define UNITYENGINE_DEBUG_ISASYNCSRPENABLEFROMDEVCONFIG_OFFSET UNITYSDK_OFFSET(0x1D6EEC60)
#define UNITYENGINE_DEBUG_ISLOGGINGENABLED_OFFSET UNITYSDK_OFFSET(0x1D6EEA60)
#define UNITYENGINE_DEBUG_LOGASSERTION_OFFSET UNITYSDK_OFFSET(0x1D6EE650)
#define UNITYENGINE_DEBUG_LOGERRORFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1D6EDC00)
#define UNITYENGINE_DEBUG_LOGERRORFORMAT_OFFSET UNITYSDK_OFFSET(0x1D6EDB20)
#define UNITYENGINE_DEBUG_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0x1D6EDA40)
#define UNITYENGINE_DEBUG_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1D6ED970)
#define UNITYENGINE_DEBUG_LOGEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1D6EDF10)
#define UNITYENGINE_DEBUG_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D6EDD90)
#define UNITYENGINE_DEBUG_LOGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1D6ED7E0)
#define UNITYENGINE_DEBUG_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x1D6ED700)
#define UNITYENGINE_DEBUG_LOGWARNINGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1D6EE320)
#define UNITYENGINE_DEBUG_LOGWARNINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1D6EE240)
#define UNITYENGINE_DEBUG_LOGWARNING_1_OFFSET UNITYSDK_OFFSET(0x1D6EE160)
#define UNITYENGINE_DEBUG_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1D6EE090)
#define UNITYENGINE_DEBUG_LOG_1_OFFSET UNITYSDK_OFFSET(0x1D6ED620)
#define UNITYENGINE_DEBUG_LOG_OFFSET UNITYSDK_OFFSET(0x1D6ED4F0)
#define UNITYENGINE_DEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6EEC80)
#define UNITYENGINE_DEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EEC70)

namespace UnityEngine
{
	inline static constexpr unsigned int Debug_TypeDefinitionIndex = 5156;

	class Debug : public ::System::Object
	{
	public:
		static ::UnityEngine::ILogger** StaticGet_s_Logger()
		{
			return (::UnityEngine::ILogger**)Il2CppClass::FromTypeDefinitionIndex(Debug_TypeDefinitionIndex)->GetStaticField(0x51C0);
		}
		static ::UnityEngine::ILogger** StaticGet_s_DefaultLogger()
		{
			return (::UnityEngine::ILogger**)Il2CppClass::FromTypeDefinitionIndex(Debug_TypeDefinitionIndex)->GetStaticField(0x51C8);
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

		static ::System::Void DrawLine_2(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWLINE_2_OFFSET))(start, end, color, duration, depthTest);
		}

		static ::System::Void DrawRay(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 dir, ::UnityEngine::Color color, ::System::Single duration)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWRAY_OFFSET))(start, dir, color, duration);
		}

		static ::System::Void DrawRay_1(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 dir, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWRAY_1_OFFSET))(start, dir, color);
		}

		static ::System::Void DrawRay_2(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 dir, ::UnityEngine::Color color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWRAY_2_OFFSET))(start, dir, color, duration, depthTest);
		}

		static ::System::Void Break()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_BREAK_OFFSET))();
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

		static ::System::Void Assert_1(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ASSERT_1_OFFSET))(condition, message);
		}

		static ::System::Void LogAssertion(::System::Object* message)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_LOGASSERTION_OFFSET))(message);
		}

		static ::System::Boolean get_isDebugBuild()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_GET_ISDEBUGBUILD_OFFSET))();
		}

		static ::System::Void CallOverridenDebugHandler(::System::Exception* exception, ::UnityEngine::Object* obj, ::System::Int32& ret)
		{
			return ((::System::Void(*)(::System::Exception*, ::UnityEngine::Object*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_CALLOVERRIDENDEBUGHANDLER_OFFSET))(exception, obj, ret);
		}

		static ::System::Void IsLoggingEnabled(::System::Int32& ret)
		{
			return ((::System::Void(*)(::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ISLOGGINGENABLED_OFFSET))(ret);
		}

		static ::System::Boolean HasConfigAsyncSRPFromDevConfig()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_HASCONFIGASYNCSRPFROMDEVCONFIG_OFFSET))();
		}

		static ::System::Boolean IsAsyncSRPEnableFromDevConfig()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_ISASYNCSRPENABLEFROMDEVCONFIG_OFFSET))();
		}

		static ::System::Void DrawLine_Injected(::UnityEngine::Vector3& start, ::UnityEngine::Vector3& end, ::UnityEngine::Color& color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Color&, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUG_DRAWLINE_INJECTED_OFFSET))(start, end, color, duration, depthTest);
		}
	};
}
