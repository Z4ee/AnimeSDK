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

#define SYSTEM_MEMORYEXTENSIONS_ASMEMORY_1_OFFSET UNITYSDK_OFFSET(0x1851C080)
#define SYSTEM_MEMORYEXTENSIONS_ASMEMORY_2_OFFSET UNITYSDK_OFFSET(0x1851C120)
#define SYSTEM_MEMORYEXTENSIONS_ASMEMORY_OFFSET UNITYSDK_OFFSET(0x1851C060)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_1_OFFSET UNITYSDK_OFFSET(0x1851BF30)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET UNITYSDK_OFFSET(0x1851BED0)
#define SYSTEM_MEMORYEXTENSIONS_COMPARETOORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1851B980)
#define SYSTEM_MEMORYEXTENSIONS_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1851BB20)
#define SYSTEM_MEMORYEXTENSIONS_ENDSWITH_OFFSET UNITYSDK_OFFSET(0x1851BC90)
#define SYSTEM_MEMORYEXTENSIONS_EQUALSORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1851B8E0)
#define SYSTEM_MEMORYEXTENSIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1851B6D0)
#define SYSTEM_MEMORYEXTENSIONS_MEASURESTRINGADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x1851C1D0)
#define SYSTEM_MEMORYEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1851C1F0)

namespace System
{
	inline static constexpr unsigned int MemoryExtensions_TypeDefinitionIndex = 4962;

	class MemoryExtensions : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_StringAdjustment()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(MemoryExtensions_TypeDefinitionIndex)->GetStaticField(0x230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Boolean Equals(::System::ReadOnlySpan_1<::System::Char> span, ::System::ReadOnlySpan_1<::System::Char> other, ::System::StringComparison comparisonType)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::ReadOnlySpan_1<::System::Char>, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_EQUALS_OFFSET))(span, other, comparisonType);
		}

		static ::System::Boolean EqualsOrdinalIgnoreCase(::System::ReadOnlySpan_1<::System::Char> span, ::System::ReadOnlySpan_1<::System::Char> other)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_EQUALSORDINALIGNORECASE_OFFSET))(span, other);
		}

		static ::System::Int32 CompareTo(::System::ReadOnlySpan_1<::System::Char> span, ::System::ReadOnlySpan_1<::System::Char> other, ::System::StringComparison comparisonType)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::ReadOnlySpan_1<::System::Char>, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_COMPARETO_OFFSET))(span, other, comparisonType);
		}

		static ::System::Int32 CompareToOrdinalIgnoreCase(::System::ReadOnlySpan_1<::System::Char> strA, ::System::ReadOnlySpan_1<::System::Char> strB)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_COMPARETOORDINALIGNORECASE_OFFSET))(strA, strB);
		}

		static ::System::Boolean EndsWith(::System::ReadOnlySpan_1<::System::Char> span, ::System::ReadOnlySpan_1<::System::Char> value, ::System::StringComparison comparisonType)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::ReadOnlySpan_1<::System::Char>, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ENDSWITH_OFFSET))(span, value, comparisonType);
		}

		static ::System::ReadOnlySpan_1<::System::Char> AsSpan(::System::String* text)
		{
			return ((::System::ReadOnlySpan_1<::System::Char>(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET))(text);
		}

		static ::System::ReadOnlySpan_1<::System::Char> AsSpan_1(::System::String* text, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::ReadOnlySpan_1<::System::Char>(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASSPAN_1_OFFSET))(text, start, length);
		}

		static ::System::ReadOnlyMemory_1<::System::Char> AsMemory(::System::String* text)
		{
			return ((::System::ReadOnlyMemory_1<::System::Char>(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASMEMORY_OFFSET))(text);
		}

		static ::System::ReadOnlyMemory_1<::System::Char> AsMemory_1(::System::String* text, ::System::Int32 start)
		{
			return ((::System::ReadOnlyMemory_1<::System::Char>(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASMEMORY_1_OFFSET))(text, start);
		}

		static ::System::ReadOnlyMemory_1<::System::Char> AsMemory_2(::System::String* text, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::ReadOnlyMemory_1<::System::Char>(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASMEMORY_2_OFFSET))(text, start, length);
		}

		static ::System::IntPtr MeasureStringAdjustment()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_MEASURESTRINGADJUSTMENT_OFFSET))();
		}
	};
}
