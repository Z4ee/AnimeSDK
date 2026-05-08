#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemShapeType.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA97500)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9A2850)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_MESHRENDERER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA975E0)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_MESHRENDERER_OFFSET UNITYSDK_OFFSET(0x9A28C0)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_RADIUS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA97580)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x9A2890)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_SHAPETYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA97540)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_SHAPETYPE_OFFSET UNITYSDK_OFFSET(0x9A2870)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_SKINNEDMESHRENDERER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA97620)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_SKINNEDMESHRENDERER_OFFSET UNITYSDK_OFFSET(0x9A28E0)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA97520)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9A2860)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_MESHRENDERER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA97600)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_MESHRENDERER_OFFSET UNITYSDK_OFFSET(0x9A28D0)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_MESH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA975C0)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_MESH_OFFSET UNITYSDK_OFFSET(0x9A28B0)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_RADIUS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA975A0)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x9A28A0)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_SCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA97660)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x9A2900)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_SHAPETYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA97560)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_SHAPETYPE_OFFSET UNITYSDK_OFFSET(0x9A2880)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_SKINNEDMESHRENDERER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BA97640)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_SKINNEDMESHRENDERER_OFFSET UNITYSDK_OFFSET(0x9A28F0)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x2E5940)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_ShapeModule_TypeDefinitionIndex = 24858;

	struct alignas(8) ParticleSystem_ShapeModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemShapeType get_shapeType()
		{
			return ((::UnityEngine::ParticleSystemShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_SHAPETYPE_OFFSET))(this);
		}

		::System::Void set_shapeType(::UnityEngine::ParticleSystemShapeType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemShapeType))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_SHAPETYPE_OFFSET))(this, value);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_radius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_RADIUS_OFFSET))(this, value);
		}

		::System::Void set_mesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_MESH_OFFSET))(this, value);
		}

		::UnityEngine::MeshRenderer* get_meshRenderer()
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_MESHRENDERER_OFFSET))(this);
		}

		::System::Void set_meshRenderer(::UnityEngine::MeshRenderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_MESHRENDERER_OFFSET))(this, value);
		}

		::UnityEngine::SkinnedMeshRenderer* get_skinnedMeshRenderer()
		{
			return ((::UnityEngine::SkinnedMeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_SKINNEDMESHRENDERER_OFFSET))(this);
		}

		::System::Void set_skinnedMeshRenderer(::UnityEngine::SkinnedMeshRenderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_SKINNEDMESHRENDERER_OFFSET))(this, value);
		}

		/*
		::System::Void set_scale(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_SCALE_OFFSET))(this, value);
		}
		*/

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_ShapeModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_ShapeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_ShapeModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ShapeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemShapeType get_shapeType_Injected(::UnityEngine::ParticleSystem_ShapeModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemShapeType(*)(::UnityEngine::ParticleSystem_ShapeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_SHAPETYPE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_shapeType_Injected(::UnityEngine::ParticleSystem_ShapeModule& _unity_self, ::UnityEngine::ParticleSystemShapeType value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ShapeModule&, ::UnityEngine::ParticleSystemShapeType))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_SHAPETYPE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_radius_Injected(::UnityEngine::ParticleSystem_ShapeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_ShapeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_RADIUS_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_radius_Injected(::UnityEngine::ParticleSystem_ShapeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ShapeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_RADIUS_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_mesh_Injected(::UnityEngine::ParticleSystem_ShapeModule& _unity_self, ::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ShapeModule&, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_MESH_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::MeshRenderer* get_meshRenderer_Injected(::UnityEngine::ParticleSystem_ShapeModule& _unity_self)
		{
			return ((::UnityEngine::MeshRenderer*(*)(::UnityEngine::ParticleSystem_ShapeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_MESHRENDERER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_meshRenderer_Injected(::UnityEngine::ParticleSystem_ShapeModule& _unity_self, ::UnityEngine::MeshRenderer* value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ShapeModule&, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_MESHRENDERER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::SkinnedMeshRenderer* get_skinnedMeshRenderer_Injected(::UnityEngine::ParticleSystem_ShapeModule& _unity_self)
		{
			return ((::UnityEngine::SkinnedMeshRenderer*(*)(::UnityEngine::ParticleSystem_ShapeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_SKINNEDMESHRENDERER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_skinnedMeshRenderer_Injected(::UnityEngine::ParticleSystem_ShapeModule& _unity_self, ::UnityEngine::SkinnedMeshRenderer* value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ShapeModule&, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_SKINNEDMESHRENDERER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void set_scale_Injected(::UnityEngine::ParticleSystem_ShapeModule& _unity_self, ::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ShapeModule&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_SCALE_INJECTED_OFFSET))(_unity_self, value);
		}
		*/
	};
}
