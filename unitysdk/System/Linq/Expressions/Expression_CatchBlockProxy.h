#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class CatchBlock; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CATCHBLOCKPROXY_GET_BODY_OFFSET UNITYSDK_OFFSET(0x1B8DDF60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CATCHBLOCKPROXY_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x1B8DDF80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CATCHBLOCKPROXY_GET_TEST_OFFSET UNITYSDK_OFFSET(0x1B8DDFA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CATCHBLOCKPROXY_GET_VARIABLE_OFFSET UNITYSDK_OFFSET(0x1B8DDFC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CATCHBLOCKPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8DDEC0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_CatchBlockProxy_TypeDefinitionIndex = 4404;

	class Expression_CatchBlockProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::CatchBlock* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::CatchBlock* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::CatchBlock*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CATCHBLOCKPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* get_Body()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CATCHBLOCKPROXY_GET_BODY_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Filter()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CATCHBLOCKPROXY_GET_FILTER_OFFSET))(this);
		}

		::System::Type* get_Test()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CATCHBLOCKPROXY_GET_TEST_OFFSET))(this);
		}

		::System::Linq::Expressions::ParameterExpression* get_Variable()
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CATCHBLOCKPROXY_GET_VARIABLE_OFFSET))(this);
		}
	};
}
