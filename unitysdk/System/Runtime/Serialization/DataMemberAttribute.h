#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_EMITDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1F0158E0)
#define SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_ISREQUIRED_OFFSET UNITYSDK_OFFSET(0x1F0158D0)
#define SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1F0158B0)
#define SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1F0158C0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int DataMemberAttribute_TypeDefinitionIndex = 3706;

	class DataMemberAttribute : public ::System::Attribute
	{
	public:
		::System::String* name; // 0x10
		::System::Boolean isRequired; // 0x18
		::System::Boolean emitDefaultValue; // 0x19
		::System::Int32 order; // 0x1C

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_ORDER_OFFSET))(this);
		}

		::System::Boolean get_IsRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_ISREQUIRED_OFFSET))(this);
		}

		::System::Boolean get_EmitDefaultValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_EMITDEFAULTVALUE_OFFSET))(this);
		}
	};
}
