#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions::Compiler { class DelegateHelpers_TypeInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_GETACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1E114530)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0x1E114900)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_GETNEXTTYPEINFO_OFFSET UNITYSDK_OFFSET(0x1E113E20)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_MAKECALLSITEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1E114CD0)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_MAKEDELEGATETYPE_OFFSET UNITYSDK_OFFSET(0x1E113580)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_MAKENEWCUSTOMDELEGATE_OFFSET UNITYSDK_OFFSET(0x1E1144E0)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_MAKENEWDELEGATE_OFFSET UNITYSDK_OFFSET(0x1E113A30)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_NEXTTYPEINFO_1_OFFSET UNITYSDK_OFFSET(0x1E113860)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_NEXTTYPEINFO_OFFSET UNITYSDK_OFFSET(0x1E113CE0)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_TRYMAKEVBSTYLEDCALLSITE_OFFSET UNITYSDK_OFFSET(0x1E113F50)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E114F40)

namespace System::Linq::Expressions::Compiler
{
	inline static constexpr unsigned int DelegateHelpers_TypeDefinitionIndex = 4938;

	class DelegateHelpers : public ::System::Object
	{
	public:
		static ::System::Linq::Expressions::Compiler::DelegateHelpers_TypeInfo** StaticGet__DelegateCache()
		{
			return (::System::Linq::Expressions::Compiler::DelegateHelpers_TypeInfo**)Il2CppClass::FromTypeDefinitionIndex(DelegateHelpers_TypeDefinitionIndex)->GetStaticField(0x46A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS__CCTOR_OFFSET))();
		}

		static ::System::Type* MakeDelegateType(::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Type*(*)(::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_MAKEDELEGATETYPE_OFFSET))(types);
		}

		static ::System::Linq::Expressions::Compiler::DelegateHelpers_TypeInfo* NextTypeInfo(::System::Type* initialArg)
		{
			return ((::System::Linq::Expressions::Compiler::DelegateHelpers_TypeInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_NEXTTYPEINFO_OFFSET))(initialArg);
		}

		static ::System::Linq::Expressions::Compiler::DelegateHelpers_TypeInfo* GetNextTypeInfo(::System::Type* initialArg, ::System::Linq::Expressions::Compiler::DelegateHelpers_TypeInfo* curTypeInfo)
		{
			return ((::System::Linq::Expressions::Compiler::DelegateHelpers_TypeInfo*(*)(::System::Type*, ::System::Linq::Expressions::Compiler::DelegateHelpers_TypeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_GETNEXTTYPEINFO_OFFSET))(initialArg, curTypeInfo);
		}

		static ::System::Linq::Expressions::Compiler::DelegateHelpers_TypeInfo* NextTypeInfo_1(::System::Type* initialArg, ::System::Linq::Expressions::Compiler::DelegateHelpers_TypeInfo* curTypeInfo)
		{
			return ((::System::Linq::Expressions::Compiler::DelegateHelpers_TypeInfo*(*)(::System::Type*, ::System::Linq::Expressions::Compiler::DelegateHelpers_TypeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_NEXTTYPEINFO_1_OFFSET))(initialArg, curTypeInfo);
		}

		static ::System::Type* TryMakeVBStyledCallSite(::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Type*(*)(::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_TRYMAKEVBSTYLEDCALLSITE_OFFSET))(types);
		}

		static ::System::Type* MakeNewDelegate(::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Type*(*)(::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_MAKENEWDELEGATE_OFFSET))(types);
		}

		static ::System::Type* GetFuncType(::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Type*(*)(::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_GETFUNCTYPE_OFFSET))(types);
		}

		static ::System::Type* GetActionType(::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Type*(*)(::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_GETACTIONTYPE_OFFSET))(types);
		}

		static ::System::Type* MakeCallSiteDelegate(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* types, ::System::Type* returnType)
		{
			return ((::System::Type*(*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_MAKECALLSITEDELEGATE_OFFSET))(types, returnType);
		}

		static ::System::Type* MakeNewCustomDelegate(::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Type*(*)(::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_MAKENEWCUSTOMDELEGATE_OFFSET))(types);
		}
	};
}
