#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System::Linq::Expressions::Interpreter { class ExceptionFilter; }
namespace System::Linq::Expressions::Interpreter { class ExceptionHandler; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_FILTERPASSES_OFFSET UNITYSDK_OFFSET(0x1DF49110)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_GET_ISCATCHBLOCKEXIST_OFFSET UNITYSDK_OFFSET(0x1DF48EB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_GET_ISFINALLYBLOCKEXIST_OFFSET UNITYSDK_OFFSET(0x1DF48EA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_HASHANDLER_OFFSET UNITYSDK_OFFSET(0x1DF48F20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF48EF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF48EC0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int TryCatchFinallyHandler_TypeDefinitionIndex = 3478;

	class TryCatchFinallyHandler : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Linq::Expressions::Interpreter::ExceptionHandler*>* _handlers; // 0x10
		::System::Int32 TryEndIndex; // 0x18
		::System::Int32 TryStartIndex; // 0x1C
		::System::Int32 GotoEndTargetIndex; // 0x20
		::System::Int32 FinallyEndIndex; // 0x24
		::System::Int32 FinallyStartIndex; // 0x28

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ExceptionHandler*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ExceptionHandler*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ExceptionHandler*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ExceptionHandler*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean get_IsFinallyBlockExist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_GET_ISFINALLYBLOCKEXIST_OFFSET))(this);
		}

		::System::Boolean get_IsCatchBlockExist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_GET_ISCATCHBLOCKEXIST_OFFSET))(this);
		}

		::System::Boolean HasHandler(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1, ::System::Exception* a2, ::System::Linq::Expressions::Interpreter::ExceptionHandler*& a3, ::System::Object*& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Exception*, ::System::Linq::Expressions::Interpreter::ExceptionHandler*&, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_HASHANDLER_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean FilterPasses(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1, ::System::Object*& a2, ::System::Linq::Expressions::Interpreter::ExceptionFilter* a3)
		{
			return ((::System::Boolean(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*&, ::System::Linq::Expressions::Interpreter::ExceptionFilter*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_FILTERPASSES_OFFSET))(a1, a2, a3);
		}
	};
}
