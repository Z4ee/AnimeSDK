#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT_DUMP_OFFSET UNITYSDK_OFFSET(0x187AC240)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT_READ_OFFSET UNITYSDK_OFFSET(0x187AC1E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT_SET_OFFSET UNITYSDK_OFFSET(0x187AC150)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT_WRITE_OFFSET UNITYSDK_OFFSET(0x187AC160)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x187AC140)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryObject_TypeDefinitionIndex = 1140;

	class BinaryObject : public ::System::Object
	{
	public:
		::System::Int32 mapId; // 0x10
		::System::Int32 objectId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void Set(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT_SET_OFFSET))(this, a1, a2);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT_READ_OFFSET))(this, a1);
		}

		::System::Void Dump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECT_DUMP_OFFSET))(this);
		}
	};
}
