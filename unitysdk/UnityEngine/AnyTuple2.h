#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AnyType.h"

namespace System { class String; }

#define UNITYENGINE_ANYTUPLE2_FORMATTONATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E1E1CA0)
#define UNITYENGINE_ANYTUPLE2_FORMATTONATIVESTRING_OFFSET UNITYSDK_OFFSET(0x3C565F0)
#define UNITYENGINE_ANYTUPLE2_GETHASHCODEWITHSEED_OFFSET UNITYSDK_OFFSET(0x3C56580)
#define UNITYENGINE_ANYTUPLE2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C56510)
#define UNITYENGINE_ANYTUPLE2_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x6B3D50)
#define UNITYENGINE_ANYTUPLE2_GET_ITEM1_OFFSET UNITYSDK_OFFSET(0x14A80)
#define UNITYENGINE_ANYTUPLE2_GET_ITEM2_OFFSET UNITYSDK_OFFSET(0x900A90)
#define UNITYENGINE_ANYTUPLE2_GET_OFFSET UNITYSDK_OFFSET(0x3C564B0)
#define UNITYENGINE_ANYTUPLE2_SET_ITEM1_OFFSET UNITYSDK_OFFSET(0x148D0)
#define UNITYENGINE_ANYTUPLE2_SET_ITEM2_OFFSET UNITYSDK_OFFSET(0x3B8AA30)
#define UNITYENGINE_ANYTUPLE2_TOSTRINGINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E1E1C60)
#define UNITYENGINE_ANYTUPLE2_TOSTRINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x3C56500)
#define UNITYENGINE_ANYTUPLE2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C56500)
#define UNITYENGINE_ANYTUPLE2__CTOR_OFFSET UNITYSDK_OFFSET(0x6BB430)

namespace UnityEngine
{
	inline static constexpr unsigned int AnyTuple2_TypeDefinitionIndex = 4292;

	struct alignas(8) AnyTuple2
	{
		::UnityEngine::AnyType _Item1_k__BackingField; // 0x10
		::UnityEngine::AnyType _Item2_k__BackingField; // 0x20

		::System::Void _ctor(::UnityEngine::AnyType a1, ::UnityEngine::AnyType a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_GET_COUNT_OFFSET))(this);
		}

		::UnityEngine::AnyType Get(::System::Int32 a1)
		{
			return ((::UnityEngine::AnyType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_GET_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetHashCodeWithSeed(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_GETHASHCODEWITHSEED_OFFSET))(this, a1);
		}

		::System::String* ToStringInternal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_TOSTRINGINTERNAL_OFFSET))(this);
		}

		/*
		::UnityEngine::NativeString FormatToNativeString(::System::Boolean a1)
		{
			return ((::UnityEngine::NativeString(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_FORMATTONATIVESTRING_OFFSET))(this, a1);
		}
		*/

		::UnityEngine::AnyType get_Item1()
		{
			return ((::UnityEngine::AnyType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_GET_ITEM1_OFFSET))(this);
		}

		::System::Void set_Item1(::UnityEngine::AnyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_SET_ITEM1_OFFSET))(this, a1);
		}

		::UnityEngine::AnyType get_Item2()
		{
			return ((::UnityEngine::AnyType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_GET_ITEM2_OFFSET))(this);
		}

		::System::Void set_Item2(::UnityEngine::AnyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_SET_ITEM2_OFFSET))(this, a1);
		}

		static ::System::String* ToStringInternal_Injected(::UnityEngine::AnyTuple2& a1)
		{
			return ((::System::String*(*)(::UnityEngine::AnyTuple2&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_TOSTRINGINTERNAL_INJECTED_OFFSET))(a1);
		}

		/*
		static ::System::Void FormatToNativeString_Injected(::UnityEngine::AnyTuple2& a1, ::System::Boolean a2, ::UnityEngine::NativeString& a3)
		{
			return ((::System::Void(*)(::UnityEngine::AnyTuple2&, ::System::Boolean, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE2_FORMATTONATIVESTRING_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/
	};
}
