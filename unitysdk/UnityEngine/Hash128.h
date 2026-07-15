#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_HASH128_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x3ACACD0)
#define UNITYENGINE_HASH128_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3ACABB0)
#define UNITYENGINE_HASH128_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3ACAC90)
#define UNITYENGINE_HASH128_EQUALS_OFFSET UNITYSDK_OFFSET(0x3ACAC10)
#define UNITYENGINE_HASH128_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7A7F10)
#define UNITYENGINE_HASH128_GET_U64_0_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define UNITYENGINE_HASH128_GET_U64_1_OFFSET UNITYSDK_OFFSET(0x676DC0)
#define UNITYENGINE_HASH128_INTERNAL_HASH128TOSTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CCC5730)
#define UNITYENGINE_HASH128_INTERNAL_HASH128TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CCC5720)
#define UNITYENGINE_HASH128_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CCC57C0)
#define UNITYENGINE_HASH128_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1CCC56A0)
#define UNITYENGINE_HASH128_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1CCC5680)
#define UNITYENGINE_HASH128_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3ACABF0)
#define UNITYENGINE_HASH128__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3ACAB90)
#define UNITYENGINE_HASH128__CTOR_OFFSET UNITYSDK_OFFSET(0x7A7DF0)

namespace UnityEngine
{
	inline static constexpr unsigned int Hash128_TypeDefinitionIndex = 4193;

	struct alignas(4) Hash128
	{
		::System::UInt32 m_u32_0; // 0x10
		::System::UInt32 m_u32_1; // 0x14
		::System::UInt32 m_u32_2; // 0x18
		::System::UInt32 m_u32_3; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::UInt64 get_u64_0()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_GET_U64_0_OFFSET))(this);
		}

		::System::UInt64 get_u64_1()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_GET_U64_1_OFFSET))(this);
		}

		::System::Int32 CompareTo(::UnityEngine::Hash128 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_COMPARETO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_TOSTRING_OFFSET))(this);
		}

		static ::System::String* Internal_Hash128ToString(::UnityEngine::Hash128 a1)
		{
			return ((::System::String*(*)(::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_INTERNAL_HASH128TOSTRING_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Hash128 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 CompareTo_1(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_COMPARETO_1_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Hash128 a1, ::UnityEngine::Hash128 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Hash128, ::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan(::UnityEngine::Hash128 a1, ::UnityEngine::Hash128 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Hash128, ::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::UnityEngine::Hash128 a1, ::UnityEngine::Hash128 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Hash128, ::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::String* Internal_Hash128ToString_Injected(::UnityEngine::Hash128& a1)
		{
			return ((::System::String*(*)(::UnityEngine::Hash128&))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_INTERNAL_HASH128TOSTRING_INJECTED_OFFSET))(a1);
		}
	};
}
