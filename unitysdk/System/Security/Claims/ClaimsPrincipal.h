#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Claims { class ClaimsIdentity; }

#define SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL_DESERIALIZEIDENTITIES_OFFSET UNITYSDK_OFFSET(0x16408920)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16407E90)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL_GET_CLAIMSPRINCIPALSELECTOR_OFFSET UNITYSDK_OFFSET(0x16407D30)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL_ONDESERIALIZEDMETHOD_OFFSET UNITYSDK_OFFSET(0x164088E0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL_ONSERIALIZINGMETHOD_OFFSET UNITYSDK_OFFSET(0x16408050)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL_SELECTPRIMARYIDENTITY_OFFSET UNITYSDK_OFFSET(0x164079D0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL_SERIALIZEIDENTITIES_OFFSET UNITYSDK_OFFSET(0x16408090)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x16408DC0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16407DF0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL__CTOR_OFFSET UNITYSDK_OFFSET(0x16407D90)

namespace System::Security::Claims
{
	inline static constexpr unsigned int ClaimsPrincipal_TypeDefinitionIndex = 986;

	class ClaimsPrincipal : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>*, ::System::Security::Claims::ClaimsIdentity*>** StaticGet_s_identitySelector()
		{
			return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>*, ::System::Security::Claims::ClaimsIdentity*>**)Il2CppClass::FromTypeDefinitionIndex(ClaimsPrincipal_TypeDefinitionIndex)->GetStaticField(0x8290);
		}
		static ::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>** StaticGet_s_principalSelector()
		{
			return (::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>**)Il2CppClass::FromTypeDefinitionIndex(ClaimsPrincipal_TypeDefinitionIndex)->GetStaticField(0x8298);
		}
		::System::String* m_version; // 0x10
		::System::Collections::Generic::List_1<::System::Security::Claims::ClaimsIdentity*>* m_identities; // 0x18
		::System::String* m_serializedClaimsIdentities; // 0x20
		::Il2CppArray<::System::Byte>* m_userSerializationData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL__CTOR_1_OFFSET))(this, info, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL__CCTOR_OFFSET))();
		}

		static ::System::Security::Claims::ClaimsIdentity* SelectPrimaryIdentity(::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>* identities)
		{
			return ((::System::Security::Claims::ClaimsIdentity*(*)(::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL_SELECTPRIMARYIDENTITY_OFFSET))(identities);
		}

		static ::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>* get_ClaimsPrincipalSelector()
		{
			return ((::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL_GET_CLAIMSPRINCIPALSELECTOR_OFFSET))();
		}

		::System::Void OnSerializingMethod(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL_ONSERIALIZINGMETHOD_OFFSET))(this, context);
		}

		::System::Void OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL_ONDESERIALIZEDMETHOD_OFFSET))(this, context);
		}

		::System::Void Deserialize(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL_DESERIALIZE_OFFSET))(this, info, context);
		}

		::System::Void DeserializeIdentities(::System::String* identities)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL_DESERIALIZEIDENTITIES_OFFSET))(this, identities);
		}

		::System::String* SerializeIdentities()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL_SERIALIZEIDENTITIES_OFFSET))(this);
		}
	};
}
