#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_ADD_1_OFFSET UNITYSDK_OFFSET(0x1E948EE0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_ADD_OFFSET UNITYSDK_OFFSET(0xA443C0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1E948D80)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_CREATE_OFFSET UNITYSDK_OFFSET(0x1E948DD0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_DESTROYTRANSFORMACCESSARRAY_OFFSET UNITYSDK_OFFSET(0x1E948E10)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA44350)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETCAPACITY_OFFSET UNITYSDK_OFFSET(0x1E948E80)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1E948EC0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETSORTEDTOUSERINDEX_OFFSET UNITYSDK_OFFSET(0x1E948F30)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETSORTEDTRANSFORMACCESS_OFFSET UNITYSDK_OFFSET(0x1E948F20)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETTRANSFORMACCESSARRAYFORSCHEDULE_OFFSET UNITYSDK_OFFSET(0x259D70)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E948E40)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0xA44390)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_ISCREATED_OFFSET UNITYSDK_OFFSET(0x32EF90)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA44370)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xA443B0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_REMOVEATSWAPBACK_1_OFFSET UNITYSDK_OFFSET(0x1E948F00)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_REMOVEATSWAPBACK_OFFSET UNITYSDK_OFFSET(0xA443D0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x1E948EA0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SETTRANSFORMS_1_OFFSET UNITYSDK_OFFSET(0x1E948DA0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SETTRANSFORMS_OFFSET UNITYSDK_OFFSET(0xA443E0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E948E60)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0xA443A0)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA44380)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA44330)
#define UNITYENGINE_JOBS_TRANSFORMACCESSARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0xA442F0)

namespace UnityEngine::Jobs
{
	inline static constexpr unsigned int TransformAccessArray_TypeDefinitionIndex = 5448;

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

		::System::Void set_Item(::System::Int32 index, ::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 get_capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GET_CAPACITY_OFFSET))(this);
		}

		::System::Void set_capacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SET_CAPACITY_OFFSET))(this, value);
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

		static ::System::Int32 GetCapacity(::System::IntPtr transformArrayIntPtr)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_GETCAPACITY_OFFSET))(transformArrayIntPtr);
		}

		static ::System::Void SetCapacity(::System::IntPtr transformArrayIntPtr, ::System::Int32 capacity)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESSARRAY_SETCAPACITY_OFFSET))(transformArrayIntPtr, capacity);
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
