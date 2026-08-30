#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/AnalyzeTypeIsResult.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class TypeBinaryExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_CONSTANTCHECK_ANALYZETYPEIS_1_OFFSET UNITYSDK_OFFSET(0x1E6DBC00)
#define SYSTEM_LINQ_EXPRESSIONS_CONSTANTCHECK_ANALYZETYPEIS_OFFSET UNITYSDK_OFFSET(0x1E6DBBE0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ConstantCheck_TypeDefinitionIndex = 3207;

	class ConstantCheck : public ::System::Object
	{
	public:
		static ::System::Linq::Expressions::AnalyzeTypeIsResult AnalyzeTypeIs(::System::Linq::Expressions::TypeBinaryExpression* a1)
		{
			return ((::System::Linq::Expressions::AnalyzeTypeIsResult(*)(::System::Linq::Expressions::TypeBinaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONSTANTCHECK_ANALYZETYPEIS_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::AnalyzeTypeIsResult AnalyzeTypeIs_1(::System::Linq::Expressions::Expression* a1, ::System::Type* a2)
		{
			return ((::System::Linq::Expressions::AnalyzeTypeIsResult(*)(::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONSTANTCHECK_ANALYZETYPEIS_1_OFFSET))(a1, a2);
		}
	};
}
