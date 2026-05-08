#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Principal/WellKnownSidType.h"

namespace System { class String; }

#define SYSTEM_SECURITY_PRINCIPAL_WELLKNOWNACCOUNT_LOOKUPBYNAME_OFFSET UNITYSDK_OFFSET(0x18BAF020)
#define SYSTEM_SECURITY_PRINCIPAL_WELLKNOWNACCOUNT_LOOKUPBYSDDLFORM_OFFSET UNITYSDK_OFFSET(0x18BAF160)
#define SYSTEM_SECURITY_PRINCIPAL_WELLKNOWNACCOUNT_LOOKUPBYSID_OFFSET UNITYSDK_OFFSET(0x18BAEEE0)
#define SYSTEM_SECURITY_PRINCIPAL_WELLKNOWNACCOUNT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BAF2B0)
#define SYSTEM_SECURITY_PRINCIPAL_WELLKNOWNACCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x18BAF2A0)

namespace System::Security::Principal
{
	inline static constexpr unsigned int WellKnownAccount_TypeDefinitionIndex = 1025;

	class WellKnownAccount : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Security::Principal::WellKnownAccount*>** StaticGet_accounts()
		{
			return (::Il2CppArray<::System::Security::Principal::WellKnownAccount*>**)Il2CppClass::FromTypeDefinitionIndex(WellKnownAccount_TypeDefinitionIndex)->GetStaticField(0x1570);
		}
		::System::String* _Rid_k__BackingField; // 0x10
		::System::String* _SddlForm_k__BackingField; // 0x18
		::System::String* _Name_k__BackingField; // 0x20
		::System::String* _Sid_k__BackingField; // 0x28
		::System::Security::Principal::WellKnownSidType _WellKnownValue_k__BackingField; // 0x30
		::System::Boolean _IsAbsolute_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WELLKNOWNACCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WELLKNOWNACCOUNT__CCTOR_OFFSET))();
		}

		static ::System::Security::Principal::WellKnownAccount* LookupBySid(::System::String* s)
		{
			return ((::System::Security::Principal::WellKnownAccount*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WELLKNOWNACCOUNT_LOOKUPBYSID_OFFSET))(s);
		}

		static ::System::Security::Principal::WellKnownAccount* LookupByName(::System::String* s)
		{
			return ((::System::Security::Principal::WellKnownAccount*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WELLKNOWNACCOUNT_LOOKUPBYNAME_OFFSET))(s);
		}

		static ::System::Security::Principal::WellKnownAccount* LookupBySddlForm(::System::String* s)
		{
			return ((::System::Security::Principal::WellKnownAccount*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WELLKNOWNACCOUNT_LOOKUPBYSDDLFORM_OFFSET))(s);
		}
	};
}
