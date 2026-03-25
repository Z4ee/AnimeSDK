#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.h"

namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL_DUMP_OFFSET UNITYSDK_OFFSET(0x163D4C20)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL_READ_OFFSET UNITYSDK_OFFSET(0x163D4BA0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL_SETNULLCOUNT_OFFSET UNITYSDK_OFFSET(0x163D4A90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL_WRITE_OFFSET UNITYSDK_OFFSET(0x163D4AA0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL__CTOR_OFFSET UNITYSDK_OFFSET(0x163D4A80)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectNull_TypeDefinitionIndex = 1151;

	class ObjectNull : public ::System::Object
	{
	public:
		::System::Int32 nullCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL__CTOR_OFFSET))(this);
		}

		::System::Void SetNullCount(::System::Int32 nullCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL_SETNULLCOUNT_OFFSET))(this, nullCount);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL_WRITE_OFFSET))(this, sout);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL_READ_OFFSET))(this, input, binaryHeaderEnum);
		}

		::System::Void Dump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL_DUMP_OFFSET))(this);
		}
	};
}
