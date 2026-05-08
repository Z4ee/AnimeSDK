#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions::Compiler { class DelegateHelpers_TypeInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_TYPEINFOEXTENSIONS_MAKEDELEGATETYPE_1_OFFSET UNITYSDK_OFFSET(0x1C070490)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_TYPEINFOEXTENSIONS_MAKEDELEGATETYPE_OFFSET UNITYSDK_OFFSET(0x1C070480)

namespace System::Linq::Expressions::Compiler
{
	inline static constexpr unsigned int TypeInfoExtensions_TypeDefinitionIndex = 4949;

	class TypeInfoExtensions : public ::System::Object
	{
	public:
		static ::System::Type* MakeDelegateType(::System::Linq::Expressions::Compiler::DelegateHelpers_TypeInfo* info, ::System::Type* retType, ::Il2CppArray<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Type*(*)(::System::Linq::Expressions::Compiler::DelegateHelpers_TypeInfo*, ::System::Type*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_TYPEINFOEXTENSIONS_MAKEDELEGATETYPE_OFFSET))(info, retType, args);
		}

		static ::System::Type* MakeDelegateType_1(::System::Linq::Expressions::Compiler::DelegateHelpers_TypeInfo* info, ::System::Type* retType, ::System::Collections::Generic::IList_1<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Type*(*)(::System::Linq::Expressions::Compiler::DelegateHelpers_TypeInfo*, ::System::Type*, ::System::Collections::Generic::IList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_TYPEINFOEXTENSIONS_MAKEDELEGATETYPE_1_OFFSET))(info, retType, args);
		}
	};
}
