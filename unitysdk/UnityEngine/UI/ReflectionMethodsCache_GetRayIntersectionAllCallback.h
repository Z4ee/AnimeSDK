#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E645330)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E6453E0)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E644E80)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E644E60)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ReflectionMethodsCache_GetRayIntersectionAllCallback_TypeDefinitionIndex = 18986;

	class ReflectionMethodsCache_GetRayIntersectionAllCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::Il2CppArray<::UnityEngine::RaycastHit2D>* Invoke(::UnityEngine::Ray r, ::System::Single f, ::System::Int32 i)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit2D>*(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLCALLBACK_INVOKE_OFFSET))(this, r, f, i);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, ::System::Single f, ::System::Int32 i, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLCALLBACK_BEGININVOKE_OFFSET))(this, r, f, i, callback, object);
		}

		::Il2CppArray<::UnityEngine::RaycastHit2D>* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit2D>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
