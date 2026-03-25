#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LabelScopeKind.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LocalDefinition.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class BinaryExpression; }
namespace System::Linq::Expressions { class BlockExpression; }
namespace System::Linq::Expressions { class ElementInit; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class IArgumentProvider; }
namespace System::Linq::Expressions { class IndexExpression; }
namespace System::Linq::Expressions { class LabelTarget; }
namespace System::Linq::Expressions { class LambdaExpression; }
namespace System::Linq::Expressions { class MemberBinding; }
namespace System::Linq::Expressions { class ParameterExpression; }
namespace System::Linq::Expressions { class StackGuard; }
namespace System::Linq::Expressions { class SwitchExpression; }
namespace System::Linq::Expressions { class TryExpression; }
namespace System::Linq::Expressions { class UnaryExpression; }
namespace System::Linq::Expressions::Interpreter { class ByRefUpdater; }
namespace System::Linq::Expressions::Interpreter { class DebugInfo; }
namespace System::Linq::Expressions::Interpreter { class InstructionList; }
namespace System::Linq::Expressions::Interpreter { class Interpreter; }
namespace System::Linq::Expressions::Interpreter { class LabelInfo; }
namespace System::Linq::Expressions::Interpreter { class LabelScopeInfo; }
namespace System::Linq::Expressions::Interpreter { class LightDelegateCreator; }
namespace System::Linq::Expressions::Interpreter { class LocalVariable; }
namespace System::Linq::Expressions::Interpreter { class LocalVariables; }
namespace System::Linq::Expressions::Interpreter { template <typename T1, typename T2> class HybridReferenceDictionary_2; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_CHECKRETHROW_OFFSET UNITYSDK_OFFSET(0x184E2430)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEADDRESS_OFFSET UNITYSDK_OFFSET(0x184E46A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEANDALSOBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184DE190)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEARITHMETIC_OFFSET UNITYSDK_OFFSET(0x184DB9A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEARRAYINDEXADDRESS_OFFSET UNITYSDK_OFFSET(0x184E53F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEASSIGNBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184D99E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEASVOID_OFFSET UNITYSDK_OFFSET(0x184D8720)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184D9B00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEBLOCKEND_OFFSET UNITYSDK_OFFSET(0x184D8670)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEBLOCKEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184D7FB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEBLOCKSTART_OFFSET UNITYSDK_OFFSET(0x184D8110)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECOALESCEBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E7370)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECOMPARISON_OFFSET UNITYSDK_OFFSET(0x184DBED0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECONDITIONALEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184DF9A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECONSTANTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184D7540)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECONVERTTOTYPE_OFFSET UNITYSDK_OFFSET(0x184DCE90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECONVERTUNARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184DC380)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEDEBUGINFOEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E6CF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEDEFAULTEXPRESSION_1_OFFSET UNITYSDK_OFFSET(0x184D7640)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEDEFAULTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184D75F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEEQUAL_OFFSET UNITYSDK_OFFSET(0x184DBD30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEGETBOXEDVARIABLE_OFFSET UNITYSDK_OFFSET(0x184D7C30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEGETVARIABLE_OFFSET UNITYSDK_OFFSET(0x184D79C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEGOTOEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E1970)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEINDEXASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x184D8BF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEINDEXEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184D88C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEINVOCATIONEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E7B00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELABELEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E1720)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELAMBDAEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E7160)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELIFTEDLOGICALBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184DE700)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELISTINITEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E7D00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELISTINIT_OFFSET UNITYSDK_OFFSET(0x184E7D70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELOGICALBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184DE210)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELOOPEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184DFDF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBERASSIGNMENT_1_OFFSET UNITYSDK_OFFSET(0x184D9250)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBERASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x184D9180)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBEREXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E6460)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBERINITEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E82C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBERINIT_OFFSET UNITYSDK_OFFSET(0x184E8330)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBER_OFFSET UNITYSDK_OFFSET(0x184E64F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMETHODCALLEXPRESSION_1_OFFSET UNITYSDK_OFFSET(0x184E3F70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMETHODCALLEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E3EE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMETHODLOGICALBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184DE3C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMULTIDIMARRAYACCESS_OFFSET UNITYSDK_OFFSET(0x184E58B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENEWARRAYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E68A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENEWEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E60D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENOLABELPUSH_OFFSET UNITYSDK_OFFSET(0x184E9750)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENOTEQUAL_OFFSET UNITYSDK_OFFSET(0x184DBE00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENOTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184DD5B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEORELSEBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184DE340)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEPARAMETEREXPRESSION_OFFSET UNITYSDK_OFFSET(0x184D7F00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEQUOTEUNARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E8A60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILERUNTIMEVARIABLESEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E6E30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILESETVARIABLE_OFFSET UNITYSDK_OFFSET(0x184D7CC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILESTRINGSWITCHEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E0E60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILESWITCHEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E0190)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETHROWUNARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E24A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETOP_OFFSET UNITYSDK_OFFSET(0x184D6C20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETRYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E2730)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETRYFAULTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E3A00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETYPEASEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184DDE60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETYPEEQUALEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E9130)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETYPEISEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E9360)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEUNARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184DD650)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEUNBOXUNARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184E8FC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEUNLIFTEDLOGICALBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184DF770)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEVARIABLEASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x184D9900)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILE_1_OFFSET UNITYSDK_OFFSET(0x184D6F50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILE_OFFSET UNITYSDK_OFFSET(0x184D8610)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_DEFINEBLOCKLABELS_OFFSET UNITYSDK_OFFSET(0x184E2330)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_DEFINELABEL_OFFSET UNITYSDK_OFFSET(0x184E00B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITCOPYVALUETYPE_OFFSET UNITYSDK_OFFSET(0x184D7B10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITINDEXGET_OFFSET UNITYSDK_OFFSET(0x184D89D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITTHISFORMETHODCALL_OFFSET UNITYSDK_OFFSET(0x184D89C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITUNARYBOOLCHECK_OFFSET UNITYSDK_OFFSET(0x184DDF00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITUNARYMETHODCALL_OFFSET UNITYSDK_OFFSET(0x184DDBA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_ENSUREAVAILABLEFORCLOSURE_OFFSET UNITYSDK_OFFSET(0x184D7860)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_ENSURELABEL_OFFSET UNITYSDK_OFFSET(0x184E1C50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_GETMEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x184E8990)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_GET_INSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x184D6C10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_LOADLOCALNOVALUETYPECOPY_OFFSET UNITYSDK_OFFSET(0x184D7A10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_MAKEINTERPRETER_OFFSET UNITYSDK_OFFSET(0x184D6FA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_MAYBEMUTABLEVALUETYPE_OFFSET UNITYSDK_OFFSET(0x184D7BD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_POPLABELBLOCK_OFFSET UNITYSDK_OFFSET(0x184E0170)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_PUSHLABELBLOCK_OFFSET UNITYSDK_OFFSET(0x184E0060)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_REFERENCELABEL_OFFSET UNITYSDK_OFFSET(0x184E1BD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_RESOLVELOCAL_OFFSET UNITYSDK_OFFSET(0x184D7970)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_SHOULDWRITEBACKNODE_OFFSET UNITYSDK_OFFSET(0x184E5720)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_TRYPUSHLABELBLOCK_OFFSET UNITYSDK_OFFSET(0x184E1D60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER__CCTOR_OFFSET UNITYSDK_OFFSET(0x184E9CE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x184D6BF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER__CTOR_OFFSET UNITYSDK_OFFSET(0x184D6A40)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LightCompiler_TypeDefinitionIndex = 3469;

	class LightCompiler : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::LocalDefinition>** StaticGet_s_emptyLocals()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::LocalDefinition>**)Il2CppClass::FromTypeDefinitionIndex(LightCompiler_TypeDefinitionIndex)->GetStaticField(0xFE80);
		}
		::System::Linq::Expressions::Interpreter::LabelScopeInfo* _labelBlock; // 0x10
		::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::DebugInfo*>* _debugInfos; // 0x18
		::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*>* _treeLabels; // 0x20
		::System::Collections::Generic::Stack_1<::System::Linq::Expressions::ParameterExpression*>* _exceptionForRethrowStack; // 0x28
		::System::Linq::Expressions::StackGuard* _guard; // 0x30
		::System::Linq::Expressions::Interpreter::LightCompiler* _parent; // 0x38
		::System::Linq::Expressions::Interpreter::LocalVariables* _locals; // 0x40
		::System::Linq::Expressions::Interpreter::InstructionList* _instructions; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Linq::Expressions::Interpreter::LightCompiler* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LightCompiler*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER__CTOR_1_OFFSET))(this, parent);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER__CCTOR_OFFSET))();
		}

		::System::Linq::Expressions::Interpreter::InstructionList* get_Instructions()
		{
			return ((::System::Linq::Expressions::Interpreter::InstructionList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_GET_INSTRUCTIONS_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::LightDelegateCreator* CompileTop(::System::Linq::Expressions::LambdaExpression* node)
		{
			return ((::System::Linq::Expressions::Interpreter::LightDelegateCreator*(*)(::PVOID, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETOP_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Interpreter::Interpreter* MakeInterpreter(::System::String* lambdaName)
		{
			return ((::System::Linq::Expressions::Interpreter::Interpreter*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_MAKEINTERPRETER_OFFSET))(this, lambdaName);
		}

		::System::Void CompileConstantExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECONSTANTEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileDefaultExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEDEFAULTEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileDefaultExpression_1(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEDEFAULTEXPRESSION_1_OFFSET))(this, type);
		}

		::System::Linq::Expressions::Interpreter::LocalVariable* EnsureAvailableForClosure(::System::Linq::Expressions::ParameterExpression* expr)
		{
			return ((::System::Linq::Expressions::Interpreter::LocalVariable*(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_ENSUREAVAILABLEFORCLOSURE_OFFSET))(this, expr);
		}

		::System::Linq::Expressions::Interpreter::LocalVariable* ResolveLocal(::System::Linq::Expressions::ParameterExpression* variable)
		{
			return ((::System::Linq::Expressions::Interpreter::LocalVariable*(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_RESOLVELOCAL_OFFSET))(this, variable);
		}

		::System::Void CompileGetVariable(::System::Linq::Expressions::ParameterExpression* variable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEGETVARIABLE_OFFSET))(this, variable);
		}

		::System::Void EmitCopyValueType(::System::Type* valueType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITCOPYVALUETYPE_OFFSET))(this, valueType);
		}

		::System::Void LoadLocalNoValueTypeCopy(::System::Linq::Expressions::ParameterExpression* variable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_LOADLOCALNOVALUETYPECOPY_OFFSET))(this, variable);
		}

		::System::Boolean MaybeMutableValueType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_MAYBEMUTABLEVALUETYPE_OFFSET))(this, type);
		}

		::System::Void CompileGetBoxedVariable(::System::Linq::Expressions::ParameterExpression* variable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEGETBOXEDVARIABLE_OFFSET))(this, variable);
		}

		::System::Void CompileSetVariable(::System::Linq::Expressions::ParameterExpression* variable, ::System::Boolean isVoid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILESETVARIABLE_OFFSET))(this, variable, isVoid);
		}

		::System::Void CompileParameterExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEPARAMETEREXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileBlockExpression(::System::Linq::Expressions::Expression* expr, ::System::Boolean asVoid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEBLOCKEXPRESSION_OFFSET))(this, expr, asVoid);
		}

		::Il2CppArray<::System::Linq::Expressions::Interpreter::LocalDefinition>* CompileBlockStart(::System::Linq::Expressions::BlockExpression* node)
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Interpreter::LocalDefinition>*(*)(::PVOID, ::System::Linq::Expressions::BlockExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEBLOCKSTART_OFFSET))(this, node);
		}

		::System::Void CompileBlockEnd(::Il2CppArray<::System::Linq::Expressions::Interpreter::LocalDefinition>* locals)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Linq::Expressions::Interpreter::LocalDefinition>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEBLOCKEND_OFFSET))(this, locals);
		}

		::System::Void CompileIndexExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEINDEXEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void EmitIndexGet(::System::Linq::Expressions::IndexExpression* index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::IndexExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITINDEXGET_OFFSET))(this, index);
		}

		::System::Void CompileIndexAssignment(::System::Linq::Expressions::BinaryExpression* node, ::System::Boolean asVoid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEINDEXASSIGNMENT_OFFSET))(this, node, asVoid);
		}

		::System::Void CompileMemberAssignment(::System::Linq::Expressions::BinaryExpression* node, ::System::Boolean asVoid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBERASSIGNMENT_OFFSET))(this, node, asVoid);
		}

		::System::Void CompileMemberAssignment_1(::System::Boolean asVoid, ::System::Reflection::MemberInfo* refMember, ::System::Linq::Expressions::Expression* value, ::System::Boolean forBinding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Reflection::MemberInfo*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBERASSIGNMENT_1_OFFSET))(this, asVoid, refMember, value, forBinding);
		}

		::System::Void CompileVariableAssignment(::System::Linq::Expressions::BinaryExpression* node, ::System::Boolean asVoid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEVARIABLEASSIGNMENT_OFFSET))(this, node, asVoid);
		}

		::System::Void CompileAssignBinaryExpression(::System::Linq::Expressions::Expression* expr, ::System::Boolean asVoid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEASSIGNBINARYEXPRESSION_OFFSET))(this, expr, asVoid);
		}

		::System::Void CompileBinaryExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEBINARYEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Boolean liftedToNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEEQUAL_OFFSET))(this, left, right, liftedToNull);
		}

		::System::Void CompileNotEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Boolean liftedToNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENOTEQUAL_OFFSET))(this, left, right, liftedToNull);
		}

		::System::Void CompileComparison(::System::Linq::Expressions::BinaryExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECOMPARISON_OFFSET))(this, node);
		}

		::System::Void CompileArithmetic(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEARITHMETIC_OFFSET))(this, nodeType, left, right);
		}

		::System::Void CompileConvertUnaryExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECONVERTUNARYEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileConvertToType(::System::Type* typeFrom, ::System::Type* typeTo, ::System::Boolean isChecked, ::System::Boolean isLiftedToNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECONVERTTOTYPE_OFFSET))(this, typeFrom, typeTo, isChecked, isLiftedToNull);
		}

		::System::Void CompileNotExpression(::System::Linq::Expressions::UnaryExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::UnaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENOTEXPRESSION_OFFSET))(this, node);
		}

		::System::Void CompileUnaryExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEUNARYEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void EmitUnaryMethodCall(::System::Linq::Expressions::UnaryExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::UnaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITUNARYMETHODCALL_OFFSET))(this, node);
		}

		::System::Void EmitUnaryBoolCheck(::System::Linq::Expressions::UnaryExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::UnaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITUNARYBOOLCHECK_OFFSET))(this, node);
		}

		::System::Void CompileAndAlsoBinaryExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEANDALSOBINARYEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileOrElseBinaryExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEORELSEBINARYEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression* b, ::System::Boolean andAlso)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELOGICALBINARYEXPRESSION_OFFSET))(this, b, andAlso);
		}

		::System::Void CompileMethodLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression* expr, ::System::Boolean andAlso)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMETHODLOGICALBINARYEXPRESSION_OFFSET))(this, expr, andAlso);
		}

		::System::Void CompileLiftedLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression* node, ::System::Boolean andAlso)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELIFTEDLOGICALBINARYEXPRESSION_OFFSET))(this, node, andAlso);
		}

		::System::Void CompileUnliftedLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression* expr, ::System::Boolean andAlso)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEUNLIFTEDLOGICALBINARYEXPRESSION_OFFSET))(this, expr, andAlso);
		}

		::System::Void CompileConditionalExpression(::System::Linq::Expressions::Expression* expr, ::System::Boolean asVoid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECONDITIONALEXPRESSION_OFFSET))(this, expr, asVoid);
		}

		::System::Void CompileLoopExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELOOPEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileSwitchExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILESWITCHEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileStringSwitchExpression(::System::Linq::Expressions::SwitchExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::SwitchExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILESTRINGSWITCHEXPRESSION_OFFSET))(this, node);
		}

		::System::Void CompileLabelExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELABELEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileGotoExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEGOTOEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void PushLabelBlock(::System::Linq::Expressions::Interpreter::LabelScopeKind type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LabelScopeKind))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_PUSHLABELBLOCK_OFFSET))(this, type);
		}

		::System::Void PopLabelBlock(::System::Linq::Expressions::Interpreter::LabelScopeKind kind)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LabelScopeKind))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_POPLABELBLOCK_OFFSET))(this, kind);
		}

		::System::Linq::Expressions::Interpreter::LabelInfo* EnsureLabel(::System::Linq::Expressions::LabelTarget* node)
		{
			return ((::System::Linq::Expressions::Interpreter::LabelInfo*(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_ENSURELABEL_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Interpreter::LabelInfo* ReferenceLabel(::System::Linq::Expressions::LabelTarget* node)
		{
			return ((::System::Linq::Expressions::Interpreter::LabelInfo*(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_REFERENCELABEL_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Interpreter::LabelInfo* DefineLabel(::System::Linq::Expressions::LabelTarget* node)
		{
			return ((::System::Linq::Expressions::Interpreter::LabelInfo*(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_DEFINELABEL_OFFSET))(this, node);
		}

		::System::Boolean TryPushLabelBlock(::System::Linq::Expressions::Expression* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_TRYPUSHLABELBLOCK_OFFSET))(this, node);
		}

		::System::Void DefineBlockLabels(::System::Linq::Expressions::Expression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_DEFINEBLOCKLABELS_OFFSET))(this, node);
		}

		::System::Void CheckRethrow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_CHECKRETHROW_OFFSET))(this);
		}

		::System::Void CompileThrowUnaryExpression(::System::Linq::Expressions::Expression* expr, ::System::Boolean asVoid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETHROWUNARYEXPRESSION_OFFSET))(this, expr, asVoid);
		}

		::System::Void CompileTryExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETRYEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileTryFaultExpression(::System::Linq::Expressions::TryExpression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::TryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETRYFAULTEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileMethodCallExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMETHODCALLEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileMethodCallExpression_1(::System::Linq::Expressions::Expression* object, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::IArgumentProvider* arguments)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::IArgumentProvider*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMETHODCALLEXPRESSION_1_OFFSET))(this, object, method, arguments);
		}

		::System::Linq::Expressions::Interpreter::ByRefUpdater* CompileArrayIndexAddress(::System::Linq::Expressions::Expression* array, ::System::Linq::Expressions::Expression* index, ::System::Int32 argumentIndex)
		{
			return ((::System::Linq::Expressions::Interpreter::ByRefUpdater*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEARRAYINDEXADDRESS_OFFSET))(this, array, index, argumentIndex);
		}

		::System::Void EmitThisForMethodCall(::System::Linq::Expressions::Expression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITTHISFORMETHODCALL_OFFSET))(this, node);
		}

		static ::System::Boolean ShouldWritebackNode(::System::Linq::Expressions::Expression* node)
		{
			return ((::System::Boolean(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_SHOULDWRITEBACKNODE_OFFSET))(node);
		}

		::System::Linq::Expressions::Interpreter::ByRefUpdater* CompileAddress(::System::Linq::Expressions::Expression* node, ::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Interpreter::ByRefUpdater*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEADDRESS_OFFSET))(this, node, index);
		}

		::System::Linq::Expressions::Interpreter::ByRefUpdater* CompileMultiDimArrayAccess(::System::Linq::Expressions::Expression* array, ::System::Linq::Expressions::IArgumentProvider* arguments, ::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Interpreter::ByRefUpdater*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::IArgumentProvider*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMULTIDIMARRAYACCESS_OFFSET))(this, array, arguments, index);
		}

		::System::Void CompileNewExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENEWEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileMemberExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBEREXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileMember(::System::Linq::Expressions::Expression* from, ::System::Reflection::MemberInfo* member, ::System::Boolean forBinding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Reflection::MemberInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBER_OFFSET))(this, from, member, forBinding);
		}

		::System::Void CompileNewArrayExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENEWARRAYEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileDebugInfoExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEDEBUGINFOEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileRuntimeVariablesExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILERUNTIMEVARIABLESEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileLambdaExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELAMBDAEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileCoalesceBinaryExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECOALESCEBINARYEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileInvocationExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEINVOCATIONEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileListInitExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELISTINITEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileListInit(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* initializers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELISTINIT_OFFSET))(this, initializers);
		}

		::System::Void CompileMemberInitExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBERINITEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileMemberInit(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* bindings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBERINIT_OFFSET))(this, bindings);
		}

		static ::System::Type* GetMemberType(::System::Reflection::MemberInfo* member)
		{
			return ((::System::Type*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_GETMEMBERTYPE_OFFSET))(member);
		}

		::System::Void CompileQuoteUnaryExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEQUOTEUNARYEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileUnboxUnaryExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEUNBOXUNARYEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileTypeEqualExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETYPEEQUALEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void CompileTypeAsExpression(::System::Linq::Expressions::UnaryExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::UnaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETYPEASEXPRESSION_OFFSET))(this, node);
		}

		::System::Void CompileTypeIsExpression(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETYPEISEXPRESSION_OFFSET))(this, expr);
		}

		::System::Void Compile(::System::Linq::Expressions::Expression* expr, ::System::Boolean asVoid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILE_OFFSET))(this, expr, asVoid);
		}

		::System::Void CompileAsVoid(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEASVOID_OFFSET))(this, expr);
		}

		::System::Void CompileNoLabelPush(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENOLABELPUSH_OFFSET))(this, expr);
		}

		::System::Void Compile_1(::System::Linq::Expressions::Expression* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILE_1_OFFSET))(this, expr);
		}
	};
}
