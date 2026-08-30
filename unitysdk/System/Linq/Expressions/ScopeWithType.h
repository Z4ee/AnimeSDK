#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ScopeN.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class BlockExpression; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_SCOPEWITHTYPE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DF4E9C0)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEWITHTYPE_REWRITE_OFFSET UNITYSDK_OFFSET(0x1DF4E9D0)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEWITHTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4E950)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ScopeWithType_TypeDefinitionIndex = 3201;

	class ScopeWithType : public ::System::Linq::Expressions::ScopeN
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x20

		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEWITHTYPE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEWITHTYPE_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* a1, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEWITHTYPE_REWRITE_OFFSET))(this, a1, a2);
		}
	};
}
