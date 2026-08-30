#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::CompilerServices { class IRuntimeVariables; }
namespace System::Runtime::CompilerServices { class IStrongBox; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLES_CREATE_OFFSET UNITYSDK_OFFSET(0x1E75F850)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLES__CTOR_OFFSET UNITYSDK_OFFSET(0x1E75F840)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int RuntimeVariables_TypeDefinitionIndex = 3618;

	class RuntimeVariables : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>* _boxes; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLES__CTOR_OFFSET))(this, a1);
		}

		static ::System::Runtime::CompilerServices::IRuntimeVariables* Create(::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>* a1)
		{
			return ((::System::Runtime::CompilerServices::IRuntimeVariables*(*)(::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLES_CREATE_OFFSET))(a1);
		}
	};
}
