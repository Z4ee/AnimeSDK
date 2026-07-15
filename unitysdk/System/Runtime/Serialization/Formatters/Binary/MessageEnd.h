#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_DUMP_1_OFFSET UNITYSDK_OFFSET(0x1791D5B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_DUMP_OFFSET UNITYSDK_OFFSET(0x1791D5A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_READ_OFFSET UNITYSDK_OFFSET(0x1791D590)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_WRITE_OFFSET UNITYSDK_OFFSET(0x1791D4F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1791D4E0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int MessageEnd_TypeDefinitionIndex = 1155;

	class MessageEnd : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND__CTOR_OFFSET))(this);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_READ_OFFSET))(this, a1);
		}

		::System::Void Dump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_DUMP_OFFSET))(this);
		}

		::System::Void Dump_1(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_DUMP_1_OFFSET))(this, a1);
		}
	};
}
