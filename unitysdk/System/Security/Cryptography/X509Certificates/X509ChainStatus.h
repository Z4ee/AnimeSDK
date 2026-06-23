#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509ChainStatusFlags.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_GETINFORMATION_OFFSET UNITYSDK_OFFSET(0x1C1DDE70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_GET_STATUSINFORMATION_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_SET_STATUSINFORMATION_OFFSET UNITYSDK_OFFSET(0x446DA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x2B66C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x954BB0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ChainStatus_TypeDefinitionIndex = 3202;

	struct alignas(8) X509ChainStatus
	{
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags status; // 0x10
		::System::String* info; // 0x18

		::System::Void _ctor(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS__CTOR_OFFSET))(this, flag);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags get_Status()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_SET_STATUS_OFFSET))(this, value);
		}

		::System::String* get_StatusInformation()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_GET_STATUSINFORMATION_OFFSET))(this);
		}

		::System::Void set_StatusInformation(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_SET_STATUSINFORMATION_OFFSET))(this, value);
		}

		static ::System::String* GetInformation(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags)
		{
			return ((::System::String*(*)(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_GETINFORMATION_OFFSET))(flags);
		}
	};
}
