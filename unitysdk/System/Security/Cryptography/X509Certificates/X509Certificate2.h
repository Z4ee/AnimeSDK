#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509Certificate.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509KeyStorageFlags.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class Oid; }
namespace System::Security::Cryptography::X509Certificates { class PublicKey; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2Impl; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_APPENDBUFFER_OFFSET UNITYSDK_OFFSET(0x18737650)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_IMPL_OFFSET UNITYSDK_OFFSET(0x187358E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_NOTAFTER_OFFSET UNITYSDK_OFFSET(0x18735B40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_NOTBEFORE_OFFSET UNITYSDK_OFFSET(0x18735C00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x18735CC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_PUBLICKEY_OFFSET UNITYSDK_OFFSET(0x18736320)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x187364E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x187364F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_THUMBPRINT_OFFSET UNITYSDK_OFFSET(0x187366D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x187366F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_IMPORT_1_OFFSET UNITYSDK_OFFSET(0x18735AB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_IMPORT_OFFSET UNITYSDK_OFFSET(0x187359E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_RESET_OFFSET UNITYSDK_OFFSET(0x187368B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_SET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x18736110)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x18736A10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18736930)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CCTOR_OFFSET UNITYSDK_OFFSET(0x18737740)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18735980)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18735A40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18735B10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_OFFSET UNITYSDK_OFFSET(0x18735970)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Certificate2_TypeDefinitionIndex = 2680;

	class X509Certificate2 : public ::System::Security::Cryptography::X509Certificates::X509Certificate
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_signedData()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X509Certificate2_TypeDefinitionIndex)->GetStaticField(0xC5C0);
		}
		::System::String* friendlyName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* rawData)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_1_OFFSET))(this, rawData);
		}

		::System::Void _ctor_2(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_2_OFFSET))(this, fileName);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CTOR_3_OFFSET))(this, info, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2__CCTOR_OFFSET))();
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* get_Impl()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_IMPL_OFFSET))(this);
		}

		::System::DateTime get_NotAfter()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_NOTAFTER_OFFSET))(this);
		}

		::System::DateTime get_NotBefore()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_NOTBEFORE_OFFSET))(this);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey()
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_PRIVATEKEY_OFFSET))(this);
		}

		::System::Void set_PrivateKey(::System::Security::Cryptography::AsymmetricAlgorithm* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_SET_PRIVATEKEY_OFFSET))(this, value);
		}

		::System::Security::Cryptography::X509Certificates::PublicKey* get_PublicKey()
		{
			return ((::System::Security::Cryptography::X509Certificates::PublicKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_PUBLICKEY_OFFSET))(this);
		}

		::System::String* get_SerialNumber()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_SERIALNUMBER_OFFSET))(this);
		}

		::System::Security::Cryptography::Oid* get_SignatureAlgorithm()
		{
			return ((::System::Security::Cryptography::Oid*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_SIGNATUREALGORITHM_OFFSET))(this);
		}

		::System::String* get_Thumbprint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_THUMBPRINT_OFFSET))(this);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_GET_VERSION_OFFSET))(this);
		}

		::System::Void Import(::Il2CppArray<::System::Byte>* rawData, ::System::String* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_IMPORT_OFFSET))(this, rawData, password, keyStorageFlags);
		}

		::System::Void Import_1(::System::String* fileName, ::System::String* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_IMPORT_1_OFFSET))(this, fileName, password, keyStorageFlags);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_RESET_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Boolean verbose)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_TOSTRING_1_OFFSET))(this, verbose);
		}

		static ::System::Void AppendBuffer(::System::Text::StringBuilder* sb, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2_APPENDBUFFER_OFFSET))(sb, buffer);
		}
	};
}
