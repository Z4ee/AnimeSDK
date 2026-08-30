#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/OidGroup.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_GET_FRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x1E9E1D10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E9E1CF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E9E1D00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9E1C10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E9E1CE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E9DF670)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E1B80)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int Oid_TypeDefinitionIndex = 2675;

	class Oid : public ::System::Object
	{
	public:
		::System::String* m_friendlyName; // 0x10
		::System::String* m_value; // 0x18
		::System::Security::Cryptography::OidGroup m_group; // 0x20

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Security::Cryptography::OidGroup a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::OidGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Security::Cryptography::Oid* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::Oid*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_3_OFFSET))(this, a1);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_SET_VALUE_OFFSET))(this, a1);
		}

		::System::String* get_FriendlyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_GET_FRIENDLYNAME_OFFSET))(this);
		}
	};
}
