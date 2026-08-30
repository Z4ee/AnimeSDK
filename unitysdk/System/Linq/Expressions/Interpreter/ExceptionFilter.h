#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E71DA30)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ExceptionFilter_TypeDefinitionIndex = 3476;

	class ExceptionFilter : public ::System::Object
	{
	public:
		::System::Int32 StartIndex; // 0x10
		::System::Int32 EndIndex; // 0x14
		::System::Int32 LabelIndex; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONFILTER__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
