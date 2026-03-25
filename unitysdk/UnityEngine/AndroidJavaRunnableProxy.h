#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AndroidJavaProxy.h"

namespace UnityEngine { class AndroidJavaRunnable; }

#define UNITYENGINE_ANDROIDJAVARUNNABLEPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x189CF6A0)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaRunnableProxy_TypeDefinitionIndex = 5389;

	class AndroidJavaRunnableProxy : public ::UnityEngine::AndroidJavaProxy
	{
	public:
		::UnityEngine::AndroidJavaRunnable* mRunnable; // 0x20

		::System::Void _ctor(::UnityEngine::AndroidJavaRunnable* runnable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AndroidJavaRunnable*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVARUNNABLEPROXY__CTOR_OFFSET))(this, runnable);
		}
	};
}
