#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_SERIALIZATION_DATACONTRACTATTRIBUTE_GET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E7B8330)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int DataContractAttribute_TypeDefinitionIndex = 3705;

	class DataContractAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean isReference; // 0x10

		::System::Boolean get_IsReference()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_DATACONTRACTATTRIBUTE_GET_ISREFERENCE_OFFSET))(this);
		}
	};
}
