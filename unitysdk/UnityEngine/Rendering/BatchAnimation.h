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
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define UNITYENGINE_RENDERING_BATCHANIMATION_ADDINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CDFF3F0)
#define UNITYENGINE_RENDERING_BATCHANIMATION_ALLOCANIMINSTANCEGROUP_OFFSET UNITYSDK_OFFSET(0x1CDFF4F0)
#define UNITYENGINE_RENDERING_BATCHANIMATION_DESTORYINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CDFF410)
#define UNITYENGINE_RENDERING_BATCHANIMATION_ENABLEINSTANCELAYER_OFFSET UNITYSDK_OFFSET(0x1CDFF560)
#define UNITYENGINE_RENDERING_BATCHANIMATION_FINDVARIANTINDEX_OFFSET UNITYSDK_OFFSET(0x1CDFF480)
#define UNITYENGINE_RENDERING_BATCHANIMATION_GETINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x1CDFF430)
#define UNITYENGINE_RENDERING_BATCHANIMATION_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CDFF420)
#define UNITYENGINE_RENDERING_BATCHANIMATION_GETLODPARTCOUNT_OFFSET UNITYSDK_OFFSET(0x1CDFF470)
#define UNITYENGINE_RENDERING_BATCHANIMATION_GET_EVENTEXECUTE_OFFSET UNITYSDK_OFFSET(0x1CDFF2B0)
#define UNITYENGINE_RENDERING_BATCHANIMATION_INTERNALUPDATEINSTANCESHAREDMAT_OFFSET UNITYSDK_OFFSET(0x1CDFF490)
#define UNITYENGINE_RENDERING_BATCHANIMATION_ISENABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x1CDFF550)
#define UNITYENGINE_RENDERING_BATCHANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0x1CDFF520)
#define UNITYENGINE_RENDERING_BATCHANIMATION_RESETANIMATION_OFFSET UNITYSDK_OFFSET(0x1CDFF530)
#define UNITYENGINE_RENDERING_BATCHANIMATION_RESETANIMINSTANCEGROUP_OFFSET UNITYSDK_OFFSET(0x1CDFF500)
#define UNITYENGINE_RENDERING_BATCHANIMATION_RESETRESREF_OFFSET UNITYSDK_OFFSET(0x1CDFF510)
#define UNITYENGINE_RENDERING_BATCHANIMATION_SETINSTANCESHADERMATPROP_OFFSET UNITYSDK_OFFSET(0x1CDFF4E0)
#define UNITYENGINE_RENDERING_BATCHANIMATION_SETPOSROT_OFFSET UNITYSDK_OFFSET(0x1CDFF400)
#define UNITYENGINE_RENDERING_BATCHANIMATION_SET_EVENTEXECUTE_OFFSET UNITYSDK_OFFSET(0x1CDFF540)
#define UNITYENGINE_RENDERING_BATCHANIMATION_SET_LODSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CDFF460)
#define UNITYENGINE_RENDERING_BATCHANIMATION_SET_LODSIZE_OFFSET UNITYSDK_OFFSET(0x1CDFF440)
#define UNITYENGINE_RENDERING_BATCHANIMATION_UPDATEINSTANCESHAREDMAT_1_OFFSET UNITYSDK_OFFSET(0x1CDFF4D0)
#define UNITYENGINE_RENDERING_BATCHANIMATION_UPDATEINSTANCESHAREDMAT_OFFSET UNITYSDK_OFFSET(0x1CDFF4A0)
#define UNITYENGINE_RENDERING_BATCHANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDFF570)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchAnimation_TypeDefinitionIndex = 4768;

	class BatchAnimation : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void AddInstance(::System::Int32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_ADDINSTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void SetPosRot(::Il2CppArray<::UnityEngine::Vector3>* a1, ::Il2CppArray<::UnityEngine::Quaternion>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Quaternion>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_SETPOSROT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DestoryInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_DESTORYINSTANCE_OFFSET))(this);
		}

		::UnityEngine::Rendering::BatchAnimationInstance* GetInstance(::System::Int32 a1)
		{
			return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_GETINSTANCE_OFFSET))(this, a1);
		}

		::System::Int32 GetInstanceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_GETINSTANCECOUNT_OFFSET))(this);
		}

		::System::Void set_lodSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_SET_LODSIZE_OFFSET))(this, a1);
		}

		::System::Int32 GetLodPartCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_GETLODPARTCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 FindVariantIndex(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_FINDVARIANTINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void InternalUpdateInstanceSharedMat(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_INTERNALUPDATEINSTANCESHAREDMAT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void UpdateInstanceSharedMat(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>& a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_UPDATEINSTANCESHAREDMAT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void UpdateInstanceSharedMat_1(::Unity::Collections::NativeArray_1<::System::Single>& a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Single>&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_UPDATEINSTANCESHAREDMAT_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetInstanceShaderMatProp(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_SETINSTANCESHADERMATPROP_OFFSET))(this, a1);
		}

		::System::Void AllocAnimInstanceGroup(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_ALLOCANIMINSTANCEGROUP_OFFSET))(this, a1);
		}

		::System::Void ResetAnimInstanceGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_RESETANIMINSTANCEGROUP_OFFSET))(this);
		}

		::System::Void Play(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_PLAY_OFFSET))(this, a1, a2, a3, a4, a5);
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

		::System::Void set_eventExecute(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_SET_EVENTEXECUTE_OFFSET))(this, a1);
		}

		::System::Boolean IsEnableGraph()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_ISENABLEGRAPH_OFFSET))(this);
		}

		::System::Void EnableInstanceLayer(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_ENABLEINSTANCELAYER_OFFSET))(this, a1, a2);
		}

		::System::Void set_lodSize_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATION_SET_LODSIZE_INJECTED_OFFSET))(this, a1);
		}
	};
}
