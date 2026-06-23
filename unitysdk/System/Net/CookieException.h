#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/FormatException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_COOKIEEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B4040A0)
#define SYSTEM_NET_COOKIEEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B404080)
#define SYSTEM_NET_COOKIEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B403F10)
#define SYSTEM_NET_COOKIEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B403FA0)
#define SYSTEM_NET_COOKIEEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B404030)
#define SYSTEM_NET_COOKIEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B403E50)

namespace System::Net
{
	inline static constexpr unsigned int CookieException_TypeDefinitionIndex = 3426;

	class CookieException : public ::System::FormatException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIEEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* inner)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIEEXCEPTION__CTOR_2_OFFSET))(this, message, inner);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIEEXCEPTION__CTOR_3_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIEEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIEEXCEPTION_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}
	};
}
