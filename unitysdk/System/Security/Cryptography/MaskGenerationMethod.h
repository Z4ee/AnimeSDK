#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_MASKGENERATIONMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x183697A0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int MaskGenerationMethod_TypeDefinitionIndex = 1028;

	class MaskGenerationMethod : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MASKGENERATIONMETHOD__CTOR_OFFSET))(this);
		}
	};
}
