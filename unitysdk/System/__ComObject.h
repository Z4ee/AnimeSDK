#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM___COMOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0ABA0)

namespace System
{
	inline static constexpr unsigned int __ComObject_TypeDefinitionIndex = 447;

	class __ComObject : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___COMOBJECT__CTOR_OFFSET))(this);
		}
	};
}
