#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Linq::Expressions { template <typename T1, typename T2, typename T3> class StackGuard___c__5_3; }

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int StackGuard___c__5_3_TypeDefinitionIndex = 4538;

	template <typename T1, typename T2, typename R>
	class StackGuard___c__5_3 : public ::System::Object
	{
	public:
		static ::System::Linq::Expressions::StackGuard___c__5_3<T1, T2, R>** StaticGet___9()
		{
			return (::System::Linq::Expressions::StackGuard___c__5_3<T1, T2, R>**)Il2CppClass::FromTypeDefinitionIndex(StackGuard___c__5_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Object*, R>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Object*, R>**)Il2CppClass::FromTypeDefinitionIndex(StackGuard___c__5_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
