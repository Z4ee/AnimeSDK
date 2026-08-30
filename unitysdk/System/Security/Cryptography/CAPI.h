#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/OidGroup.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CAPI_CRYPTFINDOIDINFOKEYFROMNAME_OFFSET UNITYSDK_OFFSET(0x1E9E14F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CAPI_CRYPTFINDOIDINFONAMEFROMKEY_OFFSET UNITYSDK_OFFSET(0x1E9E0E40)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CAPI_TypeDefinitionIndex = 2678;

	class CAPI : public ::System::Object
	{
	public:
		static ::System::String* CryptFindOIDInfoNameFromKey(::System::String* a1, ::System::Security::Cryptography::OidGroup a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Security::Cryptography::OidGroup))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CAPI_CRYPTFINDOIDINFONAMEFROMKEY_OFFSET))(a1, a2);
		}

		static ::System::String* CryptFindOIDInfoKeyFromName(::System::String* a1, ::System::Security::Cryptography::OidGroup a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Security::Cryptography::OidGroup))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CAPI_CRYPTFINDOIDINFOKEYFROMNAME_OFFSET))(a1, a2);
		}
	};
}
