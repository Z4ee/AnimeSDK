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

#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ADDCLAIM_OFFSET UNITYSDK_OFFSET(0x1A986610)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_CLONE_OFFSET UNITYSDK_OFFSET(0x1A9863E0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_DESERIALIZECLAIMS_OFFSET UNITYSDK_OFFSET(0x1A986D50)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A985B20)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_FINDFIRST_OFFSET UNITYSDK_OFFSET(0x1A9866D0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1A987050)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A9862A0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_CLAIMS_OFFSET UNITYSDK_OFFSET(0x1A986350)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A9863B0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ISCIRCULAR_OFFSET UNITYSDK_OFFSET(0x1A985390)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONDESERIALIZEDMETHOD_OFFSET UNITYSDK_OFFSET(0x1A986CA0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONDESERIALIZINGMETHOD_OFFSET UNITYSDK_OFFSET(0x1A986FA0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONSERIALIZINGMETHOD_OFFSET UNITYSDK_OFFSET(0x1A986A90)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SAFEADDCLAIMS_OFFSET UNITYSDK_OFFSET(0x1A9853D0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SAFEADDCLAIM_OFFSET UNITYSDK_OFFSET(0x1A985740)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SERIALIZECLAIMS_OFFSET UNITYSDK_OFFSET(0x1A986AF0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SET_ACTOR_OFFSET UNITYSDK_OFFSET(0x1A9862B0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A984C90)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A984CC0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A984CE0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A9857D0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1A9859E0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A984C60)

namespace System::Security::Claims
{
	inline static constexpr unsigned int ClaimsIdentity_TypeDefinitionIndex = 1032;

	class ClaimsIdentity : public ::System::Object
	{
	public:
		::System::String* m_roleType; // 0x10
		::System::String* m_authenticationType; // 0x18
		::System::String* m_serializedClaims; // 0x20
		::Il2CppArray<::System::Byte>* m_userSerializationData; // 0x28
		::System::Object* m_bootstrapContext; // 0x30
		::System::String* m_nameType; // 0x38
		::System::Collections::ObjectModel::Collection_1<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*>* m_externalClaims; // 0x40
		::System::String* m_version; // 0x48
		::System::String* m_serializedNameType; // 0x50
		::System::Security::Claims::ClaimsIdentity* m_actor; // 0x58
		::System::String* m_serializedRoleType; // 0x60
		::System::Collections::Generic::List_1<::System::Security::Claims::Claim*>* m_instanceClaims; // 0x68
		::System::String* m_label; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* claims)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_1_OFFSET))(this, claims);
		}

		::System::Void _ctor_2(::System::Security::Principal::IIdentity* identity, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* claims, ::System::String* authenticationType, ::System::String* nameType, ::System::String* roleType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::IIdentity*, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_2_OFFSET))(this, identity, claims, authenticationType, nameType, roleType);
		}

		::System::Void _ctor_3(::System::Security::Principal::IIdentity* identity, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* claims, ::System::String* authenticationType, ::System::String* nameType, ::System::String* roleType, ::System::Boolean checkAuthType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::IIdentity*, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_3_OFFSET))(this, identity, claims, authenticationType, nameType, roleType, checkAuthType);
		}

		::System::Void _ctor_4(::System::Security::Claims::ClaimsIdentity* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Claims::ClaimsIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_4_OFFSET))(this, other);
		}

		::System::Void _ctor_5(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__CTOR_5_OFFSET))(this, info, context);
		}

		::System::String* get_AuthenticationType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET))(this);
		}

		::System::Void set_Actor(::System::Security::Claims::ClaimsIdentity* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Claims::ClaimsIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SET_ACTOR_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* get_Claims()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_CLAIMS_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_NAME_OFFSET))(this);
		}

		::System::Security::Claims::ClaimsIdentity* Clone()
		{
			return ((::System::Security::Claims::ClaimsIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_CLONE_OFFSET))(this);
		}

		::System::Void AddClaim(::System::Security::Claims::Claim* claim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Claims::Claim*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ADDCLAIM_OFFSET))(this, claim);
		}

		::System::Void SafeAddClaims(::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* claims)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SAFEADDCLAIMS_OFFSET))(this, claims);
		}

		::System::Void SafeAddClaim(::System::Security::Claims::Claim* claim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Claims::Claim*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SAFEADDCLAIM_OFFSET))(this, claim);
		}

		::System::Security::Claims::Claim* FindFirst(::System::String* type)
		{
			return ((::System::Security::Claims::Claim*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_FINDFIRST_OFFSET))(this, type);
		}

		::System::Void OnSerializingMethod(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONSERIALIZINGMETHOD_OFFSET))(this, context);
		}

		::System::Void OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONDESERIALIZEDMETHOD_OFFSET))(this, context);
		}

		::System::Void OnDeserializingMethod(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONDESERIALIZINGMETHOD_OFFSET))(this, context);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Void DeserializeClaims(::System::String* serializedClaims)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_DESERIALIZECLAIMS_OFFSET))(this, serializedClaims);
		}

		::System::String* SerializeClaims()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SERIALIZECLAIMS_OFFSET))(this);
		}

		::System::Boolean IsCircular(::System::Security::Claims::ClaimsIdentity* subject)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Claims::ClaimsIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ISCIRCULAR_OFFSET))(this, subject);
		}

		::System::Void Deserialize(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, ::System::Boolean useContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_DESERIALIZE_OFFSET))(this, info, context, useContext);
		}
	};
}
