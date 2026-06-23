#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9DE700)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9DE760)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION__CTOR_OFFSET UNITYSDK_OFFSET(0x3E5700)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LocalDefinition_TypeDefinitionIndex = 4790;

	struct alignas(8) LocalDefinition
	{
		::System::Int32 _Index_k__BackingField; // 0x10
		::System::Linq::Expressions::ParameterExpression* _Parameter_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 localIndex, ::System::Linq::Expressions::ParameterExpression* parameter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION__CTOR_OFFSET))(this, localIndex, parameter);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION_GET_INDEX_OFFSET))(this);
		}

		::System::Linq::Expressions::ParameterExpression* get_Parameter()
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION_GET_PARAMETER_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION_GETHASHCODE_OFFSET))(this);
		}
	};
}
