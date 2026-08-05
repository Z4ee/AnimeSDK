#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509CertificateCollection.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509ContentType.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509FindType.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509KeyStorageFlags.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2Enumerator; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1DECD2B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1DECD690)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1DECD4A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1DECDB40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_EXPORT_1_OFFSET UNITYSDK_OFFSET(0x1DECDF80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_EXPORT_OFFSET UNITYSDK_OFFSET(0x1DECDF70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_FIND_OFFSET UNITYSDK_OFFSET(0x1DECE0D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DECF340)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DECD810)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_IMPORT_1_OFFSET UNITYSDK_OFFSET(0x1DECF450)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_IMPORT_2_OFFSET UNITYSDK_OFFSET(0x1DECF520)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_IMPORT_3_OFFSET UNITYSDK_OFFSET(0x1DECF5E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_IMPORT_OFFSET UNITYSDK_OFFSET(0x1DECF390)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1DECF6C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_REMOVERANGE_1_OFFSET UNITYSDK_OFFSET(0x1DECFD20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_REMOVERANGE_OFFSET UNITYSDK_OFFSET(0x1DECFC70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1DECF930)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DECDA70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DECFEC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DECD200)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DECD3F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DECD5E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DECD160)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Certificate2Collection_TypeDefinitionIndex = 3188;

	class X509Certificate2Collection : public ::System::Security::Cryptography::X509Certificates::X509CertificateCollection
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_newline_split()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(X509Certificate2Collection_TypeDefinitionIndex)->GetStaticField(0x2890);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* certificates)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION__CTOR_1_OFFSET))(this, certificates);
		}

		::System::Void _ctor_2(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION__CTOR_2_OFFSET))(this, certificate);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* certificates)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION__CTOR_3_OFFSET))(this, certificates);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION__CCTOR_OFFSET))();
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* get_Item(::System::Int32 index)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Security::Cryptography::X509Certificates::X509Certificate2* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_ADD_OFFSET))(this, certificate);
		}

		::System::Void AddRange(::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* certificates)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_ADDRANGE_OFFSET))(this, certificates);
		}

		::System::Void AddRange_1(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* certificates)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_ADDRANGE_1_OFFSET))(this, certificates);
		}

		::System::Boolean Contains(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_CONTAINS_OFFSET))(this, certificate);
		}

		::Il2CppArray<::System::Byte>* Export(::System::Security::Cryptography::X509Certificates::X509ContentType contentType)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ContentType))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_EXPORT_OFFSET))(this, contentType);
		}

		::Il2CppArray<::System::Byte>* Export_1(::System::Security::Cryptography::X509Certificates::X509ContentType contentType, ::System::String* password)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ContentType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_EXPORT_1_OFFSET))(this, contentType, password);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* Find(::System::Security::Cryptography::X509Certificates::X509FindType findType, ::System::Object* findValue, ::System::Boolean validOnly)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509FindType, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_FIND_OFFSET))(this, findType, findValue, validOnly);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator* GetEnumerator()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Import(::Il2CppArray<::System::Byte>* rawData)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_IMPORT_OFFSET))(this, rawData);
		}

		::System::Void Import_1(::Il2CppArray<::System::Byte>* rawData, ::System::String* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_IMPORT_1_OFFSET))(this, rawData, password, keyStorageFlags);
		}

		::System::Void Import_2(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_IMPORT_2_OFFSET))(this, fileName);
		}

		::System::Void Import_3(::System::String* fileName, ::System::String* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_IMPORT_3_OFFSET))(this, fileName, password, keyStorageFlags);
		}

		::System::Void Insert(::System::Int32 index, ::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_INSERT_OFFSET))(this, index, certificate);
		}

		::System::Void Remove(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_REMOVE_OFFSET))(this, certificate);
		}

		::System::Void RemoveRange(::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* certificates)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_REMOVERANGE_OFFSET))(this, certificates);
		}

		::System::Void RemoveRange_1(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* certificates)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_REMOVERANGE_1_OFFSET))(this, certificates);
		}
	};
}
