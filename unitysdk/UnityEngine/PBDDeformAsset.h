#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/PBDDeformDistanceConstraint.h"
#include "unitysdk/UnityEngine/PBDDeformFixConstraint.h"
#include "unitysdk/UnityEngine/PBDDeformJointConstraint.h"
#include "unitysdk/UnityEngine/PBDDeformParticle.h"
#include "unitysdk/UnityEngine/PBDDeformVolumeConstraint.h"
#include "unitysdk/UnityEngine/PBDGenerateBonePositionResult.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_PBDDEFORMASSET_CALCULATEROTATIONDATA_OFFSET UNITYSDK_OFFSET(0x1C4B12E0)
#define UNITYENGINE_PBDDEFORMASSET_CREATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C4B1190)
#define UNITYENGINE_PBDDEFORMASSET_GENERATERIGIDBODYLINKDATA_OFFSET UNITYSDK_OFFSET(0x1C4B1280)
#define UNITYENGINE_PBDDEFORMASSET_GENERATESKELETONPARTICLESKINDATA_OFFSET UNITYSDK_OFFSET(0x1C4B12B0)
#define UNITYENGINE_PBDDEFORMASSET_GENERATESKINNINGDATA_OFFSET UNITYSDK_OFFSET(0x1C4B12A0)
#define UNITYENGINE_PBDDEFORMASSET_GENERATESOFTBODYSKINNINGDATA_OFFSET UNITYSDK_OFFSET(0x1C4B1230)
#define UNITYENGINE_PBDDEFORMASSET_GENERATEUNIFORMPARTICLES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C4B1380)
#define UNITYENGINE_PBDDEFORMASSET_GENERATEUNIFORMPARTICLES_OFFSET UNITYSDK_OFFSET(0x1C4B12F0)
#define UNITYENGINE_PBDDEFORMASSET_GETBONETARGETMESHES_OFFSET UNITYSDK_OFFSET(0x1C4B12C0)
#define UNITYENGINE_PBDDEFORMASSET_GETTETRATARGETMESHES_OFFSET UNITYSDK_OFFSET(0x1C4B1250)
#define UNITYENGINE_PBDDEFORMASSET_GETVERTEXTETRACOUNT_OFFSET UNITYSDK_OFFSET(0x1C4B1240)
#define UNITYENGINE_PBDDEFORMASSET_GET_DISTANCECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C4B1090)
#define UNITYENGINE_PBDDEFORMASSET_GET_FIXCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C4B10B0)
#define UNITYENGINE_PBDDEFORMASSET_GET_JOINTCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C4B10F0)
#define UNITYENGINE_PBDDEFORMASSET_GET_LINKEDRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1C4B1110)
#define UNITYENGINE_PBDDEFORMASSET_GET_PARTICLES_OFFSET UNITYSDK_OFFSET(0x1C4B1070)
#define UNITYENGINE_PBDDEFORMASSET_GET_VOLUMECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C4B10D0)
#define UNITYENGINE_PBDDEFORMASSET_IMPORTFROMJSON_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C4B1220)
#define UNITYENGINE_PBDDEFORMASSET_IMPORTFROMJSON_OFFSET UNITYSDK_OFFSET(0x1C4B1210)
#define UNITYENGINE_PBDDEFORMASSET_NEEDUPDATERIGIDBODYLINKDATA_OFFSET UNITYSDK_OFFSET(0x1C4B1290)
#define UNITYENGINE_PBDDEFORMASSET_NEEDUPDATETETRASKINNINGDATA_OFFSET UNITYSDK_OFFSET(0x1C4B1270)
#define UNITYENGINE_PBDDEFORMASSET_REMOVEBONETARGETMESH_OFFSET UNITYSDK_OFFSET(0x1C4B12D0)
#define UNITYENGINE_PBDDEFORMASSET_REMOVETETRATARGETMESH_OFFSET UNITYSDK_OFFSET(0x1C4B1260)
#define UNITYENGINE_PBDDEFORMASSET_SET_DISTANCECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C4B10A0)
#define UNITYENGINE_PBDDEFORMASSET_SET_FIXCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C4B10C0)
#define UNITYENGINE_PBDDEFORMASSET_SET_JOINTCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C4B1100)
#define UNITYENGINE_PBDDEFORMASSET_SET_LINKEDRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1C4B1120)
#define UNITYENGINE_PBDDEFORMASSET_SET_PARTICLES_OFFSET UNITYSDK_OFFSET(0x1C4B1080)
#define UNITYENGINE_PBDDEFORMASSET_SET_VOLUMECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C4B10E0)
#define UNITYENGINE_PBDDEFORMASSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4B11A0)
#define UNITYENGINE_PBDDEFORMASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B1130)

