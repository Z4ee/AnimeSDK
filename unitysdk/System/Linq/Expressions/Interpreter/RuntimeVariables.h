#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::CompilerServices { class IRuntimeVariables; }
namespace System::Runtime::CompilerServices { class IStrongBox; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLES_CREATE_OFFSET UNITYSDK_OFFSET(0x1BDAD820)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLES_SYSTEM_RUNTIME_COMPILERSERVICES_IRUNTIMEVARIABLES_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1BDAD5E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLES_SYSTEM_RUNTIME_COMPILERSERVICES_IRUNTIMEVARIABLES_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BDAD600)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLES_SYSTEM_RUNTIME_COMPILERSERVICES_IRUNTIMEVARIABLES_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BDAD700)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLES__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDAD5D0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int RuntimeVariables_TypeDefinitionIndex = 4890;

	class RuntimeVariables : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>* _boxes; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>* boxes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLES__CTOR_OFFSET))(this, boxes);
		}

		::System::Int32 System_Runtime_CompilerServices_IRuntimeVariables_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLES_SYSTEM_RUNTIME_COMPILERSERVICES_IRUNTIMEVARIABLES_GET_COUNT_OFFSET))(this);
		}

		::System::Object* System_Runtime_CompilerServices_IRuntimeVariables_get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLES_SYSTEM_RUNTIME_COMPILERSERVICES_IRUNTIMEVARIABLES_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void System_Runtime_CompilerServices_IRuntimeVariables_set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLES_SYSTEM_RUNTIME_COMPILERSERVICES_IRUNTIMEVARIABLES_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::System::Runtime::CompilerServices::IRuntimeVariables* Create(::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>* boxes)
		{
			return ((::System::Runtime::CompilerServices::IRuntimeVariables*(*)(::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLES_CREATE_OFFSET))(boxes);
		}
	};
}
