#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINSTRING_READ_OFFSET UNITYSDK_OFFSET(0x19972B30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x19972B20)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryCrossAppDomainString_TypeDefinitionIndex = 1190;

	class BinaryCrossAppDomainString : public ::System::Object
	{
	public:
		::System::Int32 value; // 0x10
		::System::Int32 objectId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINSTRING__CTOR_OFFSET))(this);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINSTRING_READ_OFFSET))(this, input);
		}
	};
}
