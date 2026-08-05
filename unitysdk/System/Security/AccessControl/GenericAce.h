#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/AccessControl/AceFlags.h"
#include "unitysdk/System/Security/AccessControl/AceType.h"
#include "unitysdk/System/Security/AccessControl/AuditFlags.h"
#include "unitysdk/System/Security/AccessControl/InheritanceFlags.h"
#include "unitysdk/System/Security/AccessControl/PropagationFlags.h"

#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_CREATEFROMBINARYFORM_OFFSET UNITYSDK_OFFSET(0x1DDE9530)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDE9680)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDE9850)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_GET_AUDITFLAGS_OFFSET UNITYSDK_OFFSET(0x1DDE94D0)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_GET_INHERITANCEFLAGS_OFFSET UNITYSDK_OFFSET(0x1DDE94F0)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_GET_ISINHERITED_OFFSET UNITYSDK_OFFSET(0x1DDE9510)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_GET_PROPAGATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1DDE9520)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_ISOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1DDE9660)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1DDE96F0)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1DDE9960)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_READINT_OFFSET UNITYSDK_OFFSET(0x1DDE9B20)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_READUSHORT_OFFSET UNITYSDK_OFFSET(0x1DDE9AC0)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_WRITEINT_OFFSET UNITYSDK_OFFSET(0x1DDE9BC0)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_WRITEUSHORT_OFFSET UNITYSDK_OFFSET(0x1DDE9C60)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDE93C0)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DDE9CB0)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE9340)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int GenericAce_TypeDefinitionIndex = 982;

	class GenericAce : public ::System::Object
	{
	public:
		::System::Security::AccessControl::AceType ace_type; // 0x10
		::System::Security::AccessControl::AceFlags ace_flags; // 0x11

		::System::Void _ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AceType, ::System::Security::AccessControl::AceFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE__CTOR_OFFSET))(this, type, flags);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* binaryForm, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE__CTOR_1_OFFSET))(this, binaryForm, offset);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE__CTOR_2_OFFSET))(this);
		}

		::System::Security::AccessControl::AuditFlags get_AuditFlags()
		{
			return ((::System::Security::AccessControl::AuditFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_GET_AUDITFLAGS_OFFSET))(this);
		}

		::System::Security::AccessControl::InheritanceFlags get_InheritanceFlags()
		{
			return ((::System::Security::AccessControl::InheritanceFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_GET_INHERITANCEFLAGS_OFFSET))(this);
		}

		::System::Boolean get_IsInherited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_GET_ISINHERITED_OFFSET))(this);
		}

		::System::Security::AccessControl::PropagationFlags get_PropagationFlags()
		{
			return ((::System::Security::AccessControl::PropagationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_GET_PROPAGATIONFLAGS_OFFSET))(this);
		}

		static ::System::Security::AccessControl::GenericAce* CreateFromBinaryForm(::Il2CppArray<::System::Byte>* binaryForm, ::System::Int32 offset)
		{
			return ((::System::Security::AccessControl::GenericAce*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_CREATEFROMBINARYFORM_OFFSET))(binaryForm, offset);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_EQUALS_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Security::AccessControl::GenericAce* left, ::System::Security::AccessControl::GenericAce* right)
		{
			return ((::System::Boolean(*)(::System::Security::AccessControl::GenericAce*, ::System::Security::AccessControl::GenericAce*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Security::AccessControl::GenericAce* left, ::System::Security::AccessControl::GenericAce* right)
		{
			return ((::System::Boolean(*)(::System::Security::AccessControl::GenericAce*, ::System::Security::AccessControl::GenericAce*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean IsObjectType(::System::Security::AccessControl::AceType type)
		{
			return ((::System::Boolean(*)(::System::Security::AccessControl::AceType))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_ISOBJECTTYPE_OFFSET))(type);
		}

		static ::System::UInt16 ReadUShort(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::System::UInt16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_READUSHORT_OFFSET))(buffer, offset);
		}

		static ::System::Int32 ReadInt(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_READINT_OFFSET))(buffer, offset);
		}

		static ::System::Void WriteInt(::System::Int32 val, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_WRITEINT_OFFSET))(val, buffer, offset);
		}

		static ::System::Void WriteUShort(::System::UInt16 val, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::System::UInt16, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACE_WRITEUSHORT_OFFSET))(val, buffer, offset);
		}
	};
}
