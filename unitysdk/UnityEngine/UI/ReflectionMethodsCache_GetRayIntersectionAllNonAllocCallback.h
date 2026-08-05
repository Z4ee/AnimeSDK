#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLNONALLOCCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FA2BE50)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLNONALLOCCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FA2BF10)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLNONALLOCCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FA2B980)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLNONALLOCCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA2B960)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback_TypeDefinitionIndex = 19331;

	class ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLNONALLOCCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::UnityEngine::Ray r, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results, ::System::Single f, ::System::Int32 i)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLNONALLOCCALLBACK_INVOKE_OFFSET))(this, r, results, f, i);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results, ::System::Single f, ::System::Int32 i, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLNONALLOCCALLBACK_BEGININVOKE_OFFSET))(this, r, results, f, i, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLNONALLOCCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
