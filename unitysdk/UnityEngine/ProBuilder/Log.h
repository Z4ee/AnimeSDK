#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/UnityEngine/ProBuilder/LogLevel.h"
#include "unitysdk/UnityEngine/ProBuilder/LogOutput.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define UNITYENGINE_PROBUILDER_LOG_CLEARLOGFILE_OFFSET UNITYSDK_OFFSET(0x1B0AEDE0)
#define UNITYENGINE_PROBUILDER_LOG_DEBUG_1_OFFSET UNITYSDK_OFFSET(0x1B0AE360)
#define UNITYENGINE_PROBUILDER_LOG_DEBUG_OFFSET UNITYSDK_OFFSET(0x1B0AE210)
#define UNITYENGINE_PROBUILDER_LOG_DOPRINT_OFFSET UNITYSDK_OFFSET(0x1B0AE270)
#define UNITYENGINE_PROBUILDER_LOG_ERROR_1_OFFSET UNITYSDK_OFFSET(0x1B05EEE0)
#define UNITYENGINE_PROBUILDER_LOG_ERROR_OFFSET UNITYSDK_OFFSET(0x1B0AE650)
#define UNITYENGINE_PROBUILDER_LOG_INFO_1_OFFSET UNITYSDK_OFFSET(0x1B0AE450)
#define UNITYENGINE_PROBUILDER_LOG_INFO_OFFSET UNITYSDK_OFFSET(0x1B0AE370)
#define UNITYENGINE_PROBUILDER_LOG_POPLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x1B0AE060)
#define UNITYENGINE_PROBUILDER_LOG_PRINTTOCONSOLE_OFFSET UNITYSDK_OFFSET(0x1B0AE730)
#define UNITYENGINE_PROBUILDER_LOG_PRINTTOFILE_OFFSET UNITYSDK_OFFSET(0x1B0AE940)
#define UNITYENGINE_PROBUILDER_LOG_PUSHLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x1B0ADFD0)
#define UNITYENGINE_PROBUILDER_LOG_SETLOGFILE_OFFSET UNITYSDK_OFFSET(0x1B0AE1B0)
#define UNITYENGINE_PROBUILDER_LOG_SETLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x1B0AE0F0)
#define UNITYENGINE_PROBUILDER_LOG_SETOUTPUT_OFFSET UNITYSDK_OFFSET(0x1B0AE150)
#define UNITYENGINE_PROBUILDER_LOG_WARNING_1_OFFSET UNITYSDK_OFFSET(0x1B0AE5C0)
#define UNITYENGINE_PROBUILDER_LOG_WARNING_OFFSET UNITYSDK_OFFSET(0x1B0AE4E0)
#define UNITYENGINE_PROBUILDER_LOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0AEF00)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Log_TypeDefinitionIndex = 40753;

	class Log : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::LogLevel>** StaticGet_s_logStack()
		{
			return (::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::LogLevel>**)Il2CppClass::FromTypeDefinitionIndex(Log_TypeDefinitionIndex)->GetStaticField(0x52040);
		}
		static ::System::String** StaticGet_s_LogFilePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Log_TypeDefinitionIndex)->GetStaticField(0x52048);
		}
		static ::UnityEngine::ProBuilder::LogOutput* StaticGet_s_Output()
		{
			return (::UnityEngine::ProBuilder::LogOutput*)Il2CppClass::FromTypeDefinitionIndex(Log_TypeDefinitionIndex)->GetStaticField(0x101C0);
		}
		static ::UnityEngine::ProBuilder::LogLevel* StaticGet_s_LogLevel()
		{
			return (::UnityEngine::ProBuilder::LogLevel*)Il2CppClass::FromTypeDefinitionIndex(Log_TypeDefinitionIndex)->GetStaticField(0x101C4);
		}
		// static const ::System::String* k_ProBuilderLogFileName; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG__CCTOR_OFFSET))();
		}

		static ::System::Void PushLogLevel(::UnityEngine::ProBuilder::LogLevel a1)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::LogLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_PUSHLOGLEVEL_OFFSET))(a1);
		}

		static ::System::Void PopLogLevel()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_POPLOGLEVEL_OFFSET))();
		}

		static ::System::Void SetLogLevel(::UnityEngine::ProBuilder::LogLevel a1)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::LogLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_SETLOGLEVEL_OFFSET))(a1);
		}

		static ::System::Void SetOutput(::UnityEngine::ProBuilder::LogOutput a1)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::LogOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_SETOUTPUT_OFFSET))(a1);
		}

		static ::System::Void SetLogFile(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_SETLOGFILE_OFFSET))(a1);
		}

		static ::System::Void Debug(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_DEBUG_OFFSET))(a1);
		}

		static ::System::Void Debug_1(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_DEBUG_1_OFFSET))(a1, a2);
		}

		static ::System::Void Info(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_INFO_OFFSET))(a1, a2);
		}

		static ::System::Void Info_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_INFO_1_OFFSET))(a1);
		}

		static ::System::Void Warning(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_WARNING_OFFSET))(a1, a2);
		}

		static ::System::Void Warning_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_WARNING_1_OFFSET))(a1);
		}

		static ::System::Void Error(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_ERROR_OFFSET))(a1, a2);
		}

		static ::System::Void Error_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_ERROR_1_OFFSET))(a1);
		}

		static ::System::Void DoPrint(::System::String* a1, ::UnityEngine::LogType a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_DOPRINT_OFFSET))(a1, a2);
		}

		static ::System::Void PrintToFile(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_PRINTTOFILE_OFFSET))(a1, a2);
		}

		static ::System::Void ClearLogFile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_CLEARLOGFILE_OFFSET))();
		}

		static ::System::Void PrintToConsole(::System::String* a1, ::UnityEngine::LogType a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_PRINTTOCONSOLE_OFFSET))(a1, a2);
		}
	};
}
