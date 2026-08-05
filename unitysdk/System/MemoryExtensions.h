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

#define SYSTEM_MEMORYEXTENSIONS_ASMEMORY_OFFSET UNITYSDK_OFFSET(0x1F088700)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_1_OFFSET UNITYSDK_OFFSET(0x1F0885B0)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET UNITYSDK_OFFSET(0x1F088530)
#define SYSTEM_MEMORYEXTENSIONS_COMPARETOORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1F0883A0)
#define SYSTEM_MEMORYEXTENSIONS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1F087EF0)
#define SYSTEM_MEMORYEXTENSIONS_EQUALSORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1F0882D0)
#define SYSTEM_MEMORYEXTENSIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F0880D0)
#define SYSTEM_MEMORYEXTENSIONS_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1F087FC0)
#define SYSTEM_MEMORYEXTENSIONS_MEASURESTRINGADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x1F0887B0)
#define SYSTEM_MEMORYEXTENSIONS_TRIMEND_OFFSET UNITYSDK_OFFSET(0x1F087D10)
#define SYSTEM_MEMORYEXTENSIONS_TRIMSTART_OFFSET UNITYSDK_OFFSET(0x1F087B50)
#define SYSTEM_MEMORYEXTENSIONS_TRIM_OFFSET UNITYSDK_OFFSET(0x1F087AA0)
#define SYSTEM_MEMORYEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F088800)

namespace System
{
	inline static constexpr unsigned int MemoryExtensions_TypeDefinitionIndex = 6557;

	class MemoryExtensions : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_StringAdjustment()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(MemoryExtensions_TypeDefinitionIndex)->GetStaticField(0x3100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::ReadOnlySpan_1<::System::Char> Trim(::System::ReadOnlySpan_1<::System::Char> span)
		{
			return ((::System::ReadOnlySpan_1<::System::Char>(*)(::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_TRIM_OFFSET))(span);
		}

		static ::System::ReadOnlySpan_1<::System::Char> TrimStart(::System::ReadOnlySpan_1<::System::Char> span)
		{
			return ((::System::ReadOnlySpan_1<::System::Char>(*)(::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_TRIMSTART_OFFSET))(span);
		}

		static ::System::ReadOnlySpan_1<::System::Char> TrimEnd(::System::ReadOnlySpan_1<::System::Char> span)
		{
			return ((::System::ReadOnlySpan_1<::System::Char>(*)(::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_TRIMEND_OFFSET))(span);
		}

		static ::System::Boolean Contains(::System::ReadOnlySpan_1<::System::Char> span, ::System::ReadOnlySpan_1<::System::Char> value, ::System::StringComparison comparisonType)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::ReadOnlySpan_1<::System::Char>, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_CONTAINS_OFFSET))(span, value, comparisonType);
		}

		static ::System::Boolean Equals(::System::ReadOnlySpan_1<::System::Char> span, ::System::ReadOnlySpan_1<::System::Char> other, ::System::StringComparison comparisonType)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::ReadOnlySpan_1<::System::Char>, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_EQUALS_OFFSET))(span, other, comparisonType);
		}

		static ::System::Boolean EqualsOrdinalIgnoreCase(::System::ReadOnlySpan_1<::System::Char> span, ::System::ReadOnlySpan_1<::System::Char> other)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_EQUALSORDINALIGNORECASE_OFFSET))(span, other);
		}

		static ::System::Int32 CompareToOrdinalIgnoreCase(::System::ReadOnlySpan_1<::System::Char> strA, ::System::ReadOnlySpan_1<::System::Char> strB)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_COMPARETOORDINALIGNORECASE_OFFSET))(strA, strB);
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
