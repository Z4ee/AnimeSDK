#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_OBSOLETEATTRIBUTE_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1798F310)
#define SYSTEM_OBSOLETEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1798F2F0)
#define SYSTEM_OBSOLETEATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1798F300)
#define SYSTEM_OBSOLETEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1798F2E0)

namespace System
{
	inline static constexpr unsigned int ObsoleteAttribute_TypeDefinitionIndex = 308;

	class ObsoleteAttribute : public ::System::Attribute
	{
	public:
		::System::String* _message; // 0x10
		::System::Boolean _error; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBSOLETEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_OBSOLETEATTRIBUTE__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Boolean error)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_OBSOLETEATTRIBUTE__CTOR_2_OFFSET))(this, message, error);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBSOLETEATTRIBUTE_GET_MESSAGE_OFFSET))(this);
		}
	};
}
