#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509KeyStorageFlags.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2Impl; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateImpl; }
namespace System::Security::Cryptography::X509Certificates { class X509ChainImpl; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_CREATECHAINIMPL_OFFSET UNITYSDK_OFFSET(0x1E9EAB20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_GETINVALIDCHAINCONTEXTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E9ECD60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_IMPORT_1_OFFSET UNITYSDK_OFFSET(0x1E9ECBA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_IMPORT_OFFSET UNITYSDK_OFFSET(0x1E9ECB50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E9ECAF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E9ECD50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_THROWIFCONTEXTINVALID_1_OFFSET UNITYSDK_OFFSET(0x1E9EAA80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_THROWIFCONTEXTINVALID_OFFSET UNITYSDK_OFFSET(0x1E9ECB40)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Helper2_TypeDefinitionIndex = 2709;

	class X509Helper2 : public ::System::Object
	{
	public:
		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_INITIALIZE_OFFSET))();
		}

		static ::System::Void ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* a1)
		{
			return ((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_THROWIFCONTEXTINVALID_OFFSET))(a1);
		}

		static ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::Il2CppArray<::System::Byte>* a1, ::System::String* a2, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags a3, ::System::Boolean a4)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_IMPORT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import_1(::System::Security::Cryptography::X509Certificates::X509Certificate* a1, ::System::Boolean a2)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_IMPORT_1_OFFSET))(a1, a2);
		}

		static ::System::Security::Cryptography::X509Certificates::X509ChainImpl* CreateChainImpl(::System::Boolean a1)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ChainImpl*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_CREATECHAINIMPL_OFFSET))(a1);
		}

		static ::System::Boolean IsValid(::System::Security::Cryptography::X509Certificates::X509ChainImpl* a1)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509ChainImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_ISVALID_OFFSET))(a1);
		}

		static ::System::Void ThrowIfContextInvalid_1(::System::Security::Cryptography::X509Certificates::X509ChainImpl* a1)
		{
			return ((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509ChainImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_THROWIFCONTEXTINVALID_1_OFFSET))(a1);
		}

		static ::System::Exception* GetInvalidChainContextException()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_GETINVALIDCHAINCONTEXTEXCEPTION_OFFSET))();
		}
	};
}
