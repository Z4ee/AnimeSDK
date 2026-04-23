#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogOption.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class Exception; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_DEBUGLOGHANDLER_INTERNAL_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A438320)
#define UNITYENGINE_DEBUGLOGHANDLER_INTERNAL_LOG_OFFSET UNITYSDK_OFFSET(0x1A438310)
#define UNITYENGINE_DEBUGLOGHANDLER_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A4383F0)
#define UNITYENGINE_DEBUGLOGHANDLER_LOGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1A436C10)
#define UNITYENGINE_DEBUGLOGHANDLER_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x1A438330)
#define UNITYENGINE_DEBUGLOGHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A438300)

namespace UnityEngine
{
	inline static constexpr unsigned int DebugLogHandler_TypeDefinitionIndex = 3881;

	class DebugLogHandler : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUGLOGHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Log(::UnityEngine::LogType level, ::UnityEngine::LogOption options, ::System::String* msg, ::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::LogType, ::UnityEngine::LogOption, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUGLOGHANDLER_INTERNAL_LOG_OFFSET))(level, options, msg, obj);
		}

		static ::System::Void Internal_LogException(::System::Exception* exception, ::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::System::Exception*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUGLOGHANDLER_INTERNAL_LOGEXCEPTION_OFFSET))(exception, obj);
		}

		::System::Void LogFormat(::UnityEngine::LogType logType, ::UnityEngine::Object* context, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LogType, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUGLOGHANDLER_LOGFORMAT_OFFSET))(this, logType, context, format, args);
		}

		::System::Void LogFormat_1(::UnityEngine::LogType logType, ::UnityEngine::LogOption logOptions, ::UnityEngine::Object* context, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LogType, ::UnityEngine::LogOption, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUGLOGHANDLER_LOGFORMAT_1_OFFSET))(this, logType, logOptions, context, format, args);
		}

		::System::Void LogException(::System::Exception* exception, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUGLOGHANDLER_LOGEXCEPTION_OFFSET))(this, exception, context);
		}
	};
}
