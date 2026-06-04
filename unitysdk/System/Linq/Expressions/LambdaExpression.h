#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions { class ParameterExpression; }
namespace System::Runtime::CompilerServices { class DebugInfoGenerator; }

#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILE_1_OFFSET UNITYSDK_OFFSET(0x1ADB4870)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILE_2_OFFSET UNITYSDK_OFFSET(0x1ADB48E0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILE_OFFSET UNITYSDK_OFFSET(0x1ADB4800)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0x1ADB4740)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_BODY_OFFSET UNITYSDK_OFFSET(0x1ADB4690)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NAMECORE_OFFSET UNITYSDK_OFFSET(0x1ADB4680)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1ADB4660)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1ADB4650)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x1ADB47B0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1ADB46A0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TAILCALLCORE_OFFSET UNITYSDK_OFFSET(0x1ADB4710)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TAILCALL_OFFSET UNITYSDK_OFFSET(0x1ADB46F0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1ADB4630)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IPARAMETERPROVIDER_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0x1ADB4720)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IPARAMETERPROVIDER_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x1ADB4790)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB45D0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int LambdaExpression_TypeDefinitionIndex = 3217;

	class LambdaExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::Expression* _body; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION__CTOR_OFFSET))(this, a1);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NAME_OFFSET))(this);
		}

		::System::String* get_NameCore()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NAMECORE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Body()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_BODY_OFFSET))(this);
		}

		::System::Type* get_ReturnType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_RETURNTYPE_OFFSET))(this);
		}

		::System::Boolean get_TailCall()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TAILCALL_OFFSET))(this);
		}

		::System::Boolean get_TailCallCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TAILCALLCORE_OFFSET))(this);
		}

		::System::Linq::Expressions::ParameterExpression* System_Linq_Expressions_IParameterProvider_GetParameter(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IPARAMETERPROVIDER_GETPARAMETER_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::ParameterExpression* GetParameter(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GETPARAMETER_OFFSET))(this, a1);
		}

		::System::Int32 System_Linq_Expressions_IParameterProvider_get_ParameterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IPARAMETERPROVIDER_GET_PARAMETERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_ParameterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_PARAMETERCOUNT_OFFSET))(this);
		}

		::System::Delegate* Compile()
		{
			return ((::System::Delegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILE_OFFSET))(this);
		}

		::System::Delegate* Compile_1(::System::Boolean a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILE_1_OFFSET))(this, a1);
		}

		::System::Delegate* Compile_2(::System::Runtime::CompilerServices::DebugInfoGenerator* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Runtime::CompilerServices::DebugInfoGenerator*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILE_2_OFFSET))(this, a1);
		}
	};
}
