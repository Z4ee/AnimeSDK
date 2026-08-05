#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Security/Permissions/SecurityAction.h"
#include "unitysdk/System/Security/SecurityZone.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection { class MethodInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security { class IPermission; }

#define SYSTEM_SECURITY_SECURITYEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C6EDBA0)
#define SYSTEM_SECURITY_SECURITYEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C6EDCE0)
#define SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6ED750)
#define SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C6ED970)
#define SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C6EDB10)
#define SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6ED8B0)

namespace System::Security
{
	inline static constexpr unsigned int SecurityException_TypeDefinitionIndex = 947;

	class SecurityException : public ::System::SystemException
	{
	public:
		::System::String* _refused; // 0x88
		::System::Object* _demanded; // 0x90
		::System::Reflection::AssemblyName* _assembly; // 0x98
		::System::String* _url; // 0xA0
		::System::Reflection::MethodInfo* _method; // 0xA8
		::System::Object* _denyset; // 0xB0
		::System::String* permissionState; // 0xB8
		::System::Object* _permitset; // 0xC0
		::System::Type* permissionType; // 0xC8
		::System::String* _granted; // 0xD0
		::System::Security::IPermission* _firstperm; // 0xD8
		::System::Security::Permissions::SecurityAction _action; // 0xE0
		::System::Security::SecurityZone _zone; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Exception* inner)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_3_OFFSET))(this, message, inner);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION_TOSTRING_OFFSET))(this);
		}
	};
}
