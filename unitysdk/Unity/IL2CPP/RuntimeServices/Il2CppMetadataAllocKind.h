#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::RuntimeServices
{
	inline static constexpr unsigned int Il2CppMetadataAllocKind_TypeDefinitionIndex = 6959;

	enum class Il2CppMetadataAllocKind : ::System::Int32
	{
		Inflated = 16,
		MethodInfo = 3,
		MethodRGCTX = 12,
		ClassRGCTX = 11,
		StringLiteral = 10,
		FieldInfo = 7,
		EventInfo = 5,
		ExtraMethodInfo = 8,
		String = 9,
		ParameterInfo = 4,
		Class = 1,
		GenericClass = 13,
		Vtable = 2,
		PropertyInfo = 6,
		Miscellaneous = 0,
		GenericMethod = 14,
		GenericInst = 15,
	};
}
