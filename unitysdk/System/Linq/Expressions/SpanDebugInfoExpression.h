#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/DebugInfoExpression.h"

namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class SymbolDocumentInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_SPANDEBUGINFOEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1F4F9510)
#define SYSTEM_LINQ_EXPRESSIONS_SPANDEBUGINFOEXPRESSION_GET_ENDCOLUMN_OFFSET UNITYSDK_OFFSET(0x1F4F94F0)
#define SYSTEM_LINQ_EXPRESSIONS_SPANDEBUGINFOEXPRESSION_GET_ENDLINE_OFFSET UNITYSDK_OFFSET(0x1F4F94E0)
#define SYSTEM_LINQ_EXPRESSIONS_SPANDEBUGINFOEXPRESSION_GET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0x1F4F9500)
#define SYSTEM_LINQ_EXPRESSIONS_SPANDEBUGINFOEXPRESSION_GET_STARTCOLUMN_OFFSET UNITYSDK_OFFSET(0x1F4F94D0)
#define SYSTEM_LINQ_EXPRESSIONS_SPANDEBUGINFOEXPRESSION_GET_STARTLINE_OFFSET UNITYSDK_OFFSET(0x1F4F94C0)
#define SYSTEM_LINQ_EXPRESSIONS_SPANDEBUGINFOEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4F9440)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int SpanDebugInfoExpression_TypeDefinitionIndex = 4452;

	class SpanDebugInfoExpression : public ::System::Linq::Expressions::DebugInfoExpression
	{
	public:
		::System::Int32 _startColumn; // 0x18
		::System::Int32 _startLine; // 0x1C
		::System::Int32 _endColumn; // 0x20
		::System::Int32 _endLine; // 0x24

		::System::Void _ctor(::System::Linq::Expressions::SymbolDocumentInfo* document, ::System::Int32 startLine, ::System::Int32 startColumn, ::System::Int32 endLine, ::System::Int32 endColumn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::SymbolDocumentInfo*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SPANDEBUGINFOEXPRESSION__CTOR_OFFSET))(this, document, startLine, startColumn, endLine, endColumn);
		}

		::System::Int32 get_StartLine()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SPANDEBUGINFOEXPRESSION_GET_STARTLINE_OFFSET))(this);
		}

		::System::Int32 get_StartColumn()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SPANDEBUGINFOEXPRESSION_GET_STARTCOLUMN_OFFSET))(this);
		}

		::System::Int32 get_EndLine()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SPANDEBUGINFOEXPRESSION_GET_ENDLINE_OFFSET))(this);
		}

		::System::Int32 get_EndColumn()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SPANDEBUGINFOEXPRESSION_GET_ENDCOLUMN_OFFSET))(this);
		}

		::System::Boolean get_IsClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SPANDEBUGINFOEXPRESSION_GET_ISCLEAR_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SPANDEBUGINFOEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}
	};
}
