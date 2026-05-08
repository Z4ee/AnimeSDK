#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST3DCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C315E00)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST3DCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C315ED0)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST3DCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C3158A0)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST3DCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C315890)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ReflectionMethodsCache_Raycast3DCallback_TypeDefinitionIndex = 8474;

	class ReflectionMethodsCache_Raycast3DCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST3DCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::UnityEngine::Ray r, ::UnityEngine::RaycastHit& hit, ::System::Single f, ::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST3DCALLBACK_INVOKE_OFFSET))(this, r, hit, f, i);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, ::UnityEngine::RaycastHit& hit, ::System::Single f, ::System::Int32 i, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST3DCALLBACK_BEGININVOKE_OFFSET))(this, r, hit, f, i, callback, object);
		}

		::System::Boolean EndInvoke(::UnityEngine::RaycastHit& hit, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST3DCALLBACK_ENDINVOKE_OFFSET))(this, hit, result);
		}
	};
}
