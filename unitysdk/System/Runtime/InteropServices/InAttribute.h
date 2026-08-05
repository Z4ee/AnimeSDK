#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_INATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E410950)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int InAttribute_TypeDefinitionIndex = 1420;

	class InAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_INATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
