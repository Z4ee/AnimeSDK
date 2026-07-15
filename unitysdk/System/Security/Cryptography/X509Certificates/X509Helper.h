#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509KeyStorageFlags.h"

namespace Mono::Security::X509 { class X509Certificate; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class INativeCertificateHelper; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateImpl; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_CONVERTDATA_OFFSET UNITYSDK_OFFSET(0x150B36C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_GETINVALIDCONTEXTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x150B15B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORTCORE_OFFSET UNITYSDK_OFFSET(0x150B2790)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORTPKCS12_OFFSET UNITYSDK_OFFSET(0x150B2870)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORT_1_OFFSET UNITYSDK_OFFSET(0x150B0F70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORT_OFFSET UNITYSDK_OFFSET(0x150B2780)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_INITFROMCERTIFICATE_1_OFFSET UNITYSDK_OFFSET(0x150AFC70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_INITFROMCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x150AFE30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_INSTALLNATIVEHELPER_OFFSET UNITYSDK_OFFSET(0x150B2760)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x150B0050)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_PEM_OFFSET UNITYSDK_OFFSET(0x150B31F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_THROWIFCONTEXTINVALID_OFFSET UNITYSDK_OFFSET(0x150AFF20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_TOHEXSTRING_OFFSET UNITYSDK_OFFSET(0x150B04F0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Helper_TypeDefinitionIndex = 1084;

	class X509Helper : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::X509Certificates::INativeCertificateHelper** StaticGet_nativeHelper()
		{
			return (::System::Security::Cryptography::X509Certificates::INativeCertificateHelper**)Il2CppClass::FromTypeDefinitionIndex(X509Helper_TypeDefinitionIndex)->GetStaticField(0x1C4B0);
		}

		static ::System::Void InstallNativeHelper(::System::Security::Cryptography::X509Certificates::INativeCertificateHelper* a1)
		{
			return ((::System::Void(*)(::System::Security::Cryptography::X509Certificates::INativeCertificateHelper*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_INSTALLNATIVEHELPER_OFFSET))(a1);
		}

		static ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORT_OFFSET))(a1);
		}

		static ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* InitFromCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* a1)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_INITFROMCERTIFICATE_OFFSET))(a1);
		}

		static ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* InitFromCertificate_1(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* a1)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_INITFROMCERTIFICATE_1_OFFSET))(a1);
		}

		static ::System::Boolean IsValid(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* a1)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_ISVALID_OFFSET))(a1);
		}

		static ::System::Void ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* a1)
		{
			return ((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_THROWIFCONTEXTINVALID_OFFSET))(a1);
		}

		static ::System::Exception* GetInvalidContextException()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_GETINVALIDCONTEXTEXCEPTION_OFFSET))();
		}

		static ::Mono::Security::X509::X509Certificate* ImportPkcs12(::Il2CppArray<::System::Byte>* a1, ::System::String* a2)
		{
			return ((::Mono::Security::X509::X509Certificate*(*)(::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORTPKCS12_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* PEM(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_PEM_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* ConvertData(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_CONVERTDATA_OFFSET))(a1);
		}

		static ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* ImportCore(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORTCORE_OFFSET))(a1);
		}

		static ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import_1(::Il2CppArray<::System::Byte>* a1, ::System::String* a2, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags a3)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* ToHexString(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_TOHEXSTRING_OFFSET))(a1);
		}
	};
}
