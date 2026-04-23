#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINASSEMBLY_DUMP_OFFSET UNITYSDK_OFFSET(0x179FA840)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINASSEMBLY_READ_OFFSET UNITYSDK_OFFSET(0x179FA7E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINASSEMBLY__CTOR_OFFSET UNITYSDK_OFFSET(0x179FA7D0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryCrossAppDomainAssembly_TypeDefinitionIndex = 1140;

	class BinaryCrossAppDomainAssembly : public ::System::Object
	{
	public:
		::System::Int32 assemblyIndex; // 0x10
		::System::Int32 assemId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINASSEMBLY__CTOR_OFFSET))(this);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINASSEMBLY_READ_OFFSET))(this, input);
		}

		::System::Void Dump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINASSEMBLY_DUMP_OFFSET))(this);
		}
	};
}
