#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_NATIVESTRINGREF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BBA6F0)
#define UNITYENGINE_NATIVESTRINGREF_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BBA6D0)
#define UNITYENGINE_NATIVESTRINGREF_GETHASHCODEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED3FA00)
#define UNITYENGINE_NATIVESTRINGREF_GETHASHCODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x3BBA6C0)
#define UNITYENGINE_NATIVESTRINGREF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BBA6C0)
#define UNITYENGINE_NATIVESTRINGREF_ISEQUALWITHNATIVESTRINGREF_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED3FA50)
#define UNITYENGINE_NATIVESTRINGREF_ISEQUALWITHNATIVESTRINGREF_OFFSET UNITYSDK_OFFSET(0x3BBA6D0)
#define UNITYENGINE_NATIVESTRINGREF_ISEQUAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED3F9D0)
#define UNITYENGINE_NATIVESTRINGREF_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x3BBA6B0)
#define UNITYENGINE_NATIVESTRINGREF_ISVALID_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED3F990)
#define UNITYENGINE_NATIVESTRINGREF_ISVALID_OFFSET UNITYSDK_OFFSET(0x3BBA690)
#define UNITYENGINE_NATIVESTRINGREF_LENGTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED3F9B0)
#define UNITYENGINE_NATIVESTRINGREF_LENGTH_OFFSET UNITYSDK_OFFSET(0x3BBA6A0)
#define UNITYENGINE_NATIVESTRINGREF_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1ED3F900)
#define UNITYENGINE_NATIVESTRINGREF_TOSTRINGINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED3F970)
#define UNITYENGINE_NATIVESTRINGREF_TOSTRINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x3BBA680)
#define UNITYENGINE_NATIVESTRINGREF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BBA680)
#define UNITYENGINE_NATIVESTRINGREF__CTOR_OFFSET UNITYSDK_OFFSET(0xC610)

namespace UnityEngine
{
	inline static constexpr unsigned int NativeStringRef_TypeDefinitionIndex = 4350;

	struct alignas(8) NativeStringRef
	{
		::System::IntPtr _Str_k__BackingField; // 0x10

		/*
		::System::Void _ctor(::UnityEngine::NativeString a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NativeString))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF__CTOR_OFFSET))(this, a1);
		}
		*/

		static ::UnityEngine::NativeStringRef op_Implicit(::System::String* a1)
		{
			return ((::UnityEngine::NativeStringRef(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_OP_IMPLICIT_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_TOSTRING_OFFSET))(this);
		}

		::System::String* ToStringInternal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_TOSTRINGINTERNAL_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_ISVALID_OFFSET))(this);
		}

		::System::Int32 Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_LENGTH_OFFSET))(this);
		}

		::System::Boolean IsEqual(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_ISEQUAL_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetHashCodeInternal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_GETHASHCODEINTERNAL_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::NativeStringRef a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NativeStringRef))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean IsEqualWithNativeStringRef(::UnityEngine::NativeStringRef a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NativeStringRef))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_ISEQUALWITHNATIVESTRINGREF_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::String* ToStringInternal_Injected(::UnityEngine::NativeStringRef& a1)
		{
			return ((::System::String*(*)(::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_TOSTRINGINTERNAL_INJECTED_OFFSET))(a1);
		}

		static ::System::Boolean IsValid_Injected(::UnityEngine::NativeStringRef& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_ISVALID_INJECTED_OFFSET))(a1);
		}

		static ::System::Int32 Length_Injected(::UnityEngine::NativeStringRef& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_LENGTH_INJECTED_OFFSET))(a1);
		}

		static ::System::Boolean IsEqual_Injected(::UnityEngine::NativeStringRef& a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::NativeStringRef&, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_ISEQUAL_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetHashCodeInternal_Injected(::UnityEngine::NativeStringRef& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_GETHASHCODEINTERNAL_INJECTED_OFFSET))(a1);
		}

		static ::System::Boolean IsEqualWithNativeStringRef_Injected(::UnityEngine::NativeStringRef& a1, ::UnityEngine::NativeStringRef& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::NativeStringRef&, ::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_ISEQUALWITHNATIVESTRINGREF_INJECTED_OFFSET))(a1, a2);
		}
	};
}
