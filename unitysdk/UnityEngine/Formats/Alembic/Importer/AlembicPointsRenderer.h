#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_FLUSHMOTIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1879A0F0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_FLUSH_OFFSET UNITYSDK_OFFSET(0x187990E0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_GET_INSTANCEDMESH_OFFSET UNITYSDK_OFFSET(0x18798F30)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x18798F50)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_GET_MOTIONVECTORMATERIAL_OFFSET UNITYSDK_OFFSET(0x187990C0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1879AFA0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1879B2B0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1879AF90)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_ONRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1879B130)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1879AD40)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_SET_INSTANCEDMESH_OFFSET UNITYSDK_OFFSET(0x18798F40)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_SET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x18799010)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_SET_MOTIONVECTORMATERIAL_OFFSET UNITYSDK_OFFSET(0x187990D0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_START_OFFSET UNITYSDK_OFFSET(0x1879B140)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1879B520)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicPointsRenderer_TypeDefinitionIndex = 35049;

	class AlembicPointsRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Mesh* m_mesh; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* m_materials; // 0x20
		::UnityEngine::Material* m_motionVectorMaterial; // 0x28
		::UnityEngine::Rendering::ShadowCastingMode m_castShadows; // 0x30
		::System::Boolean m_applyTransform; // 0x34
		::System::Boolean m_receiveShadows; // 0x35
		::System::Boolean m_generateMotionVector; // 0x36
		::System::Single m_pointSize; // 0x38
		::UnityEngine::Mesh* m_prevMesh; // 0x40
		::UnityEngine::ComputeBuffer* m_cbPoints; // 0x48
		::UnityEngine::ComputeBuffer* m_cbVelocities; // 0x50
		::UnityEngine::ComputeBuffer* m_cbIDs; // 0x58
		::Il2CppArray<::UnityEngine::ComputeBuffer*>* m_cbArgs; // 0x60
		::UnityEngine::Rendering::CommandBuffer* m_cmdMotionVector; // 0x68
		::Il2CppArray<::System::Int32>* m_args; // 0x70
		::UnityEngine::Bounds m_bounds; // 0x78
		::UnityEngine::MaterialPropertyBlock* m_mpb; // 0x90
		::UnityEngine::Vector3 m_position; // 0x98
		::UnityEngine::Vector3 m_positionOld; // 0xA4
		::UnityEngine::Quaternion m_rotation; // 0xB0
		::UnityEngine::Quaternion m_rotationOld; // 0xC0
		::UnityEngine::Vector3 m_scale; // 0xD0
		::UnityEngine::Vector3 m_scaleOld; // 0xDC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_InstancedMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_GET_INSTANCEDMESH_OFFSET))(this);
		}

		::System::Void set_InstancedMesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_SET_INSTANCEDMESH_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* get_Materials()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_GET_MATERIALS_OFFSET))(this);
		}

		::System::Void set_Materials(::System::Collections::Generic::List_1<::UnityEngine::Material*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_SET_MATERIALS_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_MotionVectorMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_GET_MOTIONVECTORMATERIAL_OFFSET))(this);
		}

		::System::Void set_MotionVectorMaterial(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_SET_MOTIONVECTORMATERIAL_OFFSET))(this, value);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_FLUSH_OFFSET))(this);
		}

		::System::Void FlushMotionVector()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_FLUSHMOTIONVECTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_RELEASE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnRenderObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_ONRENDEROBJECT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER_ONDESTROY_OFFSET))(this);
		}
	};
}
