#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_OUTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A80A910)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int OutAttribute_TypeDefinitionIndex = 1410;

	class OutAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_OUTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
