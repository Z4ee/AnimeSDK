#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_ADDVOLUMEBYMESHANDMATERIAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A31070)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_ADDVOLUMEBYMESHANDMATERIAL_OFFSET UNITYSDK_OFFSET(0x18A30F40)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_ADDVOLUMEREUSED_OFFSET UNITYSDK_OFFSET(0x18A30F50)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_ADDVOLUME_OFFSET UNITYSDK_OFFSET(0x18A30E40)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_REMOVEVOLUMEUSEVOLUMEKEY_OFFSET UNITYSDK_OFFSET(0x18A30E30)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_SETVOLUMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x18A31080)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_SET_SCENEID_OFFSET UNITYSDK_OFFSET(0x18A310A0)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_SET_VOLUMEREUSED_OFFSET UNITYSDK_OFFSET(0x18A310B0)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_TRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18A31090)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_VOLUMETRANSFORMCHANGED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A310D0)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_VOLUMETRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18A310C0)

namespace UnityEngine
{
	inline static constexpr unsigned int RPGInstancedItemBlock_TypeDefinitionIndex = 4095;

	class RPGInstancedItemBlock : public ::UnityEngine::Behaviour
	{
	public:
		::System::Boolean RemoveVolumeUseVolumeKey(::System::UInt64 volumeKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_REMOVEVOLUMEUSEVOLUMEKEY_OFFSET))(this, volumeKey);
		}

		::System::Void AddVolume(::System::Collections::Generic::List_1<::System::UInt32>* lodArrayStarts, ::System::Collections::Generic::List_1<::System::UInt32>* lodArrayEnds, ::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* lodArrayMeshes, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* lodArrayMaterials, ::Unity::Collections::NativeArray_1<::System::Single> lodArrayDistances, ::System::Collections::Generic::List_1<::System::UInt32>* transformArrayStarts, ::System::Collections::Generic::List_1<::System::UInt32>* transformArrayEnds, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> transformArray, ::UnityEngine::Bounds boundInBlock, ::System::UInt64& volumeKey, ::System::Collections::Generic::List_1<::System::Boolean>* forceUpdateList, ::System::Collections::Generic::List_1<::System::Int64>* assetIdList, ::System::Boolean casterShadow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::UnityEngine::Mesh*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::Unity::Collections::NativeArray_1<::System::Single>, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>, ::UnityEngine::Bounds, ::System::UInt64&, ::System::Collections::Generic::List_1<::System::Boolean>*, ::System::Collections::Generic::List_1<::System::Int64>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_ADDVOLUME_OFFSET))(this, lodArrayStarts, lodArrayEnds, lodArrayMeshes, lodArrayMaterials, lodArrayDistances, transformArrayStarts, transformArrayEnds, transformArray, boundInBlock, volumeKey, forceUpdateList, assetIdList, casterShadow);
		}

		::System::Void AddVolumeReused(::System::Collections::Generic::List_1<::System::UInt32>* lodArrayStarts, ::System::Collections::Generic::List_1<::System::UInt32>* lodArrayEnds, ::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* lodArrayMeshes, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* lodArrayMaterials, ::Unity::Collections::NativeArray_1<::System::Single> lodArrayDistances, ::System::Collections::Generic::List_1<::System::UInt32>* transformArrayStarts, ::System::Collections::Generic::List_1<::System::UInt32>* transformArrayEnds, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> transformArray, ::UnityEngine::Bounds boundInBlock, ::System::UInt64& volumeKey, ::UnityEngine::Matrix4x4 volumeMatrixInBlock, ::System::Int64 volumeTypeKey, ::System::Collections::Generic::List_1<::System::Boolean>* forceUpdateList, ::System::Collections::Generic::List_1<::System::Int64>* assetIdList, ::System::Boolean casterShadow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::UnityEngine::Mesh*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::Unity::Collections::NativeArray_1<::System::Single>, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>, ::UnityEngine::Bounds, ::System::UInt64&, ::UnityEngine::Matrix4x4, ::System::Int64, ::System::Collections::Generic::List_1<::System::Boolean>*, ::System::Collections::Generic::List_1<::System::Int64>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_ADDVOLUMEREUSED_OFFSET))(this, lodArrayStarts, lodArrayEnds, lodArrayMeshes, lodArrayMaterials, lodArrayDistances, transformArrayStarts, transformArrayEnds, transformArray, boundInBlock, volumeKey, volumeMatrixInBlock, volumeTypeKey, forceUpdateList, assetIdList, casterShadow);
		}

		::System::Void AddVolumeByMeshAndMaterial(::System::Object* lodArrayStarts, ::System::Object* lodArrayEnds, ::System::Object* lodArrayMeshes, ::System::Object* lodArrayMaterials, ::System::Void* lodArrayDistances, ::System::Object* transformArrayStarts, ::System::Object* transformArrayEnds, ::System::Void* transformArray, ::UnityEngine::Bounds boundInBlock, ::System::UInt64& volumeKey, ::System::Object* forceUpdateList, ::System::Object* assetIdList, ::UnityEngine::Matrix4x4 volumeMatrixInBlock, ::System::Int64 volumeTypeKey, ::System::Boolean casterShadow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Void*, ::System::Object*, ::System::Object*, ::System::Void*, ::UnityEngine::Bounds, ::System::UInt64&, ::System::Object*, ::System::Object*, ::UnityEngine::Matrix4x4, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_ADDVOLUMEBYMESHANDMATERIAL_OFFSET))(this, lodArrayStarts, lodArrayEnds, lodArrayMeshes, lodArrayMaterials, lodArrayDistances, transformArrayStarts, transformArrayEnds, transformArray, boundInBlock, volumeKey, forceUpdateList, assetIdList, volumeMatrixInBlock, volumeTypeKey, casterShadow);
		}

		::System::Void SetVolumeVisible(::System::UInt64 volumeKey, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_SETVOLUMEVISIBLE_OFFSET))(this, volumeKey, visible);
		}

		::System::Void TransformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_TRANSFORMCHANGED_OFFSET))(this);
		}

		::System::Void set_SceneID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_SET_SCENEID_OFFSET))(this, value);
		}

		::System::Void set_VolumeReused(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_SET_VOLUMEREUSED_OFFSET))(this, value);
		}

		::System::Void VolumeTransformChanged(::System::UInt64 volumeKey, ::UnityEngine::Matrix4x4 deltaVolumeMatrixInBlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_VOLUMETRANSFORMCHANGED_OFFSET))(this, volumeKey, deltaVolumeMatrixInBlock);
		}

		::System::Void AddVolumeByMeshAndMaterial_Injected(::System::Object* lodArrayStarts, ::System::Object* lodArrayEnds, ::System::Object* lodArrayMeshes, ::System::Object* lodArrayMaterials, ::System::Void* lodArrayDistances, ::System::Object* transformArrayStarts, ::System::Object* transformArrayEnds, ::System::Void* transformArray, ::UnityEngine::Bounds& boundInBlock, ::System::UInt64& volumeKey, ::System::Object* forceUpdateList, ::System::Object* assetIdList, ::UnityEngine::Matrix4x4& volumeMatrixInBlock, ::System::Int64 volumeTypeKey, ::System::Boolean casterShadow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Void*, ::System::Object*, ::System::Object*, ::System::Void*, ::UnityEngine::Bounds&, ::System::UInt64&, ::System::Object*, ::System::Object*, ::UnityEngine::Matrix4x4&, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_ADDVOLUMEBYMESHANDMATERIAL_INJECTED_OFFSET))(this, lodArrayStarts, lodArrayEnds, lodArrayMeshes, lodArrayMaterials, lodArrayDistances, transformArrayStarts, transformArrayEnds, transformArray, boundInBlock, volumeKey, forceUpdateList, assetIdList, volumeMatrixInBlock, volumeTypeKey, casterShadow);
		}

		::System::Void VolumeTransformChanged_Injected(::System::UInt64 volumeKey, ::UnityEngine::Matrix4x4& deltaVolumeMatrixInBlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_VOLUMETRANSFORMCHANGED_INJECTED_OFFSET))(this, volumeKey, deltaVolumeMatrixInBlock);
		}
	};
}
