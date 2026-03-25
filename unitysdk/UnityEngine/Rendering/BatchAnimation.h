#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class BAGraphAsset; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define UNITYENGINE_RENDERING_BATCHANIMATION_ADDINSTANCE_OFFSET UNITYSDK_OFFSET(0x18A3B4C0)
#define UNITYENGINE_RENDERING_BATCHANIMATION_ALLOCANIMINSTANCEGROUP_OFFSET UNITYSDK_OFFSET(0x18A3B5C0)
#define UNITYENGINE_RENDERING_BATCHANIMATION_DESTORYINSTANCE_OFFSET UNITYSDK_OFFSET(0x18A3B4E0)
#define UNITYENGINE_RENDERING_BATCHANIMATION_FINDVARIANTINDEX_OFFSET UNITYSDK_OFFSET(0x18A3B550)
#define UNITYENGINE_RENDERING_BATCHANIMATION_GETINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x18A3B500)
#define UNITYENGINE_RENDERING_BATCHANIMATION_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x18A3B4F0)
#define UNITYENGINE_RENDERING_BATCHANIMATION_GETLODPARTCOUNT_OFFSET UNITYSDK_OFFSET(0x18A3B540)
#define UNITYENGINE_RENDERING_BATCHANIMATION_GET_ENABLEDEFAULTGRAPH_OFFSET UNITYSDK_OFFSET(0x18A3B620)
#define UNITYENGINE_RENDERING_BATCHANIMATION_GET_EVENTEXECUTE_OFFSET UNITYSDK_OFFSET(0x18A3AE70)
#define UNITYENGINE_RENDERING_BATCHANIMATION_INTERNALUPDATEINSTANCESHAREDMAT_OFFSET UNITYSDK_OFFSET(0x18A3B560)
#define UNITYENGINE_RENDERING_BATCHANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0x18A3B5F0)
#define UNITYENGINE_RENDERING_BATCHANIMATION_RESETANIMATION_OFFSET UNITYSDK_OFFSET(0x18A3B600)
#define UNITYENGINE_RENDERING_BATCHANIMATION_RESETANIMINSTANCEGROUP_OFFSET UNITYSDK_OFFSET(0x18A3B5D0)
#define UNITYENGINE_RENDERING_BATCHANIMATION_RESETRESREF_OFFSET UNITYSDK_OFFSET(0x18A3B5E0)
#define UNITYENGINE_RENDERING_BATCHANIMATION_SETGRAPH_OFFSET UNITYSDK_OFFSET(0x18A3B640)
#define UNITYENGINE_RENDERING_BATCHANIMATION_SETINSTANCESHADERMATPROP_OFFSET UNITYSDK_OFFSET(0x18A3B5B0)
#define UNITYENGINE_RENDERING_BATCHANIMATION_SETPOSROT_OFFSET UNITYSDK_OFFSET(0x18A3B4D0)
#define UNITYENGINE_RENDERING_BATCHANIMATION_SET_ENABLEDEFAULTGRAPH_OFFSET UNITYSDK_OFFSET(0x18A3B630)
#define UNITYENGINE_RENDERING_BATCHANIMATION_SET_EVENTEXECUTE_OFFSET UNITYSDK_OFFSET(0x18A3B610)
#define UNITYENGINE_RENDERING_BATCHANIMATION_SET_LODSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A3B530)
#define UNITYENGINE_RENDERING_BATCHANIMATION_SET_LODSIZE_OFFSET UNITYSDK_OFFSET(0x18A3B510)
#define UNITYENGINE_RENDERING_BATCHANIMATION_UPDATEINSTANCESHAREDMAT_1_OFFSET UNITYSDK_OFFSET(0x18A3B5A0)
#define UNITYENGINE_RENDERING_BATCHANIMATION_UPDATEINSTANCESHAREDMAT_OFFSET UNITYSDK_OFFSET(0x18A3B570)
#define UNITYENGINE_RENDERING_BATCHANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3B650)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchAnimation_TypeDefinitionIndex = 4587;

	class BatchAnimation : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void AddInstance(::System::Int32 count, ::UnityEngine::Transform* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_ADDINSTANCE_OFFSET))(this, count, parent);
		}

		::System::Void SetPosRot(::Il2CppArray<::UnityEngine::Vector3>* posArray, ::Il2CppArray<::UnityEngine::Quaternion>* rotArray, ::System::Int32 count, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Quaternion>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_SETPOSROT_OFFSET))(this, posArray, rotArray, count, offset);
		}

		::System::Void DestoryInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_DESTORYINSTANCE_OFFSET))(this);
		}

		::UnityEngine::Rendering::BatchAnimationInstance* GetInstance(::System::Int32 index)
		{
			return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_GETINSTANCE_OFFSET))(this, index);
		}

		::System::Int32 GetInstanceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_GETINSTANCECOUNT_OFFSET))(this);
		}

		::System::Void set_lodSize(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_SET_LODSIZE_OFFSET))(this, value);
		}

		::System::Int32 GetLodPartCount(::System::Int32 lod)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_GETLODPARTCOUNT_OFFSET))(this, lod);
		}

		::System::Int32 FindVariantIndex(::System::Int32 part, ::System::UInt32 key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_FINDVARIANTINDEX_OFFSET))(this, part, key);
		}

		::System::Void InternalUpdateInstanceSharedMat(::System::IntPtr data, ::System::Int32 offsetIndex, ::System::Int32 count, ::System::Int32 totalsize, ::System::Int32 stride, ::System::Int32 part)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_INTERNALUPDATEINSTANCESHAREDMAT_OFFSET))(this, data, offsetIndex, count, totalsize, stride, part);
		}

		::System::Void UpdateInstanceSharedMat(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>& data, ::System::Int32 offsetIndex, ::System::Int32 count, ::System::Int32 totalsize, ::System::Int32 stride)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_UPDATEINSTANCESHAREDMAT_OFFSET))(this, data, offsetIndex, count, totalsize, stride);
		}

		::System::Void UpdateInstanceSharedMat_1(::Unity::Collections::NativeArray_1<::System::Single>& data, ::System::Int32 offsetIndex, ::System::Int32 count, ::System::Int32 totalsize, ::System::Int32 stride, ::System::Int32 part)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Single>&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_UPDATEINSTANCESHAREDMAT_1_OFFSET))(this, data, offsetIndex, count, totalsize, stride, part);
		}

		::System::Void SetInstanceShaderMatProp(::System::Int32 shaderId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_SETINSTANCESHADERMATPROP_OFFSET))(this, shaderId);
		}

		::System::Void AllocAnimInstanceGroup(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_ALLOCANIMINSTANCEGROUP_OFFSET))(this, index);
		}

		::System::Void ResetAnimInstanceGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_RESETANIMINSTANCEGROUP_OFFSET))(this);
		}

		::System::Void Play(::System::Int32 instanceIndex, ::System::Int32 count, ::System::Int32 groupIndex, ::System::Int32 palyState, ::System::Int32 maxdelay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_PLAY_OFFSET))(this, instanceIndex, count, groupIndex, palyState, maxdelay);
		}

		::System::Void ResetAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_RESETANIMATION_OFFSET))(this);
		}

		::System::Void ResetResRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_RESETRESREF_OFFSET))(this);
		}

		::UnityEngine::MonoBehaviour* get_eventExecute()
		{
			return ((::UnityEngine::MonoBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_GET_EVENTEXECUTE_OFFSET))(this);
		}

		::System::Void set_eventExecute(::UnityEngine::MonoBehaviour* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_SET_EVENTEXECUTE_OFFSET))(this, value);
		}

		::System::Boolean get_enableDefaultGraph()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_GET_ENABLEDEFAULTGRAPH_OFFSET))(this);
		}

		::System::Void set_enableDefaultGraph(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_SET_ENABLEDEFAULTGRAPH_OFFSET))(this, value);
		}

		::System::Void SetGraph(::UnityEngine::Rendering::BAGraphAsset* graphAsset, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BAGraphAsset*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_SETGRAPH_OFFSET))(this, graphAsset, layer);
		}

		::System::Void set_lodSize_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_SET_LODSIZE_INJECTED_OFFSET))(this, value);
		}
	};
}
