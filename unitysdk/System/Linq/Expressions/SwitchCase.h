#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE_GET_BODY_OFFSET UNITYSDK_OFFSET(0x1DF51560)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE_GET_TESTVALUES_OFFSET UNITYSDK_OFFSET(0x1DF51550)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int SwitchCase_TypeDefinitionIndex = 3275;

	class SwitchCase : public ::System::Object
	{
	public:
		::System::Linq::Expressions::Expression* _Body_k__BackingField; // 0x10
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* _TestValues_k__BackingField; // 0x18

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_TestValues()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE_GET_TESTVALUES_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Body()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE_GET_BODY_OFFSET))(this);
		}
	};
}
