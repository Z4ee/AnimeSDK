#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCASTALLCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B3DB6F0)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCASTALLCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B3DB7A0)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCASTALLCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B3DB6B0)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCASTALLCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3DB640)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ReflectionMethodsCache_RaycastAllCallback_TypeDefinitionIndex = 6037;

	class ReflectionMethodsCache_RaycastAllCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCASTALLCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::RaycastHit>* Invoke(::UnityEngine::Ray a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCASTALLCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray a1, ::System::Single a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCASTALLCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Il2CppArray<::UnityEngine::RaycastHit>* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCASTALLCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
