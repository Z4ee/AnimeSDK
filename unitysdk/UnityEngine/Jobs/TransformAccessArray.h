#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_ADD_1_OFFSET UNITYSDK_OFFSET(0x1D5824C0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x9F4690)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1D5823C0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_CREATE_OFFSET UNITYSDK_OFFSET(0x1D582410)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_DESTROYTRANSFORMACCESSARRAY_OFFSET UNITYSDK_OFFSET(0x1D582450)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F4650)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1D5824A0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETSORTEDTOUSERINDEX_OFFSET UNITYSDK_OFFSET(0x1D582510)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETSORTEDTRANSFORMACCESS_OFFSET UNITYSDK_OFFSET(0x1D582500)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETTRANSFORMACCESSARRAYFORSCHEDULE_OFFSET UNITYSDK_OFFSET(0x246290)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D582480)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_ISCREATED_OFFSET UNITYSDK_OFFSET(0x2C1A40)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9F4670)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9F4680)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_REMOVEATSWAPBACK_1_OFFSET UNITYSDK_OFFSET(0x1D5824E0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_REMOVEATSWAPBACK_OFFSET UNITYSDK_OFFSET(0x9F46A0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SETTRANSFORMS_1_OFFSET UNITYSDK_OFFSET(0x1D5823E0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SETTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x9F46B0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9F4630)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x9F45F0)

namespace UnityEngine::Jobs
{
	inline static constexpr unsigned int TransformAccessArray_TypeDefinitionIndex = 5445;

	struct alignas(8) TransformAccessArray
	{
		::System::IntPtr m_TransformArray; // 0x10

		::System::Void _ctor(::Il2CppArray<::UnityEngine::Transform*>* transforms, ::System::Int32 desiredJobCount)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY__CTOR_OFFSET))(this, transforms, desiredJobCount);
		}

		::System::Void _ctor_1(::System::Int32 capacity, ::System::Int32 desiredJobCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY__CTOR_1_OFFSET))(this, capacity, desiredJobCount);
		}

		static ::System::Void Allocate(::System::Int32 capacity, ::System::Int32 desiredJobCount, ::UnityEngine::Jobs::TransformAccessArray& array)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Jobs::TransformAccessArray&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_ALLOCATE_OFFSET))(capacity, desiredJobCount, array);
		}

		::System::Boolean get_isCreated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_ISCREATED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_DISPOSE_OFFSET))(this);
		}

		::System::IntPtr GetTransformAccessArrayForSchedule()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETTRANSFORMACCESSARRAYFORSCHEDULE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Item(::System::Int32 index)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_ITEM_OFFSET))(this, index);
		}

		::System::Int32 get_length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_LENGTH_OFFSET))(this);
		}

		::System::Void Add(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_ADD_OFFSET))(this, transform);
		}

		::System::Void RemoveAtSwapBack(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_REMOVEATSWAPBACK_OFFSET))(this, index);
		}

		::System::Void SetTransforms(::Il2CppArray<::UnityEngine::Transform*>* transforms)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SETTRANSFORMS_OFFSET))(this, transforms);
		}

		static ::System::IntPtr Create(::System::Int32 capacity, ::System::Int32 desiredJobCount)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_CREATE_OFFSET))(capacity, desiredJobCount);
		}

		static ::System::Void DestroyTransformAccessArray(::System::IntPtr transformArray)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_DESTROYTRANSFORMACCESSARRAY_OFFSET))(transformArray);
		}

		static ::System::Void SetTransforms_1(::System::IntPtr transformArrayIntPtr, ::Il2CppArray<::UnityEngine::Transform*>* transforms)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SETTRANSFORMS_1_OFFSET))(transformArrayIntPtr, transforms);
		}

		static ::System::Void Add_1(::System::IntPtr transformArrayIntPtr, ::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_ADD_1_OFFSET))(transformArrayIntPtr, transform);
		}

		static ::System::Void RemoveAtSwapBack_1(::System::IntPtr transformArrayIntPtr, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_REMOVEATSWAPBACK_1_OFFSET))(transformArrayIntPtr, index);
		}

		static ::System::IntPtr GetSortedTransformAccess(::System::IntPtr transformArrayIntPtr)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETSORTEDTRANSFORMACCESS_OFFSET))(transformArrayIntPtr);
		}

		static ::System::IntPtr GetSortedToUserIndex(::System::IntPtr transformArrayIntPtr)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETSORTEDTOUSERINDEX_OFFSET))(transformArrayIntPtr);
		}

		static ::System::Int32 GetLength(::System::IntPtr transformArrayIntPtr)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETLENGTH_OFFSET))(transformArrayIntPtr);
		}

		static ::UnityEngine::Transform* GetTransform(::System::IntPtr transformArrayIntPtr, ::System::Int32 index)
		{
			return ((::UnityEngine::Transform*(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETTRANSFORM_OFFSET))(transformArrayIntPtr, index);
		}
	};
}
