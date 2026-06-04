#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_APPLICATION_LOGCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B27BE90)
#define UNITYENGINE_APPLICATION_LOGCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B27BF00)
#define UNITYENGINE_APPLICATION_LOGCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B279B80)
#define UNITYENGINE_APPLICATION_LOGCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B27BE10)

namespace UnityEngine
{
	inline static constexpr unsigned int Application_LogCallback_TypeDefinitionIndex = 4016;

	class Application_LogCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOGCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOGCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOGCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOGCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
