#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E6DC280)
#define SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GET_ADDMETHOD_OFFSET UNITYSDK_OFFSET(0x1E6DC260)
#define SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E6DC2E0)
#define SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1E6DC270)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ElementInit_TypeDefinitionIndex = 3215;

	class ElementInit : public ::System::Object
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* _Arguments_k__BackingField; // 0x10
		::System::Reflection::MethodInfo* _AddMethod_k__BackingField; // 0x18

		::System::Reflection::MethodInfo* get_AddMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GET_ADDMETHOD_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_Arguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GETARGUMENT_OFFSET))(this, a1);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GET_ARGUMENTCOUNT_OFFSET))(this);
		}
	};
}
