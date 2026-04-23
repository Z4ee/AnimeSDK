#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/Vector_1.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NUMERICS_VECTOR_GET_ISHARDWAREACCELERATED_OFFSET UNITYSDK_OFFSET(0x19F767A0)

namespace System::Numerics
{
	inline static constexpr unsigned int Vector_TypeDefinitionIndex = 4883;

	class Vector : public ::System::Object
	{
	public:
		static ::System::Boolean get_IsHardwareAccelerated()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR_GET_ISHARDWAREACCELERATED_OFFSET))();
		}
	};
}
