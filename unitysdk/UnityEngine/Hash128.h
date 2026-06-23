#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_HASH128_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x9C7510)
#define UNITYENGINE_HASH128_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9C73D0)
#define UNITYENGINE_HASH128_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9C74B0)
#define UNITYENGINE_HASH128_EQUALS_OFFSET UNITYSDK_OFFSET(0x9C7430)
#define UNITYENGINE_HASH128_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9C74F0)
#define UNITYENGINE_HASH128_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9C73B0)
#define UNITYENGINE_HASH128_GET_U64_0_OFFSET UNITYSDK_OFFSET(0x246290)
#define UNITYENGINE_HASH128_GET_U64_1_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define UNITYENGINE_HASH128_INTERNAL_HASH128TOSTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF31BA0)
#define UNITYENGINE_HASH128_INTERNAL_HASH128TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CF31B90)
#define UNITYENGINE_HASH128_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CF31C30)
#define UNITYENGINE_HASH128_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1CF31B10)
#define UNITYENGINE_HASH128_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1CF31AF0)
#define UNITYENGINE_HASH128_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9C7410)
#define UNITYENGINE_HASH128__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9C7390)
#define UNITYENGINE_HASH128__CTOR_OFFSET UNITYSDK_OFFSET(0x588040)

namespace UnityEngine
{
	inline static constexpr unsigned int Hash128_TypeDefinitionIndex = 5277;

	struct alignas(4) Hash128
	{
		::System::UInt32 m_u32_0; // 0x10
		::System::UInt32 m_u32_1; // 0x14
		::System::UInt32 m_u32_2; // 0x18
		::System::UInt32 m_u32_3; // 0x1C

		::System::Void _ctor(::System::UInt32 u32_0, ::System::UInt32 u32_1, ::System::UInt32 u32_2, ::System::UInt32 u32_3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128__CTOR_OFFSET))(this, u32_0, u32_1, u32_2, u32_3);
		}

		::System::Void _ctor_1(::System::UInt64 u64_0, ::System::UInt64 u64_1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128__CTOR_1_OFFSET))(this, u64_0, u64_1);
		}

		::System::UInt64 get_u64_0()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_GET_U64_0_OFFSET))(this);
		}

		::System::UInt64 get_u64_1()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_GET_U64_1_OFFSET))(this);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_GET_ISVALID_OFFSET))(this);
		}

		::System::Int32 CompareTo(::UnityEngine::Hash128 rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_COMPARETO_OFFSET))(this, rhs);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_TOSTRING_OFFSET))(this);
		}

		static ::System::String* Internal_Hash128ToString(::UnityEngine::Hash128 hash128)
		{
			return ((::System::String*(*)(::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_INTERNAL_HASH128TOSTRING_OFFSET))(hash128);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::UnityEngine::Hash128 obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 CompareTo_1(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_COMPARETO_1_OFFSET))(this, obj);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Hash128 hash1, ::UnityEngine::Hash128 hash2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Hash128, ::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_OP_EQUALITY_OFFSET))(hash1, hash2);
		}

		static ::System::Boolean op_LessThan(::UnityEngine::Hash128 x, ::UnityEngine::Hash128 y)
		{
			return ((::System::Boolean(*)(::UnityEngine::Hash128, ::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_OP_LESSTHAN_OFFSET))(x, y);
		}

		static ::System::Boolean op_GreaterThan(::UnityEngine::Hash128 x, ::UnityEngine::Hash128 y)
		{
			return ((::System::Boolean(*)(::UnityEngine::Hash128, ::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_OP_GREATERTHAN_OFFSET))(x, y);
		}

		static ::System::String* Internal_Hash128ToString_Injected(::UnityEngine::Hash128& hash128)
		{
			return ((::System::String*(*)(::UnityEngine::Hash128&))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_INTERNAL_HASH128TOSTRING_INJECTED_OFFSET))(hash128);
		}
	};
}
