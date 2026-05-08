#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/MessageEnum.h"

namespace System { class Type; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN_WRITE_OFFSET UNITYSDK_OFFSET(0x18C6C8E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C6C840)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN__CTOR_OFFSET UNITYSDK_OFFSET(0x18C6C8D0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryMethodReturn_TypeDefinitionIndex = 1188;

	class BinaryMethodReturn : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_instanceOfVoid()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BinaryMethodReturn_TypeDefinitionIndex)->GetStaticField(0x10A0);
		}
		::System::Object* returnValue; // 0x10
		::Il2CppArray<::System::Type*>* argTypes; // 0x18
		::System::Object* callContext; // 0x20
		::Il2CppArray<::System::Object*>* args; // 0x28
		::System::Type* returnType; // 0x30
		::System::Runtime::Serialization::Formatters::Binary::MessageEnum messageEnum; // 0x38
		::System::Boolean bArgsPrimitive; // 0x3C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN__CTOR_OFFSET))(this);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN_WRITE_OFFSET))(this, sout);
		}
	};
}
