#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_NATIVESTRING_APPENDNATIVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A460940)
#define UNITYENGINE_NATIVESTRING_APPENDNATIVE_OFFSET UNITYSDK_OFFSET(0x22E5600)
#define UNITYENGINE_NATIVESTRING_APPEND_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A460910)
#define UNITYENGINE_NATIVESTRING_APPEND_OFFSET UNITYSDK_OFFSET(0x22E55F0)
#define UNITYENGINE_NATIVESTRING_CONTAINS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A460970)
#define UNITYENGINE_NATIVESTRING_CONTAINS_OFFSET UNITYSDK_OFFSET(0x22E5620)
#define UNITYENGINE_NATIVESTRING_CREATEWITHSTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A460620)
#define UNITYENGINE_NATIVESTRING_CREATEWITHSTRING_OFFSET UNITYSDK_OFFSET(0x1A4605F0)
#define UNITYENGINE_NATIVESTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22E56A0)
#define UNITYENGINE_NATIVESTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x22E5680)
#define UNITYENGINE_NATIVESTRING_GETHASHCODEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4609E0)
#define UNITYENGINE_NATIVESTRING_GETHASHCODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x22E5670)
#define UNITYENGINE_NATIVESTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22E5670)
#define UNITYENGINE_NATIVESTRING_GET_STR_OFFSET UNITYSDK_OFFSET(0x5580)
#define UNITYENGINE_NATIVESTRING_ISEQUALWITHNATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A460A40)
#define UNITYENGINE_NATIVESTRING_ISEQUALWITHNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x22E5680)
#define UNITYENGINE_NATIVESTRING_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1A460680)
#define UNITYENGINE_NATIVESTRING_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1A4606D0)
#define UNITYENGINE_NATIVESTRING_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1A460720)
#define UNITYENGINE_NATIVESTRING_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1A460770)
#define UNITYENGINE_NATIVESTRING_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1A4607C0)
#define UNITYENGINE_NATIVESTRING_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1A460810)
#define UNITYENGINE_NATIVESTRING_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1A460860)
#define UNITYENGINE_NATIVESTRING_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1A4608B0)
#define UNITYENGINE_NATIVESTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A460630)
#define UNITYENGINE_NATIVESTRING_SUBSTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4609B0)
#define UNITYENGINE_NATIVESTRING_SUBSTRING_OFFSET UNITYSDK_OFFSET(0x22E5640)
#define UNITYENGINE_NATIVESTRING_TOSTRINGINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4608F0)
#define UNITYENGINE_NATIVESTRING_TOSTRINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x22E55E0)
#define UNITYENGINE_NATIVESTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22E55E0)

namespace UnityEngine
{
	inline static constexpr unsigned int NativeString_TypeDefinitionIndex = 4160;

	struct alignas(8) NativeString
	{
		::System::IntPtr _Str_k__BackingField; // 0x10

