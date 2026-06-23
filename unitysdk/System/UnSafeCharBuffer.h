#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_UNSAFECHARBUFFER_APPENDSTRING_OFFSET UNITYSDK_OFFSET(0x9CE8D0)
#define SYSTEM_UNSAFECHARBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x9CE8C0)

namespace System
{
	inline static constexpr unsigned int UnSafeCharBuffer_TypeDefinitionIndex = 351;

	struct alignas(8) UnSafeCharBuffer
	{
		::System::Char* m_buffer; // 0x10
		::System::Int32 m_totalSize; // 0x18
		::System::Int32 m_length; // 0x1C

		::System::Void _ctor(::System::Char* buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_UNSAFECHARBUFFER__CTOR_OFFSET))(this, buffer, bufferSize);
		}

		::System::Void AppendString(::System::String* stringToAppend)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_UNSAFECHARBUFFER_APPENDSTRING_OFFSET))(this, stringToAppend);
		}
	};
}
