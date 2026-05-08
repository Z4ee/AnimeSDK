#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/NUInt.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/StringComparison.h"

namespace System { class String; }

#define SYSTEM_MEMORYEXTENSIONS_ASMEMORY_OFFSET UNITYSDK_OFFSET(0x1BA1DCE0)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_1_OFFSET UNITYSDK_OFFSET(0x1BA1DB90)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET UNITYSDK_OFFSET(0x1BA1DB10)
#define SYSTEM_MEMORYEXTENSIONS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1BA1D930)
#define SYSTEM_MEMORYEXTENSIONS_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1BA1DA00)
#define SYSTEM_MEMORYEXTENSIONS_MEASURESTRINGADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x1BA1DD90)
#define SYSTEM_MEMORYEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA1DDE0)

namespace System
{
	inline static constexpr unsigned int MemoryExtensions_TypeDefinitionIndex = 7543;

	class MemoryExtensions : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_StringAdjustment()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(MemoryExtensions_TypeDefinitionIndex)->GetStaticField(0x32D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Boolean Contains(::System::ReadOnlySpan_1<::System::Char> span, ::System::ReadOnlySpan_1<::System::Char> value, ::System::StringComparison comparisonType)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::ReadOnlySpan_1<::System::Char>, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_CONTAINS_OFFSET))(span, value, comparisonType);
		}

		static ::System::Int32 IndexOf(::System::ReadOnlySpan_1<::System::Char> span, ::System::ReadOnlySpan_1<::System::Char> value, ::System::StringComparison comparisonType)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::ReadOnlySpan_1<::System::Char>, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_INDEXOF_OFFSET))(span, value, comparisonType);
		}

		static ::System::ReadOnlySpan_1<::System::Char> AsSpan(::System::String* text)
		{
			return ((::System::ReadOnlySpan_1<::System::Char>(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET))(text);
		}

		static ::System::ReadOnlySpan_1<::System::Char> AsSpan_1(::System::String* text, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::ReadOnlySpan_1<::System::Char>(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASSPAN_1_OFFSET))(text, start, length);
		}

		static ::System::ReadOnlyMemory_1<::System::Char> AsMemory(::System::String* text, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::ReadOnlyMemory_1<::System::Char>(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASMEMORY_OFFSET))(text, start, length);
		}

		static ::System::IntPtr MeasureStringAdjustment()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_MEASURESTRINGADJUSTMENT_OFFSET))();
		}
	};
}
