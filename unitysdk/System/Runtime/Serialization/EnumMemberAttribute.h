#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_SERIALIZATION_ENUMMEMBERATTRIBUTE_GET_ISVALUESETEXPLICITLY_OFFSET UNITYSDK_OFFSET(0x1E890AE0)
#define SYSTEM_RUNTIME_SERIALIZATION_ENUMMEMBERATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E890AC0)
#define SYSTEM_RUNTIME_SERIALIZATION_ENUMMEMBERATTRIBUTE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E890AD0)
#define SYSTEM_RUNTIME_SERIALIZATION_ENUMMEMBERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E890AB0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int EnumMemberAttribute_TypeDefinitionIndex = 6603;

	class EnumMemberAttribute : public ::System::Attribute
	{
	public:
		::System::String* value; // 0x10
		::System::Boolean isValueSetExplicitly; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ENUMMEMBERATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ENUMMEMBERATTRIBUTE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ENUMMEMBERATTRIBUTE_SET_VALUE_OFFSET))(this, value);
		}

		::System::Boolean get_IsValueSetExplicitly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ENUMMEMBERATTRIBUTE_GET_ISVALUESETEXPLICITLY_OFFSET))(this);
		}
	};
}
