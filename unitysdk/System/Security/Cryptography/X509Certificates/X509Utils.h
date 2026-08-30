#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/OidGroup.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509UTILS_FINDOIDINFOWITHFALLBACK_OFFSET UNITYSDK_OFFSET(0x1E9EEBB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509UTILS_FINDOIDINFO_OFFSET UNITYSDK_OFFSET(0x1E9EEAD0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Utils_TypeDefinitionIndex = 2688;

	class X509Utils : public ::System::Object
	{
	public:
		static ::System::String* FindOidInfo(::System::UInt32 a1, ::System::String* a2, ::System::Security::Cryptography::OidGroup a3)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::String*, ::System::Security::Cryptography::OidGroup))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509UTILS_FINDOIDINFO_OFFSET))(a1, a2, a3);
		}

		static ::System::String* FindOidInfoWithFallback(::System::UInt32 a1, ::System::String* a2, ::System::Security::Cryptography::OidGroup a3)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::String*, ::System::Security::Cryptography::OidGroup))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509UTILS_FINDOIDINFOWITHFALLBACK_OFFSET))(a1, a2, a3);
		}
	};
}
