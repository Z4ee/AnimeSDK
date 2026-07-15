#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_ExtensionInfo_TypeDefinitionIndex = 3183;

	class Expression_ExtensionInfo : public ::System::Object
	{
	public:
		::System::Type* Type; // 0x10
		::System::Linq::Expressions::ExpressionType NodeType; // 0x18
	};
}
