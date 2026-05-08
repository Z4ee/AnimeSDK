#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class SymbolDocumentInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1B8D94B0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x1B8D9450)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_ENDCOLUMN_OFFSET UNITYSDK_OFFSET(0x1B8D9400)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_ENDLINE_OFFSET UNITYSDK_OFFSET(0x1B8D93B0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0x1B8D9460)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1B8D9300)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_STARTCOLUMN_OFFSET UNITYSDK_OFFSET(0x1B8D9360)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_STARTLINE_OFFSET UNITYSDK_OFFSET(0x1B8D9310)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B8D92D0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B8D94E0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8D9270)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int DebugInfoExpression_TypeDefinitionIndex = 4452;

	class DebugInfoExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::SymbolDocumentInfo* _Document_k__BackingField; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::SymbolDocumentInfo* document)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::SymbolDocumentInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION__CTOR_OFFSET))(this, document);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION__CTOR_1_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Int32 get_StartLine()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_STARTLINE_OFFSET))(this);
		}

		::System::Int32 get_StartColumn()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_STARTCOLUMN_OFFSET))(this);
		}

		::System::Int32 get_EndLine()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_ENDLINE_OFFSET))(this);
		}

		::System::Int32 get_EndColumn()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_ENDCOLUMN_OFFSET))(this);
		}

		::System::Linq::Expressions::SymbolDocumentInfo* get_Document()
		{
			return ((::System::Linq::Expressions::SymbolDocumentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_DOCUMENT_OFFSET))(this);
		}

		::System::Boolean get_IsClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_ISCLEAR_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}
	};
}
