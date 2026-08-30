#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	inline static constexpr unsigned int EmptyArray_1_TypeDefinitionIndex = 391;

	template <typename T>
	class EmptyArray_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<T>** StaticGet_Value()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(EmptyArray_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
