#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class ReflectionMethodsCache_GetRayIntersectionAllCallback; }
namespace UnityEngine::UI { class ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback; }
namespace UnityEngine::UI { class ReflectionMethodsCache_GetRaycastNonAllocCallback; }
namespace UnityEngine::UI { class ReflectionMethodsCache_Raycast2DCallback; }
namespace UnityEngine::UI { class ReflectionMethodsCache_Raycast3DCallback; }
namespace UnityEngine::UI { class ReflectionMethodsCache_RaycastAllCallback; }

#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GET_SINGLETON_OFFSET UNITYSDK_OFFSET(0x15DC77F0)
#define UNITYENGINE_UI_REFLECTIONMETHODSCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC6930)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ReflectionMethodsCache_TypeDefinitionIndex = 6040;

	class ReflectionMethodsCache : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::ReflectionMethodsCache** StaticGet_s_ReflectionMethodsCache()
		{
			return (::UnityEngine::UI::ReflectionMethodsCache**)Il2CppClass::FromTypeDefinitionIndex(ReflectionMethodsCache_TypeDefinitionIndex)->GetStaticField(0x3FBF0);
		}
		::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback* raycast3D; // 0x10
		::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback* raycast3DAll; // 0x18
		::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback* getRaycastNonAlloc; // 0x20
		::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback* raycast2D; // 0x28
		::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback* getRayIntersectionAll; // 0x30
		::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback* getRayIntersectionAllNonAlloc; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::UI::ReflectionMethodsCache* get_Singleton()
		{
			return ((::UnityEngine::UI::ReflectionMethodsCache*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_REFLECTIONMETHODSCACHE_GET_SINGLETON_OFFSET))();
		}
	};
}
