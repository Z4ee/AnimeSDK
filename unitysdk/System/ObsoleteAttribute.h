#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_OBSOLETEATTRIBUTE_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1A6BD8B0)
#define SYSTEM_OBSOLETEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6BD8A0)

namespace System
{
	inline static constexpr unsigned int ObsoleteAttribute_TypeDefinitionIndex = 298;

	class ObsoleteAttribute : public ::System::Attribute
	{
	public:
		::System::String* _message; // 0x10
		::System::Boolean _error; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBSOLETEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBSOLETEATTRIBUTE_GET_MESSAGE_OFFSET))(this);
		}
	};
}