namespace UnityEngine
{
	inline static constexpr unsigned int PBDDeformAsset_TypeDefinitionIndex = 24845;

	class PBDDeformAsset : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET__CTOR_1_OFFSET))(this, name);
		}

		::Il2CppArray<::UnityEngine::PBDDeformParticle>* get_particles()
		{
			return ((::Il2CppArray<::UnityEngine::PBDDeformParticle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_GET_PARTICLES_OFFSET))(this);
		}

		::System::Void set_particles(::Il2CppArray<::UnityEngine::PBDDeformParticle>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::PBDDeformParticle>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_SET_PARTICLES_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::PBDDeformDistanceConstraint>* get_distanceConstraints()
		{
			return ((::Il2CppArray<::UnityEngine::PBDDeformDistanceConstraint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_GET_DISTANCECONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_distanceConstraints(::Il2CppArray<::UnityEngine::PBDDeformDistanceConstraint>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::PBDDeformDistanceConstraint>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_SET_DISTANCECONSTRAINTS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::PBDDeformFixConstraint>* get_fixConstraints()
		{
			return ((::Il2CppArray<::UnityEngine::PBDDeformFixConstraint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_GET_FIXCONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_fixConstraints(::Il2CppArray<::UnityEngine::PBDDeformFixConstraint>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::PBDDeformFixConstraint>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_SET_FIXCONSTRAINTS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::PBDDeformVolumeConstraint>* get_volumeConstraints()
		{
			return ((::Il2CppArray<::UnityEngine::PBDDeformVolumeConstraint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_GET_VOLUMECONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_volumeConstraints(::Il2CppArray<::UnityEngine::PBDDeformVolumeConstraint>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::PBDDeformVolumeConstraint>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_SET_VOLUMECONSTRAINTS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::PBDDeformJointConstraint>* get_jointConstraints()
		{
			return ((::Il2CppArray<::UnityEngine::PBDDeformJointConstraint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_GET_JOINTCONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_jointConstraints(::Il2CppArray<::UnityEngine::PBDDeformJointConstraint>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::PBDDeformJointConstraint>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_SET_JOINTCONSTRAINTS_OFFSET))(this, value);
		}

		::UnityEngine::PBDDeformAsset* get_linkedRigidBody()
		{
			return ((::UnityEngine::PBDDeformAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_GET_LINKEDRIGIDBODY_OFFSET))(this);
		}

		::System::Void set_linkedRigidBody(::UnityEngine::PBDDeformAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PBDDeformAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_SET_LINKEDRIGIDBODY_OFFSET))(this, value);
		}

		static ::System::Void Create_Internal(::UnityEngine::PBDDeformAsset* asset, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::PBDDeformAsset*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_CREATE_INTERNAL_OFFSET))(asset, name);
		}

		::System::Boolean ImportFromJson(::System::String* jsonString, ::System::Single scale, ::UnityEngine::Quaternion rotation, ::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Quaternion, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_IMPORTFROMJSON_OFFSET))(this, jsonString, scale, rotation, message);
		}

		::System::Void GenerateSoftBodySkinningData(::UnityEngine::Mesh* mesh, ::System::UInt32 perVertexTetraNumber)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_GENERATESOFTBODYSKINNINGDATA_OFFSET))(this, mesh, perVertexTetraNumber);
		}

		::System::UInt32 GetVertexTetraCount(::UnityEngine::Mesh* mesh)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_GETVERTEXTETRACOUNT_OFFSET))(this, mesh);
		}

		::Il2CppArray<::UnityEngine::Mesh*>* GetTetraTargetMeshes()
		{
			return ((::Il2CppArray<::UnityEngine::Mesh*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_GETTETRATARGETMESHES_OFFSET))(this);
		}

		::System::Void RemoveTetraTargetMesh(::System::UInt32 slot)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_REMOVETETRATARGETMESH_OFFSET))(this, slot);
		}

		::System::Boolean NeedUpdateTetraSkinningData(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_NEEDUPDATETETRASKINNINGDATA_OFFSET))(this, mesh);
		}

		::System::Void GenerateRigidBodyLinkData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_GENERATERIGIDBODYLINKDATA_OFFSET))(this);
		}

		::System::Boolean NeedUpdateRigidBodyLinkData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_NEEDUPDATERIGIDBODYLINKDATA_OFFSET))(this);
		}

		::System::Void GenerateSkinningData(::UnityEngine::Mesh* mesh, ::System::UInt32 distanceMethod, ::System::UInt32 weightMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_GENERATESKINNINGDATA_OFFSET))(this, mesh, distanceMethod, weightMask);
		}

		::System::Void GenerateSkeletonParticleSkinData(::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_GENERATESKELETONPARTICLESKINDATA_OFFSET))(this, root);
		}

		::Il2CppArray<::UnityEngine::Mesh*>* GetBoneTargetMeshes()
		{
			return ((::Il2CppArray<::UnityEngine::Mesh*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_GETBONETARGETMESHES_OFFSET))(this);
		}

		::System::Void RemoveBoneTargetMesh(::System::UInt32 slot)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_REMOVEBONETARGETMESH_OFFSET))(this, slot);
		}

		::System::Void CalculateRotationData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_CALCULATEROTATIONDATA_OFFSET))(this);
		}

		static ::UnityEngine::PBDGenerateBonePositionResult GenerateUniformParticles(::UnityEngine::Mesh* mesh, ::UnityEngine::Vector3 inDimensions, ::UnityEngine::Vector3 massMultiplier, ::System::Single defaultDamping, ::UnityEngine::Vector3 dampingMultiplier, ::System::Boolean generateInterior, ::System::Boolean connectDiagonal, ::System::Boolean longConnection)
		{
			return ((::UnityEngine::PBDGenerateBonePositionResult(*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_GENERATEUNIFORMPARTICLES_OFFSET))(mesh, inDimensions, massMultiplier, defaultDamping, dampingMultiplier, generateInterior, connectDiagonal, longConnection);
		}

		::System::Boolean ImportFromJson_Injected(::System::String* jsonString, ::System::Single scale, ::UnityEngine::Quaternion& rotation, ::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Quaternion&, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_IMPORTFROMJSON_INJECTED_OFFSET))(this, jsonString, scale, rotation, message);
		}

		static ::System::Void GenerateUniformParticles_Injected(::UnityEngine::Mesh* mesh, ::UnityEngine::Vector3& inDimensions, ::UnityEngine::Vector3& massMultiplier, ::System::Single defaultDamping, ::UnityEngine::Vector3& dampingMultiplier, ::System::Boolean generateInterior, ::System::Boolean connectDiagonal, ::System::Boolean longConnection, ::UnityEngine::PBDGenerateBonePositionResult& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::PBDGenerateBonePositionResult&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMASSET_GENERATEUNIFORMPARTICLES_INJECTED_OFFSET))(mesh, inDimensions, massMultiplier, defaultDamping, dampingMultiplier, generateInterior, connectDiagonal, longConnection, ret);
		}
	};
}
