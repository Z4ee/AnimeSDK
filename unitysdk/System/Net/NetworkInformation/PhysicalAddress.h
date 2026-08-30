#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B04C670)
#define SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B04C2E0)
#define SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B04C730)
#define SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B04CAF0)
#define SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B04C2D0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int PhysicalAddress_TypeDefinitionIndex = 2935;

	class PhysicalAddress : public ::System::Object
	{
	public:
		static ::System::Net::NetworkInformation::PhysicalAddress** StaticGet_None()
		{
			return (::System::Net::NetworkInformation::PhysicalAddress**)Il2CppClass::FromTypeDefinitionIndex(PhysicalAddress_TypeDefinitionIndex)->GetStaticField(0x1D330);
		}
		::Il2CppArray<::System::Byte>* address; // 0x10
		::System::Int32 hash; // 0x18
		::System::Boolean changed; // 0x1C

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS_EQUALS_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PHYSICALADDRESS_TOSTRING_OFFSET))(this);
		}
	};
}
