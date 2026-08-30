#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_REFLECTION_EMIT_UNMANAGEDMARSHAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC1F6D0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int UnmanagedMarshal_TypeDefinitionIndex = 1768;

	class UnmanagedMarshal : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_UNMANAGEDMARSHAL__CTOR_OFFSET))(this);
		}
	};
}
