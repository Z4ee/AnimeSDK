#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_EMITDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x19F8EAE0)
#define SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_ISREQUIRED_OFFSET UNITYSDK_OFFSET(0x19F8EAD0)
#define SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19F8EAB0)
#define SYSTEM_RUNTIME_SERIALIZATION_DATAMEMBERATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x19F8EAC0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int DataMemberAttribute_TypeDefinitionIndex = 3723;

	class DataMemberAttribute : public ::System::Attribute
	{
	public:
		::System::String* name; // 0x10
		::System::Boolean emitDefaultValue; // 0x18
		::System::Boolean isRequired; // 0x19
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
