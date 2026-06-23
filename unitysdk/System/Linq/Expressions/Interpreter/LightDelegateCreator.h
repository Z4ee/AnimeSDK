#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System::Linq::Expressions { class LambdaExpression; }
namespace System::Linq::Expressions::Interpreter { class Interpreter; }
namespace System::Runtime::CompilerServices { class IStrongBox; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_CREATEDELEGATE_1_OFFSET UNITYSDK_OFFSET(0x1E38F520)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1E38F510)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_GET_INTERPRETER_OFFSET UNITYSDK_OFFSET(0x1E38F500)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E38F4F0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LightDelegateCreator_TypeDefinitionIndex = 4763;

	class LightDelegateCreator : public ::System::Object
	{
	public:
		::System::Linq::Expressions::LambdaExpression* _lambda; // 0x10
		::System::Linq::Expressions::Interpreter::Interpreter* _Interpreter_k__BackingField; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::Interpreter::Interpreter* interpreter, ::System::Linq::Expressions::LambdaExpression* lambda)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::Interpreter*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR__CTOR_OFFSET))(this, interpreter, lambda);
		}

		::System::Linq::Expressions::Interpreter::Interpreter* get_Interpreter()
		{
			return ((::System::Linq::Expressions::Interpreter::Interpreter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_GET_INTERPRETER_OFFSET))(this);
		}

		::System::Delegate* CreateDelegate()
		{
			return ((::System::Delegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_CREATEDELEGATE_OFFSET))(this);
		}

		::System::Delegate* CreateDelegate_1(::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>* closure)
		{
			return ((::System::Delegate*(*)(::PVOID, ::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_CREATEDELEGATE_1_OFFSET))(this, closure);
		}
	};
}
