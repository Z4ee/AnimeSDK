#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class LambdaExpression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1BDCA860)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_CREATE_OFFSET UNITYSDK_OFFSET(0x1BDCA890)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETBINARYOPFROMASSIGNMENTOP_OFFSET UNITYSDK_OFFSET(0x1BDCA5C0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETCONVERSION_OFFSET UNITYSDK_OFFSET(0x1BDCA620)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x1BDC8EF0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1BDC8E90)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_CONVERSION_OFFSET UNITYSDK_OFFSET(0x1BDC90F0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISLIFTEDLOGICAL_OFFSET UNITYSDK_OFFSET(0x1BDCAB10)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISLIFTEDTONULL_OFFSET UNITYSDK_OFFSET(0x1BDC9200)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISLIFTED_OFFSET UNITYSDK_OFFSET(0x1BDCA630)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISREFERENCECOMPARISON_OFFSET UNITYSDK_OFFSET(0x1BDC9100)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1BDC8ED0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1BDC8EE0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1BDC8EC0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_ISOPASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x1BDC8EB0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEINDEX_OFFSET UNITYSDK_OFFSET(0x1BDC9AD0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BDC9310)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEUSERDEFINEDLIFTED_OFFSET UNITYSDK_OFFSET(0x1BDCAC90)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1BDCA3E0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCE_OFFSET UNITYSDK_OFFSET(0x1BDC92A0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BDC8F00)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BDCB510)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC8E20)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int BinaryExpression_TypeDefinitionIndex = 4393;

	class BinaryExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::Expression* _Left_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _Right_k__BackingField; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION__CTOR_OFFSET))(this, left, right);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION__CTOR_1_OFFSET))(this);
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

		static ::System::Linq::Expressions::BinaryExpression* Create(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Type* type, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_CREATE_OFFSET))(nodeType, left, right, type, method, conversion);
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
