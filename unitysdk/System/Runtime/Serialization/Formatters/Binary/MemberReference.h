#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERREFERENCE_DUMP_OFFSET UNITYSDK_OFFSET(0x163D31C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERREFERENCE_READ_OFFSET UNITYSDK_OFFSET(0x163D3180)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERREFERENCE_SET_OFFSET UNITYSDK_OFFSET(0x163D3110)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERREFERENCE_WRITE_OFFSET UNITYSDK_OFFSET(0x163D3120)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x163D3100)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int MemberReference_TypeDefinitionIndex = 1150;

	class MemberReference : public ::System::Object
	{
	public:
		::System::Int32 idRef; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Void Set(::System::Int32 idRef)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERREFERENCE_SET_OFFSET))(this, idRef);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERREFERENCE_WRITE_OFFSET))(this, sout);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERREFERENCE_READ_OFFSET))(this, input);
		}

		::System::Void Dump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERREFERENCE_DUMP_OFFSET))(this);
		}
	};
}
