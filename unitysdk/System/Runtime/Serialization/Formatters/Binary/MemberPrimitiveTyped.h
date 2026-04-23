#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.h"

namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED_DUMP_OFFSET UNITYSDK_OFFSET(0x179FF980)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED_READ_OFFSET UNITYSDK_OFFSET(0x179FF930)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED_SET_OFFSET UNITYSDK_OFFSET(0x179FF8B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED_WRITE_OFFSET UNITYSDK_OFFSET(0x179FF8C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED__CTOR_OFFSET UNITYSDK_OFFSET(0x179FF8A0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int MemberPrimitiveTyped_TypeDefinitionIndex = 1147;

	class MemberPrimitiveTyped : public ::System::Object
	{
	public:
		::System::Object* value; // 0x10
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE primitiveTypeEnum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED__CTOR_OFFSET))(this);
		}

		::System::Void Set(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE primitiveTypeEnum, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED_SET_OFFSET))(this, primitiveTypeEnum, value);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED_WRITE_OFFSET))(this, sout);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED_READ_OFFSET))(this, input);
		}

		::System::Void Dump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED_DUMP_OFFSET))(this);
		}
	};
}
