#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EXTENSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E304C50)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_ExtensionInfo_TypeDefinitionIndex = 4427;

	class Expression_ExtensionInfo : public ::System::Object
	{
	public:
		::System::Type* Type; // 0x10
		::System::Linq::Expressions::ExpressionType NodeType; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ExpressionType, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EXTENSIONINFO__CTOR_OFFSET))(this, nodeType, type);
		}
	};
}
