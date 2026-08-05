#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/InterpretedFrameInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Linq::Expressions::Interpreter { class DebugInfo; }
namespace System::Linq::Expressions::Interpreter { class Interpreter; }
namespace System::Reflection { class MethodBase; }
namespace System::Runtime::CompilerServices { class IStrongBox; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_DUP_OFFSET UNITYSDK_OFFSET(0x1F080020)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_ENTER_OFFSET UNITYSDK_OFFSET(0x1F080600)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x1F07FBF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GETEXCEPTIONSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1F0804E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GETSTACKTRACEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x1F0801C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1F07FC60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1F0800E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GOTO_OFFSET UNITYSDK_OFFSET(0x1F080C00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_ISINTERPRETEDFRAME_OFFSET UNITYSDK_OFFSET(0x1F0800F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_ISJUMPHAPPENED_OFFSET UNITYSDK_OFFSET(0x1F080760)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_LEAVE_OFFSET UNITYSDK_OFFSET(0x1F0806D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PEEK_OFFSET UNITYSDK_OFFSET(0x1F07FFE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_POPPENDINGCONTINUATION_OFFSET UNITYSDK_OFFSET(0x1F080AF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_POP_OFFSET UNITYSDK_OFFSET(0x1F07D920)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSHCONTINUATION_OFFSET UNITYSDK_OFFSET(0x1F080780)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSHPENDINGCONTINUATION_OFFSET UNITYSDK_OFFSET(0x1F080A70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_1_OFFSET UNITYSDK_OFFSET(0x1F07F490)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_2_OFFSET UNITYSDK_OFFSET(0x1F07D9F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_3_OFFSET UNITYSDK_OFFSET(0x1F07FC80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_4_OFFSET UNITYSDK_OFFSET(0x1F07FD50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_5_OFFSET UNITYSDK_OFFSET(0x1F07FE20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_6_OFFSET UNITYSDK_OFFSET(0x1F07FEF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_OFFSET UNITYSDK_OFFSET(0x1F07D960)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_REMOVECONTINUATION_OFFSET UNITYSDK_OFFSET(0x1F080770)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_SAVETRACETOEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1F080220)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_SETSTACKDEPTH_OFFSET UNITYSDK_OFFSET(0x1F07FFC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_YIELDTOCURRENTCONTINUATION_OFFSET UNITYSDK_OFFSET(0x1F0807C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_YIELDTOPENDINGCONTINUATION_OFFSET UNITYSDK_OFFSET(0x1F080850)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1F07FB40)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InterpretedFrame_TypeDefinitionIndex = 4706;

	class InterpretedFrame : public ::System::Object
	{
	public:
		static ::System::Linq::Expressions::Interpreter::InterpretedFrame** StaticGet_s_currentFrame()
		{
			return (::System::Linq::Expressions::Interpreter::InterpretedFrame**)Il2CppClass::FromTypeDefinitionIndex(InterpretedFrame_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>* Closure; // 0x10
		::Il2CppArray<::System::Object*>* Data; // 0x18
		::System::Linq::Expressions::Interpreter::Interpreter* Interpreter; // 0x20
		::Il2CppArray<::System::Int32>* _continuations; // 0x28
		::System::Linq::Expressions::Interpreter::InterpretedFrame* _parent; // 0x30
		::System::Object* _pendingValue; // 0x38
		::System::Int32 InstructionIndex; // 0x40
		::System::Int32 StackIndex; // 0x44
		::System::Int32 _pendingContinuation; // 0x48
		::System::Int32 _continuationIndex; // 0x4C

		::System::Void _ctor(::System::Linq::Expressions::Interpreter::Interpreter* interpreter, ::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>* closure)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::Interpreter*, ::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME__CTOR_OFFSET))(this, interpreter, closure);
		}

		::System::Linq::Expressions::Interpreter::DebugInfo* GetDebugInfo(::System::Int32 instructionIndex)
		{
			return ((::System::Linq::Expressions::Interpreter::DebugInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GETDEBUGINFO_OFFSET))(this, instructionIndex);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GET_NAME_OFFSET))(this);
		}

		::System::Void Push(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_OFFSET))(this, value);
		}

		::System::Void Push_1(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_1_OFFSET))(this, value);
		}

		::System::Void Push_2(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_2_OFFSET))(this, value);
		}

		::System::Void Push_3(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_3_OFFSET))(this, value);
		}

		::System::Void Push_4(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_4_OFFSET))(this, value);
		}

		::System::Void Push_5(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_5_OFFSET))(this, value);
		}

		::System::Void Push_6(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_6_OFFSET))(this, value);
		}

		::System::Object* Pop()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_POP_OFFSET))(this);
		}

		::System::Void SetStackDepth(::System::Int32 depth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_SETSTACKDEPTH_OFFSET))(this, depth);
		}

		::System::Object* Peek()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PEEK_OFFSET))(this);
		}

		::System::Void Dup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_DUP_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::InterpretedFrame* get_Parent()
		{
			return ((::System::Linq::Expressions::Interpreter::InterpretedFrame*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GET_PARENT_OFFSET))(this);
		}

		static ::System::Boolean IsInterpretedFrame(::System::Reflection::MethodBase* method)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_ISINTERPRETEDFRAME_OFFSET))(method);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>* GetStackTraceDebugInfo()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GETSTACKTRACEDEBUGINFO_OFFSET))(this);
		}

		::System::Void SaveTraceToException(::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_SAVETRACETOEXCEPTION_OFFSET))(this, exception);
		}

		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>* GetExceptionStackTrace(::System::Exception* exception)
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>*(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GETEXCEPTIONSTACKTRACE_OFFSET))(exception);
		}

		::System::Linq::Expressions::Interpreter::InterpretedFrame* Enter()
		{
			return ((::System::Linq::Expressions::Interpreter::InterpretedFrame*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_ENTER_OFFSET))(this);
		}

		::System::Void Leave(::System::Linq::Expressions::Interpreter::InterpretedFrame* prevFrame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_LEAVE_OFFSET))(this, prevFrame);
		}

		::System::Boolean IsJumpHappened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_ISJUMPHAPPENED_OFFSET))(this);
		}

		::System::Void RemoveContinuation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_REMOVECONTINUATION_OFFSET))(this);
		}

		::System::Void PushContinuation(::System::Int32 continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSHCONTINUATION_OFFSET))(this, continuation);
		}

		::System::Int32 YieldToCurrentContinuation()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_YIELDTOCURRENTCONTINUATION_OFFSET))(this);
		}

		::System::Int32 YieldToPendingContinuation()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_YIELDTOPENDINGCONTINUATION_OFFSET))(this);
		}

		::System::Void PushPendingContinuation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSHPENDINGCONTINUATION_OFFSET))(this);
		}

		::System::Void PopPendingContinuation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_POPPENDINGCONTINUATION_OFFSET))(this);
		}

		::System::Int32 Goto(::System::Int32 labelIndex, ::System::Object* value, ::System::Boolean gotoExceptionHandler)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GOTO_OFFSET))(this, labelIndex, value, gotoExceptionHandler);
		}
	};
}
