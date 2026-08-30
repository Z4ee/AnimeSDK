#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LabelScopeKind.h"
#include "unitysdk/System/Object.h"

namespace System::Linq::Expressions { class LabelTarget; }
namespace System::Linq::Expressions::Interpreter { class LabelInfo; }
namespace System::Linq::Expressions::Interpreter { template <typename T1, typename T2> class HybridReferenceDictionary_2; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO_ADDLABELINFO_OFFSET UNITYSDK_OFFSET(0x1E72F380)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO_CONTAINSTARGET_OFFSET UNITYSDK_OFFSET(0x1E72F080)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO_GET_CANJUMPINTO_OFFSET UNITYSDK_OFFSET(0x1E72F640)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO_TRYGETLABELINFO_OFFSET UNITYSDK_OFFSET(0x1E72F750)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E72F740)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LabelScopeInfo_TypeDefinitionIndex = 3442;

	class LabelScopeInfo : public ::System::Object
	{
	public:
		::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*>* _labels; // 0x10
		::System::Linq::Expressions::Interpreter::LabelScopeInfo* Parent; // 0x18
		::System::Linq::Expressions::Interpreter::LabelScopeKind Kind; // 0x20

		::System::Void _ctor(::System::Linq::Expressions::Interpreter::LabelScopeInfo* a1, ::System::Linq::Expressions::Interpreter::LabelScopeKind a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeKind))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_CanJumpInto()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO_GET_CANJUMPINTO_OFFSET))(this);
		}

		::System::Boolean ContainsTarget(::System::Linq::Expressions::LabelTarget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO_CONTAINSTARGET_OFFSET))(this, a1);
		}

		::System::Boolean TryGetLabelInfo(::System::Linq::Expressions::LabelTarget* a1, ::System::Linq::Expressions::Interpreter::LabelInfo*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*&))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO_TRYGETLABELINFO_OFFSET))(this, a1, a2);
		}

		::System::Void AddLabelInfo(::System::Linq::Expressions::LabelTarget* a1, ::System::Linq::Expressions::Interpreter::LabelInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO_ADDLABELINFO_OFFSET))(this, a1, a2);
		}
	};
}
