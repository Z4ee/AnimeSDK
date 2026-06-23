#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider.h"
#include "unitysdk/UnityEngine/MeshColliderCookingOptions.h"

namespace UnityEngine { class Mesh; }

#define UNITYENGINE_MESHCOLLIDER_GET_CONVEX_OFFSET UNITYSDK_OFFSET(0x1DB2CB60)
#define UNITYENGINE_MESHCOLLIDER_GET_COOKINGOPTIONS_OFFSET UNITYSDK_OFFSET(0x1DB2CBA0)
#define UNITYENGINE_MESHCOLLIDER_GET_INFLATEMESH_OFFSET UNITYSDK_OFFSET(0x1DB2CB80)
#define UNITYENGINE_MESHCOLLIDER_GET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0x1DB2CB40)
#define UNITYENGINE_MESHCOLLIDER_GET_SKINWIDTH_OFFSET UNITYSDK_OFFSET(0x1DB2CBC0)
#define UNITYENGINE_MESHCOLLIDER_GET_SMOOTHSPHERECOLLISIONS_OFFSET UNITYSDK_OFFSET(0x1DB2CBE0)
#define UNITYENGINE_MESHCOLLIDER_SET_CONVEX_OFFSET UNITYSDK_OFFSET(0x1DB2CB70)
#define UNITYENGINE_MESHCOLLIDER_SET_COOKINGOPTIONS_OFFSET UNITYSDK_OFFSET(0x1DB2CBB0)
#define UNITYENGINE_MESHCOLLIDER_SET_INFLATEMESH_OFFSET UNITYSDK_OFFSET(0x1DB2CB90)
#define UNITYENGINE_MESHCOLLIDER_SET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0x1DB2CB50)
#define UNITYENGINE_MESHCOLLIDER_SET_SKINWIDTH_OFFSET UNITYSDK_OFFSET(0x1DB2CBD0)
#define UNITYENGINE_MESHCOLLIDER_SET_SMOOTHSPHERECOLLISIONS_OFFSET UNITYSDK_OFFSET(0x1DB2CBF0)
#define UNITYENGINE_MESHCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2CC00)

namespace UnityEngine
{
	inline static constexpr unsigned int MeshCollider_TypeDefinitionIndex = 7718;

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

		::System::Void set_sharedMesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_SET_SHAREDMESH_OFFSET))(this, value);
		}

		::System::Boolean get_convex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_GET_CONVEX_OFFSET))(this);
		}

		::System::Void set_convex(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_SET_CONVEX_OFFSET))(this, value);
		}

		::System::Boolean get_inflateMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_GET_INFLATEMESH_OFFSET))(this);
		}

		::System::Void set_inflateMesh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_SET_INFLATEMESH_OFFSET))(this, value);
		}

		::UnityEngine::MeshColliderCookingOptions get_cookingOptions()
		{
			return ((::UnityEngine::MeshColliderCookingOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_GET_COOKINGOPTIONS_OFFSET))(this);
		}

		::System::Void set_cookingOptions(::UnityEngine::MeshColliderCookingOptions value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshColliderCookingOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_SET_COOKINGOPTIONS_OFFSET))(this, value);
		}

		::System::Single get_skinWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_GET_SKINWIDTH_OFFSET))(this);
		}

		::System::Void set_skinWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_SET_SKINWIDTH_OFFSET))(this, value);
		}

		::System::Boolean get_smoothSphereCollisions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_GET_SMOOTHSPHERECOLLISIONS_OFFSET))(this);
		}

		::System::Void set_smoothSphereCollisions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_SET_SMOOTHSPHERECOLLISIONS_OFFSET))(this, value);
		}
	};
}
