#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Security/AccessControl/AceFlags.h"
#include "unitysdk/System/Security/AccessControl/AceQualifier.h"
#include "unitysdk/System/Security/AccessControl/AuditFlags.h"
#include "unitysdk/System/Security/AccessControl/GenericAcl.h"
#include "unitysdk/System/Security/AccessControl/InheritanceFlags.h"
#include "unitysdk/System/Security/AccessControl/PropagationFlags.h"

namespace System::Security::AccessControl { class GenericAce; }
namespace System::Security::AccessControl { class ObjectAce; }
namespace System::Security::AccessControl { class QualifiedAce; }
namespace System::Security::AccessControl { class RawAcl; }
namespace System::Security::AccessControl { template <typename T> class CommonAcl_RemoveAcesCallback_1; }
namespace System::Security::Principal { class SecurityIdentifier; }

#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_ADDACEGETQUALIFIEDACE_OFFSET UNITYSDK_OFFSET(0x1D1A6980)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_ADDACE_1_OFFSET UNITYSDK_OFFSET(0x1D1A6A70)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_ADDACE_OFFSET UNITYSDK_OFFSET(0x1D1A6880)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_APPLYCANONICALSORTTOEXPLICITACES_OFFSET UNITYSDK_OFFSET(0x1D1A6530)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_CANONICALIZEANDCLEARAEFA_OFFSET UNITYSDK_OFFSET(0x1D1A5250)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_COPYACE_OFFSET UNITYSDK_OFFSET(0x1D1A5490)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_GETACEFLAGS_OFFSET UNITYSDK_OFFSET(0x1D1A6BA0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_GETBINARYFORM_OFFSET UNITYSDK_OFFSET(0x1D1A5560)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_GETCANONICALEXPLICITACECOUNT_OFFSET UNITYSDK_OFFSET(0x1D1A5FC0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_GETCANONICALEXPLICITDENYACECOUNT_OFFSET UNITYSDK_OFFSET(0x1D1A5E20)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_GETOBJECTACETYPEGUIDS_OFFSET UNITYSDK_OFFSET(0x1D1A64E0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_GET_BINARYLENGTH_OFFSET UNITYSDK_OFFSET(0x1D1A5350)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D1A5370)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D1A53A0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_INIT_OFFSET UNITYSDK_OFFSET(0x1D1A4F90)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_ISACEMEANINGLESS_OFFSET UNITYSDK_OFFSET(0x1D1A5D30)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_MERGEEXPLICITACEPAIR_OFFSET UNITYSDK_OFFSET(0x1D1A6070)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_MERGEEXPLICITACES_OFFSET UNITYSDK_OFFSET(0x1D1A5AD0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_PURGE_OFFSET UNITYSDK_OFFSET(0x1D1A5580)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_REMOVEACESPECIFIC_OFFSET UNITYSDK_OFFSET(0x1D1A6C80)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_REQUIRECANONICITY_OFFSET UNITYSDK_OFFSET(0x1D1A5670)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_SETACE_1_OFFSET UNITYSDK_OFFSET(0x1D1A6ED0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_SETACE_OFFSET UNITYSDK_OFFSET(0x1D1A6DD0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D1A5510)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_TESTCANONICITY_OFFSET UNITYSDK_OFFSET(0x1D1A56E0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D1A4FA0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D1A50C0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D1A6FF0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A4DA0)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int CommonAcl_TypeDefinitionIndex = 973;

	class CommonAcl : public ::System::Security::AccessControl::GenericAcl
	{
	public:
		::System::Security::AccessControl::RawAcl* raw_acl; // 0x10
		::System::Boolean is_ds; // 0x18
		::System::Boolean is_canonical; // 0x19
		::System::Boolean is_container; // 0x1A
		::System::Boolean is_aefa; // 0x1B

		::System::Void _ctor(::System::Boolean isContainer, ::System::Boolean isDS, ::System::Security::AccessControl::RawAcl* rawAcl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Security::AccessControl::RawAcl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL__CTOR_OFFSET))(this, isContainer, isDS, rawAcl);
		}

		::System::Void _ctor_1(::System::Boolean isContainer, ::System::Boolean isDS, ::System::Byte revision, ::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL__CTOR_1_OFFSET))(this, isContainer, isDS, revision, capacity);
		}

		::System::Void _ctor_2(::System::Boolean isContainer, ::System::Boolean isDS, ::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL__CTOR_2_OFFSET))(this, isContainer, isDS, capacity);
		}

		::System::Void _ctor_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL__CTOR_3_OFFSET))(this);
		}

		::System::Void Init(::System::Boolean isContainer, ::System::Boolean isDS, ::System::Security::AccessControl::RawAcl* rawAcl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Security::AccessControl::RawAcl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_INIT_OFFSET))(this, isContainer, isDS, rawAcl);
		}

		::System::Int32 get_BinaryLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_GET_BINARYLENGTH_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_GET_COUNT_OFFSET))(this);
		}

		::System::Security::AccessControl::GenericAce* get_Item(::System::Int32 index)
		{
			return ((::System::Security::AccessControl::GenericAce*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Security::AccessControl::GenericAce* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Security::AccessControl::GenericAce*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void GetBinaryForm(::Il2CppArray<::System::Byte>* binaryForm, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_GETBINARYFORM_OFFSET))(this, binaryForm, offset);
		}

		::System::Void Purge(::System::Security::Principal::SecurityIdentifier* sid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::SecurityIdentifier*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_PURGE_OFFSET))(this, sid);
		}

		::System::Void RequireCanonicity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_REQUIRECANONICITY_OFFSET))(this);
		}

		::System::Void CanonicalizeAndClearAefa()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_CANONICALIZEANDCLEARAEFA_OFFSET))(this);
		}

		::System::Boolean IsAceMeaningless(::System::Security::AccessControl::GenericAce* ace)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::GenericAce*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_ISACEMEANINGLESS_OFFSET))(this, ace);
		}

		::System::Boolean TestCanonicity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_TESTCANONICITY_OFFSET))(this);
		}

		::System::Int32 GetCanonicalExplicitDenyAceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_GETCANONICALEXPLICITDENYACECOUNT_OFFSET))(this);
		}

		::System::Int32 GetCanonicalExplicitAceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_GETCANONICALEXPLICITACECOUNT_OFFSET))(this);
		}

		::System::Void MergeExplicitAces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_MERGEEXPLICITACES_OFFSET))(this);
		}

		::System::Security::AccessControl::GenericAce* MergeExplicitAcePair(::System::Security::AccessControl::GenericAce* ace1, ::System::Security::AccessControl::GenericAce* ace2)
		{
			return ((::System::Security::AccessControl::GenericAce*(*)(::PVOID, ::System::Security::AccessControl::GenericAce*, ::System::Security::AccessControl::GenericAce*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_MERGEEXPLICITACEPAIR_OFFSET))(this, ace1, ace2);
		}

		static ::System::Void GetObjectAceTypeGuids(::System::Security::AccessControl::ObjectAce* ace, ::System::Guid& type, ::System::Guid& inheritedType)
		{
			return ((::System::Void(*)(::System::Security::AccessControl::ObjectAce*, ::System::Guid&, ::System::Guid&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_GETOBJECTACETYPEGUIDS_OFFSET))(ace, type, inheritedType);
		}

		::System::Void ApplyCanonicalSortToExplicitAces(::System::Int32 start, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_APPLYCANONICALSORTTOEXPLICITACES_OFFSET))(this, start, count);
		}

		::System::Void AddAce(::System::Security::AccessControl::AceQualifier aceQualifier, ::System::Security::Principal::SecurityIdentifier* sid, ::System::Int32 accessMask, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AuditFlags auditFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AceQualifier, ::System::Security::Principal::SecurityIdentifier*, ::System::Int32, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AuditFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_ADDACE_OFFSET))(this, aceQualifier, sid, accessMask, inheritanceFlags, propagationFlags, auditFlags);
		}

		::System::Security::AccessControl::QualifiedAce* AddAceGetQualifiedAce(::System::Security::AccessControl::AceQualifier aceQualifier, ::System::Security::Principal::SecurityIdentifier* sid, ::System::Int32 accessMask, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AuditFlags auditFlags)
		{
			return ((::System::Security::AccessControl::QualifiedAce*(*)(::PVOID, ::System::Security::AccessControl::AceQualifier, ::System::Security::Principal::SecurityIdentifier*, ::System::Int32, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AuditFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_ADDACEGETQUALIFIEDACE_OFFSET))(this, aceQualifier, sid, accessMask, inheritanceFlags, propagationFlags, auditFlags);
		}

		::System::Void AddAce_1(::System::Security::AccessControl::QualifiedAce* newAce)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::QualifiedAce*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_ADDACE_1_OFFSET))(this, newAce);
		}

		static ::System::Security::AccessControl::GenericAce* CopyAce(::System::Security::AccessControl::GenericAce* ace)
		{
			return ((::System::Security::AccessControl::GenericAce*(*)(::System::Security::AccessControl::GenericAce*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_COPYACE_OFFSET))(ace);
		}

		::System::Security::AccessControl::AceFlags GetAceFlags(::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AuditFlags auditFlags)
		{
			return ((::System::Security::AccessControl::AceFlags(*)(::PVOID, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AuditFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_GETACEFLAGS_OFFSET))(this, inheritanceFlags, propagationFlags, auditFlags);
		}

		::System::Void RemoveAceSpecific(::System::Security::AccessControl::AceQualifier aceQualifier, ::System::Security::Principal::SecurityIdentifier* sid, ::System::Int32 accessMask, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AuditFlags auditFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AceQualifier, ::System::Security::Principal::SecurityIdentifier*, ::System::Int32, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AuditFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_REMOVEACESPECIFIC_OFFSET))(this, aceQualifier, sid, accessMask, inheritanceFlags, propagationFlags, auditFlags);
		}

		::System::Void SetAce(::System::Security::AccessControl::AceQualifier aceQualifier, ::System::Security::Principal::SecurityIdentifier* sid, ::System::Int32 accessMask, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AuditFlags auditFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AceQualifier, ::System::Security::Principal::SecurityIdentifier*, ::System::Int32, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AuditFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_SETACE_OFFSET))(this, aceQualifier, sid, accessMask, inheritanceFlags, propagationFlags, auditFlags);
		}

		::System::Void SetAce_1(::System::Security::AccessControl::QualifiedAce* newAce)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::QualifiedAce*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_SETACE_1_OFFSET))(this, newAce);
		}
	};
}
