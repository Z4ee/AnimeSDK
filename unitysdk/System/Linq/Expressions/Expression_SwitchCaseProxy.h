#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class SwitchCase; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHCASEPROXY_GET_BODY_OFFSET UNITYSDK_OFFSET(0x1C069840)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHCASEPROXY_GET_TESTVALUES_OFFSET UNITYSDK_OFFSET(0x1C069860)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHCASEPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0697A0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_SwitchCaseProxy_TypeDefinitionIndex = 4423;

	class Expression_SwitchCaseProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::SwitchCase* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::SwitchCase* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::SwitchCase*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHCASEPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* get_Body()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHCASEPROXY_GET_BODY_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_TestValues()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SWITCHCASEPROXY_GET_TESTVALUES_OFFSET))(this);
		}
	};
}
