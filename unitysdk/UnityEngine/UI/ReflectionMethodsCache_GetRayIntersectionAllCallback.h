#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1773CAE0)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1773CB90)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1773CAA0)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1773CA30)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ReflectionMethodsCache_GetRayIntersectionAllCallback_TypeDefinitionIndex = 6875;

	class ReflectionMethodsCache_GetRayIntersectionAllCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::RaycastHit2D>* Invoke(::UnityEngine::Ray a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit2D>*(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray a1, ::System::Single a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Il2CppArray<::UnityEngine::RaycastHit2D>* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit2D>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
