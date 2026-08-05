#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509ChainStatus.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509ChainStatusFlags.h"

namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_COUNT_OFFSET UNITYSDK_OFFSET(0x1D89C450)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_GET_CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1D89C400)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_GET_CHAINELEMENTSTATUS_OFFSET UNITYSDK_OFFSET(0x1D89C410)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_GET_INFORMATION_OFFSET UNITYSDK_OFFSET(0x1D89C420)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_GET_STATUSFLAGS_OFFSET UNITYSDK_OFFSET(0x1D89C430)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_SET_OFFSET UNITYSDK_OFFSET(0x1D89C580)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_SET_STATUSFLAGS_OFFSET UNITYSDK_OFFSET(0x1D89C440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_UNCOMPRESSFLAGS_OFFSET UNITYSDK_OFFSET(0x1D89C600)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D89D860)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D89C3E0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ChainElement_TypeDefinitionIndex = 3196;

	class X509ChainElement : public ::System::Object
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate; // 0x10
		::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509ChainStatus>* status; // 0x18
		::System::String* info; // 0x20
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags compressed_status_flags; // 0x28

		::System::Void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT__CTOR_OFFSET))(this, certificate);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT__CTOR_1_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* get_Certificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_GET_CERTIFICATE_OFFSET))(this);
		}

		::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509ChainStatus>* get_ChainElementStatus()
		{
			return ((::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_GET_CHAINELEMENTSTATUS_OFFSET))(this);
		}

		::System::String* get_Information()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_GET_INFORMATION_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags get_StatusFlags()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_GET_STATUSFLAGS_OFFSET))(this);
		}

		::System::Void set_StatusFlags(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_SET_STATUSFLAGS_OFFSET))(this, value);
		}

		::System::Int32 Count(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_COUNT_OFFSET))(this, flags);
		}

		::System::Void Set(::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509ChainStatus>* status, ::System::Int32& position, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags mask)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*, ::System::Int32&, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_SET_OFFSET))(this, status, position, flags, mask);
		}

		::System::Void UncompressFlags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_UNCOMPRESSFLAGS_OFFSET))(this);
		}
	};
}
