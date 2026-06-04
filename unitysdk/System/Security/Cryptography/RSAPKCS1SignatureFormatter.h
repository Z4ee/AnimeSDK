#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricSignatureFormatter.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x185BB400)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAPKCS1SignatureFormatter_TypeDefinitionIndex = 1072;

	class RSAPKCS1SignatureFormatter : public ::System::Security::Cryptography::AsymmetricSignatureFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREFORMATTER__CTOR_OFFSET))(this);
		}
	};
}
