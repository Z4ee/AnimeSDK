#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINMAP_DUMP_OFFSET UNITYSDK_OFFSET(0x187AA600)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINMAP_READ_OFFSET UNITYSDK_OFFSET(0x187AA5C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x187AA5B0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryCrossAppDomainMap_TypeDefinitionIndex = 1145;

	class BinaryCrossAppDomainMap : public ::System::Object
	{
	public:
		::System::Int32 crossAppDomainArrayIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINMAP__CTOR_OFFSET))(this);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINMAP_READ_OFFSET))(this, a1);
		}

		::System::Void Dump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINMAP_DUMP_OFFSET))(this);
		}
	};
}
