#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_GET_BODY_OFFSET UNITYSDK_OFFSET(0x19A40B10)
#define SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x19A40B20)
#define SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_GET_TEST_OFFSET UNITYSDK_OFFSET(0x19A40B00)
#define SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_GET_VARIABLE_OFFSET UNITYSDK_OFFSET(0x19A40AF0)
#define SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A40B30)
#define SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x19A40C10)
#define SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x19A40AD0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int CatchBlock_TypeDefinitionIndex = 3204;

	class CatchBlock : public ::System::Object
	{
	public:
		::System::Linq::Expressions::Expression* _Filter_k__BackingField; // 0x10
		::System::Type* _Test_k__BackingField; // 0x18
		::System::Linq::Expressions::Expression* _Body_k__BackingField; // 0x20
		::System::Linq::Expressions::ParameterExpression* _Variable_k__BackingField; // 0x28

		::System::Void _ctor(::System::Type* a1, ::System::Linq::Expressions::ParameterExpression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Linq::Expressions::ParameterExpression* get_Variable()
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_GET_VARIABLE_OFFSET))(this);
		}

		::System::Type* get_Test()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_GET_TEST_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Body()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_GET_BODY_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Filter()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_GET_FILTER_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_TOSTRING_OFFSET))(this);
		}

		::System::Linq::Expressions::CatchBlock* Update(::System::Linq::Expressions::ParameterExpression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3)
		{
			return ((::System::Linq::Expressions::CatchBlock*(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CATCHBLOCK_UPDATE_OFFSET))(this, a1, a2, a3);
		}
	};
}
