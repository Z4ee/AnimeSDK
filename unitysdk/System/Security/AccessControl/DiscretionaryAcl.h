#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/AccessControlType.h"
#include "unitysdk/System/Security/AccessControl/AceQualifier.h"
#include "unitysdk/System/Security/AccessControl/CommonAcl.h"
#include "unitysdk/System/Security/AccessControl/InheritanceFlags.h"
#include "unitysdk/System/Security/AccessControl/PropagationFlags.h"

namespace System::Security::AccessControl { class GenericAce; }
namespace System::Security::AccessControl { class RawAcl; }
namespace System::Security::Principal { class SecurityIdentifier; }

#define SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL_ADDACCESS_OFFSET UNITYSDK_OFFSET(0x18BAA900)
#define SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL_APPLYCANONICALSORTTOEXPLICITACES_OFFSET UNITYSDK_OFFSET(0x18BAABA0)
#define SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL_GETACEINSERTPOSITION_OFFSET UNITYSDK_OFFSET(0x18BAABE0)
#define SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL_GETACEQUALIFIER_OFFSET UNITYSDK_OFFSET(0x18BAA9A0)
#define SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL_ISACEMEANINGLESS_OFFSET UNITYSDK_OFFSET(0x18BAABF0)
#define SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL_REMOVEACCESSSPECIFIC_OFFSET UNITYSDK_OFFSET(0x18BAAA60)
#define SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL_REMOVEACCESS_OFFSET UNITYSDK_OFFSET(0x18BAAA10)
#define SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL_SETACCESS_OFFSET UNITYSDK_OFFSET(0x18BAAB00)
#define SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18BAA8F0)
#define SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL__CTOR_OFFSET UNITYSDK_OFFSET(0x18BAA8E0)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int DiscretionaryAcl_TypeDefinitionIndex = 982;

	class DiscretionaryAcl : public ::System::Security::AccessControl::CommonAcl
	{
	public:
		::System::Void _ctor(::System::Boolean isContainer, ::System::Boolean isDS, ::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL__CTOR_OFFSET))(this, isContainer, isDS, capacity);
		}

		::System::Void _ctor_1(::System::Boolean isContainer, ::System::Boolean isDS, ::System::Security::AccessControl::RawAcl* rawAcl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Security::AccessControl::RawAcl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL__CTOR_1_OFFSET))(this, isContainer, isDS, rawAcl);
		}

		::System::Void AddAccess(::System::Security::AccessControl::AccessControlType accessType, ::System::Security::Principal::SecurityIdentifier* sid, ::System::Int32 accessMask, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AccessControlType, ::System::Security::Principal::SecurityIdentifier*, ::System::Int32, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL_ADDACCESS_OFFSET))(this, accessType, sid, accessMask, inheritanceFlags, propagationFlags);
		}

		::System::Boolean RemoveAccess(::System::Security::AccessControl::AccessControlType accessType, ::System::Security::Principal::SecurityIdentifier* sid, ::System::Int32 accessMask, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::AccessControlType, ::System::Security::Principal::SecurityIdentifier*, ::System::Int32, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL_REMOVEACCESS_OFFSET))(this, accessType, sid, accessMask, inheritanceFlags, propagationFlags);
		}

		::System::Void RemoveAccessSpecific(::System::Security::AccessControl::AccessControlType accessType, ::System::Security::Principal::SecurityIdentifier* sid, ::System::Int32 accessMask, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AccessControlType, ::System::Security::Principal::SecurityIdentifier*, ::System::Int32, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL_REMOVEACCESSSPECIFIC_OFFSET))(this, accessType, sid, accessMask, inheritanceFlags, propagationFlags);
		}

		::System::Void SetAccess(::System::Security::AccessControl::AccessControlType accessType, ::System::Security::Principal::SecurityIdentifier* sid, ::System::Int32 accessMask, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AccessControlType, ::System::Security::Principal::SecurityIdentifier*, ::System::Int32, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL_SETACCESS_OFFSET))(this, accessType, sid, accessMask, inheritanceFlags, propagationFlags);
		}

		::System::Void ApplyCanonicalSortToExplicitAces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL_APPLYCANONICALSORTTOEXPLICITACES_OFFSET))(this);
		}

		::System::Int32 GetAceInsertPosition(::System::Security::AccessControl::AceQualifier aceQualifier)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::AccessControl::AceQualifier))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL_GETACEINSERTPOSITION_OFFSET))(this, aceQualifier);
		}

		static ::System::Security::AccessControl::AceQualifier GetAceQualifier(::System::Security::AccessControl::AccessControlType accessType)
		{
			return ((::System::Security::AccessControl::AceQualifier(*)(::System::Security::AccessControl::AccessControlType))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL_GETACEQUALIFIER_OFFSET))(accessType);
		}

		::System::Boolean IsAceMeaningless(::System::Security::AccessControl::GenericAce* ace)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::GenericAce*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL_ISACEMEANINGLESS_OFFSET))(this, ace);
		}
	};
}
