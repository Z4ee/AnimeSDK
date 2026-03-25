#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"

#define SYSTEM_CONTEXTBOUNDOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1627C380)

namespace System
{
	inline static constexpr unsigned int ContextBoundObject_TypeDefinitionIndex = 220;

	class ContextBoundObject : public ::System::MarshalByRefObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONTEXTBOUNDOBJECT__CTOR_OFFSET))(this);
		}
	};
}
