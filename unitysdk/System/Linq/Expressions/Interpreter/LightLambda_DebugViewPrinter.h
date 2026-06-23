#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Linq::Expressions::Interpreter { class Interpreter; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_DEBUGVIEWPRINTER_ADDHANDLEREXIT_OFFSET UNITYSDK_OFFSET(0x1DAE4DA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_DEBUGVIEWPRINTER_ADDTRYSTART_OFFSET UNITYSDK_OFFSET(0x1DAE4D00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_DEBUGVIEWPRINTER_ANALYZE_OFFSET UNITYSDK_OFFSET(0x1DAE4330)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_DEBUGVIEWPRINTER_DEDENT_OFFSET UNITYSDK_OFFSET(0x1DAE4E50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_DEBUGVIEWPRINTER_EMITEXITS_OFFSET UNITYSDK_OFFSET(0x1DAE58B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_DEBUGVIEWPRINTER_INDENT_OFFSET UNITYSDK_OFFSET(0x1DAE4E10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_DEBUGVIEWPRINTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DAE4E90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_DEBUGVIEWPRINTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE4130)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LightLambda_DebugViewPrinter_TypeDefinitionIndex = 4765;

	class LightLambda_DebugViewPrinter : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _handlerEnter; // 0x10
		::System::String* _indent; // 0x18
		::System::Linq::Expressions::Interpreter::Interpreter* _interpreter; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _handlerExit; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _tryStart; // 0x30

		::System::Void _ctor(::System::Linq::Expressions::Interpreter::Interpreter* interpreter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::Interpreter*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_DEBUGVIEWPRINTER__CTOR_OFFSET))(this, interpreter);
		}

		::System::Void Analyze()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_DEBUGVIEWPRINTER_ANALYZE_OFFSET))(this);
		}

		::System::Void AddTryStart(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_DEBUGVIEWPRINTER_ADDTRYSTART_OFFSET))(this, index);
		}

		::System::Void AddHandlerExit(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_DEBUGVIEWPRINTER_ADDHANDLEREXIT_OFFSET))(this, index);
		}

		::System::Void Indent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_DEBUGVIEWPRINTER_INDENT_OFFSET))(this);
		}

		::System::Void Dedent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_DEBUGVIEWPRINTER_DEDENT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_DEBUGVIEWPRINTER_TOSTRING_OFFSET))(this);
		}

		::System::Void EmitExits(::System::Text::StringBuilder* sb, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_DEBUGVIEWPRINTER_EMITEXITS_OFFSET))(this, sb, index);
		}
	};
}
