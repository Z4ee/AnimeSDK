#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableProperty.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define UNITYENGINE_CONSOLEMANAGER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x189FA4A0)
#define UNITYENGINE_CONSOLEMANAGER_GETCONSOLEVARIABLE_OFFSET UNITYSDK_OFFSET(0x189FA4B0)
#define UNITYENGINE_CONSOLEMANAGER_ONCONSOLEVARIABLECHANGED_OFFSET UNITYSDK_OFFSET(0x189FA7D0)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x189FA710)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x189FA600)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_2_OFFSET UNITYSDK_OFFSET(0x189FA660)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_3_OFFSET UNITYSDK_OFFSET(0x189FA6B0)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_OFFSET UNITYSDK_OFFSET(0x189FA5B0)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCALLBACKNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x189FA7C0)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHBOOL_OFFSET UNITYSDK_OFFSET(0x189FA5F0)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHFLOAT_OFFSET UNITYSDK_OFFSET(0x189FA650)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHINT_OFFSET UNITYSDK_OFFSET(0x189FA6A0)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHSTRING_OFFSET UNITYSDK_OFFSET(0x189FA700)
#define UNITYENGINE_CONSOLEMANAGER_SENDCOMMANDTOCONSOLEMANAGER_OFFSET UNITYSDK_OFFSET(0x189FA480)
#define UNITYENGINE_CONSOLEMANAGER_SETSTRING_OFFSET UNITYSDK_OFFSET(0x189FA490)
#define UNITYENGINE_CONSOLEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x189FA9E0)

namespace UnityEngine
{
	inline static constexpr unsigned int ConsoleManager_TypeDefinitionIndex = 3870;

	class ConsoleManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>** StaticGet_s_ConsoleVariableChangedCallbackMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(ConsoleManager_TypeDefinitionIndex)->GetStaticField(0x125D0);
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
