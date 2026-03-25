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

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x163AECC0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x163AEA00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x163AEB20)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x163AE8D0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ConstructionResponse_TypeDefinitionIndex = 1299;

	class ConstructionResponse : public ::System::Runtime::Remoting::Messaging::MethodResponse
	{
	public:
		::System::Void _ctor(::System::Object* resultObject, ::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Remoting::Messaging::LogicalCallContext*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE__CTOR_OFFSET))(this, resultObject, callCtx, msg);
		}

		::System::Void _ctor_1(::System::Exception* e, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE__CTOR_1_OFFSET))(this, e, msg);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE__CTOR_2_OFFSET))(this, info, context);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
