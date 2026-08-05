#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7E8FD0)
#define SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS_GETADDRESSBYTES_OFFSET UNITYSDK_OFFSET(0x1E7E9280)
#define SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7E8CF0)
#define SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS_PARSE_OFFSET UNITYSDK_OFFSET(0x1E7E9300)
#define SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7E9090)
#define SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7E9750)
#define SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E8CE0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int PhysicalAddress_TypeDefinitionIndex = 3734;

	class PhysicalAddress : public ::System::Object
	{
	public:
		static ::System::Net::NetworkInformation::PhysicalAddress** StaticGet_None()
		{
			return (::System::Net::NetworkInformation::PhysicalAddress**)Il2CppClass::FromTypeDefinitionIndex(PhysicalAddress_TypeDefinitionIndex)->GetStaticField(0x31D0);
		}
		::Il2CppArray<::System::Byte>* address; // 0x10
		::System::Int32 hash; // 0x18
		::System::Boolean changed; // 0x1C

		::System::Void _ctor(::Il2CppArray<::System::Byte>* address)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS__CTOR_OFFSET))(this, address);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* comparand)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS_EQUALS_OFFSET))(this, comparand);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS_TOSTRING_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetAddressBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS_GETADDRESSBYTES_OFFSET))(this);
		}

		static ::System::Net::NetworkInformation::PhysicalAddress* Parse(::System::String* address)
		{
			return ((::System::Net::NetworkInformation::PhysicalAddress*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS_PARSE_OFFSET))(address);
		}
	};
}
