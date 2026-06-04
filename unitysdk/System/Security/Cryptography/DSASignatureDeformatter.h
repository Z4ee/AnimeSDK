#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricSignatureDeformatter.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x187E62F0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSASignatureDeformatter_TypeDefinitionIndex = 1013;

	class DSASignatureDeformatter : public ::System::Security::Cryptography::AsymmetricSignatureDeformatter
	{
	public:
		::System::String* _oid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER__CTOR_OFFSET))(this);
		}
	};
}
