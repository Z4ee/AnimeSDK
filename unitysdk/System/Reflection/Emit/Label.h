#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_REFLECTION_EMIT_LABEL_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BB2100)
#define SYSTEM_REFLECTION_EMIT_LABEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19050)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int Label_TypeDefinitionIndex = 648;

	struct alignas(4) Label
	{
		::System::Int32 label; // 0x10

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_LABEL_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_LABEL_GETHASHCODE_OFFSET))(this);
		}
	};
}
