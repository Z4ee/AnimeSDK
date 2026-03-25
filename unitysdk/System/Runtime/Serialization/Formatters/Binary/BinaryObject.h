#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT_DUMP_OFFSET UNITYSDK_OFFSET(0x163CFC30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT_READ_OFFSET UNITYSDK_OFFSET(0x163CFBD0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT_SET_OFFSET UNITYSDK_OFFSET(0x163CFB40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT_WRITE_OFFSET UNITYSDK_OFFSET(0x163CFB50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x163CFB30)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryObject_TypeDefinitionIndex = 1139;

	class BinaryObject : public ::System::Object
	{
	public:
		::System::Int32 mapId; // 0x10
		::System::Int32 objectId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void Set(::System::Int32 objectId, ::System::Int32 mapId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT_SET_OFFSET))(this, objectId, mapId);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT_WRITE_OFFSET))(this, sout);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT_READ_OFFSET))(this, input);
		}

		::System::Void Dump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT_DUMP_OFFSET))(this);
		}
	};
}
