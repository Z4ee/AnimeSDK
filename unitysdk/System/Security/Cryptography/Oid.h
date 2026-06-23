#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/OidGroup.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_FROMFRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x1B420520)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_FROMOIDVALUE_OFFSET UNITYSDK_OFFSET(0x1B420620)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_GET_FRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x1B420740)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B420720)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_SET_FRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x1B4207F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B420730)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B420320)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B4203B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B420480)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B420490)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1B420510)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_OFFSET UNITYSDK_OFFSET(0x1B420310)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int Oid_TypeDefinitionIndex = 3160;

	class Oid : public ::System::Object
	{
	public:
		::System::String* m_value; // 0x10
		::System::String* m_friendlyName; // 0x18
		::System::Security::Cryptography::OidGroup m_group; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* oid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_1_OFFSET))(this, oid);
		}

		::System::Void _ctor_2(::System::String* oid, ::System::Security::Cryptography::OidGroup group, ::System::Boolean lookupFriendlyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::OidGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_2_OFFSET))(this, oid, group, lookupFriendlyName);
		}

		::System::Void _ctor_3(::System::String* value, ::System::String* friendlyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_3_OFFSET))(this, value, friendlyName);
		}

		::System::Void _ctor_4(::System::Security::Cryptography::Oid* oid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::Oid*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_4_OFFSET))(this, oid);
		}

		::System::Void _ctor_5(::System::String* value, ::System::String* friendlyName, ::System::Security::Cryptography::OidGroup group)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Security::Cryptography::OidGroup))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_5_OFFSET))(this, value, friendlyName, group);
		}

		static ::System::Security::Cryptography::Oid* FromFriendlyName(::System::String* friendlyName, ::System::Security::Cryptography::OidGroup group)
		{
			return ((::System::Security::Cryptography::Oid*(*)(::System::String*, ::System::Security::Cryptography::OidGroup))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_FROMFRIENDLYNAME_OFFSET))(friendlyName, group);
		}

		static ::System::Security::Cryptography::Oid* FromOidValue(::System::String* oidValue, ::System::Security::Cryptography::OidGroup group)
		{
			return ((::System::Security::Cryptography::Oid*(*)(::System::String*, ::System::Security::Cryptography::OidGroup))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_FROMOIDVALUE_OFFSET))(oidValue, group);
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

		::System::Void set_FriendlyName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_SET_FRIENDLYNAME_OFFSET))(this, value);
		}
	};
}
