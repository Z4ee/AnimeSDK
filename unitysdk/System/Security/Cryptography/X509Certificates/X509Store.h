#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/OpenFlags.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/StoreLocation.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/StoreName.h"

namespace Mono::Security::X509 { class X509Store; }
namespace Mono::Security::X509 { class X509Stores; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2Collection; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1A58B2D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_ADD_OFFSET UNITYSDK_OFFSET(0x1A58AE90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A58BA30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A58BA50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_EXISTS_OFFSET UNITYSDK_OFFSET(0x1A58B230)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1A58AD30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x1A58AE40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x1A58AE50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1A58AE60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1A58AE20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A58AE30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_STOREHANDLE_OFFSET UNITYSDK_OFFSET(0x1A58AE80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_STORE_OFFSET UNITYSDK_OFFSET(0x1A58AE70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_OPEN_OFFSET UNITYSDK_OFFSET(0x1A58BA70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_REMOVERANGE_OFFSET UNITYSDK_OFFSET(0x1A58C2C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A58BF20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A58AA90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A58AAD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A58ABF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A58AAE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1A58ACA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1A58AA10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A58A9A0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Store_TypeDefinitionIndex = 3211;

	class X509Store : public ::System::Object
	{
	public:
		::System::String* _name; // 0x10
		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* list; // 0x18
		::Mono::Security::X509::X509Store* store; // 0x20
		::System::Security::Cryptography::X509Certificates::OpenFlags _flags; // 0x28
		::System::Security::Cryptography::X509Certificates::StoreLocation _location; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* storeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE__CTOR_1_OFFSET))(this, storeName);
		}

		::System::Void _ctor_2(::System::Security::Cryptography::X509Certificates::StoreName storeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::StoreName))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE__CTOR_2_OFFSET))(this, storeName);
		}

		::System::Void _ctor_3(::System::Security::Cryptography::X509Certificates::StoreLocation storeLocation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::StoreLocation))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE__CTOR_3_OFFSET))(this, storeLocation);
		}

		::System::Void _ctor_4(::System::Security::Cryptography::X509Certificates::StoreName storeName, ::System::Security::Cryptography::X509Certificates::StoreLocation storeLocation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::StoreName, ::System::Security::Cryptography::X509Certificates::StoreLocation))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE__CTOR_4_OFFSET))(this, storeName, storeLocation);
		}

		::System::Void _ctor_5(::System::IntPtr storeHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE__CTOR_5_OFFSET))(this, storeHandle);
		}

		::System::Void _ctor_6(::System::String* storeName, ::System::Security::Cryptography::X509Certificates::StoreLocation storeLocation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::StoreLocation))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE__CTOR_6_OFFSET))(this, storeName, storeLocation);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_Certificates()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_CERTIFICATES_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::StoreLocation get_Location()
		{
			return ((::System::Security::Cryptography::X509Certificates::StoreLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_LOCATION_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_NAME_OFFSET))(this);
		}

		::Mono::Security::X509::X509Stores* get_Factory()
		{
			return ((::Mono::Security::X509::X509Stores*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_FACTORY_OFFSET))(this);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_ISOPEN_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_ISREADONLY_OFFSET))(this);
		}

		::Mono::Security::X509::X509Store* get_Store()
		{
			return ((::Mono::Security::X509::X509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_STORE_OFFSET))(this);
		}

		::System::IntPtr get_StoreHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_STOREHANDLE_OFFSET))(this);
		}

		::System::Void Add(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_ADD_OFFSET))(this, certificate);
		}

		::System::Void AddRange(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* certificates)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_ADDRANGE_OFFSET))(this, certificates);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_DISPOSE_OFFSET))(this);
		}

		::System::Void Open(::System::Security::Cryptography::X509Certificates::OpenFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::OpenFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_OPEN_OFFSET))(this, flags);
		}

		::System::Void Remove(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_REMOVE_OFFSET))(this, certificate);
		}

		::System::Void RemoveRange(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* certificates)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_REMOVERANGE_OFFSET))(this, certificates);
		}

		::System::Boolean Exists(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_EXISTS_OFFSET))(this, certificate);
		}
	};
}
