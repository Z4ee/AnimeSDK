#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYFAULTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E50A3E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int TryFaultHandler_TypeDefinitionIndex = 4749;

	class TryFaultHandler : public ::System::Object
	{
	public:
		::System::Int32 FinallyStartIndex; // 0x10
		::System::Int32 TryStartIndex; // 0x14
		::System::Int32 FinallyEndIndex; // 0x18
		::System::Int32 TryEndIndex; // 0x1C

		::System::Void _ctor(::System::Int32 tryStart, ::System::Int32 tryEnd, ::System::Int32 finallyStart, ::System::Int32 finallyEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYFAULTHANDLER__CTOR_OFFSET))(this, tryStart, tryEnd, finallyStart, finallyEnd);
		}
	};
}
