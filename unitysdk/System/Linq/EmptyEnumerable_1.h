#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Linq
{
	inline static constexpr unsigned int EmptyEnumerable_1_TypeDefinitionIndex = 3155;

	template <typename TElement>
	class EmptyEnumerable_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<TElement>** StaticGet_Instance()
		{
			return (::Il2CppArray<TElement>**)Il2CppClass::FromTypeDefinitionIndex(EmptyEnumerable_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
