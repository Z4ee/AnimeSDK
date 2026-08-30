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

#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ADDCLAIM_OFFSET UNITYSDK_OFFSET(0x1BE47430)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_CLONE_OFFSET UNITYSDK_OFFSET(0x1BE471A0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_DESERIALIZECLAIMS_OFFSET UNITYSDK_OFFSET(0x1BE47F20)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BE465E0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_FINDFIRST_OFFSET UNITYSDK_OFFSET(0x1BE475D0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1BE482C0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_ACTOR_OFFSET UNITYSDK_OFFSET(0x1BE46FC0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1BE46FB0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_CLAIMS_OFFSET UNITYSDK_OFFSET(0x1BE47070)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_NAMECLAIMTYPE_OFFSET UNITYSDK_OFFSET(0x1BE47190)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BE470F0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ISCIRCULAR_OFFSET UNITYSDK_OFFSET(0x1BE45AE0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONDESERIALIZEDMETHOD_OFFSET UNITYSDK_OFFSET(0x1BE47E60)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONDESERIALIZINGMETHOD_OFFSET UNITYSDK_OFFSET(0x1BE48220)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONSERIALIZINGMETHOD_OFFSET UNITYSDK_OFFSET(0x1BE47B90)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SAFEADDCLAIMS_OFFSET UNITYSDK_OFFSET(0x1BE45B20)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SAFEADDCLAIM_OFFSET UNITYSDK_OFFSET(0x1BE46120)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SERIALIZECLAIMS_OFFSET UNITYSDK_OFFSET(0x1BE47BE0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SET_ACTOR_OFFSET UNITYSDK_OFFSET(0x1BE46FD0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE451C0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BE451F0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BE45210)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1BE46290)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1BE464E0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE45190)

namespace System::Security::Claims
{
	inline static constexpr unsigned int ClaimsIdentity_TypeDefinitionIndex = 992;

	class ClaimsIdentity : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Security::Claims::Claim*>* m_instanceClaims; // 0x10
		::Il2CppArray<::System::Byte>* m_userSerializationData; // 0x18
		::System::String* m_version; // 0x20
		::System::String* m_roleType; // 0x28
		::System::Object* m_bootstrapContext; // 0x30
		::System::String* m_authenticationType; // 0x38
		::System::String* m_serializedNameType; // 0x40
		::System::Collections::ObjectModel::Collection_1<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*>* m_externalClaims; // 0x48
		::System::String* m_serializedClaims; // 0x50
		::System::String* m_nameType; // 0x58
		::System::Security::Claims::ClaimsIdentity* m_actor; // 0x60
		::System::String* m_serializedRoleType; // 0x68
		::System::String* m_label; // 0x70

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
