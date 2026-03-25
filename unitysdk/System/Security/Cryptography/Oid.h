#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/OidGroup.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_GET_FRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x18733930)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x18733910)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x18733920)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18733830)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18733900)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18731430)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_OFFSET UNITYSDK_OFFSET(0x187337A0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int Oid_TypeDefinitionIndex = 2663;

	class Oid : public ::System::Object
	{
	public:
		::System::String* m_friendlyName; // 0x10
		::System::String* m_value; // 0x18
		::System::Security::Cryptography::OidGroup m_group; // 0x20

		::System::Void _ctor(::System::String* oid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_OFFSET))(this, oid);
		}

		::System::Void _ctor_1(::System::String* oid, ::System::Security::Cryptography::OidGroup group, ::System::Boolean lookupFriendlyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::OidGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_1_OFFSET))(this, oid, group, lookupFriendlyName);
		}

		::System::Void _ctor_2(::System::String* value, ::System::String* friendlyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_2_OFFSET))(this, value, friendlyName);
		}

		::System::Void _ctor_3(::System::Security::Cryptography::Oid* oid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::Oid*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_3_OFFSET))(this, oid);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_SET_VALUE_OFFSET))(this, value);
		}

		::System::String* get_FriendlyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_GET_FRIENDLYNAME_OFFSET))(this);
		}
	};
}
