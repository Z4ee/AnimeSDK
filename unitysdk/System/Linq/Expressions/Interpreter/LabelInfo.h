#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Linq::Expressions { class LabelTarget; }
namespace System::Linq::Expressions::Interpreter { class BranchLabel; }
namespace System::Linq::Expressions::Interpreter { class LabelScopeInfo; }
namespace System::Linq::Expressions::Interpreter { class LightCompiler; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_ADDDEFINITION_OFFSET UNITYSDK_OFFSET(0x1C071C50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_DEFINEDIN_OFFSET UNITYSDK_OFFSET(0x1C071EB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_DEFINE_OFFSET UNITYSDK_OFFSET(0x1C0719E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_ENSURELABEL_OFFSET UNITYSDK_OFFSET(0x1C0715C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_FIRSTDEFINITION_OFFSET UNITYSDK_OFFSET(0x1C071F40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_GETLABEL_OFFSET UNITYSDK_OFFSET(0x1C071580)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_GET_HASDEFINITIONS_OFFSET UNITYSDK_OFFSET(0x1C071670)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_GET_HASMULTIPLEDEFINITIONS_OFFSET UNITYSDK_OFFSET(0x1C071E40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_REFERENCE_OFFSET UNITYSDK_OFFSET(0x1C071600)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_VALIDATEFINISH_OFFSET UNITYSDK_OFFSET(0x1C072050)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_VALIDATEJUMP_OFFSET UNITYSDK_OFFSET(0x1C071680)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0714F0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LabelInfo_TypeDefinitionIndex = 4710;

	class LabelInfo : public ::System::Object
	{
	public:
		::System::Linq::Expressions::LabelTarget* _node; // 0x10
		::System::Object* _definitions; // 0x18
		::System::Linq::Expressions::Interpreter::BranchLabel* _label; // 0x20
		::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>* _references; // 0x28
		::System::Boolean _acrossBlockJump; // 0x30

		::System::Void _ctor(::System::Linq::Expressions::LabelTarget* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO__CTOR_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Interpreter::BranchLabel* GetLabel(::System::Linq::Expressions::Interpreter::LightCompiler* compiler)
		{
			return ((::System::Linq::Expressions::Interpreter::BranchLabel*(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LightCompiler*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_GETLABEL_OFFSET))(this, compiler);
		}

		::System::Void Reference(::System::Linq::Expressions::Interpreter::LabelScopeInfo* block)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_REFERENCE_OFFSET))(this, block);
		}

		::System::Void Define(::System::Linq::Expressions::Interpreter::LabelScopeInfo* block)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_DEFINE_OFFSET))(this, block);
		}

		::System::Void ValidateJump(::System::Linq::Expressions::Interpreter::LabelScopeInfo* reference)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_VALIDATEJUMP_OFFSET))(this, reference);
		}

		::System::Void ValidateFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_VALIDATEFINISH_OFFSET))(this);
		}

		::System::Void EnsureLabel(::System::Linq::Expressions::Interpreter::LightCompiler* compiler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LightCompiler*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_ENSURELABEL_OFFSET))(this, compiler);
		}

		::System::Boolean DefinedIn(::System::Linq::Expressions::Interpreter::LabelScopeInfo* scope)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_DEFINEDIN_OFFSET))(this, scope);
		}

		::System::Boolean get_HasDefinitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_GET_HASDEFINITIONS_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::LabelScopeInfo* FirstDefinition()
		{
			return ((::System::Linq::Expressions::Interpreter::LabelScopeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_FIRSTDEFINITION_OFFSET))(this);
		}

		::System::Void AddDefinition(::System::Linq::Expressions::Interpreter::LabelScopeInfo* scope)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_ADDDEFINITION_OFFSET))(this, scope);
		}

		::System::Boolean get_HasMultipleDefinitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_GET_HASMULTIPLEDEFINITIONS_OFFSET))(this);
		}
	};
}
