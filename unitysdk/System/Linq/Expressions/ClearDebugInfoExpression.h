#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/DebugInfoExpression.h"

namespace System::Linq::Expressions { class SymbolDocumentInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_CLEARDEBUGINFOEXPRESSION_GET_ENDCOLUMN_OFFSET UNITYSDK_OFFSET(0x1D235250)
#define SYSTEM_LINQ_EXPRESSIONS_CLEARDEBUGINFOEXPRESSION_GET_ENDLINE_OFFSET UNITYSDK_OFFSET(0x1D235240)
#define SYSTEM_LINQ_EXPRESSIONS_CLEARDEBUGINFOEXPRESSION_GET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0x1D235210)
#define SYSTEM_LINQ_EXPRESSIONS_CLEARDEBUGINFOEXPRESSION_GET_STARTCOLUMN_OFFSET UNITYSDK_OFFSET(0x1D235230)
#define SYSTEM_LINQ_EXPRESSIONS_CLEARDEBUGINFOEXPRESSION_GET_STARTLINE_OFFSET UNITYSDK_OFFSET(0x1D235220)
#define SYSTEM_LINQ_EXPRESSIONS_CLEARDEBUGINFOEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2351B0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ClearDebugInfoExpression_TypeDefinitionIndex = 4453;

	class ClearDebugInfoExpression : public ::System::Linq::Expressions::DebugInfoExpression
	{
	public:
		::System::Void _ctor(::System::Linq::Expressions::SymbolDocumentInfo* document)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::SymbolDocumentInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CLEARDEBUGINFOEXPRESSION__CTOR_OFFSET))(this, document);
		}

		::System::Boolean get_IsClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CLEARDEBUGINFOEXPRESSION_GET_ISCLEAR_OFFSET))(this);
		}

		::System::Int32 get_StartLine()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CLEARDEBUGINFOEXPRESSION_GET_STARTLINE_OFFSET))(this);
		}

		::System::Int32 get_StartColumn()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CLEARDEBUGINFOEXPRESSION_GET_STARTCOLUMN_OFFSET))(this);
		}

		::System::Int32 get_EndLine()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CLEARDEBUGINFOEXPRESSION_GET_ENDLINE_OFFSET))(this);
		}

		::System::Int32 get_EndColumn()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CLEARDEBUGINFOEXPRESSION_GET_ENDCOLUMN_OFFSET))(this);
		}
	};
}
