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

#define SYSTEM_MEMORYEXTENSIONS_ASMEMORY_1_OFFSET UNITYSDK_OFFSET(0x1EE19520)
#define SYSTEM_MEMORYEXTENSIONS_ASMEMORY_2_OFFSET UNITYSDK_OFFSET(0x1EE195C0)
#define SYSTEM_MEMORYEXTENSIONS_ASMEMORY_OFFSET UNITYSDK_OFFSET(0x1EE19500)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_1_OFFSET UNITYSDK_OFFSET(0x1EE193D0)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET UNITYSDK_OFFSET(0x1EE19370)
#define SYSTEM_MEMORYEXTENSIONS_COMPARETOORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1EE18E20)
#define SYSTEM_MEMORYEXTENSIONS_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1EE18FC0)
#define SYSTEM_MEMORYEXTENSIONS_ENDSWITH_OFFSET UNITYSDK_OFFSET(0x1EE19130)
#define SYSTEM_MEMORYEXTENSIONS_EQUALSORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1EE18D80)
#define SYSTEM_MEMORYEXTENSIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EE18B70)
#define SYSTEM_MEMORYEXTENSIONS_MEASURESTRINGADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x1EE19670)
#define SYSTEM_MEMORYEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE19690)

namespace System
{
	inline static constexpr unsigned int MemoryExtensions_TypeDefinitionIndex = 4961;

	class MemoryExtensions : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_StringAdjustment()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(MemoryExtensions_TypeDefinitionIndex)->GetStaticField(0x110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Boolean Equals(::System::ReadOnlySpan_1<::System::Char> a1, ::System::ReadOnlySpan_1<::System::Char> a2, ::System::StringComparison a3)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::ReadOnlySpan_1<::System::Char>, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_EQUALS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean EqualsOrdinalIgnoreCase(::System::ReadOnlySpan_1<::System::Char> a1, ::System::ReadOnlySpan_1<::System::Char> a2)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_EQUALSORDINALIGNORECASE_OFFSET))(a1, a2);
		}

		static ::System::Int32 CompareTo(::System::ReadOnlySpan_1<::System::Char> a1, ::System::ReadOnlySpan_1<::System::Char> a2, ::System::StringComparison a3)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::ReadOnlySpan_1<::System::Char>, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_COMPARETO_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CompareToOrdinalIgnoreCase(::System::ReadOnlySpan_1<::System::Char> a1, ::System::ReadOnlySpan_1<::System::Char> a2)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_COMPARETOORDINALIGNORECASE_OFFSET))(a1, a2);
		}

		static ::System::Boolean EndsWith(::System::ReadOnlySpan_1<::System::Char> a1, ::System::ReadOnlySpan_1<::System::Char> a2, ::System::StringComparison a3)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::ReadOnlySpan_1<::System::Char>, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ENDSWITH_OFFSET))(a1, a2, a3);
		}

		static ::System::ReadOnlySpan_1<::System::Char> AsSpan(::System::String* a1)
		{
			return ((::System::ReadOnlySpan_1<::System::Char>(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET))(a1);
		}

		static ::System::ReadOnlySpan_1<::System::Char> AsSpan_1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::ReadOnlySpan_1<::System::Char>(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASSPAN_1_OFFSET))(a1, a2, a3);
		}

		static ::System::ReadOnlyMemory_1<::System::Char> AsMemory(::System::String* a1)
		{
			return ((::System::ReadOnlyMemory_1<::System::Char>(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASMEMORY_OFFSET))(a1);
		}

		static ::System::ReadOnlyMemory_1<::System::Char> AsMemory_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::ReadOnlyMemory_1<::System::Char>(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASMEMORY_1_OFFSET))(a1, a2);
		}

		static ::System::ReadOnlyMemory_1<::System::Char> AsMemory_2(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::ReadOnlyMemory_1<::System::Char>(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASMEMORY_2_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr MeasureStringAdjustment()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_MEASURESTRINGADJUSTMENT_OFFSET))();
		}
	};
}
