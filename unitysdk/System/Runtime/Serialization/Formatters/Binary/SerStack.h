#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_INCREASECAPACITY_OFFSET UNITYSDK_OFFSET(0x187BAF30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x187BA0E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_PEEKPEEK_OFFSET UNITYSDK_OFFSET(0x187BAF90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_PEEK_OFFSET UNITYSDK_OFFSET(0x187B3CE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_POP_OFFSET UNITYSDK_OFFSET(0x187B3260)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_PUSH_OFFSET UNITYSDK_OFFSET(0x187B3170)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x187B0960)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int SerStack_TypeDefinitionIndex = 1184;

	class SerStack : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* objects; // 0x10
		::System::String* stackId; // 0x18
		::System::Int32 top; // 0x20

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK__CTOR_OFFSET))(this, a1);
		}

		::System::Void Push(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_PUSH_OFFSET))(this, a1);
		}

		::System::Object* Pop()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_POP_OFFSET))(this);
		}

		::System::Void IncreaseCapacity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_INCREASECAPACITY_OFFSET))(this);
		}

		::System::Object* Peek()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_PEEK_OFFSET))(this);
		}

		::System::Object* PeekPeek()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_PEEKPEEK_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_ISEMPTY_OFFSET))(this);
		}
	};
}
