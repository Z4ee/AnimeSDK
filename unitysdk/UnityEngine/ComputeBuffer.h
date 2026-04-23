#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/ComputeBufferMode.h"
#include "unitysdk/UnityEngine/ComputeBufferType.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_COMPUTEBUFFER_DESTROYBUFFER_OFFSET UNITYSDK_OFFSET(0x1A432860)
#define UNITYENGINE_COMPUTEBUFFER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A432760)
#define UNITYENGINE_COMPUTEBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A432810)
#define UNITYENGINE_COMPUTEBUFFER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A4326F0)
#define UNITYENGINE_COMPUTEBUFFER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1A432FC0)
#define UNITYENGINE_COMPUTEBUFFER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A432A20)
#define UNITYENGINE_COMPUTEBUFFER_GET_STRIDE_OFFSET UNITYSDK_OFFSET(0x1A432A30)
#define UNITYENGINE_COMPUTEBUFFER_INITBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4328D0)
#define UNITYENGINE_COMPUTEBUFFER_INTERNALGETDATA_OFFSET UNITYSDK_OFFSET(0x1A433200)
#define UNITYENGINE_COMPUTEBUFFER_INTERNALSETDATA_OFFSET UNITYSDK_OFFSET(0x1A432CA0)
#define UNITYENGINE_COMPUTEBUFFER_INTERNALSETNATIVEDATA_OFFSET UNITYSDK_OFFSET(0x1A432FB0)
#define UNITYENGINE_COMPUTEBUFFER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1A432A10)
#define UNITYENGINE_COMPUTEBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1A4329C0)
#define UNITYENGINE_COMPUTEBUFFER_SETDATA_1_OFFSET UNITYSDK_OFFSET(0x1A432CB0)
#define UNITYENGINE_COMPUTEBUFFER_SETDATA_OFFSET UNITYSDK_OFFSET(0x1A432A40)
#define UNITYENGINE_COMPUTEBUFFER_SETNAME_OFFSET UNITYSDK_OFFSET(0x1A433220)
#define UNITYENGINE_COMPUTEBUFFER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1A433210)
#define UNITYENGINE_COMPUTEBUFFER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4329A0)
#define UNITYENGINE_COMPUTEBUFFER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A432900)
#define UNITYENGINE_COMPUTEBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4328E0)

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeBuffer_TypeDefinitionIndex = 4185;

	class ComputeBuffer : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::System::Int32 count, ::System::Int32 stride)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER__CTOR_OFFSET))(this, count, stride);
		}

		::System::Void _ctor_1(::System::Int32 count, ::System::Int32 stride, ::UnityEngine::ComputeBufferType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER__CTOR_1_OFFSET))(this, count, stride, type);
		}

		::System::Void _ctor_2(::System::Int32 count, ::System::Int32 stride, ::UnityEngine::ComputeBufferType type, ::UnityEngine::ComputeBufferMode usage, ::System::Int32 stackDepth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType, ::UnityEngine::ComputeBufferMode, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER__CTOR_2_OFFSET))(this, count, stride, type, usage, stackDepth);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_DISPOSE_1_OFFSET))(this, disposing);
		}

		static ::System::IntPtr InitBuffer(::System::Int32 count, ::System::Int32 stride, ::UnityEngine::ComputeBufferType type, ::UnityEngine::ComputeBufferMode usage)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType, ::UnityEngine::ComputeBufferMode))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_INITBUFFER_OFFSET))(count, stride, type, usage);
		}

		static ::System::Void DestroyBuffer(::UnityEngine::ComputeBuffer* buf)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_DESTROYBUFFER_OFFSET))(buf);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_RELEASE_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_ISVALID_OFFSET))(this);
		}

		::System::Int32 get_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 get_stride()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_GET_STRIDE_OFFSET))(this);
		}

		::System::Void SetData(::System::Array* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SETDATA_OFFSET))(this, data);
		}

		::System::Void SetData_1(::System::Array* data, ::System::Int32 managedBufferStartIndex, ::System::Int32 computeBufferStartIndex, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SETDATA_1_OFFSET))(this, data, managedBufferStartIndex, computeBufferStartIndex, count);
		}

		::System::Void InternalSetNativeData(::System::IntPtr data, ::System::Int32 nativeBufferStartIndex, ::System::Int32 computeBufferStartIndex, ::System::Int32 count, ::System::Int32 elemSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_INTERNALSETNATIVEDATA_OFFSET))(this, data, nativeBufferStartIndex, computeBufferStartIndex, count, elemSize);
		}

		::System::Void InternalSetData(::System::Array* data, ::System::Int32 managedBufferStartIndex, ::System::Int32 computeBufferStartIndex, ::System::Int32 count, ::System::Int32 elemSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_INTERNALSETDATA_OFFSET))(this, data, managedBufferStartIndex, computeBufferStartIndex, count, elemSize);
		}

		::System::Void GetData(::System::Array* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_GETDATA_OFFSET))(this, data);
		}

		::System::Void InternalGetData(::System::Array* data, ::System::Int32 managedBufferStartIndex, ::System::Int32 computeBufferStartIndex, ::System::Int32 count, ::System::Int32 elemSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_INTERNALGETDATA_OFFSET))(this, data, managedBufferStartIndex, computeBufferStartIndex, count, elemSize);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SET_NAME_OFFSET))(this, value);
		}

		::System::Void SetName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SETNAME_OFFSET))(this, name);
		}
	};
}
