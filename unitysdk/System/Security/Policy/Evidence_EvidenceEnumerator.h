#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }

#define SYSTEM_SECURITY_POLICY_EVIDENCE_EVIDENCEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x161E9A10)
#define SYSTEM_SECURITY_POLICY_EVIDENCE_EVIDENCEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x161E9760)
#define SYSTEM_SECURITY_POLICY_EVIDENCE_EVIDENCEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x161E98B0)
#define SYSTEM_SECURITY_POLICY_EVIDENCE_EVIDENCEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x161E9750)

namespace System::Security::Policy
{
	inline static constexpr unsigned int Evidence_EvidenceEnumerator_TypeDefinitionIndex = 950;

	class Evidence_EvidenceEnumerator : public ::System::Object
	{
	public:
		::System::Collections::IEnumerator* currentEnum; // 0x10
		::System::Collections::IEnumerator* hostEnum; // 0x18
		::System::Collections::IEnumerator* assemblyEnum; // 0x20

		::System::Void _ctor(::System::Collections::IEnumerator* hostenum, ::System::Collections::IEnumerator* assemblyenum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_EVIDENCE_EVIDENCEENUMERATOR__CTOR_OFFSET))(this, hostenum, assemblyenum);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_EVIDENCE_EVIDENCEENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_EVIDENCE_EVIDENCEENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_EVIDENCE_EVIDENCEENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
