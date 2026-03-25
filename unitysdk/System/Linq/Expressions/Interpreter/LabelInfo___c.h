#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Linq::Expressions::Interpreter { class LabelScopeInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x184D38B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x184D38F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO___C__VALIDATEJUMP_B__9_0_OFFSET UNITYSDK_OFFSET(0x184D3900)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LabelInfo___c_TypeDefinitionIndex = 3425;

	class LabelInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>**)Il2CppClass::FromTypeDefinitionIndex(LabelInfo___c_TypeDefinitionIndex)->GetStaticField(0xFC10);
		}
		static ::System::Linq::Expressions::Interpreter::LabelInfo___c** StaticGet___9()
		{
			return (::System::Linq::Expressions::Interpreter::LabelInfo___c**)Il2CppClass::FromTypeDefinitionIndex(LabelInfo___c_TypeDefinitionIndex)->GetStaticField(0xFC18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO___C__CTOR_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::LabelScopeInfo* _ValidateJump_b__9_0(::System::Linq::Expressions::Interpreter::LabelScopeInfo* b)
		{
			return ((::System::Linq::Expressions::Interpreter::LabelScopeInfo*(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO___C__VALIDATEJUMP_B__9_0_OFFSET))(this, b);
		}
	};
}
