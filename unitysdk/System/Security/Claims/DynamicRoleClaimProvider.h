#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Security::Claims { class Claim; }
namespace System::Security::Claims { class ClaimsIdentity; }

#define SYSTEM_SECURITY_CLAIMS_DYNAMICROLECLAIMPROVIDER_ADDDYNAMICROLECLAIMS_OFFSET UNITYSDK_OFFSET(0x1E7EBDC0)

namespace System::Security::Claims
{
	inline static constexpr unsigned int DynamicRoleClaimProvider_TypeDefinitionIndex = 4108;

	class DynamicRoleClaimProvider : public ::System::Object
	{
	public:
		static ::System::Void AddDynamicRoleClaims(::System::Security::Claims::ClaimsIdentity* claimsIdentity, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* claims)
		{
			return ((::System::Void(*)(::System::Security::Claims::ClaimsIdentity*, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_DYNAMICROLECLAIMPROVIDER_ADDDYNAMICROLECLAIMS_OFFSET))(claimsIdentity, claims);
		}
	};
}
