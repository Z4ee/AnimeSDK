#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/GenericAcl.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Security::AccessControl { class GenericAce; }

#define SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_GETBINARYFORM_OFFSET UNITYSDK_OFFSET(0x1A0B98D0)
#define SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_GET_BINARYLENGTH_OFFSET UNITYSDK_OFFSET(0x1A0B9700)
#define SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A0B9800)
#define SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A0B9820)
#define SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_INSERTACE_OFFSET UNITYSDK_OFFSET(0x1A0B9BD0)
#define SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_READUSHORT_OFFSET UNITYSDK_OFFSET(0x1A0B96A0)
#define SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_REMOVEACE_OFFSET UNITYSDK_OFFSET(0x1A0B9C80)
#define SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A0B9880)
#define SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_WRITEUSHORT_OFFSET UNITYSDK_OFFSET(0x1A0B9B80)
#define SYSTEM_SECURITY_ACCESSCONTROL_RAWACL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0B9370)
#define SYSTEM_SECURITY_ACCESSCONTROL_RAWACL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B92F0)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int RawAcl_TypeDefinitionIndex = 1001;

	class RawAcl : public ::System::Security::AccessControl::GenericAcl
	{
	public:
		::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>* list; // 0x10
		::System::Byte revision; // 0x18

		::System::Void _ctor(::System::Byte revision, ::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_RAWACL__CTOR_OFFSET))(this, revision, capacity);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* binaryForm, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_RAWACL__CTOR_1_OFFSET))(this, binaryForm, offset);
		}

		::System::Int32 get_BinaryLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_GET_BINARYLENGTH_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_GET_COUNT_OFFSET))(this);
		}

		::System::Security::AccessControl::GenericAce* get_Item(::System::Int32 index)
		{
			return ((::System::Security::AccessControl::GenericAce*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Security::AccessControl::GenericAce* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Security::AccessControl::GenericAce*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void GetBinaryForm(::Il2CppArray<::System::Byte>* binaryForm, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_GETBINARYFORM_OFFSET))(this, binaryForm, offset);
		}

		::System::Void InsertAce(::System::Int32 index, ::System::Security::AccessControl::GenericAce* ace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Security::AccessControl::GenericAce*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_INSERTACE_OFFSET))(this, index, ace);
		}

		::System::Void RemoveAce(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_REMOVEACE_OFFSET))(this, index);
		}

		::System::Void WriteUShort(::System::UInt16 val, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_WRITEUSHORT_OFFSET))(this, val, buffer, offset);
		}

		::System::UInt16 ReadUShort(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::System::UInt16(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_READUSHORT_OFFSET))(this, buffer, offset);
		}
	};
}
