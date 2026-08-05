#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO::Ports { class SerialErrorReceivedEventArgs; }

#define SYSTEM_IO_PORTS_SERIALERRORRECEIVEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E7E2670)
#define SYSTEM_IO_PORTS_SERIALERRORRECEIVEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E7E26B0)
#define SYSTEM_IO_PORTS_SERIALERRORRECEIVEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E7E2630)
#define SYSTEM_IO_PORTS_SERIALERRORRECEIVEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E25F0)

namespace System::IO::Ports
{
	inline static constexpr unsigned int SerialErrorReceivedEventHandler_TypeDefinitionIndex = 4159;

	class SerialErrorReceivedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALERRORRECEIVEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::IO::Ports::SerialErrorReceivedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IO::Ports::SerialErrorReceivedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALERRORRECEIVEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::IO::Ports::SerialErrorReceivedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::IO::Ports::SerialErrorReceivedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALERRORRECEIVEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALERRORRECEIVEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
