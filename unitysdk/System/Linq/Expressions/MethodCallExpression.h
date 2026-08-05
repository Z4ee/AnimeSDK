#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1F47B6D0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1F47B750)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F47B4E0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1F47B680)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1F47B7A0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1F47B550)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1F47B530)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1F47B4F0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x1F47B540)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F47B500)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_REWRITE_OFFSET UNITYSDK_OFFSET(0x1F47B700)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_SAMEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1F47B630)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F47B560)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F47B7F0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F47B480)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MethodCallExpression_TypeDefinitionIndex = 4511;

	class MethodCallExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Reflection::MethodInfo* _Method_k__BackingField; // 0x10

		::System::Void _ctor(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION__CTOR_OFFSET))(this, method);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION__CTOR_1_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetInstance()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GETINSTANCE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_Method()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_METHOD_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Object()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_OBJECT_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_Arguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::Linq::Expressions::MethodCallExpression* Update(::System::Linq::Expressions::Expression* object, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_UPDATE_OFFSET))(this, object, arguments);
		}

		::System::Boolean SameArguments(::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_SAMEARGUMENTS_OFFSET))(this, arguments);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeArguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GETORMAKEARGUMENTS_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* instance, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_REWRITE_OFFSET))(this, instance, args);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GETARGUMENT_OFFSET))(this, index);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_ARGUMENTCOUNT_OFFSET))(this);
		}
	};
}
