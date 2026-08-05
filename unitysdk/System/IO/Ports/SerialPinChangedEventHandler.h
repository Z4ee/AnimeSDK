#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO::Ports { class SerialPinChangedEventArgs; }

#define SYSTEM_IO_PORTS_SERIALPINCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D3FB2B0)
#define SYSTEM_IO_PORTS_SERIALPINCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D3FB2F0)
#define SYSTEM_IO_PORTS_SERIALPINCHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D3FB270)
#define SYSTEM_IO_PORTS_SERIALPINCHANGEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FB230)

namespace System::IO::Ports
{
	inline static constexpr unsigned int SerialPinChangedEventHandler_TypeDefinitionIndex = 4162;

	class SerialPinChangedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPINCHANGEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::IO::Ports::SerialPinChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IO::Ports::SerialPinChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPINCHANGEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::IO::Ports::SerialPinChangedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::IO::Ports::SerialPinChangedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPINCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALPINCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
