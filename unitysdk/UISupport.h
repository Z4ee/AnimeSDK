#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UISUPPORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F166A40)

inline static constexpr unsigned int UISupport_TypeDefinitionIndex = 32122;

class UISupport : public ::System::Object
{
public:
	static ::System::Void Initialize()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UISUPPORT_INITIALIZE_OFFSET))();
	}
};
