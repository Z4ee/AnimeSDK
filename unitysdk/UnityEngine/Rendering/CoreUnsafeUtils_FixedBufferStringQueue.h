#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_CLEAR_OFFSET UNITYSDK_OFFSET(0x86A020)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x2EF9F0)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x2EFA00)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_TRYPOP_OFFSET UNITYSDK_OFFSET(0x869F50)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_TRYPUSH_OFFSET UNITYSDK_OFFSET(0x869F40)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x869E80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CoreUnsafeUtils_FixedBufferStringQueue_TypeDefinitionIndex = 9528;

	struct alignas(8) CoreUnsafeUtils_FixedBufferStringQueue
	{
		::System::Byte* m_ReadCursor; // 0x10
		::System::Byte* m_WriteCursor; // 0x18
		::System::Byte* m_BufferEnd; // 0x20
		::System::Byte* m_BufferStart; // 0x28
		::System::Int32 m_BufferLength; // 0x30
		::System::Int32 _Count_k__BackingField; // 0x34

		::System::Void _ctor(::System::Byte* ptr, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE__CTOR_OFFSET))(this, ptr, length);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_SET_COUNT_OFFSET))(this, value);
		}

		::System::Boolean TryPush(::System::String* v)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_TRYPUSH_OFFSET))(this, v);
		}

		::System::Boolean TryPop(::System::String*& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_TRYPOP_OFFSET))(this, v);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_CLEAR_OFFSET))(this);
		}
	};
}
