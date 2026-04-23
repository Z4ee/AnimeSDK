#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class LambdaExpression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x19EC87F0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETBINARYOPFROMASSIGNMENTOP_OFFSET UNITYSDK_OFFSET(0x19EC79F0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETCONVERSION_OFFSET UNITYSDK_OFFSET(0x19EC85C0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x19EC5590)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x19EC5530)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_CONVERSION_OFFSET UNITYSDK_OFFSET(0x19EC5790)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISLIFTEDLOGICAL_OFFSET UNITYSDK_OFFSET(0x19EC8820)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISLIFTEDTONULL_OFFSET UNITYSDK_OFFSET(0x19EC5B70)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISLIFTED_OFFSET UNITYSDK_OFFSET(0x19EC85D0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISREFERENCECOMPARISON_OFFSET UNITYSDK_OFFSET(0x19EC57A0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x19EC5570)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x19EC5580)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x19EC5560)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_ISOPASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x19EC5550)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEINDEX_OFFSET UNITYSDK_OFFSET(0x19EC6EF0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEMEMBER_OFFSET UNITYSDK_OFFSET(0x19EC6710)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEUSERDEFINEDLIFTED_OFFSET UNITYSDK_OFFSET(0x19EC8990)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEVARIABLE_OFFSET UNITYSDK_OFFSET(0x19EC7810)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCE_OFFSET UNITYSDK_OFFSET(0x19EC66A0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x19EC55A0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19EC5460)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int BinaryExpression_TypeDefinitionIndex = 3170;

	class BinaryExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::Expression* _Left_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _Right_k__BackingField; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION__CTOR_OFFSET))(this, left, right);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_CANREDUCE_OFFSET))(this);
		}

		static ::System::Boolean IsOpAssignment(::System::Linq::Expressions::ExpressionType op)
		{
			return ((::System::Boolean(*)(::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_ISOPASSIGNMENT_OFFSET))(op);
		}

		::System::Linq::Expressions::Expression* get_Right()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_RIGHT_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Left()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_LEFT_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_Method()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_METHOD_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETMETHOD_OFFSET))(this);
		}

		::System::Linq::Expressions::BinaryExpression* Update(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::LambdaExpression* conversion, ::System::Linq::Expressions::Expression* right)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::LambdaExpression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_UPDATE_OFFSET))(this, left, conversion, right);
		}

		::System::Linq::Expressions::Expression* Reduce()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCE_OFFSET))(this);
		}

		static ::System::Linq::Expressions::ExpressionType GetBinaryOpFromAssignmentOp(::System::Linq::Expressions::ExpressionType op)
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETBINARYOPFROMASSIGNMENTOP_OFFSET))(op);
		}

		::System::Linq::Expressions::Expression* ReduceVariable()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEVARIABLE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* ReduceMember()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEMEMBER_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* ReduceIndex()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEINDEX_OFFSET))(this);
		}

		::System::Linq::Expressions::LambdaExpression* get_Conversion()
		{
			return ((::System::Linq::Expressions::LambdaExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_CONVERSION_OFFSET))(this);
		}

		::System::Linq::Expressions::LambdaExpression* GetConversion()
		{
			return ((::System::Linq::Expressions::LambdaExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETCONVERSION_OFFSET))(this);
		}

		::System::Boolean get_IsLifted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISLIFTED_OFFSET))(this);
		}

		::System::Boolean get_IsLiftedToNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISLIFTEDTONULL_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Boolean get_IsLiftedLogical()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISLIFTEDLOGICAL_OFFSET))(this);
		}

		::System::Boolean get_IsReferenceComparison()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISREFERENCECOMPARISON_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* ReduceUserdefinedLifted()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEUSERDEFINEDLIFTED_OFFSET))(this);
		}
	};
}
