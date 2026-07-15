#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::ProBuilder { template <typename T> class ArrayUtility___c__23_1; }

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ArrayUtility___c__23_1_TypeDefinitionIndex = 41527;

	template <typename T>
	class ArrayUtility___c__23_1 : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ArrayUtility___c__23_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<T, ::System::String*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<T, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ArrayUtility___c__23_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
