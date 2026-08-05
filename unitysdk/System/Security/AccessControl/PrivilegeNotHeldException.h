#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/UnauthorizedAccessException.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_SECURITY_ACCESSCONTROL_PRIVILEGENOTHELDEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D8D1A90)
#define SYSTEM_SECURITY_ACCESSCONTROL_PRIVILEGENOTHELDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D19D0)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int PrivilegeNotHeldException_TypeDefinitionIndex = 997;

	class PrivilegeNotHeldException : public ::System::UnauthorizedAccessException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_PRIVILEGENOTHELDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_PRIVILEGENOTHELDEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
