#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System::Linq::Expressions::Interpreter { class ExceptionFilter; }
namespace System::Linq::Expressions::Interpreter { class ExceptionHandler; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_FILTERPASSES_OFFSET UNITYSDK_OFFSET(0x1C06D8C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_GET_HANDLERS_OFFSET UNITYSDK_OFFSET(0x1C06D6D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_GET_ISCATCHBLOCKEXIST_OFFSET UNITYSDK_OFFSET(0x1C06D6E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_GET_ISFINALLYBLOCKEXIST_OFFSET UNITYSDK_OFFSET(0x1C06D6C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_HASHANDLER_OFFSET UNITYSDK_OFFSET(0x1C06D750)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C06D720)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C06D6F0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int TryCatchFinallyHandler_TypeDefinitionIndex = 4749;

	class TryCatchFinallyHandler : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Linq::Expressions::Interpreter::ExceptionHandler*>* _handlers; // 0x10
		::System::Int32 GotoEndTargetIndex; // 0x18
		::System::Int32 TryStartIndex; // 0x1C
		::System::Int32 FinallyEndIndex; // 0x20
		::System::Int32 FinallyStartIndex; // 0x24
		::System::Int32 TryEndIndex; // 0x28

		::System::Void _ctor(::System::Int32 tryStart, ::System::Int32 tryEnd, ::System::Int32 gotoEndTargetIndex, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ExceptionHandler*>* handlers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ExceptionHandler*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER__CTOR_OFFSET))(this, tryStart, tryEnd, gotoEndTargetIndex, handlers);
		}

		::System::Void _ctor_1(::System::Int32 tryStart, ::System::Int32 tryEnd, ::System::Int32 gotoEndLabelIndex, ::System::Int32 finallyStart, ::System::Int32 finallyEnd, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ExceptionHandler*>* handlers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ExceptionHandler*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER__CTOR_1_OFFSET))(this, tryStart, tryEnd, gotoEndLabelIndex, finallyStart, finallyEnd, handlers);
		}

		::System::Boolean get_IsFinallyBlockExist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_GET_ISFINALLYBLOCKEXIST_OFFSET))(this);
		}

		::Il2CppArray<::System::Linq::Expressions::Interpreter::ExceptionHandler*>* get_Handlers()
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Interpreter::ExceptionHandler*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_GET_HANDLERS_OFFSET))(this);
		}

		::System::Boolean get_IsCatchBlockExist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_GET_ISCATCHBLOCKEXIST_OFFSET))(this);
		}

		::System::Boolean HasHandler(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Exception* exception, ::System::Linq::Expressions::Interpreter::ExceptionHandler*& handler, ::System::Object*& unwrappedException)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Exception*, ::System::Linq::Expressions::Interpreter::ExceptionHandler*&, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_HASHANDLER_OFFSET))(this, frame, exception, handler, unwrappedException);
		}

		static ::System::Boolean FilterPasses(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object*& exception, ::System::Linq::Expressions::Interpreter::ExceptionFilter* filter)
		{
			return ((::System::Boolean(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*&, ::System::Linq::Expressions::Interpreter::ExceptionFilter*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_FILTERPASSES_OFFSET))(frame, exception, filter);
		}
	};
}
