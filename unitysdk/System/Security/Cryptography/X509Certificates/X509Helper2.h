#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509KeyStorageFlags.h"

namespace Mono::Security::X509 { class X509Certificate; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2Impl; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateImpl; }
namespace System::Security::Cryptography::X509Certificates { class X509ChainImpl; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_CREATECHAINIMPL_OFFSET UNITYSDK_OFFSET(0x1BEE63F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_EXPORTASPEM_1_OFFSET UNITYSDK_OFFSET(0x1BEE6010)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_EXPORTASPEM_OFFSET UNITYSDK_OFFSET(0x1BEE5F70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_GETINVALIDCHAINCONTEXTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1BEE5CE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_GETMONOCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1BEE6340)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_GETNATIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BEE5F20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_GETSUBJECTNAMEHASH_1_OFFSET UNITYSDK_OFFSET(0x1BEE5ED0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_GETSUBJECTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1BEE5E30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_IMPORT_1_OFFSET UNITYSDK_OFFSET(0x1BEE61C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_IMPORT_OFFSET UNITYSDK_OFFSET(0x1BEE6150)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BEE6060)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_ISVALID_OFFSET UNITYSDK_OFFSET(0x1BEE6440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_THROWIFCONTEXTINVALID_1_OFFSET UNITYSDK_OFFSET(0x1BEE6450)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_THROWIFCONTEXTINVALID_OFFSET UNITYSDK_OFFSET(0x1BEE60F0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Helper2_TypeDefinitionIndex = 3207;

	class X509Helper2 : public ::System::Object
	{
	public:
		static ::System::Int64 GetSubjectNameHash(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate)
		{
			return ((::System::Int64(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_GETSUBJECTNAMEHASH_OFFSET))(certificate);
		}

		static ::System::Int64 GetSubjectNameHash_1(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl)
		{
			return ((::System::Int64(*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_GETSUBJECTNAMEHASH_1_OFFSET))(impl);
		}

		static ::System::Void ExportAsPEM(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::IO::Stream* stream, ::System::Boolean includeHumanReadableForm)
		{
			return ((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_EXPORTASPEM_OFFSET))(certificate, stream, includeHumanReadableForm);
		}

		static ::System::Void ExportAsPEM_1(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl, ::System::IO::Stream* stream, ::System::Boolean includeHumanReadableForm)
		{
			return ((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_EXPORTASPEM_1_OFFSET))(impl, stream, includeHumanReadableForm);
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_INITIALIZE_OFFSET))();
		}

		static ::System::Void ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl)
		{
			return ((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_THROWIFCONTEXTINVALID_OFFSET))(impl);
		}

		static ::System::Security::Cryptography::X509Certificates::X509Certificate* GetNativeInstance(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_GETNATIVEINSTANCE_OFFSET))(impl);
		}

		static ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::Il2CppArray<::System::Byte>* rawData, ::System::String* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, ::System::Boolean disableProvider)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_IMPORT_OFFSET))(rawData, password, keyStorageFlags, disableProvider);
		}

		static ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import_1(::System::Security::Cryptography::X509Certificates::X509Certificate* cert, ::System::Boolean disableProvider)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_IMPORT_1_OFFSET))(cert, disableProvider);
		}

		static ::Mono::Security::X509::X509Certificate* GetMonoCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::Mono::Security::X509::X509Certificate*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER2_GETMONOCERTIFICATE_OFFSET))(certificate);
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
