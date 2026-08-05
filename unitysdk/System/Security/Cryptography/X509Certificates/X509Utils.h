#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/OidGroup.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509UTILS_FINDOIDINFOWITHFALLBACK_OFFSET UNITYSDK_OFFSET(0x1D483ED0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509UTILS_FINDOIDINFO_OFFSET UNITYSDK_OFFSET(0x1D483DF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509UTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D483DE0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Utils_TypeDefinitionIndex = 3181;

	class X509Utils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509UTILS__CTOR_OFFSET))(this);
		}

		static ::System::String* FindOidInfo(::System::UInt32 keyType, ::System::String* keyValue, ::System::Security::Cryptography::OidGroup oidGroup)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::String*, ::System::Security::Cryptography::OidGroup))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509UTILS_FINDOIDINFO_OFFSET))(keyType, keyValue, oidGroup);
		}

		static ::System::String* FindOidInfoWithFallback(::System::UInt32 key, ::System::String* value, ::System::Security::Cryptography::OidGroup group)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::String*, ::System::Security::Cryptography::OidGroup))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509UTILS_FINDOIDINFOWITHFALLBACK_OFFSET))(key, value, group);
		}
	};
}
