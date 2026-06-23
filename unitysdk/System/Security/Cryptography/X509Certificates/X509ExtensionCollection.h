#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::X509 { class X509Certificate; }
namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Security::Cryptography::X509Certificates { class X509Extension; }
namespace System::Security::Cryptography::X509Certificates { class X509ExtensionEnumerator; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1B776A00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B776A90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B776DA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B7768D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1B776900)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B7394B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B776940)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1B776930)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B776B90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B776E30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B776E90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B775EC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B775E20)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ExtensionCollection_TypeDefinitionIndex = 3205;

	class X509ExtensionCollection : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_Empty()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X509ExtensionCollection_TypeDefinitionIndex)->GetStaticField(0x3380);
		}
		::System::Collections::ArrayList* _list; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::X509::X509Certificate* cert)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION__CTOR_1_OFFSET))(this, cert);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION__CCTOR_OFFSET))();
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Extension* get_Item(::System::Int32 index)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Extension*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Security::Cryptography::X509Certificates::X509Extension* get_Item_1(::System::String* oid)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Extension*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_GET_ITEM_1_OFFSET))(this, oid);
		}

		::System::Int32 Add(::System::Security::Cryptography::X509Certificates::X509Extension* extension)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Extension*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_ADD_OFFSET))(this, extension);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509Extension*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509Extension*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator* GetEnumerator()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSIONCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
