#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_WATERINTERACTIVERENDERITEM_REFRESHBOUNDANDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1CB40C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_WATERINTERACTIVERENDERITEM_TRANSFORMLOCALBOUNDSTOWORLDAABB_OPTIMIZED_OFFSET UNITYSDK_OFFSET(0x1CB40A10)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_WATERINTERACTIVERENDERITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CB40900)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_WATERINTERACTIVERENDERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB408F0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterInteractionManager_WaterInteractiveRenderItem_TypeDefinitionIndex = 27576;

	class WaterInteractionManager_WaterInteractiveRenderItem : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::UnityEngine::Mesh* mesh; // 0x18
		::UnityEngine::Bounds aabb; // 0x20
		::UnityEngine::Matrix4x4 localToWorldMatrix; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_WATERINTERACTIVERENDERITEM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Mesh* proxyMesh, ::UnityEngine::Transform* proxyTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_WATERINTERACTIVERENDERITEM__CTOR_1_OFFSET))(this, proxyMesh, proxyTransform);
		}

		::System::Void RefreshBoundAndTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_WATERINTERACTIVERENDERITEM_REFRESHBOUNDANDTRANSFORM_OFFSET))(this);
		}

		static ::UnityEngine::Bounds TransformLocalBoundsToWorldAABB_Optimized(::UnityEngine::Bounds localBounds, ::UnityEngine::Matrix4x4& localToWorldMatrix)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Bounds, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_WATERINTERACTIVERENDERITEM_TRANSFORMLOCALBOUNDSTOWORLDAABB_OPTIMIZED_OFFSET))(localBounds, localToWorldMatrix);
		}
	};
}
