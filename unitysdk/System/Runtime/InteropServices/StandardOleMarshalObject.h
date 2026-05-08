#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_STANDARDOLEMARSHALOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A260B50)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int StandardOleMarshalObject_TypeDefinitionIndex = 4070;

	class StandardOleMarshalObject : public ::System::MarshalByRefObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_STANDARDOLEMARSHALOBJECT__CTOR_OFFSET))(this);
		}
	};
}
