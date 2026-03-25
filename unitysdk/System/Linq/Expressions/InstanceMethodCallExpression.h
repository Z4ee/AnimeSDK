#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/MethodCallExpression.h"

namespace System::Linq::Expressions { class Expression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x184B6930)
#define SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x184B68C0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int InstanceMethodCallExpression_TypeDefinitionIndex = 3235;

	class InstanceMethodCallExpression : public ::System::Linq::Expressions::MethodCallExpression
	{
	public:
		::System::Linq::Expressions::Expression* _instance; // 0x18

		::System::Void _ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION__CTOR_OFFSET))(this, method, instance);
		}

		::System::Linq::Expressions::Expression* GetInstance()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION_GETINSTANCE_OFFSET))(this);
		}
	};
}
