#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/InvalidOperationException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_OBJECTDISPOSEDEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x19600970)
#define SYSTEM_OBJECTDISPOSEDEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x196006F0)
#define SYSTEM_OBJECTDISPOSEDEXCEPTION_GET_OBJECTNAME_OFFSET UNITYSDK_OFFSET(0x196008B0)
#define SYSTEM_OBJECTDISPOSEDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19600620)
#define SYSTEM_OBJECTDISPOSEDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19600580)
#define SYSTEM_OBJECTDISPOSEDEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x196008E0)
#define SYSTEM_OBJECTDISPOSEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x196004A0)

namespace System
{
	inline static constexpr unsigned int ObjectDisposedException_TypeDefinitionIndex = 297;

	class ObjectDisposedException : public ::System::InvalidOperationException
	{
	public:
		::System::String* objectName; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* objectName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION__CTOR_1_OFFSET))(this, objectName);
		}

		::System::Void _ctor_2(::System::String* objectName, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION__CTOR_2_OFFSET))(this, objectName, message);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION__CTOR_3_OFFSET))(this, info, context);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::String* get_ObjectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION_GET_OBJECTNAME_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
