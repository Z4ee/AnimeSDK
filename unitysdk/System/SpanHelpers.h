#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/NUInt.h"
#include "unitysdk/System/Numerics/Vector_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define SYSTEM_SPANHELPERS_CLEARLESSTHANPOINTERSIZED_1_OFFSET UNITYSDK_OFFSET(0x1E77F5A0)
#define SYSTEM_SPANHELPERS_CLEARLESSTHANPOINTERSIZED_OFFSET UNITYSDK_OFFSET(0x1E77F510)
#define SYSTEM_SPANHELPERS_CLEARPOINTERSIZEDWITHOUTREFERENCES_OFFSET UNITYSDK_OFFSET(0x1E77F630)
#define SYSTEM_SPANHELPERS_CLEARPOINTERSIZEDWITHREFERENCES_OFFSET UNITYSDK_OFFSET(0x1E77F800)
#define SYSTEM_SPANHELPERS_GETVECTOR_OFFSET UNITYSDK_OFFSET(0x1E77E8D0)
#define SYSTEM_SPANHELPERS_INDEXOF_1_OFFSET UNITYSDK_OFFSET(0x1E77E450)
#define SYSTEM_SPANHELPERS_INDEXOF_2_OFFSET UNITYSDK_OFFSET(0x1E77EA70)
#define SYSTEM_SPANHELPERS_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1E77E3B0)
#define SYSTEM_SPANHELPERS_ISREFERENCEORCONTAINSREFERENCESCORE_OFFSET UNITYSDK_OFFSET(0x1E77EC60)
#define SYSTEM_SPANHELPERS_LESSTHANEQUAL_OFFSET UNITYSDK_OFFSET(0x1E77F920)
#define SYSTEM_SPANHELPERS_LOCATEFIRSTFOUNDBYTE_1_OFFSET UNITYSDK_OFFSET(0x1E77E8B0)
#define SYSTEM_SPANHELPERS_LOCATEFIRSTFOUNDBYTE_OFFSET UNITYSDK_OFFSET(0x1E77E660)
#define SYSTEM_SPANHELPERS_LOCATEFIRSTFOUNDCHAR_1_OFFSET UNITYSDK_OFFSET(0x1E77EC40)
#define SYSTEM_SPANHELPERS_LOCATEFIRSTFOUNDCHAR_OFFSET UNITYSDK_OFFSET(0x1E77EB00)
#define SYSTEM_SPANHELPERS_SEQUENCECOMPARETO_1_OFFSET UNITYSDK_OFFSET(0x1E77E960)
#define SYSTEM_SPANHELPERS_SEQUENCECOMPARETO_OFFSET UNITYSDK_OFFSET(0x1E77E7A0)
#define SYSTEM_SPANHELPERS_SEQUENCEEQUAL_OFFSET UNITYSDK_OFFSET(0x1E77E540)

namespace System
{
	inline static constexpr unsigned int SpanHelpers_TypeDefinitionIndex = 4973;

	class SpanHelpers : public ::System::Object
	{
	public:
		static ::System::Int32 IndexOf(::System::Byte& a1, ::System::Int32 a2, ::System::Byte& a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Byte&, ::System::Int32, ::System::Byte&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_INDEXOF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 IndexOf_1(::System::Byte& a1, ::System::Byte a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Byte&, ::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_INDEXOF_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SequenceEqual(::System::Byte& a1, ::System::Byte& a2, ::System::NUInt a3)
		{
			return ((::System::Boolean(*)(::System::Byte&, ::System::Byte&, ::System::NUInt))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_SEQUENCEEQUAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 LocateFirstFoundByte(::System::Numerics::Vector_1<::System::Byte> a1)
		{
			return ((::System::Int32(*)(::System::Numerics::Vector_1<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_LOCATEFIRSTFOUNDBYTE_OFFSET))(a1);
		}

		static ::System::Int32 SequenceCompareTo(::System::Byte& a1, ::System::Int32 a2, ::System::Byte& a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Byte&, ::System::Int32, ::System::Byte&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_SEQUENCECOMPARETO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 LocateFirstFoundByte_1(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_LOCATEFIRSTFOUNDBYTE_1_OFFSET))(a1);
		}

		static ::System::Numerics::Vector_1<::System::Byte> GetVector(::System::Byte a1)
		{
			return ((::System::Numerics::Vector_1<::System::Byte>(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_GETVECTOR_OFFSET))(a1);
		}

		static ::System::Int32 SequenceCompareTo_1(::System::Char& a1, ::System::Int32 a2, ::System::Char& a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Char&, ::System::Int32, ::System::Char&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_SEQUENCECOMPARETO_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 IndexOf_2(::System::Char& a1, ::System::Char a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Char&, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_INDEXOF_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 LocateFirstFoundChar(::System::Numerics::Vector_1<::System::UInt16> a1)
		{
			return ((::System::Int32(*)(::System::Numerics::Vector_1<::System::UInt16>))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_LOCATEFIRSTFOUNDCHAR_OFFSET))(a1);
		}

		static ::System::Int32 LocateFirstFoundChar_1(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_LOCATEFIRSTFOUNDCHAR_1_OFFSET))(a1);
		}

		static ::System::Boolean IsReferenceOrContainsReferencesCore(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_ISREFERENCEORCONTAINSREFERENCESCORE_OFFSET))(a1);
		}

		static ::System::Void ClearLessThanPointerSized(::System::Byte* a1, ::System::UIntPtr a2)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::UIntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_CLEARLESSTHANPOINTERSIZED_OFFSET))(a1, a2);
		}

		static ::System::Void ClearLessThanPointerSized_1(::System::Byte& a1, ::System::UIntPtr a2)
		{
			return ((::System::Void(*)(::System::Byte&, ::System::UIntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_CLEARLESSTHANPOINTERSIZED_1_OFFSET))(a1, a2);
		}

		static ::System::Void ClearPointerSizedWithoutReferences(::System::Byte& a1, ::System::UIntPtr a2)
		{
			return ((::System::Void(*)(::System::Byte&, ::System::UIntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_CLEARPOINTERSIZEDWITHOUTREFERENCES_OFFSET))(a1, a2);
		}

		static ::System::Void ClearPointerSizedWithReferences(::System::IntPtr& a1, ::System::UIntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr&, ::System::UIntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_CLEARPOINTERSIZEDWITHREFERENCES_OFFSET))(a1, a2);
		}

		static ::System::Boolean LessThanEqual(::System::IntPtr a1, ::System::UIntPtr a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::UIntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_LESSTHANEQUAL_OFFSET))(a1, a2);
		}
	};
}
