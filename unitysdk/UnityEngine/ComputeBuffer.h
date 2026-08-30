#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/ComputeBufferMode.h"
#include "unitysdk/UnityEngine/ComputeBufferType.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_COMPUTEBUFFER_CREATEBORROWED_OFFSET UNITYSDK_OFFSET(0x1ED12BF0)
#define UNITYENGINE_COMPUTEBUFFER_DESTROYBUFFER_OFFSET UNITYSDK_OFFSET(0x1ED129D0)
#define UNITYENGINE_COMPUTEBUFFER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1ED12880)
#define UNITYENGINE_COMPUTEBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ED12930)
#define UNITYENGINE_COMPUTEBUFFER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ED12810)
#define UNITYENGINE_COMPUTEBUFFER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1ED13260)
#define UNITYENGINE_COMPUTEBUFFER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1ED12C90)
#define UNITYENGINE_COMPUTEBUFFER_GET_STRIDE_OFFSET UNITYSDK_OFFSET(0x1ED12CA0)
#define UNITYENGINE_COMPUTEBUFFER_INITBUFFER_OFFSET UNITYSDK_OFFSET(0x1ED12A40)
#define UNITYENGINE_COMPUTEBUFFER_INTERNALGETDATA_OFFSET UNITYSDK_OFFSET(0x1ED134A0)
#define UNITYENGINE_COMPUTEBUFFER_INTERNALSETDATA_OFFSET UNITYSDK_OFFSET(0x1ED12F30)
#define UNITYENGINE_COMPUTEBUFFER_INTERNALSETNATIVEDATA_OFFSET UNITYSDK_OFFSET(0x1ED13250)
#define UNITYENGINE_COMPUTEBUFFER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1ED12BD0)
#define UNITYENGINE_COMPUTEBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1ED12B30)
#define UNITYENGINE_COMPUTEBUFFER_SETDATA_1_OFFSET UNITYSDK_OFFSET(0x1ED12F40)
#define UNITYENGINE_COMPUTEBUFFER_SETDATA_OFFSET UNITYSDK_OFFSET(0x1ED12CB0)
#define UNITYENGINE_COMPUTEBUFFER_SETNAME_OFFSET UNITYSDK_OFFSET(0x1ED134C0)
#define UNITYENGINE_COMPUTEBUFFER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1ED134B0)
#define UNITYENGINE_COMPUTEBUFFER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED12B10)
#define UNITYENGINE_COMPUTEBUFFER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1ED12A70)
#define UNITYENGINE_COMPUTEBUFFER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1ED12BE0)
#define UNITYENGINE_COMPUTEBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED12A50)

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeBuffer_TypeDefinitionIndex = 4374;

	class ComputeBuffer : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::System::Boolean m_Borrowed; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::ComputeBufferType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::ComputeBufferType a3, ::UnityEngine::ComputeBufferMode a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType, ::UnityEngine::ComputeBufferMode, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER__CTOR_3_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_DISPOSE_1_OFFSET))(this, a1);
		}

		static ::System::IntPtr InitBuffer(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::ComputeBufferType a3, ::UnityEngine::ComputeBufferMode a4)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType, ::UnityEngine::ComputeBufferMode))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_INITBUFFER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DestroyBuffer(::UnityEngine::ComputeBuffer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_DESTROYBUFFER_OFFSET))(a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_RELEASE_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_ISVALID_OFFSET))(this);
		}

		static ::UnityEngine::ComputeBuffer* CreateBorrowed(::System::IntPtr a1)
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_CREATEBORROWED_OFFSET))(a1);
		}

		::System::Int32 get_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 get_stride()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_GET_STRIDE_OFFSET))(this);
		}

		::System::Void SetData(::System::Array* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SETDATA_OFFSET))(this, a1);
		}

		::System::Void SetData_1(::System::Array* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SETDATA_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InternalSetNativeData(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_INTERNALSETNATIVEDATA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void InternalSetData(::System::Array* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_INTERNALSETDATA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GetData(::System::Array* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_GETDATA_OFFSET))(this, a1);
		}

		::System::Void InternalGetData(::System::Array* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_INTERNALGETDATA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void set_name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SET_NAME_OFFSET))(this, a1);
		}

		::System::Void SetName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SETNAME_OFFSET))(this, a1);
		}
	};
}
