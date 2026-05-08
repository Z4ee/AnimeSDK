#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCASTALLCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C1A2AF0)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCASTALLCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C1A2BA0)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCASTALLCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C1A2640)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCASTALLCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A2630)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ReflectionMethodsCache_RaycastAllCallback_TypeDefinitionIndex = 8475;

	class ReflectionMethodsCache_RaycastAllCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCASTALLCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::Il2CppArray<::UnityEngine::RaycastHit>* Invoke(::UnityEngine::Ray r, ::System::Single f, ::System::Int32 i)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCASTALLCALLBACK_INVOKE_OFFSET))(this, r, f, i);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, ::System::Single f, ::System::Int32 i, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCASTALLCALLBACK_BEGININVOKE_OFFSET))(this, r, f, i, callback, object);
		}

		::Il2CppArray<::UnityEngine::RaycastHit>* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCASTALLCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
