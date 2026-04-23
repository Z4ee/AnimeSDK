#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Linq::Expressions { class BlockExpression; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_ADD_OFFSET UNITYSDK_OFFSET(0x19ECB000)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x19ECB050)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x19ECB0A0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x19ECB130)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19ECB460)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19ECB390)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19ECB3C0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19ECAF70)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x19ECAE40)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x19ECAED0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x19ECAF20)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x19ECB410)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19ECAFB0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19ECB4C0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19ECAE30)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int BlockExpressionList_TypeDefinitionIndex = 3189;

	class BlockExpressionList : public ::System::Object
	{
	public:
		::System::Linq::Expressions::Expression* _arg0; // 0x10
		::System::Linq::Expressions::BlockExpression* _block; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::BlockExpression* provider, ::System::Linq::Expressions::Expression* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BlockExpression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST__CTOR_OFFSET))(this, provider, arg0);
		}

		::System::Int32 IndexOf(::System::Linq::Expressions::Expression* item)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_INDEXOF_OFFSET))(this, item);
		}

		::System::Void Insert(::System::Int32 index, ::System::Linq::Expressions::Expression* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_INSERT_OFFSET))(this, index, item);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_REMOVEAT_OFFSET))(this, index);
		}

		::System::Linq::Expressions::Expression* get_Item(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Linq::Expressions::Expression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void Add(::System::Linq::Expressions::Expression* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_ADD_OFFSET))(this, item);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Linq::Expressions::Expression* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_CONTAINS_OFFSET))(this, item);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Linq::Expressions::Expression*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Linq::Expressions::Expression*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean Remove(::System::Linq::Expressions::Expression* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_REMOVE_OFFSET))(this, item);
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
