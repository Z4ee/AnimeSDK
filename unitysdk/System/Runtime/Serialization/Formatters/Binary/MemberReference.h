#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERREFERENCE_READ_OFFSET UNITYSDK_OFFSET(0x1DDE73F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERREFERENCE_WRITE_OFFSET UNITYSDK_OFFSET(0x1DDE7390)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE7380)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int MemberReference_TypeDefinitionIndex = 1196;

	class MemberReference : public ::System::Object
	{
	public:
		::System::Int32 idRef; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERREFERENCE_WRITE_OFFSET))(this, sout);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERREFERENCE_READ_OFFSET))(this, input);
		}
	};
}
