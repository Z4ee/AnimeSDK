#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Collider; }

#define UNITYENGINE_COLLIDEREXTENSIONS_CONTAINCAMTRANSPARENTTAG_OFFSET UNITYSDK_OFFSET(0x178860B0)
#define UNITYENGINE_COLLIDEREXTENSIONS_SETUPCOLLIDERPHYSICALMATERIAL_OFFSET UNITYSDK_OFFSET(0x17886220)

namespace UnityEngine
{
	inline static constexpr unsigned int ColliderExtensions_TypeDefinitionIndex = 60628;

	class ColliderExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean ContainCamTransparentTag(::UnityEngine::Collider* collider)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDEREXTENSIONS_CONTAINCAMTRANSPARENTTAG_OFFSET))(collider);
		}

		static ::System::Void SetupColliderPhysicalMaterial(::UnityEngine::Collider* collider)
		{
			return ((::System::Void(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDEREXTENSIONS_SETUPCOLLIDERPHYSICALMATERIAL_OFFSET))(collider);
		}
	};
}
