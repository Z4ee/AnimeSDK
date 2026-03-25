#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_NATIVESTRINGREF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2112C30)
#define UNITYENGINE_NATIVESTRINGREF_EQUALS_OFFSET UNITYSDK_OFFSET(0x2112C10)
#define UNITYENGINE_NATIVESTRINGREF_GETHASHCODEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A26CE0)
#define UNITYENGINE_NATIVESTRINGREF_GETHASHCODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x2112C00)
#define UNITYENGINE_NATIVESTRINGREF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2112C00)
#define UNITYENGINE_NATIVESTRINGREF_ISEQUALWITHNATIVESTRINGREF_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A26D30)
#define UNITYENGINE_NATIVESTRINGREF_ISEQUALWITHNATIVESTRINGREF_OFFSET UNITYSDK_OFFSET(0x2112C10)
#define UNITYENGINE_NATIVESTRINGREF_ISEQUAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A26CB0)
#define UNITYENGINE_NATIVESTRINGREF_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x2112BF0)
#define UNITYENGINE_NATIVESTRINGREF_ISVALID_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A26C70)
#define UNITYENGINE_NATIVESTRINGREF_ISVALID_OFFSET UNITYSDK_OFFSET(0x2112BD0)
#define UNITYENGINE_NATIVESTRINGREF_LENGTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A26C90)
#define UNITYENGINE_NATIVESTRINGREF_LENGTH_OFFSET UNITYSDK_OFFSET(0x2112BE0)
#define UNITYENGINE_NATIVESTRINGREF_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x18A26BE0)
#define UNITYENGINE_NATIVESTRINGREF_TOSTRINGINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A26C50)
#define UNITYENGINE_NATIVESTRINGREF_TOSTRINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x2112BC0)
#define UNITYENGINE_NATIVESTRINGREF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2112BC0)
#define UNITYENGINE_NATIVESTRINGREF__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace UnityEngine
{
	inline static constexpr unsigned int NativeStringRef_TypeDefinitionIndex = 4159;

	struct alignas(8) NativeStringRef
	{
		::System::IntPtr _Str_k__BackingField; // 0x10

		/*
		::System::Void _ctor(::UnityEngine::NativeString str)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NativeString))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF__CTOR_OFFSET))(this, str);
		}
		*/

		static ::UnityEngine::NativeStringRef op_Implicit(::System::String* obj)
		{
			return ((::UnityEngine::NativeStringRef(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_OP_IMPLICIT_OFFSET))(obj);
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

		::System::Boolean IsEqual(::System::String* str)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_ISEQUAL_OFFSET))(this, str);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetHashCodeInternal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_GETHASHCODEINTERNAL_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::NativeStringRef other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NativeStringRef))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean IsEqualWithNativeStringRef(::UnityEngine::NativeStringRef other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NativeStringRef))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_ISEQUALWITHNATIVESTRINGREF_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_EQUALS_1_OFFSET))(this, obj);
		}

		static ::System::String* ToStringInternal_Injected(::UnityEngine::NativeStringRef& _unity_self)
		{
			return ((::System::String*(*)(::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_TOSTRINGINTERNAL_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Boolean IsValid_Injected(::UnityEngine::NativeStringRef& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_ISVALID_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Int32 Length_Injected(::UnityEngine::NativeStringRef& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_LENGTH_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Boolean IsEqual_Injected(::UnityEngine::NativeStringRef& _unity_self, ::System::String* str)
		{
			return ((::System::Boolean(*)(::UnityEngine::NativeStringRef&, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_ISEQUAL_INJECTED_OFFSET))(_unity_self, str);
		}

		static ::System::Int32 GetHashCodeInternal_Injected(::UnityEngine::NativeStringRef& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_GETHASHCODEINTERNAL_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Boolean IsEqualWithNativeStringRef_Injected(::UnityEngine::NativeStringRef& _unity_self, ::UnityEngine::NativeStringRef& other)
		{
			return ((::System::Boolean(*)(::UnityEngine::NativeStringRef&, ::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVESTRINGREF_ISEQUALWITHNATIVESTRINGREF_INJECTED_OFFSET))(_unity_self, other);
		}
	};
}
