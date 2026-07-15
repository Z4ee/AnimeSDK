#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYCASTNONALLOCCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15DC7C00)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYCASTNONALLOCCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15DC7CC0)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYCASTNONALLOCCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x15DC7BC0)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYCASTNONALLOCCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC7B50)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ReflectionMethodsCache_GetRaycastNonAllocCallback_TypeDefinitionIndex = 6043;

	class ReflectionMethodsCache_GetRaycastNonAllocCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYCASTNONALLOCCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::UnityEngine::Ray a1, ::Il2CppArray<::UnityEngine::RaycastHit>* a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYCASTNONALLOCCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray a1, ::Il2CppArray<::UnityEngine::RaycastHit>* a2, ::System::Single a3, ::System::Int32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYCASTNONALLOCCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYCASTNONALLOCCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
