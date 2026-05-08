#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class Stack; }

#define SYSTEM_COLLECTIONS_STACK_STACKENUMERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x193CEBD0)
#define SYSTEM_COLLECTIONS_STACK_STACKENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x193CED80)
#define SYSTEM_COLLECTIONS_STACK_STACKENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x193CEC70)
#define SYSTEM_COLLECTIONS_STACK_STACKENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x193CEE30)
#define SYSTEM_COLLECTIONS_STACK_STACKENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x193CEBA0)

namespace System::Collections
{
	inline static constexpr unsigned int Stack_StackEnumerator_TypeDefinitionIndex = 1491;

	class Stack_StackEnumerator : public ::System::Object
	{
	public:
		::System::Object* currentElement; // 0x10
		::System::Collections::Stack* _stack; // 0x18
		::System::Int32 _index; // 0x20
		::System::Int32 _version; // 0x24

		::System::Void _ctor(::System::Collections::Stack* stack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Stack*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_STACKENUMERATOR__CTOR_OFFSET))(this, stack);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_STACKENUMERATOR_CLONE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_STACKENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_STACKENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_STACKENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
