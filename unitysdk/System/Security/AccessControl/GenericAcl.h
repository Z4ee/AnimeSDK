#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Security::AccessControl { class AceEnumerator; }
namespace System::Security::AccessControl { class GenericAce; }

#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACL_COPYTO_OFFSET UNITYSDK_OFFSET(0x1DDE9D40)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DDE9F60)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACL_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1DDE9D20)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACL_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1DDE9D30)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACL_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1DDE9EE0)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACL_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DDE9FB0)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDE9CF0)
#define SYSTEM_SECURITY_ACCESSCONTROL_GENERICACL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE9D10)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int GenericAcl_TypeDefinitionIndex = 983;

	class GenericAcl : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_MaxBinaryLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GenericAcl_TypeDefinitionIndex)->GetStaticField(0x110);
		}
		static ::System::Byte* StaticGet_AclRevision()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(GenericAcl_TypeDefinitionIndex)->GetStaticField(0x114);
		}
		static ::System::Byte* StaticGet_AclRevisionDS()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(GenericAcl_TypeDefinitionIndex)->GetStaticField(0x115);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACL__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACL__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACL_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACL_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Security::AccessControl::GenericAce*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Security::AccessControl::GenericAce*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACL_COPYTO_OFFSET))(this, array, index);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACL_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Security::AccessControl::AceEnumerator* GetEnumerator()
		{
			return ((::System::Security::AccessControl::AceEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACL_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_GENERICACL_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
