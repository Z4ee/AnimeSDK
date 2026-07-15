#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SignatureDescription.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDESCRIPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1509F0E0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAPKCS1SignatureDescription_TypeDefinitionIndex = 1057;

	class RSAPKCS1SignatureDescription : public ::System::Security::Cryptography::SignatureDescription
	{
	public:
		::System::String* _hashAlgorithm; // 0x30

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDESCRIPTION__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
