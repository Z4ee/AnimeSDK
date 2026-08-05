#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/RuntimeType.h"

#define SYSTEM_MONOTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C0EF0)

namespace System
{
	inline static constexpr unsigned int MonoType_TypeDefinitionIndex = 394;

	class MonoType : public ::System::RuntimeType
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOTYPE__CTOR_OFFSET))(this);
		}
	};
}
