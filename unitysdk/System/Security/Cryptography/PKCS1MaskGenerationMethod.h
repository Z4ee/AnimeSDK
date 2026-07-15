#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/MaskGenerationMethod.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS1MASKGENERATIONMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x183697B0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int PKCS1MaskGenerationMethod_TypeDefinitionIndex = 1030;

	class PKCS1MaskGenerationMethod : public ::System::Security::Cryptography::MaskGenerationMethod
	{
	public:
		::System::String* HashNameValue; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS1MASKGENERATIONMETHOD__CTOR_OFFSET))(this);
		}
	};
}
