#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/Tokens.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class OverflowException; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Data { class EvaluateException; }
namespace System::Data { class InvalidExpressionException; }
namespace System::Data { class OperatorInfo; }
namespace System::Data { class SyntaxErrorException; }

#define SYSTEM_DATA_EXPREXCEPTION_AGGREGATEARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E181D70)
#define SYSTEM_DATA_EXPREXCEPTION_AGGREGATEUNBOUND_OFFSET UNITYSDK_OFFSET(0x1E181E80)
#define SYSTEM_DATA_EXPREXCEPTION_AMBIGUOUSBINOP_OFFSET UNITYSDK_OFFSET(0x1E181410)
#define SYSTEM_DATA_EXPREXCEPTION_ARGUMENTTYPEINTEGER_OFFSET UNITYSDK_OFFSET(0x1E1810D0)
#define SYSTEM_DATA_EXPREXCEPTION_ARGUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1E180F40)
#define SYSTEM_DATA_EXPREXCEPTION_BINDFAILURE_OFFSET UNITYSDK_OFFSET(0x1E181C30)
#define SYSTEM_DATA_EXPREXCEPTION_COMPUTENOTAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1E182210)
#define SYSTEM_DATA_EXPREXCEPTION_DATATYPECONVERTION_OFFSET UNITYSDK_OFFSET(0x1E180400)
#define SYSTEM_DATA_EXPREXCEPTION_DATAVALUECONVERTION_OFFSET UNITYSDK_OFFSET(0x1E1805A0)
#define SYSTEM_DATA_EXPREXCEPTION_EVALNOCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E181FC0)
#define SYSTEM_DATA_EXPREXCEPTION_EXPRESSIONTOOCOMPLEX_OFFSET UNITYSDK_OFFSET(0x1E17F880)
#define SYSTEM_DATA_EXPREXCEPTION_EXPRESSIONUNBOUND_OFFSET UNITYSDK_OFFSET(0x1E1820D0)
#define SYSTEM_DATA_EXPREXCEPTION_FILTERCONVERTION_OFFSET UNITYSDK_OFFSET(0x1E182350)
#define SYSTEM_DATA_EXPREXCEPTION_FUNCTIONARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E17FE60)
#define SYSTEM_DATA_EXPREXCEPTION_FUNCTIONARGUMENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x1E17F800)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDDATE_OFFSET UNITYSDK_OFFSET(0x1E180880)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDHOURSARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E1826E0)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDISSYNTAX_OFFSET UNITYSDK_OFFSET(0x1E180E30)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDMINUTESARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E1827F0)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDNAMEBRACKETING_OFFSET UNITYSDK_OFFSET(0x1E181760)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDNAME_OFFSET UNITYSDK_OFFSET(0x1E180740)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDPATTERN_OFFSET UNITYSDK_OFFSET(0x1E180AD0)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDSTRING_OFFSET UNITYSDK_OFFSET(0x1E17FAD0)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDTIMEZONERANGE_OFFSET UNITYSDK_OFFSET(0x1E182900)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDTYPE_OFFSET UNITYSDK_OFFSET(0x1E1825A0)
#define SYSTEM_DATA_EXPREXCEPTION_INVOKEARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E17F290)
#define SYSTEM_DATA_EXPREXCEPTION_INWITHOUTLIST_OFFSET UNITYSDK_OFFSET(0x1E180D20)
#define SYSTEM_DATA_EXPREXCEPTION_INWITHOUTPARENTHESES_OFFSET UNITYSDK_OFFSET(0x1E180C10)
#define SYSTEM_DATA_EXPREXCEPTION_LOOKUPARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E182490)
#define SYSTEM_DATA_EXPREXCEPTION_MISMATCHKINDANDTIMESPAN_OFFSET UNITYSDK_OFFSET(0x1E182A10)
#define SYSTEM_DATA_EXPREXCEPTION_MISSINGOPERANDBEFORE_OFFSET UNITYSDK_OFFSET(0x1E1818A0)
#define SYSTEM_DATA_EXPREXCEPTION_MISSINGOPERAND_OFFSET UNITYSDK_OFFSET(0x1E17F410)
#define SYSTEM_DATA_EXPREXCEPTION_MISSINGOPERATOR_OFFSET UNITYSDK_OFFSET(0x1E17F580)
#define SYSTEM_DATA_EXPREXCEPTION_MISSINGRIGHTPAREN_OFFSET UNITYSDK_OFFSET(0x1E17FFA0)
#define SYSTEM_DATA_EXPREXCEPTION_NONCONSTANTARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E1809C0)
#define SYSTEM_DATA_EXPREXCEPTION_NYI_OFFSET UNITYSDK_OFFSET(0x1E17F2D0)
#define SYSTEM_DATA_EXPREXCEPTION_OVERFLOW_OFFSET UNITYSDK_OFFSET(0x1E17AB90)
#define SYSTEM_DATA_EXPREXCEPTION_SYNTAXERROR_OFFSET UNITYSDK_OFFSET(0x1E17FD50)
#define SYSTEM_DATA_EXPREXCEPTION_TOOMANYRIGHTPARENTHESES_OFFSET UNITYSDK_OFFSET(0x1E1819E0)
#define SYSTEM_DATA_EXPREXCEPTION_TYPEMISMATCHINBINOP_OFFSET UNITYSDK_OFFSET(0x1E181230)
#define SYSTEM_DATA_EXPREXCEPTION_TYPEMISMATCH_OFFSET UNITYSDK_OFFSET(0x1E17F6C0)
#define SYSTEM_DATA_EXPREXCEPTION_UNBOUNDNAME_OFFSET UNITYSDK_OFFSET(0x1E17F990)
#define SYSTEM_DATA_EXPREXCEPTION_UNDEFINEDFUNCTION_OFFSET UNITYSDK_OFFSET(0x1E17FC10)
#define SYSTEM_DATA_EXPREXCEPTION_UNKNOWNTOKEN_1_OFFSET UNITYSDK_OFFSET(0x1E180210)
#define SYSTEM_DATA_EXPREXCEPTION_UNKNOWNTOKEN_OFFSET UNITYSDK_OFFSET(0x1E1800B0)
#define SYSTEM_DATA_EXPREXCEPTION_UNRESOLVEDRELATION_OFFSET UNITYSDK_OFFSET(0x1E181AF0)
#define SYSTEM_DATA_EXPREXCEPTION_UNSUPPORTEDDATATYPE_OFFSET UNITYSDK_OFFSET(0x1E182B20)
#define SYSTEM_DATA_EXPREXCEPTION_UNSUPPORTEDOPERATOR_OFFSET UNITYSDK_OFFSET(0x1E1815F0)
#define SYSTEM_DATA_EXPREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E17EEC0)
#define SYSTEM_DATA_EXPREXCEPTION__EVAL_1_OFFSET UNITYSDK_OFFSET(0x1E17F1D0)
#define SYSTEM_DATA_EXPREXCEPTION__EVAL_OFFSET UNITYSDK_OFFSET(0x1E17F110)
#define SYSTEM_DATA_EXPREXCEPTION__EXPR_OFFSET UNITYSDK_OFFSET(0x1E17EF90)
#define SYSTEM_DATA_EXPREXCEPTION__OVERFLOW_OFFSET UNITYSDK_OFFSET(0x1E17EED0)
#define SYSTEM_DATA_EXPREXCEPTION__SYNTAX_OFFSET UNITYSDK_OFFSET(0x1E17F050)

