#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_INITIALIZATIONEVENTATTRIBUTE_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x19E281E0)
#define SYSTEM_COMPONENTMODEL_INITIALIZATIONEVENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E281D0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int InitializationEventAttribute_TypeDefinitionIndex = 2915;

	class InitializationEventAttribute : public ::System::Attribute
	{
	public:
		::System::String* eventName; // 0x10

		::System::Void _ctor(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INITIALIZATIONEVENTATTRIBUTE__CTOR_OFFSET))(this, eventName);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INITIALIZATIONEVENTATTRIBUTE_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
