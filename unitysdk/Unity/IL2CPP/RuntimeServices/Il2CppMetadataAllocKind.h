#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::RuntimeServices
{
	inline static constexpr unsigned int Il2CppMetadataAllocKind_TypeDefinitionIndex = 6833;

	enum class Il2CppMetadataAllocKind : ::System::Int32
	{
		EventInfo = 5,
		ExtraMethodInfo = 8,
		MethodInfo = 3,
		StringLiteral = 10,
		ParameterInfo = 4,
		PropertyInfo = 6,
		String = 9,
		Class = 1,
		ClassRGCTX = 11,
		Miscellaneous = 0,
		Inflated = 16,
		GenericInst = 15,
		GenericMethod = 14,
		FieldInfo = 7,
		GenericClass = 13,
		Vtable = 2,
		MethodRGCTX = 12,
	};
}
