#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_DUMP_1_OFFSET UNITYSDK_OFFSET(0x179FFB70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_DUMP_OFFSET UNITYSDK_OFFSET(0x179FFB60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_READ_OFFSET UNITYSDK_OFFSET(0x179FFB50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_WRITE_OFFSET UNITYSDK_OFFSET(0x179FFB10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND__CTOR_OFFSET UNITYSDK_OFFSET(0x179FFB00)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int MessageEnd_TypeDefinitionIndex = 1154;

	class MessageEnd : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND__CTOR_OFFSET))(this);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_WRITE_OFFSET))(this, sout);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_READ_OFFSET))(this, input);
		}

		::System::Void Dump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_DUMP_OFFSET))(this);
		}

		::System::Void Dump_1(::System::IO::Stream* sout)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_DUMP_1_OFFSET))(this, sout);
		}
	};
}
