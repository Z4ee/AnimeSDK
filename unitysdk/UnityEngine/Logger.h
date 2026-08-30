#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class Exception; }
namespace System { class String; }
namespace UnityEngine { class ILogHandler; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_LOGGER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1EDFBA10)
#define UNITYENGINE_LOGGER_GET_FILTERLOGTYPE_OFFSET UNITYSDK_OFFSET(0x1EDFB9C0)
#define UNITYENGINE_LOGGER_GET_LOGENABLED_OFFSET UNITYSDK_OFFSET(0x1EDFB9A0)
#define UNITYENGINE_LOGGER_GET_LOGHANDLER_OFFSET UNITYSDK_OFFSET(0x1EDFB980)
#define UNITYENGINE_LOGGER_ISLOGTYPEALLOWED_OFFSET UNITYSDK_OFFSET(0x1EDFB9E0)
#define UNITYENGINE_LOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1EDFBF50)
#define UNITYENGINE_LOGGER_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EDFC190)
#define UNITYENGINE_LOGGER_LOGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1EDFC3E0)
#define UNITYENGINE_LOGGER_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x1EDFC2A0)
#define UNITYENGINE_LOGGER_LOG_1_OFFSET UNITYSDK_OFFSET(0x1EDFBD90)
#define UNITYENGINE_LOGGER_LOG_OFFSET UNITYSDK_OFFSET(0x1EDFBBD0)
#define UNITYENGINE_LOGGER_SET_FILTERLOGTYPE_OFFSET UNITYSDK_OFFSET(0x1EDFB9D0)
#define UNITYENGINE_LOGGER_SET_LOGENABLED_OFFSET UNITYSDK_OFFSET(0x1EDFB9B0)
#define UNITYENGINE_LOGGER_SET_LOGHANDLER_OFFSET UNITYSDK_OFFSET(0x1EDFB990)
#define UNITYENGINE_LOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDFB970)

namespace UnityEngine
{
	inline static constexpr unsigned int Logger_TypeDefinitionIndex = 4214;

	class Logger : public ::System::Object
	{
	public:
		::UnityEngine::ILogHandler* _logHandler_k__BackingField; // 0x10
		::System::Boolean _logEnabled_k__BackingField; // 0x18
		::UnityEngine::LogType _filterLogType_k__BackingField; // 0x1C

		::System::Void _ctor(::UnityEngine::ILogHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ILogHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER__CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::ILogHandler* get_logHandler()
		{
			return ((::UnityEngine::ILogHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_GET_LOGHANDLER_OFFSET))(this);
		}

		::System::Void set_logHandler(::UnityEngine::ILogHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ILogHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_SET_LOGHANDLER_OFFSET))(this, a1);
		}

		::System::Boolean get_logEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_GET_LOGENABLED_OFFSET))(this);
		}

		::System::Void set_logEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_SET_LOGENABLED_OFFSET))(this, a1);
		}

		::UnityEngine::LogType get_filterLogType()
		{
			return ((::UnityEngine::LogType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_GET_FILTERLOGTYPE_OFFSET))(this);
		}

		::System::Void set_filterLogType(::UnityEngine::LogType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_SET_FILTERLOGTYPE_OFFSET))(this, a1);
		}

		::System::Boolean IsLogTypeAllowed(::UnityEngine::LogType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_ISLOGTYPEALLOWED_OFFSET))(this, a1);
		}

		static ::System::String* GetString(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_GETSTRING_OFFSET))(a1);
		}

		::System::Void Log(::UnityEngine::LogType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LogType, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_LOG_OFFSET))(this, a1, a2);
		}

		::System::Void Log_1(::UnityEngine::LogType a1, ::System::Object* a2, ::UnityEngine::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LogType, ::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_LOG_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LogError(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_LOGERROR_OFFSET))(this, a1, a2);
		}

		::System::Void LogException(::System::Exception* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_LOGEXCEPTION_OFFSET))(this, a1, a2);
		}

		::System::Void LogFormat(::UnityEngine::LogType a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LogType, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_LOGFORMAT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LogFormat_1(::UnityEngine::LogType a1, ::UnityEngine::Object* a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LogType, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_LOGFORMAT_1_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
