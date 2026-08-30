#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_SERIALIZATION_ENUMMEMBERATTRIBUTE_GET_ISVALUESETEXPLICITLY_OFFSET UNITYSDK_OFFSET(0x1F015900)
#define SYSTEM_RUNTIME_SERIALIZATION_ENUMMEMBERATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1F0158F0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int EnumMemberAttribute_TypeDefinitionIndex = 3707;

	class EnumMemberAttribute : public ::System::Attribute
	{
	public:
		::System::String* value; // 0x10
		::System::Boolean isValueSetExplicitly; // 0x18

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ENUMMEMBERATTRIBUTE_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean get_IsValueSetExplicitly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ENUMMEMBERATTRIBUTE_GET_ISVALUESETEXPLICITLY_OFFSET))(this);
		}
	};
}
