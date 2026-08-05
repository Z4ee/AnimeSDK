#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1DD02030)
#define SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD02020)

namespace System::Security::Principal
{
	inline static constexpr unsigned int IdentityReference_TypeDefinitionIndex = 1019;

	class IdentityReference : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Security::Principal::IdentityReference* left, ::System::Security::Principal::IdentityReference* right)
		{
			return ((::System::Boolean(*)(::System::Security::Principal::IdentityReference*, ::System::Security::Principal::IdentityReference*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCE_OP_EQUALITY_OFFSET))(left, right);
		}
	};
}
