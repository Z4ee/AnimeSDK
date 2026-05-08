#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Principal/IdentityReference.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_COMPARETO_OFFSET UNITYSDK_OFFSET(0x19559F30)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_CREATEFROMBINARYFORM_OFFSET UNITYSDK_OFFSET(0x19559A60)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1955A250)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1955A140)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_GETBINARYFORM_OFFSET UNITYSDK_OFFSET(0x1955A2F0)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1955A3C0)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_GETSIDAUTHORITY_OFFSET UNITYSDK_OFFSET(0x19559D50)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_GETSIDSUBAUTHORITYCOUNT_OFFSET UNITYSDK_OFFSET(0x19559EF0)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_GETSIDSUBAUTHORITY_OFFSET UNITYSDK_OFFSET(0x19559E40)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_GET_BINARYLENGTH_OFFSET UNITYSDK_OFFSET(0x19559B50)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19559B70)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1955A0D0)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1955A630)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_PARSESDDLFORM_OFFSET UNITYSDK_OFFSET(0x19559390)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1955A450)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x1955A460)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_TRYPARSEAUTHORITY_OFFSET UNITYSDK_OFFSET(0x1955A6A0)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_TRYPARSESUBAUTHORITY_OFFSET UNITYSDK_OFFSET(0x1955A7A0)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1955A8A0)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19559980)
#define SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x19559300)

namespace System::Security::Principal
{
	inline static constexpr unsigned int SecurityIdentifier_TypeDefinitionIndex = 1023;

	class SecurityIdentifier : public ::System::Security::Principal::IdentityReference
	{
	public:
		static ::System::Int32* StaticGet_MinBinaryLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SecurityIdentifier_TypeDefinitionIndex)->GetStaticField(0x80);
		}
		static ::System::Int32* StaticGet_MaxBinaryLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SecurityIdentifier_TypeDefinitionIndex)->GetStaticField(0x84);
		}
		::Il2CppArray<::System::Byte>* buffer; // 0x10

		::System::Void _ctor(::System::String* sddlForm)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER__CTOR_OFFSET))(this, sddlForm);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* binaryForm, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER__CTOR_1_OFFSET))(this, binaryForm, offset);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER__CCTOR_OFFSET))();
		}

		::System::Void CreateFromBinaryForm(::System::IntPtr binaryForm, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_CREATEFROMBINARYFORM_OFFSET))(this, binaryForm, length);
		}

		::System::Int32 get_BinaryLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_GET_BINARYLENGTH_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_GET_VALUE_OFFSET))(this);
		}

		::System::UInt64 GetSidAuthority()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_GETSIDAUTHORITY_OFFSET))(this);
		}

		::System::Byte GetSidSubAuthorityCount()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_GETSIDSUBAUTHORITYCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetSidSubAuthority(::System::Byte index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_GETSIDSUBAUTHORITY_OFFSET))(this, index);
		}

		::System::Int32 CompareTo(::System::Security::Principal::SecurityIdentifier* sid)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::Principal::SecurityIdentifier*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_COMPARETO_OFFSET))(this, sid);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_EQUALS_OFFSET))(this, o);
		}

		::System::Boolean Equals_1(::System::Security::Principal::SecurityIdentifier* sid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Principal::SecurityIdentifier*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_EQUALS_1_OFFSET))(this, sid);
		}

		::System::Void GetBinaryForm(::Il2CppArray<::System::Byte>* binaryForm, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_GETBINARYFORM_OFFSET))(this, binaryForm, offset);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_TOSTRING_OFFSET))(this);
		}

		::System::Security::Principal::IdentityReference* Translate(::System::Type* targetType)
		{
			return ((::System::Security::Principal::IdentityReference*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_TRANSLATE_OFFSET))(this, targetType);
		}

		static ::System::Boolean op_Equality(::System::Security::Principal::SecurityIdentifier* left, ::System::Security::Principal::SecurityIdentifier* right)
		{
			return ((::System::Boolean(*)(::System::Security::Principal::SecurityIdentifier*, ::System::Security::Principal::SecurityIdentifier*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Security::Principal::SecurityIdentifier* left, ::System::Security::Principal::SecurityIdentifier* right)
		{
			return ((::System::Boolean(*)(::System::Security::Principal::SecurityIdentifier*, ::System::Security::Principal::SecurityIdentifier*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::Il2CppArray<::System::Byte>* ParseSddlForm(::System::String* sddlForm)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_PARSESDDLFORM_OFFSET))(sddlForm);
		}

		static ::System::Boolean TryParseAuthority(::System::String* s, ::System::UInt64& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt64&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_TRYPARSEAUTHORITY_OFFSET))(s, result);
		}

		static ::System::Boolean TryParseSubAuthority(::System::String* s, ::System::UInt32& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_TRYPARSESUBAUTHORITY_OFFSET))(s, result);
		}
	};
}
