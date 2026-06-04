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

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDBYREFUPDATER_UNDEFINETEMPS_OFFSET UNITYSDK_OFFSET(0x1AD79970)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDBYREFUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AD798F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDBYREFUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD798D0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int FieldByRefUpdater_TypeDefinitionIndex = 3478;

	class FieldByRefUpdater : public ::System::Linq::Expressions::Interpreter::ByRefUpdater
	{
	public:
		::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> _object; // 0x18
		::System::Reflection::FieldInfo* _field; // 0x30

		::System::Void _ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> a1, ::System::Reflection::FieldInfo* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>, ::System::Reflection::FieldInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDBYREFUPDATER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDBYREFUPDATER_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* a1, ::System::Linq::Expressions::Interpreter::LocalVariables* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Linq::Expressions::Interpreter::LocalVariables*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDBYREFUPDATER_UNDEFINETEMPS_OFFSET))(this, a1, a2);
		}
	};
}
