#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/AnalyzeTypeIsResult.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class TypeBinaryExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_CONSTANTCHECK_ANALYZETYPEIS_1_OFFSET UNITYSDK_OFFSET(0x18491CF0)
#define SYSTEM_LINQ_EXPRESSIONS_CONSTANTCHECK_ANALYZETYPEIS_OFFSET UNITYSDK_OFFSET(0x18491CD0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ConstantCheck_TypeDefinitionIndex = 3192;

	class ConstantCheck : public ::System::Object
	{
	public:
		static ::System::Linq::Expressions::AnalyzeTypeIsResult AnalyzeTypeIs(::System::Linq::Expressions::TypeBinaryExpression* typeIs)
		{
			return ((::System::Linq::Expressions::AnalyzeTypeIsResult(*)(::System::Linq::Expressions::TypeBinaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONSTANTCHECK_ANALYZETYPEIS_OFFSET))(typeIs);
		}

		static ::System::Linq::Expressions::AnalyzeTypeIsResult AnalyzeTypeIs_1(::System::Linq::Expressions::Expression* operand, ::System::Type* testType)
		{
			return ((::System::Linq::Expressions::AnalyzeTypeIsResult(*)(::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONSTANTCHECK_ANALYZETYPEIS_1_OFFSET))(operand, testType);
		}
	};
}
