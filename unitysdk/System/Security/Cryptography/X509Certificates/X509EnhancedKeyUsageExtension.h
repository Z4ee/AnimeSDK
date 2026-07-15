#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsnDecodeStatus.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509Extension.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsnEncodedData; }
namespace System::Security::Cryptography { class OidCollection; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x167C82E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x167C7F40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x167C8450)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x167C7EB0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509EnhancedKeyUsageExtension_TypeDefinitionIndex = 2699;

	class X509EnhancedKeyUsageExtension : public ::System::Security::Cryptography::X509Certificates::X509Extension
	{
	public:
		::System::Security::Cryptography::OidCollection* _enhKeyUsage; // 0x28
		::System::Security::Cryptography::AsnDecodeStatus _status; // 0x30

		::System::Void _ctor(::System::Security::Cryptography::AsnEncodedData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void CopyFrom(::System::Security::Cryptography::AsnEncodedData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_COPYFROM_OFFSET))(this, a1);
		}

		::System::Security::Cryptography::AsnDecodeStatus Decode(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Security::Cryptography::AsnDecodeStatus(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_DECODE_OFFSET))(this, a1);
		}

		::System::String* ToString(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_TOSTRING_OFFSET))(this, a1);
		}
	};
}
