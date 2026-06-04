#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEqualityComparer; }

#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_1_OFFSET UNITYSDK_OFFSET(0x1865AA00)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_2_OFFSET UNITYSDK_OFFSET(0x1865AA70)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_3_OFFSET UNITYSDK_OFFSET(0x1865AB10)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_4_OFFSET UNITYSDK_OFFSET(0x1865ABE0)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_5_OFFSET UNITYSDK_OFFSET(0x1865ACE0)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_6_OFFSET UNITYSDK_OFFSET(0x1865AE10)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x1865A9C0)
#define SYSTEM_VALUETUPLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x136CD0)
#define SYSTEM_VALUETUPLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1865A9B0)
#define SYSTEM_VALUETUPLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2BFAAD0)
#define SYSTEM_VALUETUPLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3832470)
#define SYSTEM_VALUETUPLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x136CD0)
#define SYSTEM_VALUETUPLE_SYSTEM_COLLECTIONS_ISTRUCTURALCOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3832520)
#define SYSTEM_VALUETUPLE_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x38324C0)
#define SYSTEM_VALUETUPLE_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x136CD0)
#define SYSTEM_VALUETUPLE_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3832510)
#define SYSTEM_VALUETUPLE_SYSTEM_IVALUETUPLEINTERNAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x136CD0)
#define SYSTEM_VALUETUPLE_SYSTEM_IVALUETUPLEINTERNAL_TOSTRINGEND_OFFSET UNITYSDK_OFFSET(0x3832570)
#define SYSTEM_VALUETUPLE_SYSTEM_RUNTIME_COMPILERSERVICES_ITUPLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3832580)
#define SYSTEM_VALUETUPLE_SYSTEM_RUNTIME_COMPILERSERVICES_ITUPLE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x136CD0)
#define SYSTEM_VALUETUPLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3832530)

namespace System
{
	inline static constexpr unsigned int ValueTuple_TypeDefinitionIndex = 127;

	struct alignas(1) ValueTuple
	{
		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::ValueTuple a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean System_Collections_IStructuralEquatable_Equals(::System::Object* a1, ::System::Collections::IEqualityComparer* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 System_IComparable_CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::System::ValueTuple a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 System_Collections_IStructuralComparable_CompareTo(::System::Object* a1, ::System::Collections::IComparer* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM_COLLECTIONS_ISTRUCTURALCOMPARABLE_COMPARETO_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_GETHASHCODE_OFFSET))(this, a1);
		}

		::System::Int32 System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM_IVALUETUPLEINTERNAL_GETHASHCODE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_TOSTRING_OFFSET))(this);
		}

		::System::String* System_IValueTupleInternal_ToStringEnd()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM_IVALUETUPLEINTERNAL_TOSTRINGEND_OFFSET))(this);
		}

		::System::Int32 System_Runtime_CompilerServices_ITuple_get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM_RUNTIME_COMPILERSERVICES_ITUPLE_GET_LENGTH_OFFSET))(this);
		}

		::System::Object* System_Runtime_CompilerServices_ITuple_get_Item(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM_RUNTIME_COMPILERSERVICES_ITUPLE_GET_ITEM_OFFSET))(this, a1);
		}

		static ::System::ValueTuple Create()
		{
			return ((::System::ValueTuple(*)())((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_CREATE_OFFSET))();
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_OFFSET))(a1, a2);
		}

		static ::System::Int32 CombineHashCodes_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CombineHashCodes_2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 CombineHashCodes_3(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 CombineHashCodes_4(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_4_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 CombineHashCodes_5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_5_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Int32 CombineHashCodes_6(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_6_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
