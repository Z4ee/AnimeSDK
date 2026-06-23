#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_STATHREADATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE5BA10)

namespace System
{
	inline static constexpr unsigned int STAThreadAttribute_TypeDefinitionIndex = 324;

	class STAThreadAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STATHREADATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
