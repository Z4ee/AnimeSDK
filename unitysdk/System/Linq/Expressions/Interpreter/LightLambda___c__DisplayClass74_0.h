#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class LightLambda; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B00A260)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA___C__DISPLAYCLASS74_0__MAKERUNDELEGATECTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1B00B590)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LightLambda___c__DisplayClass74_0_TypeDefinitionIndex = 3495;

	class LightLambda___c__DisplayClass74_0 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* targetMethod; // 0x10
		::System::Type* delegateType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
		}

		::System::Delegate* _MakeRunDelegateCtor_b__0(::System::Linq::Expressions::Interpreter::LightLambda* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LightLambda*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA___C__DISPLAYCLASS74_0__MAKERUNDELEGATECTOR_B__0_OFFSET))(this, a1);
		}
	};
}
