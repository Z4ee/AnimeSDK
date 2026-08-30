#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class Stack; }

#define SYSTEM_COLLECTIONS_STACK_STACKENUMERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x1A51BF70)
#define SYSTEM_COLLECTIONS_STACK_STACKENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A51C100)
#define SYSTEM_COLLECTIONS_STACK_STACKENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A51C010)
#define SYSTEM_COLLECTIONS_STACK_STACKENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A51C1B0)
#define SYSTEM_COLLECTIONS_STACK_STACKENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A51BD30)

namespace System::Collections
{
	inline static constexpr unsigned int Stack_StackEnumerator_TypeDefinitionIndex = 1504;

	class Stack_StackEnumerator : public ::System::Object
	{
	public:
		::System::Collections::Stack* _stack; // 0x10
		::System::Object* currentElement; // 0x18
		::System::Int32 _version; // 0x20
		::System::Int32 _index; // 0x24

		::System::Void _ctor(::System::Collections::Stack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Stack*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_STACKENUMERATOR__CTOR_OFFSET))(this, a1);
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
