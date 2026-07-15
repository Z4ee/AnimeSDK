#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Messaging/MethodResponse.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections { class IDictionary; }
namespace System::Runtime::Remoting::Messaging { class IMethodCallMessage; }
namespace System::Runtime::Remoting::Messaging { class LogicalCallContext; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x178EEC90)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x178EE960)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x178EEAD0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x178EE7E0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ConstructionResponse_TypeDefinitionIndex = 1302;

	class ConstructionResponse : public ::System::Runtime::Remoting::Messaging::MethodResponse
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::Runtime::Remoting::Messaging::LogicalCallContext* a2, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Remoting::Messaging::LogicalCallContext*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::Exception* a1, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
