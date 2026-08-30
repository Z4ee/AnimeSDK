#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	inline static constexpr unsigned int ValueType_Internal_TypeDefinitionIndex = 451;

	class ValueType_Internal : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_hash_code_of_ptr_seed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ValueType_Internal_TypeDefinitionIndex)->GetStaticField(0x8B00);
		}
	};
}
