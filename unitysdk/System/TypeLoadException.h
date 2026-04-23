#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TYPELOADEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1789A9A0)
#define SYSTEM_TYPELOADEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1789A700)
#define SYSTEM_TYPELOADEXCEPTION_SETMESSAGEFIELD_OFFSET UNITYSDK_OFFSET(0x1789A720)
#define SYSTEM_TYPELOADEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17899840)
#define SYSTEM_TYPELOADEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1789A860)
#define SYSTEM_TYPELOADEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1789A900)
#define SYSTEM_TYPELOADEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1789A050)
#define SYSTEM_TYPELOADEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1789A690)

namespace System
{
	inline static constexpr unsigned int TypeLoadException_TypeDefinitionIndex = 353;

	class TypeLoadException : public ::System::SystemException
	{
	public:
		::System::String* ClassName; // 0x88
		::System::String* AssemblyName; // 0x90
		::System::String* MessageArg; // 0x98
		::System::Int32 ResourceId; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* className, ::System::String* assemblyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION__CTOR_2_OFFSET))(this, className, assemblyName);
		}

		::System::Void _ctor_3(::System::String* className, ::System::String* assemblyName, ::System::String* messageArg, ::System::Int32 resourceId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION__CTOR_3_OFFSET))(this, className, assemblyName, messageArg, resourceId);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION__CTOR_4_OFFSET))(this, info, context);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void SetMessageField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION_SETMESSAGEFIELD_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
