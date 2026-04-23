#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"

namespace System::Linq::Expressions { class SymbolDocumentInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x19ECCEC0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_ENDLINE_OFFSET UNITYSDK_OFFSET(0x19ECCE70)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0x19ECCED0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_STARTLINE_OFFSET UNITYSDK_OFFSET(0x19ECCE20)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int DebugInfoExpression_TypeDefinitionIndex = 3200;

	class DebugInfoExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::SymbolDocumentInfo* _Document_k__BackingField; // 0x10

		::System::Int32 get_StartLine()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_STARTLINE_OFFSET))(this);
		}

		::System::Int32 get_EndLine()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_ENDLINE_OFFSET))(this);
		}

		::System::Linq::Expressions::SymbolDocumentInfo* get_Document()
		{
			return ((::System::Linq::Expressions::SymbolDocumentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_DOCUMENT_OFFSET))(this);
		}

		::System::Boolean get_IsClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_ISCLEAR_OFFSET))(this);
		}
	};
}
