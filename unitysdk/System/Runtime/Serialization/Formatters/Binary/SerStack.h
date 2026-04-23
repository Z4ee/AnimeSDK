#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_INCREASECAPACITY_OFFSET UNITYSDK_OFFSET(0x17A0C410)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x17A0B4F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_PEEKPEEK_OFFSET UNITYSDK_OFFSET(0x17A0C470)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_PEEK_OFFSET UNITYSDK_OFFSET(0x17A04D30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_POP_OFFSET UNITYSDK_OFFSET(0x17A04200)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_PUSH_OFFSET UNITYSDK_OFFSET(0x17A04100)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x17A018D0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int SerStack_TypeDefinitionIndex = 1185;

	class SerStack : public ::System::Object
	{
	public:
		::System::String* stackId; // 0x10
		::Il2CppArray<::System::Object*>* objects; // 0x18
		::System::Int32 top; // 0x20

		::System::Void _ctor(::System::String* stackId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK__CTOR_OFFSET))(this, stackId);
		}

		::System::Void Push(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERSTACK_PUSH_OFFSET))(this, obj);
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
