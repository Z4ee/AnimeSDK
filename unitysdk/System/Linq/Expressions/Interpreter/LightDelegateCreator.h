#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System::Linq::Expressions { class LambdaExpression; }
namespace System::Linq::Expressions::Interpreter { class Interpreter; }
namespace System::Runtime::CompilerServices { class IStrongBox; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_CREATEDELEGATE_1_OFFSET UNITYSDK_OFFSET(0x1E716A90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1E74BC50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_GET_INTERPRETER_OFFSET UNITYSDK_OFFSET(0x1E74BC40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E733880)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LightDelegateCreator_TypeDefinitionIndex = 3493;

	class LightDelegateCreator : public ::System::Object
	{
	public:
		::System::Linq::Expressions::Interpreter::Interpreter* _Interpreter_k__BackingField; // 0x10
		::System::Linq::Expressions::LambdaExpression* _lambda; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::Interpreter::Interpreter* a1, ::System::Linq::Expressions::LambdaExpression* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::Interpreter*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Linq::Expressions::Interpreter::Interpreter* get_Interpreter()
		{
			return ((::System::Linq::Expressions::Interpreter::Interpreter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_GET_INTERPRETER_OFFSET))(this);
		}

		::System::Delegate* CreateDelegate()
		{
			return ((::System::Delegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_CREATEDELEGATE_OFFSET))(this);
		}

		::System::Delegate* CreateDelegate_1(::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_CREATEDELEGATE_1_OFFSET))(this, a1);
		}
	};
}
