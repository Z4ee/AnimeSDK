#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7C1540)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7C1580)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION___C__NEW_B__358_0_OFFSET UNITYSDK_OFFSET(0x1F7C1590)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression___c_TypeDefinitionIndex = 4429;

	class Expression___c : public ::System::Object
	{
	public:
		static ::System::Linq::Expressions::Expression___c** StaticGet___9()
		{
			return (::System::Linq::Expressions::Expression___c**)Il2CppClass::FromTypeDefinitionIndex(Expression___c_TypeDefinitionIndex)->GetStaticField(0x3BC0);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__358_0()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Expression___c_TypeDefinitionIndex)->GetStaticField(0x3BC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _New_b__358_0(::System::Reflection::ConstructorInfo* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION___C__NEW_B__358_0_OFFSET))(this, c);
		}
	};
}
