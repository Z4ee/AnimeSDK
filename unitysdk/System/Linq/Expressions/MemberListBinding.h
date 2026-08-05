#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/MemberBinding.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ElementInit; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_MEMBERLISTBINDING_GET_INITIALIZERS_OFFSET UNITYSDK_OFFSET(0x1E5A0650)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERLISTBINDING_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E5A0660)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERLISTBINDING_VALIDATEASDEFINEDHERE_OFFSET UNITYSDK_OFFSET(0x1E5A06F0)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERLISTBINDING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5A0700)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERLISTBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A0640)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MemberListBinding_TypeDefinitionIndex = 4509;

	class MemberListBinding : public ::System::Linq::Expressions::MemberBinding
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* _Initializers_k__BackingField; // 0x20

		::System::Void _ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* initializers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERLISTBINDING__CTOR_OFFSET))(this, member, initializers);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERLISTBINDING__CTOR_1_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* get_Initializers()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERLISTBINDING_GET_INITIALIZERS_OFFSET))(this);
		}

		::System::Linq::Expressions::MemberListBinding* Update(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ElementInit*>* initializers)
		{
			return ((::System::Linq::Expressions::MemberListBinding*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ElementInit*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERLISTBINDING_UPDATE_OFFSET))(this, initializers);
		}

		::System::Void ValidateAsDefinedHere(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERLISTBINDING_VALIDATEASDEFINEDHERE_OFFSET))(this, index);
		}
	};
}
