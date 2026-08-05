#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_TYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4EFC80)

namespace System::Linq::Expressions::Compiler
{
	inline static constexpr unsigned int DelegateHelpers_TypeInfo_TypeDefinitionIndex = 4939;

	class DelegateHelpers_TypeInfo : public ::System::Object
	{
	public:
		::System::Type* DelegateType; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Linq::Expressions::Compiler::DelegateHelpers_TypeInfo*>* TypeChain; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_TYPEINFO__CTOR_OFFSET))(this);
		}
	};
}
