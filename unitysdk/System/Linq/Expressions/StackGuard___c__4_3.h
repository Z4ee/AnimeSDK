#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Linq::Expressions { template <typename T1, typename T2, typename T3> class StackGuard___c__4_3; }

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int StackGuard___c__4_3_TypeDefinitionIndex = 4537;

	template <typename T1, typename T2, typename T3>
	class StackGuard___c__4_3 : public ::System::Object
	{
	public:
		static ::System::Linq::Expressions::StackGuard___c__4_3<T1, T2, T3>** StaticGet___9()
		{
			return (::System::Linq::Expressions::StackGuard___c__4_3<T1, T2, T3>**)Il2CppClass::FromTypeDefinitionIndex(StackGuard___c__4_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Object*, ::System::Object*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(StackGuard___c__4_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
