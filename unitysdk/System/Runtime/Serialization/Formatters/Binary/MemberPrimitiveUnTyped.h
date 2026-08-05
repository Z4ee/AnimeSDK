#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.h"

namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED_READ_OFFSET UNITYSDK_OFFSET(0x1DCFBD80)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED_SET_OFFSET UNITYSDK_OFFSET(0x1DCFBD40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED_WRITE_OFFSET UNITYSDK_OFFSET(0x1DCFBD50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCFBD30)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int MemberPrimitiveUnTyped_TypeDefinitionIndex = 1195;

	class MemberPrimitiveUnTyped : public ::System::Object
	{
	public:
		::System::Object* value; // 0x10
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE typeInformation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED__CTOR_OFFSET))(this);
		}

		::System::Void Set(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE typeInformation, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED_SET_OFFSET))(this, typeInformation, value);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED_WRITE_OFFSET))(this, sout);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED_READ_OFFSET))(this, input);
		}
	};
}
