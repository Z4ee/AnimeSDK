#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableData.h"
#include "unitysdk/UnityEngine/ConsoleVariableFlag.h"

namespace System { class String; }

#define UNITYENGINE_CONSOLEVARIABLE_GETCONSOLEVARIABLEID_OFFSET UNITYSDK_OFFSET(0x1B48D980)
#define UNITYENGINE_CONSOLEVARIABLE_GETCONSOLEVARIABLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B48D9E0)
#define UNITYENGINE_CONSOLEVARIABLE_GETCONSOLEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1B48D9B0)
#define UNITYENGINE_CONSOLEVARIABLE_NEWCONSOLEVARIABLEFROMSCRIPT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B48DA00)
#define UNITYENGINE_CONSOLEVARIABLE_NEWCONSOLEVARIABLEFROMSCRIPT_OFFSET UNITYSDK_OFFSET(0x1B48D9F0)
#define UNITYENGINE_CONSOLEVARIABLE_SETCONSOLEVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x1B48D990)
#define UNITYENGINE_CONSOLEVARIABLE_SETCONSOLEVARIABLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B48D9A0)
#define UNITYENGINE_CONSOLEVARIABLE_SETCONSOLEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1B48D950)
#define UNITYENGINE_CONSOLEVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B48DA10)

namespace UnityEngine
{
	inline static constexpr unsigned int ConsoleVariable_TypeDefinitionIndex = 5155;

	class ConsoleVariable : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void SetConsoleVariable(::System::String* name, ::UnityEngine::ConsoleVariableData value)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::ConsoleVariableData))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLE_SETCONSOLEVARIABLE_OFFSET))(name, value);
		}

		static ::System::Int32 GetConsoleVariableId(::System::String* name)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLE_GETCONSOLEVARIABLEID_OFFSET))(name);
		}

		static ::System::Void SetConsoleVariable_1(::System::Int32 id, ::UnityEngine::ConsoleVariableData value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::ConsoleVariableData))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLE_SETCONSOLEVARIABLE_1_OFFSET))(id, value);
		}

		static ::UnityEngine::ConsoleVariableData GetConsoleVariable(::System::Int32 id)
		{
			return ((::UnityEngine::ConsoleVariableData(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLE_GETCONSOLEVARIABLE_OFFSET))(id);
		}

		static ::System::Int32 NewConsoleVariableFromScript(::System::String* name, ::UnityEngine::ConsoleVariableData defaultValue, ::UnityEngine::ConsoleVariableFlag flag)
		{
			return ((::System::Int32(*)(::System::String*, ::UnityEngine::ConsoleVariableData, ::UnityEngine::ConsoleVariableFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLE_NEWCONSOLEVARIABLEFROMSCRIPT_OFFSET))(name, defaultValue, flag);
		}

		static ::System::Void SetConsoleVariable_Injected(::System::Int32 id, ::UnityEngine::ConsoleVariableData& value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::ConsoleVariableData&))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLE_SETCONSOLEVARIABLE_INJECTED_OFFSET))(id, value);
		}

		static ::System::Void GetConsoleVariable_Injected(::System::Int32 id, ::UnityEngine::ConsoleVariableData& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::ConsoleVariableData&))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLE_GETCONSOLEVARIABLE_INJECTED_OFFSET))(id, ret);
		}

		static ::System::Int32 NewConsoleVariableFromScript_Injected(::System::String* name, ::UnityEngine::ConsoleVariableData& defaultValue, ::UnityEngine::ConsoleVariableFlag flag)
		{
			return ((::System::Int32(*)(::System::String*, ::UnityEngine::ConsoleVariableData&, ::UnityEngine::ConsoleVariableFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLE_NEWCONSOLEVARIABLEFROMSCRIPT_INJECTED_OFFSET))(name, defaultValue, flag);
		}
	};
}
