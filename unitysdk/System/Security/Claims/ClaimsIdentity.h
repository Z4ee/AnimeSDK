#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class Collection_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Claims { class Claim; }
namespace System::Security::Principal { class IIdentity; }

#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ADDCLAIM_OFFSET UNITYSDK_OFFSET(0x187E0EC0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_CLONE_OFFSET UNITYSDK_OFFSET(0x187E0C90)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_DESERIALIZECLAIMS_OFFSET UNITYSDK_OFFSET(0x187E1680)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x187E01F0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_FINDFIRST_OFFSET UNITYSDK_OFFSET(0x187E0FF0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x187E19C0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_ACTOR_OFFSET UNITYSDK_OFFSET(0x187E0B20)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x187E0B10)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_CLAIMS_OFFSET UNITYSDK_OFFSET(0x187E0BD0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_NAMECLAIMTYPE_OFFSET UNITYSDK_OFFSET(0x187E0C80)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x187E0C50)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ISCIRCULAR_OFFSET UNITYSDK_OFFSET(0x187DF9C0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONDESERIALIZEDMETHOD_OFFSET UNITYSDK_OFFSET(0x187E15C0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONDESERIALIZINGMETHOD_OFFSET UNITYSDK_OFFSET(0x187E1920)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONSERIALIZINGMETHOD_OFFSET UNITYSDK_OFFSET(0x187E13B0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SAFEADDCLAIMS_OFFSET UNITYSDK_OFFSET(0x187DFA00)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SAFEADDCLAIM_OFFSET UNITYSDK_OFFSET(0x187DFE10)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SERIALIZECLAIMS_OFFSET UNITYSDK_OFFSET(0x187E1400)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SET_ACTOR_OFFSET UNITYSDK_OFFSET(0x187E0B30)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x187DF300)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x187DF330)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x187DF350)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x187DFF10)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_5_OFFSET UNITYSDK_OFFSET(0x187E00F0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x187DF2D0)

namespace System::Security::Claims
{
	inline static constexpr unsigned int ClaimsIdentity_TypeDefinitionIndex = 985;

	class ClaimsIdentity : public ::System::Object
	{
	public:
		::System::String* m_serializedRoleType; // 0x10
		::System::String* m_label; // 0x18
		::System::Security::Claims::ClaimsIdentity* m_actor; // 0x20
		::System::String* m_authenticationType; // 0x28
		::System::Object* m_bootstrapContext; // 0x30
		::System::Collections::Generic::List_1<::System::Security::Claims::Claim*>* m_instanceClaims; // 0x38
		::System::String* m_version; // 0x40
		::System::String* m_roleType; // 0x48
		::System::String* m_nameType; // 0x50
		::System::String* m_serializedNameType; // 0x58
		::Il2CppArray<::System::Byte>* m_userSerializationData; // 0x60
		::System::String* m_serializedClaims; // 0x68
		::System::Collections::ObjectModel::Collection_1<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*>* m_externalClaims; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Security::Principal::IIdentity* a1, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::IIdentity*, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_3(::System::Security::Principal::IIdentity* a1, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::IIdentity*, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_4(::System::Security::Claims::ClaimsIdentity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Claims::ClaimsIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_4_OFFSET))(this, a1);
		}

		::System::Void _ctor_5(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_5_OFFSET))(this, a1, a2);
		}

		::System::String* get_AuthenticationType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET))(this);
		}

		::System::Security::Claims::ClaimsIdentity* get_Actor()
		{
			return ((::System::Security::Claims::ClaimsIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_ACTOR_OFFSET))(this);
		}

		::System::Void set_Actor(::System::Security::Claims::ClaimsIdentity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Claims::ClaimsIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SET_ACTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* get_Claims()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_CLAIMS_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_NAME_OFFSET))(this);
		}

		::System::String* get_NameClaimType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_NAMECLAIMTYPE_OFFSET))(this);
		}

		::System::Security::Claims::ClaimsIdentity* Clone()
		{
			return ((::System::Security::Claims::ClaimsIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_CLONE_OFFSET))(this);
		}

		::System::Void AddClaim(::System::Security::Claims::Claim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Claims::Claim*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ADDCLAIM_OFFSET))(this, a1);
		}

		::System::Void SafeAddClaims(::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SAFEADDCLAIMS_OFFSET))(this, a1);
		}

		::System::Void SafeAddClaim(::System::Security::Claims::Claim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Claims::Claim*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SAFEADDCLAIM_OFFSET))(this, a1);
		}

		::System::Security::Claims::Claim* FindFirst(::System::String* a1)
		{
			return ((::System::Security::Claims::Claim*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_FINDFIRST_OFFSET))(this, a1);
		}

		::System::Void OnSerializingMethod(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONSERIALIZINGMETHOD_OFFSET))(this, a1);
		}

		::System::Void OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONDESERIALIZEDMETHOD_OFFSET))(this, a1);
		}

		::System::Void OnDeserializingMethod(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONDESERIALIZINGMETHOD_OFFSET))(this, a1);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void DeserializeClaims(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_DESERIALIZECLAIMS_OFFSET))(this, a1);
		}

		::System::String* SerializeClaims()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SERIALIZECLAIMS_OFFSET))(this);
		}

		::System::Boolean IsCircular(::System::Security::Claims::ClaimsIdentity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Claims::ClaimsIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ISCIRCULAR_OFFSET))(this, a1);
		}

		::System::Void Deserialize(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_DESERIALIZE_OFFSET))(this, a1, a2, a3);
		}
	};
}
