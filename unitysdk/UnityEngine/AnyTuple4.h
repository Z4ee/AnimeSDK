#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AnyType.h"

namespace System { class String; }

#define UNITYENGINE_ANYTUPLE4_FORMATTONATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A425660)
#define UNITYENGINE_ANYTUPLE4_FORMATTONATIVESTRING_OFFSET UNITYSDK_OFFSET(0x22E1D60)
#define UNITYENGINE_ANYTUPLE4_GETHASHCODEWITHSEED_OFFSET UNITYSDK_OFFSET(0x22E1C90)
#define UNITYENGINE_ANYTUPLE4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22E1BA0)
#define UNITYENGINE_ANYTUPLE4_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x167CE40)
#define UNITYENGINE_ANYTUPLE4_GET_ITEM1_OFFSET UNITYSDK_OFFSET(0x7AEA80)
#define UNITYENGINE_ANYTUPLE4_GET_ITEM2_OFFSET UNITYSDK_OFFSET(0x164C290)
#define UNITYENGINE_ANYTUPLE4_GET_ITEM3_OFFSET UNITYSDK_OFFSET(0x167DC70)
#define UNITYENGINE_ANYTUPLE4_GET_ITEM4_OFFSET UNITYSDK_OFFSET(0x174F7F0)
#define UNITYENGINE_ANYTUPLE4_GET_OFFSET UNITYSDK_OFFSET(0x22E1B10)
#define UNITYENGINE_ANYTUPLE4_SET_ITEM1_OFFSET UNITYSDK_OFFSET(0x1682A10)
#define UNITYENGINE_ANYTUPLE4_SET_ITEM2_OFFSET UNITYSDK_OFFSET(0x22D8270)
#define UNITYENGINE_ANYTUPLE4_SET_ITEM3_OFFSET UNITYSDK_OFFSET(0x167DC80)
#define UNITYENGINE_ANYTUPLE4_SET_ITEM4_OFFSET UNITYSDK_OFFSET(0x229AF50)
#define UNITYENGINE_ANYTUPLE4_TOSTRINGINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A425620)
#define UNITYENGINE_ANYTUPLE4_TOSTRINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x22E1B90)
#define UNITYENGINE_ANYTUPLE4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22E1B90)
#define UNITYENGINE_ANYTUPLE4__CTOR_OFFSET UNITYSDK_OFFSET(0x22DF290)

namespace UnityEngine
{
	inline static constexpr unsigned int AnyTuple4_TypeDefinitionIndex = 4105;

	struct alignas(8) AnyTuple4
	{
		::UnityEngine::AnyType _Item1_k__BackingField; // 0x10
		::UnityEngine::AnyType _Item2_k__BackingField; // 0x20
		::UnityEngine::AnyType _Item3_k__BackingField; // 0x30
		::UnityEngine::AnyType _Item4_k__BackingField; // 0x40

		::System::Void _ctor(::UnityEngine::AnyType item1, ::UnityEngine::AnyType item2, ::UnityEngine::AnyType item3, ::UnityEngine::AnyType item4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType, ::UnityEngine::AnyType, ::UnityEngine::AnyType, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4__CTOR_OFFSET))(this, item1, item2, item3, item4);
		}

		::System::Int32 get_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_GET_COUNT_OFFSET))(this);
		}

		::UnityEngine::AnyType Get(::System::Int32 index)
		{
			return ((::UnityEngine::AnyType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_GET_OFFSET))(this, index);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetHashCodeWithSeed(::System::UInt64 seed)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_GETHASHCODEWITHSEED_OFFSET))(this, seed);
		}

		::System::String* ToStringInternal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_TOSTRINGINTERNAL_OFFSET))(this);
		}

		/*
		::UnityEngine::NativeString FormatToNativeString(::System::Boolean autoRelease)
		{
			return ((::UnityEngine::NativeString(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_FORMATTONATIVESTRING_OFFSET))(this, autoRelease);
		}
		*/

		::UnityEngine::AnyType get_Item1()
		{
			return ((::UnityEngine::AnyType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_GET_ITEM1_OFFSET))(this);
		}

		::System::Void set_Item1(::UnityEngine::AnyType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_SET_ITEM1_OFFSET))(this, value);
		}

		::UnityEngine::AnyType get_Item2()
		{
			return ((::UnityEngine::AnyType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_GET_ITEM2_OFFSET))(this);
		}

		::System::Void set_Item2(::UnityEngine::AnyType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_SET_ITEM2_OFFSET))(this, value);
		}

		::UnityEngine::AnyType get_Item3()
		{
			return ((::UnityEngine::AnyType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_GET_ITEM3_OFFSET))(this);
		}

		::System::Void set_Item3(::UnityEngine::AnyType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_SET_ITEM3_OFFSET))(this, value);
		}

		::UnityEngine::AnyType get_Item4()
		{
			return ((::UnityEngine::AnyType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_GET_ITEM4_OFFSET))(this);
		}

		::System::Void set_Item4(::UnityEngine::AnyType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_SET_ITEM4_OFFSET))(this, value);
		}

		static ::System::String* ToStringInternal_Injected(::UnityEngine::AnyTuple4& _unity_self)
		{
			return ((::System::String*(*)(::UnityEngine::AnyTuple4&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_TOSTRINGINTERNAL_INJECTED_OFFSET))(_unity_self);
		}

		/*
		static ::System::Void FormatToNativeString_Injected(::UnityEngine::AnyTuple4& _unity_self, ::System::Boolean autoRelease, ::UnityEngine::NativeString& ret)
		{
			return ((::System::Void(*)(::UnityEngine::AnyTuple4&, ::System::Boolean, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTUPLE4_FORMATTONATIVESTRING_INJECTED_OFFSET))(_unity_self, autoRelease, ret);
		}
		*/
	};
}
