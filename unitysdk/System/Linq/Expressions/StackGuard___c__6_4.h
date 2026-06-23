#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Linq::Expressions { template <typename T1, typename T2, typename T3, typename T4> class StackGuard___c__6_4; }

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int StackGuard___c__6_4_TypeDefinitionIndex = 4539;

	template <typename T1, typename T2, typename T3, typename R>
	class StackGuard___c__6_4 : public ::System::Object
	{
	public:
		static ::System::Linq::Expressions::StackGuard___c__6_4<T1, T2, T3, R>** StaticGet___9()
		{
			return (::System::Linq::Expressions::StackGuard___c__6_4<T1, T2, T3, R>**)Il2CppClass::FromTypeDefinitionIndex(StackGuard___c__6_4_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Object*, R>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Object*, R>**)Il2CppClass::FromTypeDefinitionIndex(StackGuard___c__6_4_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
