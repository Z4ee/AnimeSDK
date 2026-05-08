#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_SERIALIZATION_DATACONTRACTATTRIBUTE_GET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C560C00)
#define SYSTEM_RUNTIME_SERIALIZATION_DATACONTRACTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C560BF0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int DataContractAttribute_TypeDefinitionIndex = 6519;

	class DataContractAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean isReference; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_DATACONTRACTATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsReference()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_DATACONTRACTATTRIBUTE_GET_ISREFERENCE_OFFSET))(this);
		}
	};
}
