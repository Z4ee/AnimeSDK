#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/UnityEngine/ProBuilder/LogLevel.h"
#include "unitysdk/UnityEngine/ProBuilder/LogOutput.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define UNITYENGINE_PROBUILDER_LOG_CLEARLOGFILE_OFFSET UNITYSDK_OFFSET(0x1A24B0A0)
#define UNITYENGINE_PROBUILDER_LOG_DEBUG_1_OFFSET UNITYSDK_OFFSET(0x1A24A4A0)
#define UNITYENGINE_PROBUILDER_LOG_DEBUG_OFFSET UNITYSDK_OFFSET(0x1A24A350)
#define UNITYENGINE_PROBUILDER_LOG_DOPRINT_OFFSET UNITYSDK_OFFSET(0x1A24A3B0)
#define UNITYENGINE_PROBUILDER_LOG_ERROR_1_OFFSET UNITYSDK_OFFSET(0x1A1FA590)
#define UNITYENGINE_PROBUILDER_LOG_ERROR_OFFSET UNITYSDK_OFFSET(0x1A24A8F0)
#define UNITYENGINE_PROBUILDER_LOG_INFO_1_OFFSET UNITYSDK_OFFSET(0x1A24A640)
#define UNITYENGINE_PROBUILDER_LOG_INFO_OFFSET UNITYSDK_OFFSET(0x1A24A4B0)
#define UNITYENGINE_PROBUILDER_LOG_POPLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x1A24A1A0)
#define UNITYENGINE_PROBUILDER_LOG_PRINTTOCONSOLE_OFFSET UNITYSDK_OFFSET(0x1A24AA80)
#define UNITYENGINE_PROBUILDER_LOG_PRINTTOFILE_OFFSET UNITYSDK_OFFSET(0x1A24AC90)
#define UNITYENGINE_PROBUILDER_LOG_PUSHLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x1A24A110)
#define UNITYENGINE_PROBUILDER_LOG_SETLOGFILE_OFFSET UNITYSDK_OFFSET(0x1A24A2F0)
#define UNITYENGINE_PROBUILDER_LOG_SETLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x1A24A230)
#define UNITYENGINE_PROBUILDER_LOG_SETOUTPUT_OFFSET UNITYSDK_OFFSET(0x1A24A290)
#define UNITYENGINE_PROBUILDER_LOG_WARNING_1_OFFSET UNITYSDK_OFFSET(0x1A24A860)
#define UNITYENGINE_PROBUILDER_LOG_WARNING_OFFSET UNITYSDK_OFFSET(0x1A24A6D0)
#define UNITYENGINE_PROBUILDER_LOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A24B1C0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Log_TypeDefinitionIndex = 39926;

	class Log : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_s_LogFilePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Log_TypeDefinitionIndex)->GetStaticField(0x25AB0);
		}
		static ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::LogLevel>** StaticGet_s_logStack()
		{
			return (::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::LogLevel>**)Il2CppClass::FromTypeDefinitionIndex(Log_TypeDefinitionIndex)->GetStaticField(0x25AB8);
		}
		static ::UnityEngine::ProBuilder::LogOutput* StaticGet_s_Output()
		{
			return (::UnityEngine::ProBuilder::LogOutput*)Il2CppClass::FromTypeDefinitionIndex(Log_TypeDefinitionIndex)->GetStaticField(0x9E10);
		}
		static ::UnityEngine::ProBuilder::LogLevel* StaticGet_s_LogLevel()
		{
			return (::UnityEngine::ProBuilder::LogLevel*)Il2CppClass::FromTypeDefinitionIndex(Log_TypeDefinitionIndex)->GetStaticField(0x9E14);
		}
		// static const ::System::String* k_ProBuilderLogFileName; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG__CCTOR_OFFSET))();
		}

		static ::System::Void PushLogLevel(::UnityEngine::ProBuilder::LogLevel level)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::LogLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_PUSHLOGLEVEL_OFFSET))(level);
		}

		static ::System::Void PopLogLevel()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_POPLOGLEVEL_OFFSET))();
		}

		static ::System::Void SetLogLevel(::UnityEngine::ProBuilder::LogLevel level)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::LogLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_SETLOGLEVEL_OFFSET))(level);
		}

		static ::System::Void SetOutput(::UnityEngine::ProBuilder::LogOutput output)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::LogOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_SETOUTPUT_OFFSET))(output);
		}

		static ::System::Void SetLogFile(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_SETLOGFILE_OFFSET))(path);
		}

		static ::System::Void Debug(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_DEBUG_OFFSET))(message);
		}

		static ::System::Void Debug_1(::System::String* format, ::Il2CppArray<::System::Object*>* values)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_DEBUG_1_OFFSET))(format, values);
		}

		static ::System::Void Info(::System::String* format, ::Il2CppArray<::System::Object*>* values)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_INFO_OFFSET))(format, values);
		}

		static ::System::Void Info_1(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_INFO_1_OFFSET))(message);
		}

		static ::System::Void Warning(::System::String* format, ::Il2CppArray<::System::Object*>* values)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_WARNING_OFFSET))(format, values);
		}

		static ::System::Void Warning_1(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_WARNING_1_OFFSET))(message);
		}

		static ::System::Void Error(::System::String* format, ::Il2CppArray<::System::Object*>* values)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_ERROR_OFFSET))(format, values);
		}

		static ::System::Void Error_1(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_ERROR_1_OFFSET))(message);
		}

		static ::System::Void DoPrint(::System::String* message, ::UnityEngine::LogType type)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_DOPRINT_OFFSET))(message, type);
		}

		static ::System::Void PrintToFile(::System::String* message, ::System::String* path)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_PRINTTOFILE_OFFSET))(message, path);
		}

		static ::System::Void ClearLogFile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_CLEARLOGFILE_OFFSET))();
		}

		static ::System::Void PrintToConsole(::System::String* message, ::UnityEngine::LogType type)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_PRINTTOCONSOLE_OFFSET))(message, type);
		}
	};
}
