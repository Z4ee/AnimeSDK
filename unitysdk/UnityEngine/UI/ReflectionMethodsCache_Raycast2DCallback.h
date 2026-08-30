#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST2DCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1773CF90)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST2DCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1773D040)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST2DCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1773CF50)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST2DCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1773CEE0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ReflectionMethodsCache_Raycast2DCallback_TypeDefinitionIndex = 6874;

	class ReflectionMethodsCache_Raycast2DCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST2DCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::RaycastHit2D Invoke(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST2DCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Int32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST2DCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::RaycastHit2D EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST2DCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
