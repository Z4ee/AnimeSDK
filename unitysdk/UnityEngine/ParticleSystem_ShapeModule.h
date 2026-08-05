#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemShapeType.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123B00)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA90780)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_MESHRENDERER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123BE0)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_MESHRENDERER_OFFSET UNITYSDK_OFFSET(0xA907F0)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_RADIUS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123B80)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0xA907C0)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_SHAPETYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123B40)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_SHAPETYPE_OFFSET UNITYSDK_OFFSET(0xA907A0)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_SKINNEDMESHRENDERER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123C20)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_GET_SKINNEDMESHRENDERER_OFFSET UNITYSDK_OFFSET(0xA90810)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123B20)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA90790)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_MESHRENDERER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123C00)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_MESHRENDERER_OFFSET UNITYSDK_OFFSET(0xA90800)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_MESH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123BC0)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_MESH_OFFSET UNITYSDK_OFFSET(0xA907E0)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_RADIUS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123BA0)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0xA907D0)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_SCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123C60)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_SCALE_OFFSET UNITYSDK_OFFSET(0xA90830)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_SHAPETYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123B60)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_SHAPETYPE_OFFSET UNITYSDK_OFFSET(0xA907B0)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_SKINNEDMESHRENDERER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123C40)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE_SET_SKINNEDMESHRENDERER_OFFSET UNITYSDK_OFFSET(0xA90820)
#define UNITYENGINE_PARTICLESYSTEM_SHAPEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_ShapeModule_TypeDefinitionIndex = 7703;

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
