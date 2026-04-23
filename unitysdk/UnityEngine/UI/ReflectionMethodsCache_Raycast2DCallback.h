#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST2DCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A58EB40)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST2DCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A58EBF0)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST2DCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A58E6A0)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST2DCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A58E680)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ReflectionMethodsCache_Raycast2DCallback_TypeDefinitionIndex = 5762;

	class ReflectionMethodsCache_Raycast2DCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST2DCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::UnityEngine::RaycastHit2D Invoke(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::System::Single f, ::System::Int32 i)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST2DCALLBACK_INVOKE_OFFSET))(this, p1, p2, f, i);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::System::Single f, ::System::Int32 i, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST2DCALLBACK_BEGININVOKE_OFFSET))(this, p1, p2, f, i, callback, object);
		}

		::UnityEngine::RaycastHit2D EndInvoke(::System::IAsyncResult* result)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_RAYCAST2DCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
