#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE_GET_BODY_OFFSET UNITYSDK_OFFSET(0x1F75C850)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE_GET_TESTVALUES_OFFSET UNITYSDK_OFFSET(0x1F75C840)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F75C860)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F75C870)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F75C900)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F75C830)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int SwitchCase_TypeDefinitionIndex = 4541;

	class SwitchCase : public ::System::Object
	{
	public:
		::System::Linq::Expressions::Expression* _Body_k__BackingField; // 0x10
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* _TestValues_k__BackingField; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::Expression* body, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* testValues)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE__CTOR_OFFSET))(this, body, testValues);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE__CTOR_1_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_TestValues()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE_GET_TESTVALUES_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Body()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE_GET_BODY_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE_TOSTRING_OFFSET))(this);
		}

		::System::Linq::Expressions::SwitchCase* Update(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* testValues, ::System::Linq::Expressions::Expression* body)
		{
			return ((::System::Linq::Expressions::SwitchCase*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE_UPDATE_OFFSET))(this, testValues, body);
		}
	};
}
