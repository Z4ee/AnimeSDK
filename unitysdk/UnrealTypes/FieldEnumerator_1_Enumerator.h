#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnrealTypes { class Field; }
namespace UnrealTypes { class Struct; }

namespace UnrealTypes
{
	inline static constexpr unsigned int FieldEnumerator_1_Enumerator_TypeDefinitionIndex = 28331;

	template <typename T>
	struct FieldEnumerator_1_Enumerator
	{
		::UnrealTypes::Struct* _struct; // 0x0
		::UnrealTypes::Field* _field; // 0x0
		::System::Boolean _includeSuper; // 0x0
	};
}
