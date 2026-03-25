#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricSignatureDeformatter.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x161D3D00)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAPKCS1SignatureDeformatter_TypeDefinitionIndex = 1070;

	class RSAPKCS1SignatureDeformatter : public ::System::Security::Cryptography::AsymmetricSignatureDeformatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER__CTOR_OFFSET))(this);
		}
	};
}
