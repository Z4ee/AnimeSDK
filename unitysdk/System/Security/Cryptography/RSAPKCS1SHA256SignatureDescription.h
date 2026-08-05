#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/RSAPKCS1SignatureDescription.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SHA256SIGNATUREDESCRIPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A7C10)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAPKCS1SHA256SignatureDescription_TypeDefinitionIndex = 1105;

	class RSAPKCS1SHA256SignatureDescription : public ::System::Security::Cryptography::RSAPKCS1SignatureDescription
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SHA256SIGNATUREDESCRIPTION__CTOR_OFFSET))(this);
		}
	};
}
