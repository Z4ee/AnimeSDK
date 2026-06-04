#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/MessageEnum.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODCALL_DUMP_OFFSET UNITYSDK_OFFSET(0x187ABEC0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODCALL_WRITE_OFFSET UNITYSDK_OFFSET(0x187AB9F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODCALL__CTOR_OFFSET UNITYSDK_OFFSET(0x187ABED0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryMethodCall_TypeDefinitionIndex = 1141;

	class BinaryMethodCall : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* args; // 0x10
		::Il2CppArray<::System::Type*>* argTypes; // 0x18
		::System::String* typeName; // 0x20
		::System::String* methodName; // 0x28
		::System::Object* callContext; // 0x30
		::System::Boolean bArgsPrimitive; // 0x38
		::System::Runtime::Serialization::Formatters::Binary::MessageEnum messageEnum; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODCALL__CTOR_OFFSET))(this);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODCALL_WRITE_OFFSET))(this, a1);
		}

		::System::Void Dump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODCALL_DUMP_OFFSET))(this);
		}
	};
}
