#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Principal/IdentityReference.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_SECURITY_PRINCIPAL_NTACCOUNT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CB2DB70)
#define SYSTEM_SECURITY_PRINCIPAL_NTACCOUNT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CB2DC30)
#define SYSTEM_SECURITY_PRINCIPAL_NTACCOUNT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CB2DB60)
#define SYSTEM_SECURITY_PRINCIPAL_NTACCOUNT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CB2DBF0)
#define SYSTEM_SECURITY_PRINCIPAL_NTACCOUNT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CB2DCC0)
#define SYSTEM_SECURITY_PRINCIPAL_NTACCOUNT_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x1CB2DCD0)
#define SYSTEM_SECURITY_PRINCIPAL_NTACCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB2DAB0)

namespace System::Security::Principal
{
	inline static constexpr unsigned int NTAccount_TypeDefinitionIndex = 1021;

	class NTAccount : public ::System::Security::Principal::IdentityReference
	{
	public:
		::System::String* _value; // 0x10

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_NTACCOUNT__CTOR_OFFSET))(this, name);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_NTACCOUNT_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_NTACCOUNT_EQUALS_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_NTACCOUNT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_NTACCOUNT_TOSTRING_OFFSET))(this);
		}

		::System::Security::Principal::IdentityReference* Translate(::System::Type* targetType)
		{
			return ((::System::Security::Principal::IdentityReference*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_NTACCOUNT_TRANSLATE_OFFSET))(this, targetType);
		}

		static ::System::Boolean op_Equality(::System::Security::Principal::NTAccount* left, ::System::Security::Principal::NTAccount* right)
		{
			return ((::System::Boolean(*)(::System::Security::Principal::NTAccount*, ::System::Security::Principal::NTAccount*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_NTACCOUNT_OP_EQUALITY_OFFSET))(left, right);
		}
	};
}
