#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class SwitchCase; }
namespace System::Linq::Expressions::Interpreter { class LightCompiler; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD9C760)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__COMPILENOLABELPUSH_B__101_0_OFFSET UNITYSDK_OFFSET(0x1AD9C950)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__COMPILESWITCHEXPRESSION_B__56_0_OFFSET UNITYSDK_OFFSET(0x1AD9C7B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__COMPILESWITCHEXPRESSION_B__56_1_OFFSET UNITYSDK_OFFSET(0x1AD9C8E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD9C7A0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LightCompiler___c_TypeDefinitionIndex = 3474;

	class LightCompiler___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::Linq::Expressions::Interpreter::LightCompiler*, ::System::Linq::Expressions::Expression*>** StaticGet___9__101_0()
		{
			return (::System::Action_2<::System::Linq::Expressions::Interpreter::LightCompiler*, ::System::Linq::Expressions::Expression*>**)Il2CppClass::FromTypeDefinitionIndex(LightCompiler___c_TypeDefinitionIndex)->GetStaticField(0x2B1E0);
		}
		static ::System::Linq::Expressions::Interpreter::LightCompiler___c** StaticGet___9()
		{
			return (::System::Linq::Expressions::Interpreter::LightCompiler___c**)Il2CppClass::FromTypeDefinitionIndex(LightCompiler___c_TypeDefinitionIndex)->GetStaticField(0x2B1E8);
		}
		static ::System::Func_2<::System::Linq::Expressions::Expression*, ::System::Boolean>** StaticGet___9__56_1()
		{
			return (::System::Func_2<::System::Linq::Expressions::Expression*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LightCompiler___c_TypeDefinitionIndex)->GetStaticField(0x2B1F0);
		}
		static ::System::Func_2<::System::Linq::Expressions::SwitchCase*, ::System::Boolean>** StaticGet___9__56_0()
		{
			return (::System::Func_2<::System::Linq::Expressions::SwitchCase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LightCompiler___c_TypeDefinitionIndex)->GetStaticField(0x2B1F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CompileSwitchExpression_b__56_0(::System::Linq::Expressions::SwitchCase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Linq::Expressions::SwitchCase*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__COMPILESWITCHEXPRESSION_B__56_0_OFFSET))(this, a1);
		}

		::System::Boolean _CompileSwitchExpression_b__56_1(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__COMPILESWITCHEXPRESSION_B__56_1_OFFSET))(this, a1);
		}

		::System::Void _CompileNoLabelPush_b__101_0(::System::Linq::Expressions::Interpreter::LightCompiler* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LightCompiler*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER___C__COMPILENOLABELPUSH_B__101_0_OFFSET))(this, a1, a2);
		}
	};
}
