#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Linq::Expressions { class BlockExpression; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1AD41A00)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AD41A50)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1AD41AA0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x1AD41B30)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AD41E30)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AD41D60)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1AD41D90)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AD41970)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1AD41840)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x1AD418D0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1AD41920)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1AD41DE0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AD419B0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AD41E90)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD41830)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int BlockExpressionList_TypeDefinitionIndex = 3190;

	class BlockExpressionList : public ::System::Object
	{
	public:
		::System::Linq::Expressions::BlockExpression* _block; // 0x10
		::System::Linq::Expressions::Expression* _arg0; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::BlockExpression* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BlockExpression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 IndexOf(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_INDEXOF_OFFSET))(this, a1);
		}

		::System::Void Insert(::System::Int32 a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_INSERT_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_REMOVEAT_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* get_Item(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Add(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_ADD_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Linq::Expressions::Expression*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Linq::Expressions::Expression*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean Remove(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_REMOVE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Linq::Expressions::Expression*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
