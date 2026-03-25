#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DELEGATEHELPERS_MAKEDELEGATE_OFFSET UNITYSDK_OFFSET(0x184C0790)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int DelegateHelpers_TypeDefinitionIndex = 3645;

	class DelegateHelpers : public ::System::Object
	{
	public:
		static ::System::Type* MakeDelegate(::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Type*(*)(::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DELEGATEHELPERS_MAKEDELEGATE_OFFSET))(types);
		}
	};
}
