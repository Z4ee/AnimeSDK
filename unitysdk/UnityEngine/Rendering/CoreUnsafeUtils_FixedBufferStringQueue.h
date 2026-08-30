#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_CLEAR_OFFSET UNITYSDK_OFFSET(0x3BB19C0)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x5FB30)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x2F0E230)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_TRYPOP_OFFSET UNITYSDK_OFFSET(0x3BB1970)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_TRYPUSH_OFFSET UNITYSDK_OFFSET(0x3BB1880)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x3BB1840)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CoreUnsafeUtils_FixedBufferStringQueue_TypeDefinitionIndex = 34807;

	struct alignas(8) CoreUnsafeUtils_FixedBufferStringQueue
	{
		::System::Byte* m_ReadCursor; // 0x10
		::System::Byte* m_WriteCursor; // 0x18
		::System::Byte* m_BufferEnd; // 0x20
		::System::Byte* m_BufferStart; // 0x28
		::System::Int32 m_BufferLength; // 0x30
		::System::Int32 _Count_k__BackingField; // 0x34

		::System::Void _ctor(::System::Byte* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_SET_COUNT_OFFSET))(this, a1);
		}

		::System::Boolean TryPush(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_TRYPUSH_OFFSET))(this, a1);
		}

		::System::Boolean TryPop(::System::String*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_TRYPOP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_CLEAR_OFFSET))(this);
		}
	};
}
