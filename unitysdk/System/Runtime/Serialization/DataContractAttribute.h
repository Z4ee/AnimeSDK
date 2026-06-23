#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_SERIALIZATION_DATACONTRACTATTRIBUTE_GET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E890A50)
#define SYSTEM_RUNTIME_SERIALIZATION_DATACONTRACTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E890A40)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int DataContractAttribute_TypeDefinitionIndex = 6601;

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
