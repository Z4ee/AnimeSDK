#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_CONFIGMANAGER_ADD_ONAFTERRELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x189FA100)
#define UNITYENGINE_CONFIGMANAGER_AFTERRELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x189FA0E0)
#define UNITYENGINE_CONFIGMANAGER_MATCHCONDITION_OFFSET UNITYSDK_OFFSET(0x189FA0D0)
#define UNITYENGINE_CONFIGMANAGER_REGISTERCUSTOMCONDITION_OFFSET UNITYSDK_OFFSET(0x189FA0C0)
#define UNITYENGINE_CONFIGMANAGER_RELOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x189FA0B0)
#define UNITYENGINE_CONFIGMANAGER_RELOADBYMANAGEDREADER_OFFSET UNITYSDK_OFFSET(0x189FA0A0)
#define UNITYENGINE_CONFIGMANAGER_REMOVE_ONAFTERRELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x189FA190)

namespace UnityEngine
{
	inline static constexpr unsigned int ConfigManager_TypeDefinitionIndex = 3864;

	class ConfigManager : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet_OnAfterReloadConfig()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigManager_TypeDefinitionIndex)->GetStaticField(0x125A0);
		}

		static ::System::Void ReloadByManagedReader()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGMANAGER_RELOADBYMANAGEDREADER_OFFSET))();
		}

		static ::System::Void ReloadAllConfig(::System::String* readerName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGMANAGER_RELOADALLCONFIG_OFFSET))(readerName);
		}

		static ::System::Void RegisterCustomCondition(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGMANAGER_REGISTERCUSTOMCONDITION_OFFSET))(key, value);
		}

		static ::System::Boolean MatchCondition(::System::String* type, ::System::String* value)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGMANAGER_MATCHCONDITION_OFFSET))(type, value);
		}

		static ::System::Void AfterReloadConfig(::System::String* readerName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGMANAGER_AFTERRELOADCONFIG_OFFSET))(readerName);
		}

		static ::System::Void add_OnAfterReloadConfig(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGMANAGER_ADD_ONAFTERRELOADCONFIG_OFFSET))(value);
		}

		static ::System::Void remove_OnAfterReloadConfig(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGMANAGER_REMOVE_ONAFTERRELOADCONFIG_OFFSET))(value);
		}
	};
}
