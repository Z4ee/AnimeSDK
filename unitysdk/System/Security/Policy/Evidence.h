#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_SECURITY_POLICY_EVIDENCE_COPYTO_OFFSET UNITYSDK_OFFSET(0x166D2710)
#define SYSTEM_SECURITY_POLICY_EVIDENCE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x166D2970)
#define SYSTEM_SECURITY_POLICY_EVIDENCE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x166D25E0)
#define SYSTEM_SECURITY_POLICY_EVIDENCE_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x166D26F0)
#define SYSTEM_SECURITY_POLICY_EVIDENCE_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x166D2700)
#define SYSTEM_SECURITY_POLICY_EVIDENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x166D25D0)

namespace System::Security::Policy
{
	inline static constexpr unsigned int Evidence_TypeDefinitionIndex = 957;

	class Evidence : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* assemblyEvidenceList; // 0x10
		::System::Collections::ArrayList* hostEvidenceList; // 0x18
		::System::Boolean _locked; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_EVIDENCE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_EVIDENCE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_EVIDENCE_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_EVIDENCE_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_EVIDENCE_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_EVIDENCE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
