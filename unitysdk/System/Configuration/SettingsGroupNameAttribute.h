#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_CONFIGURATION_SETTINGSGROUPNAMEATTRIBUTE_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x1E973F40)
#define SYSTEM_CONFIGURATION_SETTINGSGROUPNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E973F30)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsGroupNameAttribute_TypeDefinitionIndex = 4222;

	class SettingsGroupNameAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::String* groupName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSGROUPNAMEATTRIBUTE__CTOR_OFFSET))(this, groupName);
		}

		::System::String* get_GroupName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSGROUPNAMEATTRIBUTE_GET_GROUPNAME_OFFSET))(this);
		}
	};
}
