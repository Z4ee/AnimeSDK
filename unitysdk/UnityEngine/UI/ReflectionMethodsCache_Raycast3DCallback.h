#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST3DCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B3DB540)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST3DCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B3DB610)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST3DCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B3DB500)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST3DCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3DB490)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ReflectionMethodsCache_Raycast3DCallback_TypeDefinitionIndex = 6036;

	class ReflectionMethodsCache_Raycast3DCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST3DCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::UnityEngine::Ray a1, ::UnityEngine::RaycastHit& a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST3DCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray a1, ::UnityEngine::RaycastHit& a2, ::System::Single a3, ::System::Int32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST3DCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean EndInvoke(::UnityEngine::RaycastHit& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST3DCALLBACK_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
