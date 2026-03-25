#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Security::Claims { class Claim; }
namespace System::Security::Claims { class ClaimsIdentity; }

#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16407430)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_SECURITY_CLAIMS_CLAIM__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x164078D0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SECURITY_CLAIMS_CLAIM__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16407860)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16407950)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x164078C0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16407870)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164072C0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51__CTOR_OFFSET UNITYSDK_OFFSET(0x16406030)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x16407380)

namespace System::Security::Claims
{
	inline static constexpr unsigned int ClaimsIdentity__get_Claims_d__51_TypeDefinitionIndex = 985;

	class ClaimsIdentity__get_Claims_d__51 : public ::System::Object
	{
	public:
		::System::Security::Claims::Claim* __2__current; // 0x10
		::System::Security::Claims::ClaimsIdentity* __4__this; // 0x18
		::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim*>* __7__wrap1; // 0x20
		::System::Int32 _j_5__2; // 0x28
		::System::Int32 __l__initialThreadId; // 0x2C
		::System::Int32 __1__state; // 0x30
		::System::Int32 _i_5__1; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51___M__FINALLY1_OFFSET))(this);
		}

		::System::Security::Claims::Claim* System_Collections_Generic_IEnumerator_System_Security_Claims_Claim__get_Current()
		{
			return ((::System::Security::Claims::Claim*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SECURITY_CLAIMS_CLAIM__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim*>* System_Collections_Generic_IEnumerable_System_Security_Claims_Claim__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_SECURITY_CLAIMS_CLAIM__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
