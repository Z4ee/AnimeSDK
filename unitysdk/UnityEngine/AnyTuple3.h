#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AnyType.h"

namespace System { class String; }

#define UNITYENGINE_ANYTUPLE3_FORMATTONATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B278510)
#define UNITYENGINE_ANYTUPLE3_FORMATTONATIVESTRING_OFFSET UNITYSDK_OFFSET(0x387DFB0)
#define UNITYENGINE_ANYTUPLE3_GETHASHCODEWITHSEED_OFFSET UNITYSDK_OFFSET(0x387DF10)
#define UNITYENGINE_ANYTUPLE3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x387DE60)
#define UNITYENGINE_ANYTUPLE3_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x2C1B900)
#define UNITYENGINE_ANYTUPLE3_GET_ITEM1_OFFSET UNITYSDK_OFFSET(0x2BC6740)
#define UNITYENGINE_ANYTUPLE3_GET_ITEM2_OFFSET UNITYSDK_OFFSET(0x2BEC550)
#define UNITYENGINE_ANYTUPLE3_GET_ITEM3_OFFSET UNITYSDK_OFFSET(0x2C1C510)
#define UNITYENGINE_ANYTUPLE3_GET_OFFSET UNITYSDK_OFFSET(0x387DDF0)
#define UNITYENGINE_ANYTUPLE3_SET_ITEM1_OFFSET UNITYSDK_OFFSET(0x2C2F090)
#define UNITYENGINE_ANYTUPLE3_SET_ITEM2_OFFSET UNITYSDK_OFFSET(0x3873D70)
#define UNITYENGINE_ANYTUPLE3_SET_ITEM3_OFFSET UNITYSDK_OFFSET(0x2C1C520)
#define UNITYENGINE_ANYTUPLE3_TOSTRINGINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2784D0)
#define UNITYENGINE_ANYTUPLE3_TOSTRINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x387DE50)
#define UNITYENGINE_ANYTUPLE3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x387DE50)
#define UNITYENGINE_ANYTUPLE3__CTOR_OFFSET UNITYSDK_OFFSET(0x2BBFB00)

namespace UnityEngine
{
	inline static constexpr unsigned int AnyTuple3_TypeDefinitionIndex = 4278;

	struct alignas(8) AnyTuple3
	{
		::UnityEngine::AnyType _Item1_k__BackingField; // 0x10
		::UnityEngine::AnyType _Item2_k__BackingField; // 0x20
		::UnityEngine::AnyType _Item3_k__BackingField; // 0x30

		::System::Void _ctor(::UnityEngine::AnyType a1, ::UnityEngine::AnyType a2, ::UnityEngine::AnyType a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType, ::UnityEngine::AnyType, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_GET_COUNT_OFFSET))(this);
		}

		::UnityEngine::AnyType Get(::System::Int32 a1)
		{
			return ((::UnityEngine::AnyType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_GET_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetHashCodeWithSeed(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_GETHASHCODEWITHSEED_OFFSET))(this, a1);
		}

		::System::String* ToStringInternal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_TOSTRINGINTERNAL_OFFSET))(this);
		}

		/*
		::UnityEngine::NativeString FormatToNativeString(::System::Boolean a1)
		{
			return ((::UnityEngine::NativeString(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_FORMATTONATIVESTRING_OFFSET))(this, a1);
		}
		*/

		::UnityEngine::AnyType get_Item1()
		{
			return ((::UnityEngine::AnyType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_GET_ITEM1_OFFSET))(this);
		}

		::System::Void set_Item1(::UnityEngine::AnyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_SET_ITEM1_OFFSET))(this, a1);
		}

		::UnityEngine::AnyType get_Item2()
		{
			return ((::UnityEngine::AnyType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_GET_ITEM2_OFFSET))(this);
		}

		::System::Void set_Item2(::UnityEngine::AnyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_SET_ITEM2_OFFSET))(this, a1);
		}

		::UnityEngine::AnyType get_Item3()
		{
			return ((::UnityEngine::AnyType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_GET_ITEM3_OFFSET))(this);
		}

		::System::Void set_Item3(::UnityEngine::AnyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_SET_ITEM3_OFFSET))(this, a1);
		}

		static ::System::String* ToStringInternal_Injected(::UnityEngine::AnyTuple3& a1)
		{
			return ((::System::String*(*)(::UnityEngine::AnyTuple3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_TOSTRINGINTERNAL_INJECTED_OFFSET))(a1);
		}

		/*
		static ::System::Void FormatToNativeString_Injected(::UnityEngine::AnyTuple3& a1, ::System::Boolean a2, ::UnityEngine::NativeString& a3)
		{
			return ((::System::Void(*)(::UnityEngine::AnyTuple3&, ::System::Boolean, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE3_FORMATTONATIVESTRING_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/
	};
}
