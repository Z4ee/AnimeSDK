#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19983690)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SignatureDescription_TypeDefinitionIndex = 1103;

	class SignatureDescription : public ::System::Object
	{
	public:
		::System::String* _strDigest; // 0x10
		::System::String* _strDeformatter; // 0x18
		::System::String* _strFormatter; // 0x20
		::System::String* _strKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION__CTOR_OFFSET))(this);
		}
	};
}
