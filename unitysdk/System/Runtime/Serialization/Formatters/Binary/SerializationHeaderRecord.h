#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.h"

namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_DUMP_OFFSET UNITYSDK_OFFSET(0x1BE1AD40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_GETINT32_OFFSET UNITYSDK_OFFSET(0x1BE1AB40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_READ_OFFSET UNITYSDK_OFFSET(0x1BE1ABB0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_WRITE_OFFSET UNITYSDK_OFFSET(0x1BE1A840)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE1A810)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE1A800)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int SerializationHeaderRecord_TypeDefinitionIndex = 1146;

	class SerializationHeaderRecord : public ::System::Object
	{
	public:
		::System::Int32 binaryFormatterMinorVersion; // 0x10
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum; // 0x14
		::System::Int32 binaryFormatterMajorVersion; // 0x18
		::System::Int32 minorVersion; // 0x1C
		::System::Int32 majorVersion; // 0x20
		::System::Int32 topId; // 0x24
		::System::Int32 headerId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_WRITE_OFFSET))(this, a1);
		}

		static ::System::Int32 GetInt32(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_GETINT32_OFFSET))(a1, a2);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_READ_OFFSET))(this, a1);
		}

		::System::Void Dump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_DUMP_OFFSET))(this);
		}
	};
}
