#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEqualityComparer; }

#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_1_OFFSET UNITYSDK_OFFSET(0x1DF48A20)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_2_OFFSET UNITYSDK_OFFSET(0x1DF48AE0)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_3_OFFSET UNITYSDK_OFFSET(0x1DF48C00)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_4_OFFSET UNITYSDK_OFFSET(0x1DF48D90)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_5_OFFSET UNITYSDK_OFFSET(0x1DF48E20)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_6_OFFSET UNITYSDK_OFFSET(0x1DF48F00)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x1DF489B0)
#define SYSTEM_VALUETUPLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define SYSTEM_VALUETUPLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x4ED2C0)
#define SYSTEM_VALUETUPLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9EA6E0)
#define SYSTEM_VALUETUPLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define SYSTEM_VALUETUPLE_SYSTEM_COLLECTIONS_ISTRUCTURALCOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9EA790)
#define SYSTEM_VALUETUPLE_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9EA730)
#define SYSTEM_VALUETUPLE_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define SYSTEM_VALUETUPLE_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9EA780)
#define SYSTEM_VALUETUPLE_SYSTEM_IVALUETUPLEINTERNAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define SYSTEM_VALUETUPLE_SYSTEM_IVALUETUPLEINTERNAL_TOSTRINGEND_OFFSET UNITYSDK_OFFSET(0x9EA7E0)
#define SYSTEM_VALUETUPLE_SYSTEM_RUNTIME_COMPILERSERVICES_ITUPLE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define SYSTEM_VALUETUPLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9EA7A0)

namespace System
{
	inline static constexpr unsigned int ValueTuple_TypeDefinitionIndex = 117;

	struct alignas(1) ValueTuple
	{
		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::ValueTuple other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean System_Collections_IStructuralEquatable_Equals(::System::Object* other, ::System::Collections::IEqualityComparer* comparer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_EQUALS_OFFSET))(this, other, comparer);
		}

		::System::Int32 System_IComparable_CompareTo(::System::Object* other)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET))(this, other);
		}

		::System::Int32 CompareTo(::System::ValueTuple other)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMPARETO_OFFSET))(this, other);
		}

		::System::Int32 System_Collections_IStructuralComparable_CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM_COLLECTIONS_ISTRUCTURALCOMPARABLE_COMPARETO_OFFSET))(this, other, comparer);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_GETHASHCODE_OFFSET))(this, comparer);
		}

		::System::Int32 System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer* comparer)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM_IVALUETUPLEINTERNAL_GETHASHCODE_OFFSET))(this, comparer);
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

		static ::System::Int32 CombineHashCodes(::System::Int32 h1, ::System::Int32 h2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_OFFSET))(h1, h2);
		}

		static ::System::Int32 CombineHashCodes_1(::System::Int32 h1, ::System::Int32 h2, ::System::Int32 h3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_1_OFFSET))(h1, h2, h3);
		}

		static ::System::Int32 CombineHashCodes_2(::System::Int32 h1, ::System::Int32 h2, ::System::Int32 h3, ::System::Int32 h4)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_2_OFFSET))(h1, h2, h3, h4);
		}

		static ::System::Int32 CombineHashCodes_3(::System::Int32 h1, ::System::Int32 h2, ::System::Int32 h3, ::System::Int32 h4, ::System::Int32 h5)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_3_OFFSET))(h1, h2, h3, h4, h5);
		}

		static ::System::Int32 CombineHashCodes_4(::System::Int32 h1, ::System::Int32 h2, ::System::Int32 h3, ::System::Int32 h4, ::System::Int32 h5, ::System::Int32 h6)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_4_OFFSET))(h1, h2, h3, h4, h5, h6);
		}

		static ::System::Int32 CombineHashCodes_5(::System::Int32 h1, ::System::Int32 h2, ::System::Int32 h3, ::System::Int32 h4, ::System::Int32 h5, ::System::Int32 h6, ::System::Int32 h7)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_5_OFFSET))(h1, h2, h3, h4, h5, h6, h7);
		}

		static ::System::Int32 CombineHashCodes_6(::System::Int32 h1, ::System::Int32 h2, ::System::Int32 h3, ::System::Int32 h4, ::System::Int32 h5, ::System::Int32 h6, ::System::Int32 h7, ::System::Int32 h8)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_6_OFFSET))(h1, h2, h3, h4, h5, h6, h7, h8);
		}
	};
}
