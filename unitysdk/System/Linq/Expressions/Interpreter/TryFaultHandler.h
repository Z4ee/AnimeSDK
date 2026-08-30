#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYFAULTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E763720)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int TryFaultHandler_TypeDefinitionIndex = 3479;

	class TryFaultHandler : public ::System::Object
	{
	public:
		::System::Int32 TryStartIndex; // 0x10
		::System::Int32 FinallyStartIndex; // 0x14
		::System::Int32 FinallyEndIndex; // 0x18
		::System::Int32 TryEndIndex; // 0x1C

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYFAULTHANDLER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
