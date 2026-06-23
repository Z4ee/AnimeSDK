#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/OidGroup.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CAPI_CRYPTFINDOIDINFOKEYFROMNAME_OFFSET UNITYSDK_OFFSET(0x1C309F90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CAPI_CRYPTFINDOIDINFONAMEFROMKEY_OFFSET UNITYSDK_OFFSET(0x1C3099C0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CAPI_TypeDefinitionIndex = 3163;

	class CAPI : public ::System::Object
	{
	public:
		// static const ::System::UInt32 CRYPT_OID_INFO_OID_KEY = 0x1; // 0x0
		// static const ::System::UInt32 CRYPT_OID_INFO_NAME_KEY = 0x2; // 0x0
		// static const ::System::UInt32 CRYPT_OID_INFO_ALGID_KEY = 0x3; // 0x0
		// static const ::System::UInt32 CRYPT_OID_INFO_SIGN_KEY = 0x4; // 0x0

		static ::System::String* CryptFindOIDInfoNameFromKey(::System::String* key, ::System::Security::Cryptography::OidGroup oidGroup)
		{
			return ((::System::String*(*)(::System::String*, ::System::Security::Cryptography::OidGroup))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CAPI_CRYPTFINDOIDINFONAMEFROMKEY_OFFSET))(key, oidGroup);
		}

		static ::System::String* CryptFindOIDInfoKeyFromName(::System::String* name, ::System::Security::Cryptography::OidGroup oidGroup)
		{
			return ((::System::String*(*)(::System::String*, ::System::Security::Cryptography::OidGroup))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CAPI_CRYPTFINDOIDINFOKEYFROMNAME_OFFSET))(name, oidGroup);
		}
	};
}