		static ::UnityEngine::NativeString CreateWithString(::System::String* value, ::System::Boolean autoRelease)
		{
			return ((::UnityEngine::NativeString(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_CREATEWITHSTRING_OFFSET))(value, autoRelease);
		}

		static ::UnityEngine::NativeString op_Implicit(::System::Boolean obj)
		{
			return ((::UnityEngine::NativeString(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_OP_IMPLICIT_OFFSET))(obj);
		}

		static ::UnityEngine::NativeString op_Implicit_1(::System::Int32 obj)
		{
			return ((::UnityEngine::NativeString(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_OP_IMPLICIT_1_OFFSET))(obj);
		}

		static ::UnityEngine::NativeString op_Implicit_2(::System::UInt32 obj)
		{
			return ((::UnityEngine::NativeString(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_OP_IMPLICIT_2_OFFSET))(obj);
		}

		static ::UnityEngine::NativeString op_Implicit_3(::System::Int64 obj)
		{
			return ((::UnityEngine::NativeString(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_OP_IMPLICIT_3_OFFSET))(obj);
		}

		static ::UnityEngine::NativeString op_Implicit_4(::System::UInt64 obj)
		{
			return ((::UnityEngine::NativeString(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_OP_IMPLICIT_4_OFFSET))(obj);
		}

		static ::UnityEngine::NativeString op_Implicit_5(::System::Single obj)
		{
			return ((::UnityEngine::NativeString(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_OP_IMPLICIT_5_OFFSET))(obj);
		}

		static ::UnityEngine::NativeString op_Implicit_6(::System::Double obj)
		{
			return ((::UnityEngine::NativeString(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_OP_IMPLICIT_6_OFFSET))(obj);
		}

		static ::UnityEngine::NativeString op_Implicit_7(::System::String* obj)
		{
			return ((::UnityEngine::NativeString(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_OP_IMPLICIT_7_OFFSET))(obj);
		}

		/*
		static ::UnityEngine::NativeStringRef op_Implicit_8(::UnityEngine::NativeString obj)
		{
			return ((::UnityEngine::NativeStringRef(*)(::UnityEngine::NativeString))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_OP_IMPLICIT_8_OFFSET))(obj);
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

		::System::Void Append(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_APPEND_OFFSET))(this, str);
		}

		/*
		::System::Void AppendNative(::UnityEngine::NativeStringRef str)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NativeStringRef))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_APPENDNATIVE_OFFSET))(this, str);
		}
		*/

		/*
		::System::Boolean Contains(::UnityEngine::NativeStringRef str)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NativeStringRef))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_CONTAINS_OFFSET))(this, str);
		}
		*/

		::UnityEngine::NativeString SubString(::System::Int32 pos, ::System::Int32 len)
		{
			return ((::UnityEngine::NativeString(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_SUBSTRING_OFFSET))(this, pos, len);
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

		::System::Boolean Equals(::UnityEngine::NativeString other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NativeString))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean IsEqualWithNativeString(::UnityEngine::NativeString other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NativeString))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_ISEQUALWITHNATIVESTRING_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_EQUALS_1_OFFSET))(this, obj);
		}

		static ::System::Void CreateWithString_Injected(::System::String* value, ::System::Boolean autoRelease, ::UnityEngine::NativeString& ret)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_CREATEWITHSTRING_INJECTED_OFFSET))(value, autoRelease, ret);
		}

		static ::System::String* ToStringInternal_Injected(::UnityEngine::NativeString& _unity_self)
		{
			return ((::System::String*(*)(::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_TOSTRINGINTERNAL_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void Append_Injected(::UnityEngine::NativeString& _unity_self, ::System::String* str)
		{
			return ((::System::Void(*)(::UnityEngine::NativeString&, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_APPEND_INJECTED_OFFSET))(_unity_self, str);
		}

		/*
		static ::System::Void AppendNative_Injected(::UnityEngine::NativeString& _unity_self, ::UnityEngine::NativeStringRef& str)
		{
			return ((::System::Void(*)(::UnityEngine::NativeString&, ::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_APPENDNATIVE_INJECTED_OFFSET))(_unity_self, str);
		}
		*/

		/*
		static ::System::Boolean Contains_Injected(::UnityEngine::NativeString& _unity_self, ::UnityEngine::NativeStringRef& str)
		{
			return ((::System::Boolean(*)(::UnityEngine::NativeString&, ::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_CONTAINS_INJECTED_OFFSET))(_unity_self, str);
		}
		*/

		static ::System::Void SubString_Injected(::UnityEngine::NativeString& _unity_self, ::System::Int32 pos, ::System::Int32 len, ::UnityEngine::NativeString& ret)
		{
			return ((::System::Void(*)(::UnityEngine::NativeString&, ::System::Int32, ::System::Int32, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_SUBSTRING_INJECTED_OFFSET))(_unity_self, pos, len, ret);
		}

		static ::System::Int32 GetHashCodeInternal_Injected(::UnityEngine::NativeString& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_GETHASHCODEINTERNAL_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Boolean IsEqualWithNativeString_Injected(::UnityEngine::NativeString& _unity_self, ::UnityEngine::NativeString& other)
		{
			return ((::System::Boolean(*)(::UnityEngine::NativeString&, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRING_ISEQUALWITHNATIVESTRING_INJECTED_OFFSET))(_unity_self, other);
		}
	};
}
