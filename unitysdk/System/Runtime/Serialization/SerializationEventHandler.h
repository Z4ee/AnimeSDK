#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BE317A0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BE31810)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BE2EEF0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE31730)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationEventHandler_TypeDefinitionIndex = 1095;

	class SerializationEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Runtime::Serialization::StreamingContext a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