namespace System::Data
{
	inline static constexpr unsigned int ExprException_TypeDefinitionIndex = 38643;

	class ExprException : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION__CTOR_OFFSET))(this);
		}

		static ::System::OverflowException* _Overflow(::System::String* error)
		{
			return ((::System::OverflowException*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION__OVERFLOW_OFFSET))(error);
		}

		static ::System::Data::InvalidExpressionException* _Expr(::System::String* error)
		{
			return ((::System::Data::InvalidExpressionException*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION__EXPR_OFFSET))(error);
		}

		static ::System::Data::SyntaxErrorException* _Syntax(::System::String* error)
		{
			return ((::System::Data::SyntaxErrorException*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION__SYNTAX_OFFSET))(error);
		}

		static ::System::Data::EvaluateException* _Eval(::System::String* error)
		{
			return ((::System::Data::EvaluateException*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION__EVAL_OFFSET))(error);
		}

		static ::System::Data::EvaluateException* _Eval_1(::System::String* error, ::System::Exception* innerException)
		{
			return ((::System::Data::EvaluateException*(*)(::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION__EVAL_1_OFFSET))(error, innerException);
		}

		static ::System::Exception* InvokeArgument()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVOKEARGUMENT_OFFSET))();
		}

		static ::System::Exception* NYI(::System::String* moreinfo)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_NYI_OFFSET))(moreinfo);
		}

		static ::System::Exception* MissingOperand(::System::Data::OperatorInfo* before)
		{
			return ((::System::Exception*(*)(::System::Data::OperatorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_MISSINGOPERAND_OFFSET))(before);
		}

		static ::System::Exception* MissingOperator(::System::String* token)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_MISSINGOPERATOR_OFFSET))(token);
		}

		static ::System::Exception* TypeMismatch(::System::String* expr)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_TYPEMISMATCH_OFFSET))(expr);
		}

		static ::System::Exception* FunctionArgumentOutOfRange(::System::String* arg, ::System::String* func)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_FUNCTIONARGUMENTOUTOFRANGE_OFFSET))(arg, func);
		}

		static ::System::Exception* ExpressionTooComplex()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_EXPRESSIONTOOCOMPLEX_OFFSET))();
		}

		static ::System::Exception* UnboundName(::System::String* name)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNBOUNDNAME_OFFSET))(name);
		}

		static ::System::Exception* InvalidString(::System::String* str)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDSTRING_OFFSET))(str);
		}

		static ::System::Exception* UndefinedFunction(::System::String* name)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNDEFINEDFUNCTION_OFFSET))(name);
		}

		static ::System::Exception* SyntaxError()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_SYNTAXERROR_OFFSET))();
		}

		static ::System::Exception* FunctionArgumentCount(::System::String* name)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_FUNCTIONARGUMENTCOUNT_OFFSET))(name);
		}

		static ::System::Exception* MissingRightParen()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_MISSINGRIGHTPAREN_OFFSET))();
		}

		static ::System::Exception* UnknownToken(::System::String* token, ::System::Int32 position)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNKNOWNTOKEN_OFFSET))(token, position);
		}

		static ::System::Exception* UnknownToken_1(::System::Data::Tokens tokExpected, ::System::Data::Tokens tokCurr, ::System::Int32 position)
		{
			return ((::System::Exception*(*)(::System::Data::Tokens, ::System::Data::Tokens, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNKNOWNTOKEN_1_OFFSET))(tokExpected, tokCurr, position);
		}

		static ::System::Exception* DatatypeConvertion(::System::Type* type1, ::System::Type* type2)
		{
			return ((::System::Exception*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_DATATYPECONVERTION_OFFSET))(type1, type2);
		}

		static ::System::Exception* DatavalueConvertion(::System::Object* value, ::System::Type* type, ::System::Exception* innerException)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Type*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_DATAVALUECONVERTION_OFFSET))(value, type, innerException);
		}

		static ::System::Exception* InvalidName(::System::String* name)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDNAME_OFFSET))(name);
		}

		static ::System::Exception* InvalidDate(::System::String* date)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDDATE_OFFSET))(date);
		}

		static ::System::Exception* NonConstantArgument()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_NONCONSTANTARGUMENT_OFFSET))();
		}

		static ::System::Exception* InvalidPattern(::System::String* pat)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDPATTERN_OFFSET))(pat);
		}

		static ::System::Exception* InWithoutParentheses()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INWITHOUTPARENTHESES_OFFSET))();
		}

		static ::System::Exception* InWithoutList()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INWITHOUTLIST_OFFSET))();
		}

		static ::System::Exception* InvalidIsSyntax()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDISSYNTAX_OFFSET))();
		}

		static ::System::Exception* Overflow(::System::Type* type)
		{
			return ((::System::Exception*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_OVERFLOW_OFFSET))(type);
		}

		static ::System::Exception* ArgumentType(::System::String* function, ::System::Int32 arg, ::System::Type* type)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_ARGUMENTTYPE_OFFSET))(function, arg, type);
		}

		static ::System::Exception* ArgumentTypeInteger(::System::String* function, ::System::Int32 arg)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_ARGUMENTTYPEINTEGER_OFFSET))(function, arg);
		}

		static ::System::Exception* TypeMismatchInBinop(::System::Int32 op, ::System::Type* type1, ::System::Type* type2)
		{
			return ((::System::Exception*(*)(::System::Int32, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_TYPEMISMATCHINBINOP_OFFSET))(op, type1, type2);
		}

		static ::System::Exception* AmbiguousBinop(::System::Int32 op, ::System::Type* type1, ::System::Type* type2)
		{
			return ((::System::Exception*(*)(::System::Int32, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_AMBIGUOUSBINOP_OFFSET))(op, type1, type2);
		}

		static ::System::Exception* UnsupportedOperator(::System::Int32 op)
		{
			return ((::System::Exception*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNSUPPORTEDOPERATOR_OFFSET))(op);
		}

		static ::System::Exception* InvalidNameBracketing(::System::String* name)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDNAMEBRACKETING_OFFSET))(name);
		}

		static ::System::Exception* MissingOperandBefore(::System::String* op)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_MISSINGOPERANDBEFORE_OFFSET))(op);
		}

		static ::System::Exception* TooManyRightParentheses()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_TOOMANYRIGHTPARENTHESES_OFFSET))();
		}

		static ::System::Exception* UnresolvedRelation(::System::String* name, ::System::String* expr)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNRESOLVEDRELATION_OFFSET))(name, expr);
		}

		static ::System::Data::EvaluateException* BindFailure(::System::String* relationName)
		{
			return ((::System::Data::EvaluateException*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_BINDFAILURE_OFFSET))(relationName);
		}

		static ::System::Exception* AggregateArgument()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_AGGREGATEARGUMENT_OFFSET))();
		}

		static ::System::Exception* AggregateUnbound(::System::String* expr)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_AGGREGATEUNBOUND_OFFSET))(expr);
		}

		static ::System::Exception* EvalNoContext()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_EVALNOCONTEXT_OFFSET))();
		}

		static ::System::Exception* ExpressionUnbound(::System::String* expr)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_EXPRESSIONUNBOUND_OFFSET))(expr);
		}

		static ::System::Exception* ComputeNotAggregate(::System::String* expr)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_COMPUTENOTAGGREGATE_OFFSET))(expr);
		}

		static ::System::Exception* FilterConvertion(::System::String* expr)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_FILTERCONVERTION_OFFSET))(expr);
		}

		static ::System::Exception* LookupArgument()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_LOOKUPARGUMENT_OFFSET))();
		}

		static ::System::Exception* InvalidType(::System::String* typeName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDTYPE_OFFSET))(typeName);
		}

		static ::System::Exception* InvalidHoursArgument()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDHOURSARGUMENT_OFFSET))();
		}

		static ::System::Exception* InvalidMinutesArgument()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDMINUTESARGUMENT_OFFSET))();
		}

		static ::System::Exception* InvalidTimeZoneRange()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDTIMEZONERANGE_OFFSET))();
		}

		static ::System::Exception* MismatchKindandTimeSpan()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_MISMATCHKINDANDTIMESPAN_OFFSET))();
		}

		static ::System::Exception* UnsupportedDataType(::System::Type* type)
		{
			return ((::System::Exception*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNSUPPORTEDDATATYPE_OFFSET))(type);
		}
	};
}
