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

#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_ADDVOLUMEBYMESHANDMATERIAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CDF5E90)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_ADDVOLUMEBYMESHANDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CDF5D50)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_ADDVOLUMEREUSED_OFFSET UNITYSDK_OFFSET(0x1CDF5D60)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_ADDVOLUME_OFFSET UNITYSDK_OFFSET(0x1CDF5C30)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_REMOVEVOLUMEUSEVOLUMEKEY_OFFSET UNITYSDK_OFFSET(0x1CDF5C20)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_SETVOLUMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1CDF5EA0)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_SET_SCENEID_OFFSET UNITYSDK_OFFSET(0x1CDF5EC0)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_SET_VOLUMEREUSED_OFFSET UNITYSDK_OFFSET(0x1CDF5ED0)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_TRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1CDF5EB0)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_VOLUMETRANSFORMCHANGED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CDF5EF0)
#define UNITYENGINE_RPGINSTANCEDITEMBLOCK_VOLUMETRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1CDF5EE0)

namespace UnityEngine
{
	inline static constexpr unsigned int RPGInstancedItemBlock_TypeDefinitionIndex = 4276;

	class RPGInstancedItemBlock : public ::UnityEngine::Behaviour
	{
	public:
		::System::Boolean RemoveVolumeUseVolumeKey(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_REMOVEVOLUMEUSEVOLUMEKEY_OFFSET))(this, a1);
		}

		::System::Void AddVolume(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a4, ::Unity::Collections::NativeArray_1<::System::Single> a5, ::System::Collections::Generic::List_1<::System::UInt32>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> a8, ::UnityEngine::Bounds a9, ::System::UInt64& a10, ::System::Collections::Generic::List_1<::System::Boolean>* a11, ::System::Collections::Generic::List_1<::System::Int64>* a12, ::System::Boolean a13, ::System::Collections::Generic::List_1<::System::UInt32>* a14)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::UnityEngine::Mesh*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::Unity::Collections::NativeArray_1<::System::Single>, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>, ::UnityEngine::Bounds, ::System::UInt64&, ::System::Collections::Generic::List_1<::System::Boolean>*, ::System::Collections::Generic::List_1<::System::Int64>*, ::System::Boolean, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_ADDVOLUME_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
		}

		::System::Void AddVolumeReused(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a4, ::Unity::Collections::NativeArray_1<::System::Single> a5, ::System::Collections::Generic::List_1<::System::UInt32>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> a8, ::UnityEngine::Bounds a9, ::System::UInt64& a10, ::UnityEngine::Matrix4x4 a11, ::System::Int64 a12, ::System::Collections::Generic::List_1<::System::Boolean>* a13, ::System::Collections::Generic::List_1<::System::Int64>* a14, ::System::Boolean a15, ::System::Collections::Generic::List_1<::System::UInt32>* a16)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::UnityEngine::Mesh*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::Unity::Collections::NativeArray_1<::System::Single>, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>, ::UnityEngine::Bounds, ::System::UInt64&, ::UnityEngine::Matrix4x4, ::System::Int64, ::System::Collections::Generic::List_1<::System::Boolean>*, ::System::Collections::Generic::List_1<::System::Int64>*, ::System::Boolean, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_ADDVOLUMEREUSED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

		::System::Void AddVolumeByMeshAndMaterial(::System::Object* a1, ::System::Object* a2, ::System::Object* a3, ::System::Object* a4, ::System::Void* a5, ::System::Object* a6, ::System::Object* a7, ::System::Void* a8, ::UnityEngine::Bounds a9, ::System::UInt64& a10, ::System::Object* a11, ::System::Object* a12, ::UnityEngine::Matrix4x4 a13, ::System::Int64 a14, ::System::Boolean a15, ::System::Object* a16)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Void*, ::System::Object*, ::System::Object*, ::System::Void*, ::UnityEngine::Bounds, ::System::UInt64&, ::System::Object*, ::System::Object*, ::UnityEngine::Matrix4x4, ::System::Int64, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_ADDVOLUMEBYMESHANDMATERIAL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

		::System::Void SetVolumeVisible(::System::UInt64 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_SETVOLUMEVISIBLE_OFFSET))(this, a1, a2);
		}

		::System::Void TransformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_TRANSFORMCHANGED_OFFSET))(this);
		}

		::System::Void set_SceneID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_SET_SCENEID_OFFSET))(this, a1);
		}

		::System::Void set_VolumeReused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_SET_VOLUMEREUSED_OFFSET))(this, a1);
		}

		::System::Void VolumeTransformChanged(::System::UInt64 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_VOLUMETRANSFORMCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void AddVolumeByMeshAndMaterial_Injected(::System::Object* a1, ::System::Object* a2, ::System::Object* a3, ::System::Object* a4, ::System::Void* a5, ::System::Object* a6, ::System::Object* a7, ::System::Void* a8, ::UnityEngine::Bounds& a9, ::System::UInt64& a10, ::System::Object* a11, ::System::Object* a12, ::UnityEngine::Matrix4x4& a13, ::System::Int64 a14, ::System::Boolean a15, ::System::Object* a16)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Void*, ::System::Object*, ::System::Object*, ::System::Void*, ::UnityEngine::Bounds&, ::System::UInt64&, ::System::Object*, ::System::Object*, ::UnityEngine::Matrix4x4&, ::System::Int64, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_ADDVOLUMEBYMESHANDMATERIAL_INJECTED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

		::System::Void VolumeTransformChanged_Injected(::System::UInt64 a1, ::UnityEngine::Matrix4x4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMBLOCK_VOLUMETRANSFORMCHANGED_INJECTED_OFFSET))(this, a1, a2);
		}
	};
}
