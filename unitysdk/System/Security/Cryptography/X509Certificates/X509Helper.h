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

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_CONVERTDATA_OFFSET UNITYSDK_OFFSET(0x17814350)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_GETINVALIDCONTEXTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17812C80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORTCORE_OFFSET UNITYSDK_OFFSET(0x17813730)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORTPKCS12_OFFSET UNITYSDK_OFFSET(0x17813810)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORT_1_OFFSET UNITYSDK_OFFSET(0x178128E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORT_OFFSET UNITYSDK_OFFSET(0x17813720)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_INITFROMCERTIFICATE_1_OFFSET UNITYSDK_OFFSET(0x17811DC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_INITFROMCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x17811F00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_INSTALLNATIVEHELPER_OFFSET UNITYSDK_OFFSET(0x17813700)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x17812040)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_PEM_OFFSET UNITYSDK_OFFSET(0x17813EF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_THROWIFCONTEXTINVALID_OFFSET UNITYSDK_OFFSET(0x17811FE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_TOHEXSTRING_OFFSET UNITYSDK_OFFSET(0x17812280)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Helper_TypeDefinitionIndex = 1083;

	class X509Helper : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::X509Certificates::INativeCertificateHelper** StaticGet_nativeHelper()
		{
			return (::System::Security::Cryptography::X509Certificates::INativeCertificateHelper**)Il2CppClass::FromTypeDefinitionIndex(X509Helper_TypeDefinitionIndex)->GetStaticField(0xB2B0);
		}

		static ::System::Void InstallNativeHelper(::System::Security::Cryptography::X509Certificates::INativeCertificateHelper* helper)
		{
			return ((::System::Void(*)(::System::Security::Cryptography::X509Certificates::INativeCertificateHelper*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_INSTALLNATIVEHELPER_OFFSET))(helper);
		}

		static ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::Il2CppArray<::System::Byte>* rawData)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORT_OFFSET))(rawData);
		}

		static ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* InitFromCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* cert)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_INITFROMCERTIFICATE_OFFSET))(cert);
		}

		static ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* InitFromCertificate_1(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_INITFROMCERTIFICATE_1_OFFSET))(impl);
		}

		static ::System::Boolean IsValid(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_ISVALID_OFFSET))(impl);
		}

		static ::System::Void ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl)
		{
			return ((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_THROWIFCONTEXTINVALID_OFFSET))(impl);
		}

		static ::System::Exception* GetInvalidContextException()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_GETINVALIDCONTEXTEXCEPTION_OFFSET))();
		}

		static ::Mono::Security::X509::X509Certificate* ImportPkcs12(::Il2CppArray<::System::Byte>* rawData, ::System::String* password)
		{
			return ((::Mono::Security::X509::X509Certificate*(*)(::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORTPKCS12_OFFSET))(rawData, password);
		}

		static ::Il2CppArray<::System::Byte>* PEM(::System::String* type, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_PEM_OFFSET))(type, data);
		}

		static ::Il2CppArray<::System::Byte>* ConvertData(::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_CONVERTDATA_OFFSET))(data);
		}

		static ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* ImportCore(::Il2CppArray<::System::Byte>* rawData)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORTCORE_OFFSET))(rawData);
		}

		static ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import_1(::Il2CppArray<::System::Byte>* rawData, ::System::String* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORT_1_OFFSET))(rawData, password, keyStorageFlags);
		}

		static ::System::String* ToHexString(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_TOHEXSTRING_OFFSET))(data);
		}
	};
}
