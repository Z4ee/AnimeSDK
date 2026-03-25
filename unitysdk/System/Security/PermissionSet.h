#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }
namespace System::Security::Policy { class PolicyLevel; }

#define SYSTEM_SECURITY_PERMISSIONSET_CASONLYDEMAND_OFFSET UNITYSDK_OFFSET(0x161E8EB0)
#define SYSTEM_SECURITY_PERMISSIONSET_COPYTO_OFFSET UNITYSDK_OFFSET(0x161E8700)
#define SYSTEM_SECURITY_PERMISSIONSET_DEMAND_OFFSET UNITYSDK_OFFSET(0x161E8870)
#define SYSTEM_SECURITY_PERMISSIONSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x161E8320)
#define SYSTEM_SECURITY_PERMISSIONSET_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x161E8F00)
#define SYSTEM_SECURITY_PERMISSIONSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x161E85B0)
#define SYSTEM_SECURITY_PERMISSIONSET_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x161E91C0)
#define SYSTEM_SECURITY_PERMISSIONSET_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x161E91F0)
#define SYSTEM_SECURITY_PERMISSIONSET_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x161E9220)
#define SYSTEM_SECURITY_PERMISSIONSET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x161E8B00)
#define SYSTEM_SECURITY_PERMISSIONSET_ISUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x161E8E90)
#define SYSTEM_SECURITY_PERMISSIONSET_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x161E9230)
#define SYSTEM_SECURITY_PERMISSIONSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x161E8FC0)
#define SYSTEM_SECURITY_PERMISSIONSET_TOXML_OFFSET UNITYSDK_OFFSET(0x161E7CB0)
#define SYSTEM_SECURITY_PERMISSIONSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x161E9240)
#define SYSTEM_SECURITY_PERMISSIONSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x161E7AD0)
#define SYSTEM_SECURITY_PERMISSIONSET__CTOR_2_OFFSET UNITYSDK_OFFSET(0x161E8680)
#define SYSTEM_SECURITY_PERMISSIONSET__CTOR_OFFSET UNITYSDK_OFFSET(0x161E79D0)

namespace System::Security
{
	inline static constexpr unsigned int PermissionSet_TypeDefinitionIndex = 938;

	class PermissionSet : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_psUnrestricted()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PermissionSet_TypeDefinitionIndex)->GetStaticField(0x5990);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_action()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PermissionSet_TypeDefinitionIndex)->GetStaticField(0x5998);
		}
		::System::Collections::ArrayList* list; // 0x10
		::System::Security::Policy::PolicyLevel* _policyLevel; // 0x18
		::Il2CppArray<::System::Boolean>* _ignored; // 0x20
		::System::Security::Permissions::PermissionState state; // 0x28
		::System::Boolean _readOnly; // 0x2C
		::System::Boolean _declsec; // 0x2D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Permissions::PermissionState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET__CTOR_1_OFFSET))(this, state);
		}

		::System::Void _ctor_2(::System::Security::IPermission* perm)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET__CTOR_2_OFFSET))(this, perm);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET__CCTOR_OFFSET))();
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_COPYTO_OFFSET))(this, array, index);
		}

		::System::Void Demand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_DEMAND_OFFSET))(this);
		}

		::System::Void CasOnlyDemand(::System::Int32 skip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_CASONLYDEMAND_OFFSET))(this, skip);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean IsUnrestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_ISUNRESTRICTED_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_TOSTRING_OFFSET))(this);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_TOXML_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, sender);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_GETHASHCODE_OFFSET))(this);
		}
	};
}
