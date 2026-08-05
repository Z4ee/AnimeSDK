#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/MessageEnum.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODCALL_WRITE_OFFSET UNITYSDK_OFFSET(0x1DCFBA60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODCALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCFBD20)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryMethodCall_TypeDefinitionIndex = 1186;

	class BinaryMethodCall : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* args; // 0x10
		::System::Object* callContext; // 0x18
		::System::String* methodName; // 0x20
		::Il2CppArray<::System::Type*>* argTypes; // 0x28
		::System::String* typeName; // 0x30
		::System::Boolean bArgsPrimitive; // 0x38
		::System::Runtime::Serialization::Formatters::Binary::MessageEnum messageEnum; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODCALL__CTOR_OFFSET))(this);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODCALL_WRITE_OFFSET))(this, sout);
		}
	};
}
