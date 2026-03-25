#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/ByRefUpdater.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LocalDefinition.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class Object; }
namespace System::Linq::Expressions::Interpreter { class InstructionList; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class LocalVariables; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXMETHODBYREFUPDATER_UNDEFINETEMPS_OFFSET UNITYSDK_OFFSET(0x184CB8E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXMETHODBYREFUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x184CB5A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXMETHODBYREFUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0x184CB580)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int IndexMethodByRefUpdater_TypeDefinitionIndex = 3477;

	class IndexMethodByRefUpdater : public ::System::Linq::Expressions::Interpreter::ByRefUpdater
	{
	public:
		::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> _obj; // 0x18
		::Il2CppArray<::System::Linq::Expressions::Interpreter::LocalDefinition>* _args; // 0x30
		::System::Reflection::MethodInfo* _indexer; // 0x38

		::System::Void _ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj, ::Il2CppArray<::System::Linq::Expressions::Interpreter::LocalDefinition>* args, ::System::Reflection::MethodInfo* indexer, ::System::Int32 argumentIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>, ::Il2CppArray<::System::Linq::Expressions::Interpreter::LocalDefinition>*, ::System::Reflection::MethodInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXMETHODBYREFUPDATER__CTOR_OFFSET))(this, obj, args, indexer, argumentIndex);
		}

		::System::Void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXMETHODBYREFUPDATER_UPDATE_OFFSET))(this, frame, value);
		}

		::System::Void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* instructions, ::System::Linq::Expressions::Interpreter::LocalVariables* locals)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Linq::Expressions::Interpreter::LocalVariables*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXMETHODBYREFUPDATER_UNDEFINETEMPS_OFFSET))(this, instructions, locals);
		}
	};
}
