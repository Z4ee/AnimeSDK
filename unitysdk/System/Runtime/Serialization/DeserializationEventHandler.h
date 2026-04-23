#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_RUNTIME_SERIALIZATION_DESERIALIZATIONEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x179F5240)
#define SYSTEM_RUNTIME_SERIALIZATION_DESERIALIZATIONEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x179F5270)
#define SYSTEM_RUNTIME_SERIALIZATION_DESERIALIZATIONEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x179F4CF0)
#define SYSTEM_RUNTIME_SERIALIZATION_DESERIALIZATIONEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x179F4CD0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int DeserializationEventHandler_TypeDefinitionIndex = 1086;

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
