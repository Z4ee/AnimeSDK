#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_SECURITY_POLICY_EVIDENCE_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A3B28E0)
#define SYSTEM_SECURITY_POLICY_EVIDENCE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A3B2990)
#define SYSTEM_SECURITY_POLICY_EVIDENCE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A3B2870)
#define SYSTEM_SECURITY_POLICY_EVIDENCE_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1A3B28C0)
#define SYSTEM_SECURITY_POLICY_EVIDENCE_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1A3B28D0)
#define SYSTEM_SECURITY_POLICY_EVIDENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3B2860)

namespace System::Security::Policy
{
	inline static constexpr unsigned int Evidence_TypeDefinitionIndex = 951;

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

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_EVIDENCE_COPYTO_OFFSET))(this, array, index);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_EVIDENCE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
