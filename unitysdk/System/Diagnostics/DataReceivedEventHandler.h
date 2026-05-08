#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Diagnostics { class DataReceivedEventArgs; }

#define SYSTEM_DIAGNOSTICS_DATARECEIVEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1921BAC0)
#define SYSTEM_DIAGNOSTICS_DATARECEIVEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1921BB00)
#define SYSTEM_DIAGNOSTICS_DATARECEIVEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1921B540)
#define SYSTEM_DIAGNOSTICS_DATARECEIVEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1921B530)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DataReceivedEventHandler_TypeDefinitionIndex = 2793;

	class DataReceivedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DATARECEIVEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Diagnostics::DataReceivedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Diagnostics::DataReceivedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DATARECEIVEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Diagnostics::DataReceivedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Diagnostics::DataReceivedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DATARECEIVEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DATARECEIVEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
