#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYCASTNONALLOCCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A58E590)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYCASTNONALLOCCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A58E650)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYCASTNONALLOCCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A58E060)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYCASTNONALLOCCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A58E040)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ReflectionMethodsCache_GetRaycastNonAllocCallback_TypeDefinitionIndex = 5761;

	class ReflectionMethodsCache_GetRaycastNonAllocCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYCASTNONALLOCCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::UnityEngine::Ray r, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single f, ::System::Int32 i)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYCASTNONALLOCCALLBACK_INVOKE_OFFSET))(this, r, results, f, i);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single f, ::System::Int32 i, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYCASTNONALLOCCALLBACK_BEGININVOKE_OFFSET))(this, r, results, f, i, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYCASTNONALLOCCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
