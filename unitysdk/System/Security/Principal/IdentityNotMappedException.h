#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Principal { class IdentityReferenceCollection; }

#define SYSTEM_SECURITY_PRINCIPAL_IDENTITYNOTMAPPEDEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x19E1B850)
#define SYSTEM_SECURITY_PRINCIPAL_IDENTITYNOTMAPPEDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19E1B7C0)
#define SYSTEM_SECURITY_PRINCIPAL_IDENTITYNOTMAPPEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19E1B700)

namespace System::Security::Principal
{
	inline static constexpr unsigned int IdentityNotMappedException_TypeDefinitionIndex = 1019;

	class IdentityNotMappedException : public ::System::SystemException
	{
	public:
		::System::Security::Principal::IdentityReferenceCollection* _coll; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_IDENTITYNOTMAPPEDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_IDENTITYNOTMAPPEDEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_IDENTITYNOTMAPPEDEXCEPTION_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}
	};
}
