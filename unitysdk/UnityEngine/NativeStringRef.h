#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_NATIVESTRINGREF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x38823E0)
#define UNITYENGINE_NATIVESTRINGREF_EQUALS_OFFSET UNITYSDK_OFFSET(0x38823C0)
#define UNITYENGINE_NATIVESTRINGREF_GETHASHCODEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B0EF0)
#define UNITYENGINE_NATIVESTRINGREF_GETHASHCODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x38823B0)
#define UNITYENGINE_NATIVESTRINGREF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x38823B0)
#define UNITYENGINE_NATIVESTRINGREF_ISEQUALWITHNATIVESTRINGREF_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B0F40)
#define UNITYENGINE_NATIVESTRINGREF_ISEQUALWITHNATIVESTRINGREF_OFFSET UNITYSDK_OFFSET(0x38823C0)
#define UNITYENGINE_NATIVESTRINGREF_ISEQUAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B0EC0)
#define UNITYENGINE_NATIVESTRINGREF_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x38823A0)
#define UNITYENGINE_NATIVESTRINGREF_ISVALID_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B0E80)
#define UNITYENGINE_NATIVESTRINGREF_ISVALID_OFFSET UNITYSDK_OFFSET(0x3882380)
#define UNITYENGINE_NATIVESTRINGREF_LENGTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B0EA0)
#define UNITYENGINE_NATIVESTRINGREF_LENGTH_OFFSET UNITYSDK_OFFSET(0x3882390)
#define UNITYENGINE_NATIVESTRINGREF_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B2B0DF0)
#define UNITYENGINE_NATIVESTRINGREF_TOSTRINGINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B0E60)
#define UNITYENGINE_NATIVESTRINGREF_TOSTRINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x3882370)
#define UNITYENGINE_NATIVESTRINGREF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3882370)
#define UNITYENGINE_NATIVESTRINGREF__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace UnityEngine
{
	inline static constexpr unsigned int NativeStringRef_TypeDefinitionIndex = 4335;

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
