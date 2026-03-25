#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_RUNTIME_SERIALIZATION_DESERIALIZATIONEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x163C8840)
#define SYSTEM_RUNTIME_SERIALIZATION_DESERIALIZATIONEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x163C8870)
#define SYSTEM_RUNTIME_SERIALIZATION_DESERIALIZATIONEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x163C82F0)
#define SYSTEM_RUNTIME_SERIALIZATION_DESERIALIZATIONEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x163C82D0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int DeserializationEventHandler_TypeDefinitionIndex = 1084;

	class DeserializationEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_DESERIALIZATIONEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_DESERIALIZATIONEVENTHANDLER_INVOKE_OFFSET))(this, sender);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_DESERIALIZATIONEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_DESERIALIZATIONEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
