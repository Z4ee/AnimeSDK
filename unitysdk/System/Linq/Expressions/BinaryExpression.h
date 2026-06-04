#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class LambdaExpression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1AD3F420)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETBINARYOPFROMASSIGNMENTOP_OFFSET UNITYSDK_OFFSET(0x1AD3E620)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETCONVERSION_OFFSET UNITYSDK_OFFSET(0x1AD3F200)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x1AD3C340)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1AD3C2E0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_CONVERSION_OFFSET UNITYSDK_OFFSET(0x1AD3C540)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISLIFTEDLOGICAL_OFFSET UNITYSDK_OFFSET(0x1AD3F450)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISLIFTEDTONULL_OFFSET UNITYSDK_OFFSET(0x1AD3C920)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISLIFTED_OFFSET UNITYSDK_OFFSET(0x1AD3F210)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_ISREFERENCECOMPARISON_OFFSET UNITYSDK_OFFSET(0x1AD3C550)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1AD3C320)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1AD3C330)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1AD3C310)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_ISOPASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x1AD3C300)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEINDEX_OFFSET UNITYSDK_OFFSET(0x1AD3DB90)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEMEMBER_OFFSET UNITYSDK_OFFSET(0x1AD3D4C0)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEUSERDEFINEDLIFTED_OFFSET UNITYSDK_OFFSET(0x1AD3F620)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1AD3E440)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCE_OFFSET UNITYSDK_OFFSET(0x1AD3D450)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AD3C350)
#define SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3C210)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int BinaryExpression_TypeDefinitionIndex = 3171;

	class BinaryExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::Expression* _Right_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _Left_k__BackingField; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GET_CANREDUCE_OFFSET))(this);
		}

		static ::System::Boolean IsOpAssignment(::System::Linq::Expressions::ExpressionType a1)
		{
			return ((::System::Boolean(*)(::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_ISOPASSIGNMENT_OFFSET))(a1);
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

		::System::Linq::Expressions::BinaryExpression* Update(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::LambdaExpression* a2, ::System::Linq::Expressions::Expression* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::LambdaExpression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_UPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Linq::Expressions::Expression* Reduce()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_REDUCE_OFFSET))(this);
		}

		static ::System::Linq::Expressions::ExpressionType GetBinaryOpFromAssignmentOp(::System::Linq::Expressions::ExpressionType a1)
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_GETBINARYOPFROMASSIGNMENTOP_OFFSET))(a1);
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

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BINARYEXPRESSION_ACCEPT_OFFSET))(this, a1);
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
