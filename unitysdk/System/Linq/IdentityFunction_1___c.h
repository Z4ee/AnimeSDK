#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Linq { template <typename T> class IdentityFunction_1___c; }

namespace System::Linq
{
	inline static constexpr unsigned int IdentityFunction_1___c_TypeDefinitionIndex = 3157;

	template <typename TElement>
	class IdentityFunction_1___c : public ::System::Object
	{
	public:
		static ::System::Linq::IdentityFunction_1___c<TElement>** StaticGet___9()
		{
			return (::System::Linq::IdentityFunction_1___c<TElement>**)Il2CppClass::FromTypeDefinitionIndex(IdentityFunction_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<TElement, TElement>** StaticGet___9__1_0()
		{
			return (::System::Func_2<TElement, TElement>**)Il2CppClass::FromTypeDefinitionIndex(IdentityFunction_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
