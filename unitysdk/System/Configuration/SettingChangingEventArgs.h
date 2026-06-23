#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/CancelEventArgs.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS_GET_NEWVALUE_OFFSET UNITYSDK_OFFSET(0x1C0127E0)
#define SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS_GET_SETTINGCLASS_OFFSET UNITYSDK_OFFSET(0x1C012820)
#define SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS_GET_SETTINGKEY_OFFSET UNITYSDK_OFFSET(0x1C012860)
#define SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS_GET_SETTINGNAME_OFFSET UNITYSDK_OFFSET(0x1C0128A0)
#define SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0127A0)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingChangingEventArgs_TypeDefinitionIndex = 4194;

	class SettingChangingEventArgs : public ::System::ComponentModel::CancelEventArgs
	{
	public:
		::System::Void _ctor(::System::String* settingName, ::System::String* settingClass, ::System::String* settingKey, ::System::Object* newValue, ::System::Boolean cancel)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS__CTOR_OFFSET))(this, settingName, settingClass, settingKey, newValue, cancel);
		}

		::System::Object* get_NewValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS_GET_NEWVALUE_OFFSET))(this);
		}

		::System::String* get_SettingClass()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS_GET_SETTINGCLASS_OFFSET))(this);
		}

		::System::String* get_SettingKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS_GET_SETTINGKEY_OFFSET))(this);
		}

		::System::String* get_SettingName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS_GET_SETTINGNAME_OFFSET))(this);
		}
	};
}
