#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Security/AccessControl/AceFlags.h"
#include "unitysdk/System/Security/AccessControl/AceQualifier.h"
#include "unitysdk/System/Security/AccessControl/AceType.h"
#include "unitysdk/System/Security/AccessControl/ObjectAceFlags.h"
#include "unitysdk/System/Security/AccessControl/QualifiedAce.h"

namespace System::Security::Principal { class SecurityIdentifier; }

#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACE_CONVERTTYPE_OFFSET UNITYSDK_OFFSET(0x1DC06CE0)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACE_GETBINARYFORM_OFFSET UNITYSDK_OFFSET(0x1DC07220)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACE_GET_BINARYLENGTH_OFFSET UNITYSDK_OFFSET(0x1DC071C0)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACE_GET_INHERITEDOBJECTACETYPEPRESENT_OFFSET UNITYSDK_OFFSET(0x1DC07130)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACE_GET_OBJECTACETYPEPRESENT_OFFSET UNITYSDK_OFFSET(0x1DC07120)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACE_READGUID_OFFSET UNITYSDK_OFFSET(0x1DC07140)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACE_WRITEGUID_OFFSET UNITYSDK_OFFSET(0x1DC07450)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DC06DC0)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC06C30)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int ObjectAce_TypeDefinitionIndex = 994;

	class ObjectAce : public ::System::Security::AccessControl::QualifiedAce
	{
	public:
		::System::Security::AccessControl::ObjectAceFlags object_ace_flags; // 0x30
		::System::Guid object_ace_type; // 0x34
		::System::Guid inherited_object_type; // 0x44

		::System::Void _ctor(::System::Security::AccessControl::AceFlags aceFlags, ::System::Security::AccessControl::AceQualifier qualifier, ::System::Int32 accessMask, ::System::Security::Principal::SecurityIdentifier* sid, ::System::Security::AccessControl::ObjectAceFlags flags, ::System::Guid type, ::System::Guid inheritedType, ::System::Boolean isCallback, ::Il2CppArray<::System::Byte>* opaque)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AceFlags, ::System::Security::AccessControl::AceQualifier, ::System::Int32, ::System::Security::Principal::SecurityIdentifier*, ::System::Security::AccessControl::ObjectAceFlags, ::System::Guid, ::System::Guid, ::System::Boolean, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACE__CTOR_OFFSET))(this, aceFlags, qualifier, accessMask, sid, flags, type, inheritedType, isCallback, opaque);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* binaryForm, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACE__CTOR_1_OFFSET))(this, binaryForm, offset);
		}

		::System::Int32 get_BinaryLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACE_GET_BINARYLENGTH_OFFSET))(this);
		}

		::System::Boolean get_InheritedObjectAceTypePresent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACE_GET_INHERITEDOBJECTACETYPEPRESENT_OFFSET))(this);
		}

		::System::Boolean get_ObjectAceTypePresent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACE_GET_OBJECTACETYPEPRESENT_OFFSET))(this);
		}

		::System::Void GetBinaryForm(::Il2CppArray<::System::Byte>* binaryForm, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACE_GETBINARYFORM_OFFSET))(this, binaryForm, offset);
		}

		static ::System::Security::AccessControl::AceType ConvertType(::System::Security::AccessControl::AceQualifier qualifier, ::System::Boolean isCallback)
		{
			return ((::System::Security::AccessControl::AceType(*)(::System::Security::AccessControl::AceQualifier, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACE_CONVERTTYPE_OFFSET))(qualifier, isCallback);
		}

		::System::Void WriteGuid(::System::Guid val, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACE_WRITEGUID_OFFSET))(this, val, buffer, offset);
		}

		::System::Guid ReadGuid(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::System::Guid(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACE_READGUID_OFFSET))(this, buffer, offset);
		}
	};
}
