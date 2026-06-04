#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_ANDROIDJAVARUNNABLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B25D970)
#define UNITYENGINE_ANDROIDJAVARUNNABLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B25D9A0)
#define UNITYENGINE_ANDROIDJAVARUNNABLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B25D960)
#define UNITYENGINE_ANDROIDJAVARUNNABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B25D8F0)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaRunnable_TypeDefinitionIndex = 5674;

	class AndroidJavaRunnable : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVARUNNABLE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVARUNNABLE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVARUNNABLE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVARUNNABLE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
