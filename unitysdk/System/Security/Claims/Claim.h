#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Security::Claims { class ClaimsIdentity; }

#define SYSTEM_SECURITY_CLAIMS_CLAIM_CLONE_OFFSET UNITYSDK_OFFSET(0x187DF1F0)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x187DEC20)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_GET_SUBJECT_OFFSET UNITYSDK_OFFSET(0x187DF1B0)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x187DF1D0)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x187DF1E0)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_ONDESERIALIZEDMETHOD_OFFSET UNITYSDK_OFFSET(0x187DF190)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_SET_SUBJECT_OFFSET UNITYSDK_OFFSET(0x187DF1C0)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x187DF250)
#define SYSTEM_SECURITY_CLAIMS_CLAIM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x187DEA10)
#define SYSTEM_SECURITY_CLAIMS_CLAIM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x187DED60)
#define SYSTEM_SECURITY_CLAIMS_CLAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x187DE9E0)

namespace System::Security::Claims
{
	inline static constexpr unsigned int Claim_TypeDefinitionIndex = 984;

	class Claim : public ::System::Object
	{
	public:
		::System::String* m_value; // 0x10
		::System::Object* m_propertyLock; // 0x18
		::System::Security::Claims::ClaimsIdentity* m_subject; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* m_properties; // 0x28
		::System::String* m_issuer; // 0x30
		::Il2CppArray<::System::Byte>* m_userSerializationData; // 0x38
		::System::String* m_type; // 0x40
		::System::String* m_originalIssuer; // 0x48
		::System::String* m_valueType; // 0x50

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Security::Claims::ClaimsIdentity* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Security::Claims::ClaimsIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Security::Claims::ClaimsIdentity* a6, ::System::String* a7, ::System::String* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Security::Claims::ClaimsIdentity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void _ctor_2(::System::Security::Claims::Claim* a1, ::System::Security::Claims::ClaimsIdentity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Claims::Claim*, ::System::Security::Claims::ClaimsIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_ONDESERIALIZEDMETHOD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* get_Properties()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Security::Claims::ClaimsIdentity* get_Subject()
		{
			return ((::System::Security::Claims::ClaimsIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_GET_SUBJECT_OFFSET))(this);
		}

		::System::Void set_Subject(::System::Security::Claims::ClaimsIdentity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Claims::ClaimsIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_SET_SUBJECT_OFFSET))(this, a1);
		}

		::System::String* get_Type()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_GET_VALUE_OFFSET))(this);
		}

		::System::Security::Claims::Claim* Clone(::System::Security::Claims::ClaimsIdentity* a1)
		{
			return ((::System::Security::Claims::Claim*(*)(::PVOID, ::System::Security::Claims::ClaimsIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_CLONE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_TOSTRING_OFFSET))(this);
		}
	};
}
