#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/MemberBinding.h"

namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ElementInit; }

#define SYSTEM_LINQ_EXPRESSIONS_MEMBERLISTBINDING_GET_INITIALIZERS_OFFSET UNITYSDK_OFFSET(0x1ADB4D60)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MemberListBinding_TypeDefinitionIndex = 3235;

	class MemberListBinding : public ::System::Linq::Expressions::MemberBinding
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* _Initializers_k__BackingField; // 0x20

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* get_Initializers()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERLISTBINDING_GET_INITIALIZERS_OFFSET))(this);
		}
	};
}
