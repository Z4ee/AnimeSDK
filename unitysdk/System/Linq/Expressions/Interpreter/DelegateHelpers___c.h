#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DELEGATEHELPERS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x184C1110)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DELEGATEHELPERS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x184C1150)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DELEGATEHELPERS___C__MAKEDELEGATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x184C1160)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int DelegateHelpers___c_TypeDefinitionIndex = 3646;

	class DelegateHelpers___c : public ::System::Object
	{
	public:
		static ::System::Linq::Expressions::Interpreter::DelegateHelpers___c** StaticGet___9()
		{
			return (::System::Linq::Expressions::Interpreter::DelegateHelpers___c**)Il2CppClass::FromTypeDefinitionIndex(DelegateHelpers___c_TypeDefinitionIndex)->GetStaticField(0xF510);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DelegateHelpers___c_TypeDefinitionIndex)->GetStaticField(0xF518);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DELEGATEHELPERS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DELEGATEHELPERS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _MakeDelegate_b__1_0(::System::Type* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DELEGATEHELPERS___C__MAKEDELEGATE_B__1_0_OFFSET))(this, t);
		}
	};
}
