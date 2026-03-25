#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Linq::Expressions::Interpreter { class DebugInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_DEBUGINFOCOMPARER_SYSTEM_COLLECTIONS_GENERIC_ICOMPARER_SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO__COMPARE_OFFSET UNITYSDK_OFFSET(0x184BF960)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_DEBUGINFOCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x184BF950)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int DebugInfo_DebugInfoComparer_TypeDefinitionIndex = 3467;

	class DebugInfo_DebugInfoComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_DEBUGINFOCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 System_Collections_Generic_IComparer_System_Linq_Expressions_Interpreter_DebugInfo__Compare(::System::Linq::Expressions::Interpreter::DebugInfo* d1, ::System::Linq::Expressions::Interpreter::DebugInfo* d2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::DebugInfo*, ::System::Linq::Expressions::Interpreter::DebugInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_DEBUGINFOCOMPARER_SYSTEM_COLLECTIONS_GENERIC_ICOMPARER_SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO__COMPARE_OFFSET))(this, d1, d2);
		}
	};
}
