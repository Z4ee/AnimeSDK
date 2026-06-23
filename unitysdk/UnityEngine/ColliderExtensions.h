#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Collider; }

#define UNITYENGINE_COLLIDEREXTENSIONS_CONTAINCAMTRANSPARENTTAG_OFFSET UNITYSDK_OFFSET(0x19E38E00)
#define UNITYENGINE_COLLIDEREXTENSIONS_SETUPCOLLIDERPHYSICALMATERIAL_OFFSET UNITYSDK_OFFSET(0x19E38F70)

namespace UnityEngine
{
	inline static constexpr unsigned int ColliderExtensions_TypeDefinitionIndex = 41253;

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
