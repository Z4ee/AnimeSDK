#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Linq::Expressions { class LabelTarget; }
namespace System::Linq::Expressions::Interpreter { class BranchLabel; }
namespace System::Linq::Expressions::Interpreter { class LabelScopeInfo; }
namespace System::Linq::Expressions::Interpreter { class LightCompiler; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_ADDDEFINITION_OFFSET UNITYSDK_OFFSET(0x1AD859B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_DEFINEDIN_OFFSET UNITYSDK_OFFSET(0x1AD85CB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_DEFINE_OFFSET UNITYSDK_OFFSET(0x1AD85520)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_ENSURELABEL_OFFSET UNITYSDK_OFFSET(0x1AD85080)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_FIRSTDEFINITION_OFFSET UNITYSDK_OFFSET(0x1AD85D40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_GETLABEL_OFFSET UNITYSDK_OFFSET(0x1AD85040)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_GET_HASDEFINITIONS_OFFSET UNITYSDK_OFFSET(0x1AD85190)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_GET_HASMULTIPLEDEFINITIONS_OFFSET UNITYSDK_OFFSET(0x1AD85C30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_REFERENCE_OFFSET UNITYSDK_OFFSET(0x1AD850C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_VALIDATEFINISH_OFFSET UNITYSDK_OFFSET(0x1AD85E80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_VALIDATEJUMP_OFFSET UNITYSDK_OFFSET(0x1AD851A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD84FE0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LabelInfo_TypeDefinitionIndex = 3427;

	class LabelInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>* _references; // 0x10
		::System::Linq::Expressions::Interpreter::BranchLabel* _label; // 0x18
		::System::Object* _definitions; // 0x20
		::System::Linq::Expressions::LabelTarget* _node; // 0x28
		::System::Boolean _acrossBlockJump; // 0x30

		::System::Void _ctor(::System::Linq::Expressions::LabelTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Interpreter::BranchLabel* GetLabel(::System::Linq::Expressions::Interpreter::LightCompiler* a1)
		{
			return ((::System::Linq::Expressions::Interpreter::BranchLabel*(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LightCompiler*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_GETLABEL_OFFSET))(this, a1);
		}

		::System::Void Reference(::System::Linq::Expressions::Interpreter::LabelScopeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_REFERENCE_OFFSET))(this, a1);
		}

		::System::Void Define(::System::Linq::Expressions::Interpreter::LabelScopeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_DEFINE_OFFSET))(this, a1);
		}

		::System::Void ValidateJump(::System::Linq::Expressions::Interpreter::LabelScopeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_VALIDATEJUMP_OFFSET))(this, a1);
		}

		::System::Void ValidateFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_VALIDATEFINISH_OFFSET))(this);
		}

		::System::Void EnsureLabel(::System::Linq::Expressions::Interpreter::LightCompiler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LightCompiler*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_ENSURELABEL_OFFSET))(this, a1);
		}

		::System::Boolean DefinedIn(::System::Linq::Expressions::Interpreter::LabelScopeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_DEFINEDIN_OFFSET))(this, a1);
		}

		::System::Boolean get_HasDefinitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_GET_HASDEFINITIONS_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::LabelScopeInfo* FirstDefinition()
		{
			return ((::System::Linq::Expressions::Interpreter::LabelScopeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_FIRSTDEFINITION_OFFSET))(this);
		}

		::System::Void AddDefinition(::System::Linq::Expressions::Interpreter::LabelScopeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_ADDDEFINITION_OFFSET))(this, a1);
		}

		::System::Boolean get_HasMultipleDefinitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_GET_HASMULTIPLEDEFINITIONS_OFFSET))(this);
		}
	};
}
