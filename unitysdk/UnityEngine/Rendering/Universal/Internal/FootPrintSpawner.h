#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/FootPrintConfigData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/FootPrintManager_FootPrintRenderItem.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_CLEARFOOTPRINTDATA_OFFSET UNITYSDK_OFFSET(0x1AF511D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_GENERATEWHEELMESH_OFFSET UNITYSDK_OFFSET(0x1AF52F00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_GET_INSTANCEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1AF50E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_GET_MATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1AF50E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_INITWHEELDATA_OFFSET UNITYSDK_OFFSET(0x1AF51630)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AF51450)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1AF51D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AF51360)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1AF515A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_REMOVEWHEELDATA_OFFSET UNITYSDK_OFFSET(0x1AF51220)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_RESETWHEELDATAARRAY_OFFSET UNITYSDK_OFFSET(0x1AF52DF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_SETREADYTOSPAWN_OFFSET UNITYSDK_OFFSET(0x1AF50E30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_SET_MATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1AF50E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_SPAWN_OFFSET UNITYSDK_OFFSET(0x1AF518B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_TICKFOOTPRINT_OFFSET UNITYSDK_OFFSET(0x1AF522E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_TICKWHEELPRINT_OFFSET UNITYSDK_OFFSET(0x1AF52A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF54190)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int FootPrintSpawner_TypeDefinitionIndex = 27358;

	class FootPrintSpawner : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single kMinSpawnDistance; // 0x0
		// static const ::System::Int32 kMaxFootPrintCount = 0xC8; // 0x0
		// static const ::System::Int32 kMaxWheelVertexCount = 0x1F4; // 0x0
		// static const ::System::Int32 kMaxWheelPosCount = 0xFA; // 0x0
		::UnityEngine::Rendering::Universal::Internal::FootPrintConfigData m_FootPrintConfigData; // 0x18
		::System::Single SpawnDist; // 0x48
		::System::Single wheelUVScale; // 0x4C
		::System::Boolean isWheelType; // 0x50
		::System::Single wheelWidth; // 0x54
		::System::Single wheelDurationTime; // 0x58
		::System::Single wheelDurationDistance; // 0x5C
		::System::Single WheelTeleportThreshold; // 0x60
		::UnityEngine::MaterialPropertyBlock* _MaterialPropertyBlock_k__BackingField; // 0x68
		::System::Boolean needMirror; // 0x70
		::System::Boolean readyToSpawn; // 0x71
		::System::Boolean forceToSpawn; // 0x72
		::UnityEngine::Vector3 spawnPos; // 0x74
		::UnityEngine::Vector3 spawnForward; // 0x80
		::System::Boolean preIsInZone; // 0x8C
		::UnityEngine::GameObject* m_Holder; // 0x90
		::System::Boolean m_IsEnable; // 0x98
		::System::Collections::Generic::Queue_1<::UnityEngine::Rendering::Universal::Internal::FootPrintManager_FootPrintRenderItem>* FootPrintInfos; // 0xA0
		::System::Single leftRightMark; // 0xA8
		::Il2CppArray<::UnityEngine::Vector4>* m_FootParams; // 0xB0
		::Il2CppArray<::UnityEngine::Matrix4x4>* m_LocalToWorldMatrixArray; // 0xB8
		::System::Int32 m_FootPrintCount; // 0xC0
		::UnityEngine::Vector3 lastSpawnPos; // 0xC4
		::UnityEngine::Mesh* wholeMesh; // 0xD0
		::Il2CppArray<::UnityEngine::Vector3>* vertsPos; // 0xD8
		::Il2CppArray<::UnityEngine::Vector2>* vertsUV; // 0xE0
		::Il2CppArray<::UnityEngine::Color>* vertsColor; // 0xE8
		::Il2CppArray<::UnityEngine::Vector3>* vertsNormal; // 0xF0
		::Il2CppArray<::System::Int32>* vertsTriangles; // 0xF8
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>>* vertsPosNoValid; // 0x100
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>>* vertsPosIsValid; // 0x108
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>>* posTimes; // 0x110
		::System::Int32 wheelMaxVertsCount; // 0x118
		::System::Single wheelSpawnDist; // 0x11C
		::System::Boolean wheelDataIsInitizlied; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* get_InstancedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_GET_INSTANCEDMATERIAL_OFFSET))(this);
		}

		::UnityEngine::MaterialPropertyBlock* get_MaterialPropertyBlock()
		{
			return ((::UnityEngine::MaterialPropertyBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_GET_MATERIALPROPERTYBLOCK_OFFSET))(this);
		}

		::System::Void set_MaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_SET_MATERIALPROPERTYBLOCK_OFFSET))(this, value);
		}

		::System::Void SetReadyToSpawn(::System::Boolean forceSpawn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_SETREADYTOSPAWN_OFFSET))(this, forceSpawn);
		}

		::System::Void ClearFootPrintData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_CLEARFOOTPRINTDATA_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Spawn(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 forward)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_SPAWN_OFFSET))(this, position, forward);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void TickFootPrint(::System::Single currentTime, ::System::Single fadeOutLifeTime, ::System::Single fadeOutMultiValue, ::System::Single fadeInLifeTime, ::System::Single fadeInMultiValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_TICKFOOTPRINT_OFFSET))(this, currentTime, fadeOutLifeTime, fadeOutMultiValue, fadeInLifeTime, fadeInMultiValue);
		}

		::System::Void InitWheelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_INITWHEELDATA_OFFSET))(this);
		}

		::System::Void ResetWheelDataArray(::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_RESETWHEELDATAARRAY_OFFSET))(this, pos);
		}

		::System::Void RemoveWheelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_REMOVEWHEELDATA_OFFSET))(this);
		}

		::System::Void TickWheelPrint(::System::Single currentTime, ::System::Single fadeOutLifeTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_TICKWHEELPRINT_OFFSET))(this, currentTime, fadeOutLifeTime);
		}

		::System::Void GenerateWheelMesh(::System::Single currentTime, ::System::Single fadeOutLifeTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTSPAWNER_GENERATEWHEELMESH_OFFSET))(this, currentTime, fadeOutLifeTime);
		}
	};
}
