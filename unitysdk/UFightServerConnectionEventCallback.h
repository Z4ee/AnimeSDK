#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UFightServerConnectionType.h"

class Class_3_AE02BC8285203464_13;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UFIGHTSERVERCONNECTIONEVENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F6BCC90)
#define UFIGHTSERVERCONNECTIONEVENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F6BCD10)
#define UFIGHTSERVERCONNECTIONEVENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F6BC980)
#define UFIGHTSERVERCONNECTIONEVENTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6BC960)

inline static constexpr unsigned int UFightServerConnectionEventCallback_TypeDefinitionIndex = 29479;

class UFightServerConnectionEventCallback : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UFIGHTSERVERCONNECTIONEVENTCALLBACK__CTOR_OFFSET))(this, object, method);
	}

	::System::Void Invoke(::UFightServerConnectionType type, ::Class_3_AE02BC8285203464_13* rsp)
	{
		return ((::System::Void(*)(::PVOID, ::UFightServerConnectionType, ::Class_3_AE02BC8285203464_13*))((::PBYTE)hIl2Cpp + UFIGHTSERVERCONNECTIONEVENTCALLBACK_INVOKE_OFFSET))(this, type, rsp);
	}

	::System::IAsyncResult* BeginInvoke(::UFightServerConnectionType type, ::Class_3_AE02BC8285203464_13* rsp, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UFightServerConnectionType, ::Class_3_AE02BC8285203464_13*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UFIGHTSERVERCONNECTIONEVENTCALLBACK_BEGININVOKE_OFFSET))(this, type, rsp, callback, object);
	}

	::System::Void EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UFIGHTSERVERCONNECTIONEVENTCALLBACK_ENDINVOKE_OFFSET))(this, result);
	}
};
