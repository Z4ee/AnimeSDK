#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/ByRefUpdater.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LocalDefinition.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class Object; }
namespace System::Linq::Expressions::Interpreter { class InstructionList; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class LocalVariables; }
namespace System::Reflection { class FieldInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDBYREFUPDATER_UNDEFINETEMPS_OFFSET UNITYSDK_OFFSET(0x184C77B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDBYREFUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x184C7730)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDBYREFUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0x184C7710)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int FieldByRefUpdater_TypeDefinitionIndex = 3475;

	class FieldByRefUpdater : public ::System::Linq::Expressions::Interpreter::ByRefUpdater
	{
	public:
		::System::Reflection::FieldInfo* _field; // 0x18
		::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> _object; // 0x20

		::System::Void _ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj, ::System::Reflection::FieldInfo* field, ::System::Int32 argumentIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>, ::System::Reflection::FieldInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDBYREFUPDATER__CTOR_OFFSET))(this, obj, field, argumentIndex);
		}

		::System::Void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDBYREFUPDATER_UPDATE_OFFSET))(this, frame, value);
		}

		::System::Void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* instructions, ::System::Linq::Expressions::Interpreter::LocalVariables* locals)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Linq::Expressions::Interpreter::LocalVariables*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDBYREFUPDATER_UNDEFINETEMPS_OFFSET))(this, instructions, locals);
		}
	};
}
