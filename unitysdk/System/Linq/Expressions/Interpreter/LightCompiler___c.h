#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class SwitchCase; }
namespace System::Linq::Expressions::Interpreter { class LightCompiler; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F479230)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__COMPILENOLABELPUSH_B__101_0_OFFSET UNITYSDK_OFFSET(0x1F4793F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__COMPILESWITCHEXPRESSION_B__56_0_OFFSET UNITYSDK_OFFSET(0x1F479280)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__COMPILESWITCHEXPRESSION_B__56_1_OFFSET UNITYSDK_OFFSET(0x1F479380)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F479270)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LightCompiler___c_TypeDefinitionIndex = 4756;

	class LightCompiler___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::Linq::Expressions::Interpreter::LightCompiler*, ::System::Linq::Expressions::Expression*>** StaticGet___9__101_0()
		{
			return (::System::Action_2<::System::Linq::Expressions::Interpreter::LightCompiler*, ::System::Linq::Expressions::Expression*>**)Il2CppClass::FromTypeDefinitionIndex(LightCompiler___c_TypeDefinitionIndex)->GetStaticField(0x42A0);
		}
		static ::System::Func_2<::System::Linq::Expressions::SwitchCase*, ::System::Boolean>** StaticGet___9__56_0()
		{
			return (::System::Func_2<::System::Linq::Expressions::SwitchCase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LightCompiler___c_TypeDefinitionIndex)->GetStaticField(0x42A8);
		}
		static ::System::Func_2<::System::Linq::Expressions::Expression*, ::System::Boolean>** StaticGet___9__56_1()
		{
			return (::System::Func_2<::System::Linq::Expressions::Expression*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LightCompiler___c_TypeDefinitionIndex)->GetStaticField(0x42B0);
		}
		static ::System::Linq::Expressions::Interpreter::LightCompiler___c** StaticGet___9()
		{
			return (::System::Linq::Expressions::Interpreter::LightCompiler___c**)Il2CppClass::FromTypeDefinitionIndex(LightCompiler___c_TypeDefinitionIndex)->GetStaticField(0x42B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CompileSwitchExpression_b__56_0(::System::Linq::Expressions::SwitchCase* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Linq::Expressions::SwitchCase*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__COMPILESWITCHEXPRESSION_B__56_0_OFFSET))(this, c);
		}

		::System::Boolean _CompileSwitchExpression_b__56_1(::System::Linq::Expressions::Expression* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__COMPILESWITCHEXPRESSION_B__56_1_OFFSET))(this, t);
		}

		::System::Void _CompileNoLabelPush_b__101_0(::System::Linq::Expressions::Interpreter::LightCompiler* this_, ::System::Linq::Expressions::Expression* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LightCompiler*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__COMPILENOLABELPUSH_B__101_0_OFFSET))(this, this_, e);
		}
	};
}
