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

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_CREATECHAINIMPL_OFFSET UNITYSDK_OFFSET(0x1A174BD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_GETINVALIDCHAINCONTEXTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A1767C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_IMPORT_1_OFFSET UNITYSDK_OFFSET(0x1A1766B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_IMPORT_OFFSET UNITYSDK_OFFSET(0x1A176660)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A1765D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_ISVALID_OFFSET UNITYSDK_OFFSET(0x1A1767B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_THROWIFCONTEXTINVALID_1_OFFSET UNITYSDK_OFFSET(0x1A174B30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_THROWIFCONTEXTINVALID_OFFSET UNITYSDK_OFFSET(0x1A176620)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Helper2_TypeDefinitionIndex = 2698;

	class X509Helper2 : public ::System::Object
	{
	public:
		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_INITIALIZE_OFFSET))();
		}

		static ::System::Void ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl)
		{
			return ((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_THROWIFCONTEXTINVALID_OFFSET))(impl);
		}

		static ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::Il2CppArray<::System::Byte>* rawData, ::System::String* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, ::System::Boolean disableProvider)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_IMPORT_OFFSET))(rawData, password, keyStorageFlags, disableProvider);
		}

		static ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import_1(::System::Security::Cryptography::X509Certificates::X509Certificate* cert, ::System::Boolean disableProvider)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_IMPORT_1_OFFSET))(cert, disableProvider);
		}

		static ::System::Security::Cryptography::X509Certificates::X509ChainImpl* CreateChainImpl(::System::Boolean useMachineContext)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ChainImpl*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_CREATECHAINIMPL_OFFSET))(useMachineContext);
		}

		static ::System::Boolean IsValid(::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509ChainImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_ISVALID_OFFSET))(impl);
		}

		static ::System::Void ThrowIfContextInvalid_1(::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl)
		{
			return ((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509ChainImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_THROWIFCONTEXTINVALID_1_OFFSET))(impl);
		}

		static ::System::Exception* GetInvalidChainContextException()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_GETINVALIDCHAINCONTEXTEXCEPTION_OFFSET))();
		}
	};
}
