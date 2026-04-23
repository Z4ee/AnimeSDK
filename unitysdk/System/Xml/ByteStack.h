#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_BYTESTACK_POP_OFFSET UNITYSDK_OFFSET(0x19F9E040)
#define SYSTEM_XML_BYTESTACK_PUSH_OFFSET UNITYSDK_OFFSET(0x19F9DFB0)
#define SYSTEM_XML_BYTESTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9DF70)

namespace System::Xml
{
	inline static constexpr unsigned int ByteStack_TypeDefinitionIndex = 1783;

	class ByteStack : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* stack; // 0x10
		::System::Int32 growthRate; // 0x18
		::System::Int32 top; // 0x1C
		::System::Int32 size; // 0x20

		::System::Void _ctor(::System::Int32 growthRate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BYTESTACK__CTOR_OFFSET))(this, growthRate);
		}

		::System::Void Push(::System::Byte data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_XML_BYTESTACK_PUSH_OFFSET))(this, data);
		}

		::System::Byte Pop()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BYTESTACK_POP_OFFSET))(this);
		}
	};
}
