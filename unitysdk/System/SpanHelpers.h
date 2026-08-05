#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/NUInt.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define SYSTEM_SPANHELPERS_CLEARLESSTHANPOINTERSIZED_1_OFFSET UNITYSDK_OFFSET(0x1F08A150)
#define SYSTEM_SPANHELPERS_CLEARLESSTHANPOINTERSIZED_OFFSET UNITYSDK_OFFSET(0x1F08A0C0)
#define SYSTEM_SPANHELPERS_CLEARPOINTERSIZEDWITHOUTREFERENCES_OFFSET UNITYSDK_OFFSET(0x1F08A1E0)
#define SYSTEM_SPANHELPERS_CLEARPOINTERSIZEDWITHREFERENCES_OFFSET UNITYSDK_OFFSET(0x1F08A3B0)
#define SYSTEM_SPANHELPERS_INDEXOF_1_OFFSET UNITYSDK_OFFSET(0x1F0897A0)
#define SYSTEM_SPANHELPERS_INDEXOF_2_OFFSET UNITYSDK_OFFSET(0x1F089BC0)
#define SYSTEM_SPANHELPERS_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1F089700)
#define SYSTEM_SPANHELPERS_ISREFERENCEORCONTAINSREFERENCESCORE_OFFSET UNITYSDK_OFFSET(0x1F089C50)
#define SYSTEM_SPANHELPERS_LESSTHANEQUAL_OFFSET UNITYSDK_OFFSET(0x1F08A4D0)
#define SYSTEM_SPANHELPERS_SEQUENCECOMPARETO_1_OFFSET UNITYSDK_OFFSET(0x1F089A80)
#define SYSTEM_SPANHELPERS_SEQUENCECOMPARETO_OFFSET UNITYSDK_OFFSET(0x1F089970)
#define SYSTEM_SPANHELPERS_SEQUENCEEQUAL_OFFSET UNITYSDK_OFFSET(0x1F089890)

namespace System
{
	inline static constexpr unsigned int SpanHelpers_TypeDefinitionIndex = 6563;

	class SpanHelpers : public ::System::Object
	{
	public:
		static ::System::Int32 IndexOf(::System::Byte& searchSpace, ::System::Int32 searchSpaceLength, ::System::Byte& value, ::System::Int32 valueLength)
		{
			return ((::System::Int32(*)(::System::Byte&, ::System::Int32, ::System::Byte&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_INDEXOF_OFFSET))(searchSpace, searchSpaceLength, value, valueLength);
		}

		static ::System::Int32 IndexOf_1(::System::Byte& searchSpace, ::System::Byte value, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::Byte&, ::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_INDEXOF_1_OFFSET))(searchSpace, value, length);
		}

		static ::System::Boolean SequenceEqual(::System::Byte& first, ::System::Byte& second, ::System::NUInt length)
		{
			return ((::System::Boolean(*)(::System::Byte&, ::System::Byte&, ::System::NUInt))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_SEQUENCEEQUAL_OFFSET))(first, second, length);
		}

		static ::System::Int32 SequenceCompareTo(::System::Byte& first, ::System::Int32 firstLength, ::System::Byte& second, ::System::Int32 secondLength)
		{
			return ((::System::Int32(*)(::System::Byte&, ::System::Int32, ::System::Byte&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_SEQUENCECOMPARETO_OFFSET))(first, firstLength, second, secondLength);
		}

		static ::System::Int32 SequenceCompareTo_1(::System::Char& first, ::System::Int32 firstLength, ::System::Char& second, ::System::Int32 secondLength)
		{
			return ((::System::Int32(*)(::System::Char&, ::System::Int32, ::System::Char&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_SEQUENCECOMPARETO_1_OFFSET))(first, firstLength, second, secondLength);
		}

		static ::System::Int32 IndexOf_2(::System::Char& searchSpace, ::System::Char value, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::Char&, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_INDEXOF_2_OFFSET))(searchSpace, value, length);
		}

		static ::System::Boolean IsReferenceOrContainsReferencesCore(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_ISREFERENCEORCONTAINSREFERENCESCORE_OFFSET))(type);
		}

		static ::System::Void ClearLessThanPointerSized(::System::Byte* ptr, ::System::UIntPtr byteLength)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::UIntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_CLEARLESSTHANPOINTERSIZED_OFFSET))(ptr, byteLength);
		}

		static ::System::Void ClearLessThanPointerSized_1(::System::Byte& b, ::System::UIntPtr byteLength)
		{
			return ((::System::Void(*)(::System::Byte&, ::System::UIntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_CLEARLESSTHANPOINTERSIZED_1_OFFSET))(b, byteLength);
		}

		static ::System::Void ClearPointerSizedWithoutReferences(::System::Byte& b, ::System::UIntPtr byteLength)
		{
			return ((::System::Void(*)(::System::Byte&, ::System::UIntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_CLEARPOINTERSIZEDWITHOUTREFERENCES_OFFSET))(b, byteLength);
		}

		static ::System::Void ClearPointerSizedWithReferences(::System::IntPtr& ip, ::System::UIntPtr pointerSizeLength)
		{
			return ((::System::Void(*)(::System::IntPtr&, ::System::UIntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_CLEARPOINTERSIZEDWITHREFERENCES_OFFSET))(ip, pointerSizeLength);
		}

		static ::System::Boolean LessThanEqual(::System::IntPtr index, ::System::UIntPtr length)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::UIntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_LESSTHANEQUAL_OFFSET))(index, length);
		}
	};
}
