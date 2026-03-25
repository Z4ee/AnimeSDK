#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Linq::Expressions { class BlockExpressionList; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST__GETENUMERATOR_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18490670)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST__GETENUMERATOR_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_LINQ_EXPRESSIONS_EXPRESSION__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18490740)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST__GETENUMERATOR_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x184907A0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST__GETENUMERATOR_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18490750)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST__GETENUMERATOR_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18490660)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST__GETENUMERATOR_D__18__CTOR_OFFSET UNITYSDK_OFFSET(0x18490600)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int BlockExpressionList__GetEnumerator_d__18_TypeDefinitionIndex = 3188;

	class BlockExpressionList__GetEnumerator_d__18 : public ::System::Object
	{
	public:
		::System::Linq::Expressions::BlockExpressionList* __4__this; // 0x10
		::System::Linq::Expressions::Expression* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Int32 _i_5__1; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST__GETENUMERATOR_D__18__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST__GETENUMERATOR_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST__GETENUMERATOR_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* System_Collections_Generic_IEnumerator_System_Linq_Expressions_Expression__get_Current()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST__GETENUMERATOR_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_LINQ_EXPRESSIONS_EXPRESSION__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST__GETENUMERATOR_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST__GETENUMERATOR_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
