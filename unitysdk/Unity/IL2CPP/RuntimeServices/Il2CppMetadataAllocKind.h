#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::RuntimeServices
{
	inline static constexpr unsigned int Il2CppMetadataAllocKind_TypeDefinitionIndex = 6974;

	enum class Il2CppMetadataAllocKind : ::System::Int32
	{
		ParameterInfo = 4,
		ClassRGCTX = 11,
		MethodInfo = 3,
		String = 9,
		Inflated = 16,
		GenericMethod = 14,
		PropertyInfo = 6,
		ExtraMethodInfo = 8,
		Class = 1,
		GenericClass = 13,
		Miscellaneous = 0,
		StringLiteral = 10,
		FieldInfo = 7,
		EventInfo = 5,
		GenericInst = 15,
		MethodRGCTX = 12,
		Vtable = 2,
	};
}
