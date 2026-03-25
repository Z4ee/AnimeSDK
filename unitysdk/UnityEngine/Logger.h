#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class Exception; }
namespace System { class String; }
namespace UnityEngine { class ILogHandler; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_LOGGER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x18A13E60)
#define UNITYENGINE_LOGGER_GET_FILTERLOGTYPE_OFFSET UNITYSDK_OFFSET(0x18A13E10)
#define UNITYENGINE_LOGGER_GET_LOGENABLED_OFFSET UNITYSDK_OFFSET(0x18A13DF0)
#define UNITYENGINE_LOGGER_GET_LOGHANDLER_OFFSET UNITYSDK_OFFSET(0x18A13DD0)
#define UNITYENGINE_LOGGER_ISLOGTYPEALLOWED_OFFSET UNITYSDK_OFFSET(0x18A13E30)
#define UNITYENGINE_LOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x18A14290)
#define UNITYENGINE_LOGGER_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A144B0)
#define UNITYENGINE_LOGGER_LOGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x18A14670)
#define UNITYENGINE_LOGGER_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x18A14580)
#define UNITYENGINE_LOGGER_LOG_1_OFFSET UNITYSDK_OFFSET(0x18A140F0)
#define UNITYENGINE_LOGGER_LOG_OFFSET UNITYSDK_OFFSET(0x18A13F60)
#define UNITYENGINE_LOGGER_SET_FILTERLOGTYPE_OFFSET UNITYSDK_OFFSET(0x18A13E20)
#define UNITYENGINE_LOGGER_SET_LOGENABLED_OFFSET UNITYSDK_OFFSET(0x18A13E00)
#define UNITYENGINE_LOGGER_SET_LOGHANDLER_OFFSET UNITYSDK_OFFSET(0x18A13DE0)
#define UNITYENGINE_LOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A13DC0)

namespace UnityEngine
{
	inline static constexpr unsigned int Logger_TypeDefinitionIndex = 4023;

	class Logger : public ::System::Object
	{
	public:
		::UnityEngine::ILogHandler* _logHandler_k__BackingField; // 0x10
		::System::Boolean _logEnabled_k__BackingField; // 0x18
		::UnityEngine::LogType _filterLogType_k__BackingField; // 0x1C

		::System::Void _ctor(::UnityEngine::ILogHandler* logHandler)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ILogHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER__CTOR_OFFSET))(this, logHandler);
		}

		::UnityEngine::ILogHandler* get_logHandler()
		{
			return ((::UnityEngine::ILogHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_GET_LOGHANDLER_OFFSET))(this);
		}

		::System::Void set_logHandler(::UnityEngine::ILogHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ILogHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_SET_LOGHANDLER_OFFSET))(this, value);
		}

		::System::Boolean get_logEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_GET_LOGENABLED_OFFSET))(this);
		}

		::System::Void set_logEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_SET_LOGENABLED_OFFSET))(this, value);
		}

		::UnityEngine::LogType get_filterLogType()
		{
			return ((::UnityEngine::LogType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_GET_FILTERLOGTYPE_OFFSET))(this);
		}

		::System::Void set_filterLogType(::UnityEngine::LogType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_SET_FILTERLOGTYPE_OFFSET))(this, value);
		}

		::System::Boolean IsLogTypeAllowed(::UnityEngine::LogType logType)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_ISLOGTYPEALLOWED_OFFSET))(this, logType);
		}

		static ::System::String* GetString(::System::Object* message)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_GETSTRING_OFFSET))(message);
		}

		::System::Void Log(::UnityEngine::LogType logType, ::System::Object* message)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LogType, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_LOG_OFFSET))(this, logType, message);
		}

		::System::Void Log_1(::UnityEngine::LogType logType, ::System::Object* message, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LogType, ::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_LOG_1_OFFSET))(this, logType, message, context);
		}

		::System::Void LogError(::System::String* tag, ::System::Object* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_LOGERROR_OFFSET))(this, tag, message);
		}

		::System::Void LogException(::System::Exception* exception, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_LOGEXCEPTION_OFFSET))(this, exception, context);
		}

		::System::Void LogFormat(::UnityEngine::LogType logType, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LogType, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_LOGFORMAT_OFFSET))(this, logType, format, args);
		}

		::System::Void LogFormat_1(::UnityEngine::LogType logType, ::UnityEngine::Object* context, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LogType, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_LOGFORMAT_1_OFFSET))(this, logType, context, format, args);
		}
	};
}
