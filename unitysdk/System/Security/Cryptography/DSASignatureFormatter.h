#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricSignatureFormatter.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB5050)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSASignatureFormatter_TypeDefinitionIndex = 1022;

	class DSASignatureFormatter : public ::System::Security::Cryptography::AsymmetricSignatureFormatter
	{
	public:
		::System::String* _oid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER__CTOR_OFFSET))(this);
		}
	};
}
