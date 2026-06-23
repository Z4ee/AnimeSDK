#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/RuntimeLabel.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Linq::Expressions::Interpreter { class InstructionList; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_ADDBRANCH_OFFSET UNITYSDK_OFFSET(0x1DC55F70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_FIXUPBRANCH_OFFSET UNITYSDK_OFFSET(0x1DC55F40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_GET_HASRUNTIMELABEL_OFFSET UNITYSDK_OFFSET(0x1DC55E30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_GET_LABELINDEX_OFFSET UNITYSDK_OFFSET(0x1DC55E10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_GET_TARGETINDEX_OFFSET UNITYSDK_OFFSET(0x1DC55E40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_MARK_OFFSET UNITYSDK_OFFSET(0x1DC55E80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_SET_LABELINDEX_OFFSET UNITYSDK_OFFSET(0x1DC55E20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_TORUNTIMELABEL_OFFSET UNITYSDK_OFFSET(0x1DC55E50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC56020)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int BranchLabel_TypeDefinitionIndex = 4583;

	class BranchLabel : public ::System::Object
	{
	public:
		// static const ::System::Int32 UnknownIndex = 0x80000000; // 0x0
		// static const ::System::Int32 UnknownDepth = 0x80000000; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* _forwardBranchFixups; // 0x10
		::System::Int32 _LabelIndex_k__BackingField; // 0x18
		::System::Int32 _stackDepth; // 0x1C
		::System::Int32 _targetIndex; // 0x20
		::System::Int32 _continuationStackDepth; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_LabelIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_GET_LABELINDEX_OFFSET))(this);
		}

		::System::Void set_LabelIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_SET_LABELINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_HasRuntimeLabel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_GET_HASRUNTIMELABEL_OFFSET))(this);
		}

		::System::Int32 get_TargetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_GET_TARGETINDEX_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::RuntimeLabel ToRuntimeLabel()
		{
			return ((::System::Linq::Expressions::Interpreter::RuntimeLabel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_TORUNTIMELABEL_OFFSET))(this);
		}

		::System::Void Mark(::System::Linq::Expressions::Interpreter::InstructionList* instructions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InstructionList*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_MARK_OFFSET))(this, instructions);
		}

		::System::Void AddBranch(::System::Linq::Expressions::Interpreter::InstructionList* instructions, ::System::Int32 branchIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_ADDBRANCH_OFFSET))(this, instructions, branchIndex);
		}

		::System::Void FixupBranch(::System::Linq::Expressions::Interpreter::InstructionList* instructions, ::System::Int32 branchIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_FIXUPBRANCH_OFFSET))(this, instructions, branchIndex);
		}
	};
}
