#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_NATIVESTRING_APPENDNATIVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D11A9C0)
#define UNITYENGINE_NATIVESTRING_APPENDNATIVE_OFFSET UNITYSDK_OFFSET(0x3AD4190)
#define UNITYENGINE_NATIVESTRING_APPEND_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D11A990)
#define UNITYENGINE_NATIVESTRING_APPEND_OFFSET UNITYSDK_OFFSET(0x3AD4180)
#define UNITYENGINE_NATIVESTRING_CONTAINS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D11A9F0)
#define UNITYENGINE_NATIVESTRING_CONTAINS_OFFSET UNITYSDK_OFFSET(0x3AD41B0)
#define UNITYENGINE_NATIVESTRING_CREATEWITHSTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D11A6A0)
#define UNITYENGINE_NATIVESTRING_CREATEWITHSTRING_OFFSET UNITYSDK_OFFSET(0x1D11A670)
#define UNITYENGINE_NATIVESTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3AD4230)
#define UNITYENGINE_NATIVESTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AD4210)
#define UNITYENGINE_NATIVESTRING_GETHASHCODEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D11AA60)
#define UNITYENGINE_NATIVESTRING_GETHASHCODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x3AD4200)
#define UNITYENGINE_NATIVESTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3AD4200)
#define UNITYENGINE_NATIVESTRING_GET_STR_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define UNITYENGINE_NATIVESTRING_ISEQUALWITHNATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D11AAC0)
#define UNITYENGINE_NATIVESTRING_ISEQUALWITHNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x3AD4210)
#define UNITYENGINE_NATIVESTRING_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1D11A700)
#define UNITYENGINE_NATIVESTRING_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1D11A750)
#define UNITYENGINE_NATIVESTRING_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1D11A7A0)
#define UNITYENGINE_NATIVESTRING_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1D11A7F0)
#define UNITYENGINE_NATIVESTRING_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1D11A840)
#define UNITYENGINE_NATIVESTRING_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1D11A890)
#define UNITYENGINE_NATIVESTRING_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1D11A8E0)
#define UNITYENGINE_NATIVESTRING_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1D11A930)
#define UNITYENGINE_NATIVESTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D11A6B0)
#define UNITYENGINE_NATIVESTRING_SUBSTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D11AA30)
#define UNITYENGINE_NATIVESTRING_SUBSTRING_OFFSET UNITYSDK_OFFSET(0x3AD41D0)
#define UNITYENGINE_NATIVESTRING_TOSTRINGINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D11A970)
#define UNITYENGINE_NATIVESTRING_TOSTRINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x3AD4170)
#define UNITYENGINE_NATIVESTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3AD4170)

namespace UnityEngine
{
	inline static constexpr unsigned int NativeString_TypeDefinitionIndex = 4339;

	struct alignas(8) NativeString
	{
		::System::IntPtr _Str_k__BackingField; // 0x10

		static ::UnityEngine::NativeString CreateWithString(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::NativeString(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_CREATEWITHSTRING_OFFSET))(a1, a2);
		}

		static ::UnityEngine::NativeString op_Implicit(::System::Boolean a1)
		{
			return ((::UnityEngine::NativeString(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::UnityEngine::NativeString op_Implicit_1(::System::Int32 a1)
		{
			return ((::UnityEngine::NativeString(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::UnityEngine::NativeString op_Implicit_2(::System::UInt32 a1)
		{
			return ((::UnityEngine::NativeString(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_OP_IMPLICIT_2_OFFSET))(a1);
		}

		static ::UnityEngine::NativeString op_Implicit_3(::System::Int64 a1)
		{
			return ((::UnityEngine::NativeString(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_OP_IMPLICIT_3_OFFSET))(a1);
		}

		static ::UnityEngine::NativeString op_Implicit_4(::System::UInt64 a1)
		{
			return ((::UnityEngine::NativeString(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_OP_IMPLICIT_4_OFFSET))(a1);
		}

		static ::UnityEngine::NativeString op_Implicit_5(::System::Single a1)
		{
			return ((::UnityEngine::NativeString(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_OP_IMPLICIT_5_OFFSET))(a1);
		}

		static ::UnityEngine::NativeString op_Implicit_6(::System::Double a1)
		{
			return ((::UnityEngine::NativeString(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_OP_IMPLICIT_6_OFFSET))(a1);
		}

		static ::UnityEngine::NativeString op_Implicit_7(::System::String* a1)
		{
			return ((::UnityEngine::NativeString(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_OP_IMPLICIT_7_OFFSET))(a1);
		}

		/*
		static ::UnityEngine::NativeStringRef op_Implicit_8(::UnityEngine::NativeString a1)
		{
			return ((::UnityEngine::NativeStringRef(*)(::UnityEngine::NativeString))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_OP_IMPLICIT_8_OFFSET))(a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_TOSTRING_OFFSET))(this);
		}

		::System::String* ToStringInternal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_TOSTRINGINTERNAL_OFFSET))(this);
		}

		::System::Void Append(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_APPEND_OFFSET))(this, a1);
		}

		/*
		::System::Void AppendNative(::UnityEngine::NativeStringRef a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NativeStringRef))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_APPENDNATIVE_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Boolean Contains(::UnityEngine::NativeStringRef a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NativeStringRef))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_CONTAINS_OFFSET))(this, a1);
		}
		*/

		::UnityEngine::NativeString SubString(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::NativeString(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_SUBSTRING_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetHashCodeInternal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_GETHASHCODEINTERNAL_OFFSET))(this);
		}

		::System::IntPtr get_Str()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_GET_STR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::NativeString a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NativeString))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean IsEqualWithNativeString(::UnityEngine::NativeString a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NativeString))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_ISEQUALWITHNATIVESTRING_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Void CreateWithString_Injected(::System::String* a1, ::System::Boolean a2, ::UnityEngine::NativeString& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_CREATEWITHSTRING_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::String* ToStringInternal_Injected(::UnityEngine::NativeString& a1)
		{
			return ((::System::String*(*)(::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_TOSTRINGINTERNAL_INJECTED_OFFSET))(a1);
		}

		static ::System::Void Append_Injected(::UnityEngine::NativeString& a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::NativeString&, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_APPEND_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void AppendNative_Injected(::UnityEngine::NativeString& a1, ::UnityEngine::NativeStringRef& a2)
		{
			return ((::System::Void(*)(::UnityEngine::NativeString&, ::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_APPENDNATIVE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Contains_Injected(::UnityEngine::NativeString& a1, ::UnityEngine::NativeStringRef& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::NativeString&, ::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_CONTAINS_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Void SubString_Injected(::UnityEngine::NativeString& a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::NativeString& a4)
		{
			return ((::System::Void(*)(::UnityEngine::NativeString&, ::System::Int32, ::System::Int32, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_SUBSTRING_INJECTED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 GetHashCodeInternal_Injected(::UnityEngine::NativeString& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_GETHASHCODEINTERNAL_INJECTED_OFFSET))(a1);
		}

		static ::System::Boolean IsEqualWithNativeString_Injected(::UnityEngine::NativeString& a1, ::UnityEngine::NativeString& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::NativeString&, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_ISEQUALWITHNATIVESTRING_INJECTED_OFFSET))(a1, a2);
		}
	};
}
