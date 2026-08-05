#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ParameterExpression; }
namespace System::Reflection::Emit { class MethodBuilder; }
namespace System::Runtime::CompilerServices { class DebugInfoGenerator; }

#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILETOMETHOD_1_OFFSET UNITYSDK_OFFSET(0x1F75BDF0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILETOMETHOD_OFFSET UNITYSDK_OFFSET(0x1F75BDB0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILE_1_OFFSET UNITYSDK_OFFSET(0x1F75BCF0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILE_2_OFFSET UNITYSDK_OFFSET(0x1F75BD60)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILE_OFFSET UNITYSDK_OFFSET(0x1F75BC80)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GETORMAKEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1F75BB50)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0x1F75BBC0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_BODY_OFFSET UNITYSDK_OFFSET(0x1F75BAC0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NAMECORE_OFFSET UNITYSDK_OFFSET(0x1F75BAB0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1F75BA90)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1F75BA60)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x1F75BC30)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1F75BA70)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1F75BAD0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TAILCALLCORE_OFFSET UNITYSDK_OFFSET(0x1F75BB40)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TAILCALL_OFFSET UNITYSDK_OFFSET(0x1F75BB20)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F75BA40)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IPARAMETERPROVIDER_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0x1F75BBA0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IPARAMETERPROVIDER_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x1F75BC10)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F75BD70)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F75B9E0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int LambdaExpression_TypeDefinitionIndex = 4491;

	class LambdaExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::Expression* _body; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::Expression* body)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION__CTOR_OFFSET))(this, body);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION__CTOR_1_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* get_Parameters()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_PARAMETERS_OFFSET))(this);
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

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* GetOrMakeParameters()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GETORMAKEPARAMETERS_OFFSET))(this);
		}

		::System::Linq::Expressions::ParameterExpression* System_Linq_Expressions_IParameterProvider_GetParameter(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IPARAMETERPROVIDER_GETPARAMETER_OFFSET))(this, index);
		}

		::System::Linq::Expressions::ParameterExpression* GetParameter(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GETPARAMETER_OFFSET))(this, index);
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

		::System::Delegate* Compile_1(::System::Boolean preferInterpretation)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILE_1_OFFSET))(this, preferInterpretation);
		}

		::System::Delegate* Compile_2(::System::Runtime::CompilerServices::DebugInfoGenerator* debugInfoGenerator)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Runtime::CompilerServices::DebugInfoGenerator*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILE_2_OFFSET))(this, debugInfoGenerator);
		}

		::System::Void CompileToMethod(::System::Reflection::Emit::MethodBuilder* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::MethodBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILETOMETHOD_OFFSET))(this, method);
		}

		::System::Void CompileToMethod_1(::System::Reflection::Emit::MethodBuilder* method, ::System::Runtime::CompilerServices::DebugInfoGenerator* debugInfoGenerator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::MethodBuilder*, ::System::Runtime::CompilerServices::DebugInfoGenerator*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILETOMETHOD_1_OFFSET))(this, method, debugInfoGenerator);
		}
	};
}
