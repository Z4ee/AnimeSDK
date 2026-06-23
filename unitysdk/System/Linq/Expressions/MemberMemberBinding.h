#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/MemberBinding.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_MEMBERMEMBERBINDING_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x1E3906E0)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERMEMBERBINDING_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E3906F0)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERMEMBERBINDING_VALIDATEASDEFINEDHERE_OFFSET UNITYSDK_OFFSET(0x1E390780)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERMEMBERBINDING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E390790)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERMEMBERBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3906D0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MemberMemberBinding_TypeDefinitionIndex = 4510;

	class MemberMemberBinding : public ::System::Linq::Expressions::MemberBinding
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* _Bindings_k__BackingField; // 0x20

		::System::Void _ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* bindings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERMEMBERBINDING__CTOR_OFFSET))(this, member, bindings);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERMEMBERBINDING__CTOR_1_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* get_Bindings()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERMEMBERBINDING_GET_BINDINGS_OFFSET))(this);
		}

		::System::Linq::Expressions::MemberMemberBinding* Update(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::MemberBinding*>* bindings)
		{
			return ((::System::Linq::Expressions::MemberMemberBinding*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::MemberBinding*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERMEMBERBINDING_UPDATE_OFFSET))(this, bindings);
		}

		::System::Void ValidateAsDefinedHere(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERMEMBERBINDING_VALIDATEASDEFINEDHERE_OFFSET))(this, index);
		}
	};
}
