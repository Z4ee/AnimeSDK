#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SignatureDescription.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDESCRIPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8CA100)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSASignatureDescription_TypeDefinitionIndex = 1108;

	class DSASignatureDescription : public ::System::Security::Cryptography::SignatureDescription
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDESCRIPTION__CTOR_OFFSET))(this);
		}
	};
}
