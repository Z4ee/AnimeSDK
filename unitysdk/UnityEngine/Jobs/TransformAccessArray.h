#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1A44B870)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_CREATE_OFFSET UNITYSDK_OFFSET(0x1A44B890)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_DESTROYTRANSFORMACCESSARRAY_OFFSET UNITYSDK_OFFSET(0x1A44B8D0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x22E4870)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1A44B940)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETSORTEDTOUSERINDEX_OFFSET UNITYSDK_OFFSET(0x1A44B980)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETSORTEDTRANSFORMACCESS_OFFSET UNITYSDK_OFFSET(0x1A44B970)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETTRANSFORMACCESSARRAYFORSCHEDULE_OFFSET UNITYSDK_OFFSET(0x5580)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A44B900)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_ISCREATED_OFFSET UNITYSDK_OFFSET(0x313F0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x22E4890)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x22E48B0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SETTRANSFORMS_1_OFFSET UNITYSDK_OFFSET(0x1A44B960)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SETTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x22E48C0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A44B920)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x22E48A0)

namespace UnityEngine::Jobs
{
	inline static constexpr unsigned int TransformAccessArray_TypeDefinitionIndex = 4238;

	struct alignas(8) TransformAccessArray
	{
		::System::IntPtr m_TransformArray; // 0x10

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

		::System::Void set_Item(::System::Int32 index, ::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 get_length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_LENGTH_OFFSET))(this);
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

		static ::System::Void SetTransform(::System::IntPtr transformArrayIntPtr, ::System::Int32 index, ::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SETTRANSFORM_OFFSET))(transformArrayIntPtr, index, transform);
		}
	};
}
