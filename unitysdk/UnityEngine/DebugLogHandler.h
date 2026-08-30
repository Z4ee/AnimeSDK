#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogOption.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class Exception; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_DEBUGLOGHANDLER_INTERNAL_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DECEFF0)
#define UNITYENGINE_DEBUGLOGHANDLER_INTERNAL_LOG_OFFSET UNITYSDK_OFFSET(0x1DECEFE0)
#define UNITYENGINE_DEBUGLOGHANDLER_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DECF0C0)
#define UNITYENGINE_DEBUGLOGHANDLER_LOGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1DECDA70)
#define UNITYENGINE_DEBUGLOGHANDLER_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x1DECF000)
#define UNITYENGINE_DEBUGLOGHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DECEFD0)

namespace UnityEngine
{
	inline static constexpr unsigned int DebugLogHandler_TypeDefinitionIndex = 4068;

	class DebugLogHandler : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUGLOGHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Log(::UnityEngine::LogType a1, ::UnityEngine::LogOption a2, ::System::String* a3, ::UnityEngine::Object* a4)
		{
			return ((::System::Void(*)(::UnityEngine::LogType, ::UnityEngine::LogOption, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUGLOGHANDLER_INTERNAL_LOG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Internal_LogException(::System::Exception* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::System::Exception*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUGLOGHANDLER_INTERNAL_LOGEXCEPTION_OFFSET))(a1, a2);
		}

		::System::Void LogFormat(::UnityEngine::LogType a1, ::UnityEngine::Object* a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LogType, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUGLOGHANDLER_LOGFORMAT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LogFormat_1(::UnityEngine::LogType a1, ::UnityEngine::LogOption a2, ::UnityEngine::Object* a3, ::System::String* a4, ::Il2CppArray<::System::Object*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LogType, ::UnityEngine::LogOption, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUGLOGHANDLER_LOGFORMAT_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LogException(::System::Exception* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUGLOGHANDLER_LOGEXCEPTION_OFFSET))(this, a1, a2);
		}
	};
}
