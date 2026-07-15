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

#define SYSTEM_SECURITY_SECURITYEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x150BD250)
#define SYSTEM_SECURITY_SECURITYEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x150BD390)
#define SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x150B8030)
#define SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x150BCF20)
#define SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x150BD170)
#define SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x150BCE10)

namespace System::Security
{
	inline static constexpr unsigned int SecurityException_TypeDefinitionIndex = 945;

	class SecurityException : public ::System::SystemException
	{
	public:
		::System::Type* permissionType; // 0x88
		::System::Object* _demanded; // 0x90
		::System::Reflection::MethodInfo* _method; // 0x98
		::System::Object* _permitset; // 0xA0
		::System::Security::IPermission* _firstperm; // 0xA8
		::System::String* _granted; // 0xB0
		::System::String* permissionState; // 0xB8
		::System::String* _refused; // 0xC0
		::System::Object* _denyset; // 0xC8
		::System::Reflection::AssemblyName* _assembly; // 0xD0
		::System::String* _url; // 0xD8
		::System::Security::Permissions::SecurityAction _action; // 0xE0
		::System::Security::SecurityZone _zone; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION_TOSTRING_OFFSET))(this);
		}
	};
}
