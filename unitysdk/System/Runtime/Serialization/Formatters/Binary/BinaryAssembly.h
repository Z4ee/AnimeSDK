#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLY_DUMP_OFFSET UNITYSDK_OFFSET(0x187A8C60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLY_READ_OFFSET UNITYSDK_OFFSET(0x187A8C00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLY_SET_OFFSET UNITYSDK_OFFSET(0x187A8B70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLY_WRITE_OFFSET UNITYSDK_OFFSET(0x187A8B80)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLY__CTOR_OFFSET UNITYSDK_OFFSET(0x187A8B60)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryAssembly_TypeDefinitionIndex = 1138;

	class BinaryAssembly : public ::System::Object
	{
	public:
		::System::String* assemblyString; // 0x10
		::System::Int32 assemId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLY__CTOR_OFFSET))(this);
		}

		::System::Void Set(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLY_SET_OFFSET))(this, a1, a2);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLY_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLY_READ_OFFSET))(this, a1);
		}

		::System::Void Dump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLY_DUMP_OFFSET))(this);
		}
	};
}
