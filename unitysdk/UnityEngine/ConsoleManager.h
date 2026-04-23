#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableProperty.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define UNITYENGINE_CONSOLEMANAGER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A433D30)
#define UNITYENGINE_CONSOLEMANAGER_GETCONSOLEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1A433D40)
#define UNITYENGINE_CONSOLEMANAGER_ONCONSOLEVARIABLECHANGED_OFFSET UNITYSDK_OFFSET(0x1A4340E0)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A434000)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x1A433EF0)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_2_OFFSET UNITYSDK_OFFSET(0x1A433F50)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_3_OFFSET UNITYSDK_OFFSET(0x1A433FA0)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1A433EA0)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCALLBACKNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1A4340D0)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHBOOL_OFFSET UNITYSDK_OFFSET(0x1A433EE0)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHFLOAT_OFFSET UNITYSDK_OFFSET(0x1A433F40)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHINT_OFFSET UNITYSDK_OFFSET(0x1A433F90)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHSTRING_OFFSET UNITYSDK_OFFSET(0x1A433FF0)
#define UNITYENGINE_CONSOLEMANAGER_SENDCOMMANDTOCONSOLEMANAGER_OFFSET UNITYSDK_OFFSET(0x1A433D10)
#define UNITYENGINE_CONSOLEMANAGER_SETSTRING_OFFSET UNITYSDK_OFFSET(0x1A433D20)
#define UNITYENGINE_CONSOLEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4342F0)

namespace UnityEngine
{
	inline static constexpr unsigned int ConsoleManager_TypeDefinitionIndex = 3872;

	class ConsoleManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>** StaticGet_s_ConsoleVariableChangedCallbackMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(ConsoleManager_TypeDefinitionIndex)->GetStaticField(0x147C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void SendCommandToConsoleManager(::System::String* command)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_SENDCOMMANDTOCONSOLEMANAGER_OFFSET))(command);
		}

		static ::System::Void SetString(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_SETSTRING_OFFSET))(name, value);
		}

		static ::System::Boolean Contains(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_CONTAINS_OFFSET))(name);
		}

		static ::UnityEngine::ConsoleVariableProperty GetConsoleVariable(::System::String* name)
		{
			return ((::UnityEngine::ConsoleVariableProperty(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_GETCONSOLEVARIABLE_OFFSET))(name);
		}

		static ::System::Void RegisterConsoleVariable(::System::String* name, ::System::Boolean defaultValue, ::System::String* help)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_OFFSET))(name, defaultValue, help);
		}

		static ::System::Void RegisterConsoleVariable_1(::System::String* name, ::System::Single defaultValue, ::System::String* help)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_1_OFFSET))(name, defaultValue, help);
		}

		static ::System::Void RegisterConsoleVariable_2(::System::String* name, ::System::Int32 defaultValue, ::System::String* help)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_2_OFFSET))(name, defaultValue, help);
		}

		static ::System::Void RegisterConsoleVariable_3(::System::String* name, ::System::String* defaultValue, ::System::String* help)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_3_OFFSET))(name, defaultValue, help);
		}

		static ::System::Void RegisterConsoleVarChangedCallback(::System::String* name, ::System::Action* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARCHANGEDCALLBACK_OFFSET))(name, callback);
		}

		static ::System::Void OnConsoleVariableChanged(::System::String* variableName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_ONCONSOLEVARIABLECHANGED_OFFSET))(variableName);
		}

		static ::System::Void RegisterManagedConsoleVariableWithBool(::System::String* name, ::System::Boolean defaultValue, ::System::String* help)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHBOOL_OFFSET))(name, defaultValue, help);
		}

		static ::System::Void RegisterManagedConsoleVariableWithFloat(::System::String* name, ::System::Single defaultValue, ::System::String* help)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHFLOAT_OFFSET))(name, defaultValue, help);
		}

		static ::System::Void RegisterManagedConsoleVariableWithInt(::System::String* name, ::System::Int32 defaultValue, ::System::String* help)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHINT_OFFSET))(name, defaultValue, help);
		}

		static ::System::Void RegisterManagedConsoleVariableWithString(::System::String* name, ::System::String* defaultValue, ::System::String* help)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHSTRING_OFFSET))(name, defaultValue, help);
		}

		static ::System::Void RegisterManagedCallbackNotification(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCALLBACKNOTIFICATION_OFFSET))(name);
		}
	};
}
