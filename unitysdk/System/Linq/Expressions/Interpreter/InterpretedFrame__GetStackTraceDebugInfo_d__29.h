#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/InterpretedFrameInfo.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME__GETSTACKTRACEDEBUGINFO_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AD84BB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME__GETSTACKTRACEDEBUGINFO_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAMEINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AD84D50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME__GETSTACKTRACEDEBUGINFO_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAMEINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AD84CA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME__GETSTACKTRACEDEBUGINFO_D__29_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AD84DD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME__GETSTACKTRACEDEBUGINFO_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AD84D00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME__GETSTACKTRACEDEBUGINFO_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AD84CB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME__GETSTACKTRACEDEBUGINFO_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD84BA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME__GETSTACKTRACEDEBUGINFO_D__29__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD84450)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InterpretedFrame__GetStackTraceDebugInfo_d__29_TypeDefinitionIndex = 3425;

	class InterpretedFrame__GetStackTraceDebugInfo_d__29 : public ::System::Object
	{
	public:
		::System::Linq::Expressions::Interpreter::InterpretedFrameInfo __2__current; // 0x10
		::System::Linq::Expressions::Interpreter::InterpretedFrame* __4__this; // 0x20
		::System::Linq::Expressions::Interpreter::InterpretedFrame* _frame_5__1; // 0x28
		::System::Int32 __l__initialThreadId; // 0x30
		::System::Int32 __1__state; // 0x34

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME__GETSTACKTRACEDEBUGINFO_D__29__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME__GETSTACKTRACEDEBUGINFO_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME__GETSTACKTRACEDEBUGINFO_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::InterpretedFrameInfo System_Collections_Generic_IEnumerator_System_Linq_Expressions_Interpreter_InterpretedFrameInfo__get_Current()
		{
			return ((::System::Linq::Expressions::Interpreter::InterpretedFrameInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME__GETSTACKTRACEDEBUGINFO_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAMEINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME__GETSTACKTRACEDEBUGINFO_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME__GETSTACKTRACEDEBUGINFO_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>* System_Collections_Generic_IEnumerable_System_Linq_Expressions_Interpreter_InterpretedFrameInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME__GETSTACKTRACEDEBUGINFO_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAMEINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME__GETSTACKTRACEDEBUGINFO_D__29_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
