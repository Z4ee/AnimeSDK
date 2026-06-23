#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2; }
namespace System::Security::Cryptography::X509Certificates { class X509ChainElement; }
namespace System::Security::Cryptography::X509Certificates { class X509ChainElementEnumerator; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1C4A6120)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C4A61A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1C4A61D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1C4A6020)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C4A6080)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C4A5F00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1C4A5F30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C4A5F60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1C4A5FF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1C4A6050)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C4A60D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A5E60)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ChainElementCollection_TypeDefinitionIndex = 3197;

	class X509ChainElementCollection : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* _list; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainElement* get_Item(::System::Int32 index)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ChainElement*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509ChainElement*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509ChainElement*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator* GetEnumerator()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Add(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_ADD_OFFSET))(this, certificate);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENTCOLLECTION_CONTAINS_OFFSET))(this, certificate);
		}
	};
}
