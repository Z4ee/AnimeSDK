#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"

#define SYSTEM_CONTEXTBOUNDOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18661FB0)

namespace System
{
	inline static constexpr unsigned int ContextBoundObject_TypeDefinitionIndex = 219;

	class ContextBoundObject : public ::System::MarshalByRefObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONTEXTBOUNDOBJECT__CTOR_OFFSET))(this);
		}
	};
}
