#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1F7BA310)
#define SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GET_ADDMETHOD_OFFSET UNITYSDK_OFFSET(0x1F7BA2F0)
#define SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1F7BA370)
#define SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1F7BA300)
#define SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F7BA3C0)
#define SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F7BA3D0)
#define SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7BA440)
#define SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7BA2E0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ElementInit_TypeDefinitionIndex = 4470;

	class ElementInit : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* _AddMethod_k__BackingField; // 0x10
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* _Arguments_k__BackingField; // 0x18

		::System::Void _ctor(::System::Reflection::MethodInfo* addMethod, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT__CTOR_OFFSET))(this, addMethod, arguments);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT__CTOR_1_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_AddMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GET_ADDMETHOD_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_Arguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GETARGUMENT_OFFSET))(this, index);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_TOSTRING_OFFSET))(this);
		}

		::System::Linq::Expressions::ElementInit* Update(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::ElementInit*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_UPDATE_OFFSET))(this, arguments);
		}
	};
}
