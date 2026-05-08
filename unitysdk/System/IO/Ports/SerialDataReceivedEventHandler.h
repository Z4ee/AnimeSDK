#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO::Ports { class SerialDataReceivedEventArgs; }

#define SYSTEM_IO_PORTS_SERIALDATARECEIVEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x193B2AC0)
#define SYSTEM_IO_PORTS_SERIALDATARECEIVEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x193B2B00)
#define SYSTEM_IO_PORTS_SERIALDATARECEIVEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x193B2A80)
#define SYSTEM_IO_PORTS_SERIALDATARECEIVEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x193B2A40)

namespace System::IO::Ports
{
	inline static constexpr unsigned int SerialDataReceivedEventHandler_TypeDefinitionIndex = 4157;

	class SerialDataReceivedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALDATARECEIVEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::IO::Ports::SerialDataReceivedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IO::Ports::SerialDataReceivedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALDATARECEIVEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::IO::Ports::SerialDataReceivedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::IO::Ports::SerialDataReceivedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALDATARECEIVEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALDATARECEIVEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
