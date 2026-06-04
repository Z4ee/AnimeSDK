#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLNONALLOCCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B3DB060)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLNONALLOCCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B3DB120)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLNONALLOCCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B3DB020)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLNONALLOCCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3DAFB0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback_TypeDefinitionIndex = 6041;

	class ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLNONALLOCCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::UnityEngine::Ray a1, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLNONALLOCCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray a1, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a2, ::System::Single a3, ::System::Int32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLNONALLOCCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GETRAYINTERSECTIONALLNONALLOCCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
