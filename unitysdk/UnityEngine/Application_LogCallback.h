#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_APPLICATION_LOGCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B4BCE30)
#define UNITYENGINE_APPLICATION_LOGCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B4BCEC0)
#define UNITYENGINE_APPLICATION_LOGCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4BC810)
#define UNITYENGINE_APPLICATION_LOGCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4BC800)

namespace UnityEngine
{
	inline static constexpr unsigned int Application_LogCallback_TypeDefinitionIndex = 5132;

	class Application_LogCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOGCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* condition, ::System::String* stackTrace, ::UnityEngine::LogType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOGCALLBACK_INVOKE_OFFSET))(this, condition, stackTrace, type);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* condition, ::System::String* stackTrace, ::UnityEngine::LogType type, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOGCALLBACK_BEGININVOKE_OFFSET))(this, condition, stackTrace, type, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOGCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
