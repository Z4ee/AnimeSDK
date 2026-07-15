#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/MemberBinding.h"

namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define SYSTEM_LINQ_EXPRESSIONS_MEMBERMEMBERBINDING_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x1C1C7A90)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MemberMemberBinding_TypeDefinitionIndex = 3240;

	class MemberMemberBinding : public ::System::Linq::Expressions::MemberBinding
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* _Bindings_k__BackingField; // 0x20

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* get_Bindings()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERMEMBERBINDING_GET_BINDINGS_OFFSET))(this);
		}
	};
}
