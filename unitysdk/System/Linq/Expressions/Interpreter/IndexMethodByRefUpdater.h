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

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXMETHODBYREFUPDATER_UNDEFINETEMPS_OFFSET UNITYSDK_OFFSET(0x1E723740)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXMETHODBYREFUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E723400)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXMETHODBYREFUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7233E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int IndexMethodByRefUpdater_TypeDefinitionIndex = 3492;

	class IndexMethodByRefUpdater : public ::System::Linq::Expressions::Interpreter::ByRefUpdater
	{
	public:
		::System::Reflection::MethodInfo* _indexer; // 0x18
		::Il2CppArray<::System::Linq::Expressions::Interpreter::LocalDefinition>* _args; // 0x20
		::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> _obj; // 0x28

		::System::Void _ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> a1, ::Il2CppArray<::System::Linq::Expressions::Interpreter::LocalDefinition>* a2, ::System::Reflection::MethodInfo* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>, ::Il2CppArray<::System::Linq::Expressions::Interpreter::LocalDefinition>*, ::System::Reflection::MethodInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXMETHODBYREFUPDATER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXMETHODBYREFUPDATER_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* a1, ::System::Linq::Expressions::Interpreter::LocalVariables* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Linq::Expressions::Interpreter::LocalVariables*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXMETHODBYREFUPDATER_UNDEFINETEMPS_OFFSET))(this, a1, a2);
		}
	};
}
