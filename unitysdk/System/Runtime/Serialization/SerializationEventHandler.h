#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x163F2FD0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x163F3040)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x163F0D80)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x163F2FB0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationEventHandler_TypeDefinitionIndex = 1085;

	class SerializationEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER_INVOKE_OFFSET))(this, context);
		}

		::System::IAsyncResult* BeginInvoke(::System::Runtime::Serialization::StreamingContext context, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER_BEGININVOKE_OFFSET))(this, context, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
