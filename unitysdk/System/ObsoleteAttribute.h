#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_OBSOLETEATTRIBUTE_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1BD822B0)
#define SYSTEM_OBSOLETEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BD82290)
#define SYSTEM_OBSOLETEATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BD822A0)
#define SYSTEM_OBSOLETEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD82280)

namespace System
{
	inline static constexpr unsigned int ObsoleteAttribute_TypeDefinitionIndex = 310;

	class ObsoleteAttribute : public ::System::Attribute
	{
	public:
		::System::String* _message; // 0x10
		::System::Boolean _error; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBSOLETEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_OBSOLETEATTRIBUTE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_OBSOLETEATTRIBUTE__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBSOLETEATTRIBUTE_GET_MESSAGE_OFFSET))(this);
		}
	};
}
