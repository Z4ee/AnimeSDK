#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider.h"
#include "unitysdk/UnityEngine/MeshColliderCookingOptions.h"

namespace UnityEngine { class Mesh; }

#define UNITYENGINE_MESHCOLLIDER_GET_CONVEX_OFFSET UNITYSDK_OFFSET(0x1B327230)
#define UNITYENGINE_MESHCOLLIDER_GET_COOKINGOPTIONS_OFFSET UNITYSDK_OFFSET(0x1B327270)
#define UNITYENGINE_MESHCOLLIDER_GET_INFLATEMESH_OFFSET UNITYSDK_OFFSET(0x1B327250)
#define UNITYENGINE_MESHCOLLIDER_GET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0x1B327210)
#define UNITYENGINE_MESHCOLLIDER_GET_SKINWIDTH_OFFSET UNITYSDK_OFFSET(0x1B327290)
#define UNITYENGINE_MESHCOLLIDER_GET_SMOOTHSPHERECOLLISIONS_OFFSET UNITYSDK_OFFSET(0x1B3272B0)
#define UNITYENGINE_MESHCOLLIDER_SET_CONVEX_OFFSET UNITYSDK_OFFSET(0x1B327240)
#define UNITYENGINE_MESHCOLLIDER_SET_COOKINGOPTIONS_OFFSET UNITYSDK_OFFSET(0x1B327280)
#define UNITYENGINE_MESHCOLLIDER_SET_INFLATEMESH_OFFSET UNITYSDK_OFFSET(0x1B327260)
#define UNITYENGINE_MESHCOLLIDER_SET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0x1B327220)
#define UNITYENGINE_MESHCOLLIDER_SET_SKINWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3272A0)
#define UNITYENGINE_MESHCOLLIDER_SET_SMOOTHSPHERECOLLISIONS_OFFSET UNITYSDK_OFFSET(0x1B3272C0)
#define UNITYENGINE_MESHCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3272D0)

namespace UnityEngine
{
	inline static constexpr unsigned int MeshCollider_TypeDefinitionIndex = 5304;

	class MeshCollider : public ::UnityEngine::Collider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_sharedMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_GET_SHAREDMESH_OFFSET))(this);
		}

		::System::Void set_sharedMesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_SET_SHAREDMESH_OFFSET))(this, a1);
		}

		::System::Boolean get_convex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_GET_CONVEX_OFFSET))(this);
		}

		::System::Void set_convex(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_SET_CONVEX_OFFSET))(this, a1);
		}

		::System::Boolean get_inflateMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_GET_INFLATEMESH_OFFSET))(this);
		}

		::System::Void set_inflateMesh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_SET_INFLATEMESH_OFFSET))(this, a1);
		}

		::UnityEngine::MeshColliderCookingOptions get_cookingOptions()
		{
			return ((::UnityEngine::MeshColliderCookingOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_GET_COOKINGOPTIONS_OFFSET))(this);
		}

		::System::Void set_cookingOptions(::UnityEngine::MeshColliderCookingOptions a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshColliderCookingOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_SET_COOKINGOPTIONS_OFFSET))(this, a1);
		}

		::System::Single get_skinWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_GET_SKINWIDTH_OFFSET))(this);
		}

		::System::Void set_skinWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_SET_SKINWIDTH_OFFSET))(this, a1);
		}

		::System::Boolean get_smoothSphereCollisions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_GET_SMOOTHSPHERECOLLISIONS_OFFSET))(this);
		}

		::System::Void set_smoothSphereCollisions(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_SET_SMOOTHSPHERECOLLISIONS_OFFSET))(this, a1);
		}
	};
}
