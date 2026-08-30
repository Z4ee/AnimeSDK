#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/RSAPKCS1SignatureDescription.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SHA384SIGNATUREDESCRIPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x166BB5C0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAPKCS1SHA384SignatureDescription_TypeDefinitionIndex = 1067;

	class RSAPKCS1SHA384SignatureDescription : public ::System::Security::Cryptography::RSAPKCS1SignatureDescription
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SHA384SIGNATUREDESCRIPTION__CTOR_OFFSET))(this);
		}
	};
}
