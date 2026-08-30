#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_NATIVEJSONVALUEREF_ADDORSETMEMBER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECC2750)
#define UNITYENGINE_NATIVEJSONVALUEREF_ADDORSETMEMBER_OFFSET UNITYSDK_OFFSET(0x3C6BB10)
#define UNITYENGINE_NATIVEJSONVALUEREF_ASOBJECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECC2700)
#define UNITYENGINE_NATIVEJSONVALUEREF_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x3C6BAE0)
#define UNITYENGINE_NATIVEJSONVALUEREF_SETINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECC2680)
#define UNITYENGINE_NATIVEJSONVALUEREF_SETINT_OFFSET UNITYSDK_OFFSET(0x3C6BAB0)
#define UNITYENGINE_NATIVEJSONVALUEREF_SETNATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECC26B0)
#define UNITYENGINE_NATIVEJSONVALUEREF_SETNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x3C6BAC0)
#define UNITYENGINE_NATIVEJSONVALUEREF_TOSTRINGINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECC2780)
#define UNITYENGINE_NATIVEJSONVALUEREF_TOSTRINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x3C6BB60)
#define UNITYENGINE_NATIVEJSONVALUEREF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C6BB50)

namespace UnityEngine
{
	inline static constexpr unsigned int NativeJsonValueRef_TypeDefinitionIndex = 4330;

	struct alignas(8) NativeJsonValueRef
	{
		::System::IntPtr _Root_k__BackingField; // 0x10
		::System::IntPtr _Val_k__BackingField; // 0x18

		::System::Void SetInt(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_SETINT_OFFSET))(this, a1);
		}

		/*
		::System::Void SetNativeString(::UnityEngine::NativeStringRef a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NativeStringRef))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_SETNATIVESTRING_OFFSET))(this, a1);
		}
		*/

		::UnityEngine::NativeJsonValueRef AsObject()
		{
			return ((::UnityEngine::NativeJsonValueRef(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_ASOBJECT_OFFSET))(this);
		}

		::UnityEngine::NativeJsonValueRef AddOrSetMember(::System::String* a1)
		{
			return ((::UnityEngine::NativeJsonValueRef(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_ADDORSETMEMBER_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_TOSTRING_OFFSET))(this);
		}

		::System::String* ToStringInternal(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_TOSTRINGINTERNAL_OFFSET))(this, a1);
		}

		static ::System::Void SetInt_Injected(::UnityEngine::NativeJsonValueRef& a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::UnityEngine::NativeJsonValueRef&, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_SETINT_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void SetNativeString_Injected(::UnityEngine::NativeJsonValueRef& a1, ::UnityEngine::NativeStringRef& a2)
		{
			return ((::System::Void(*)(::UnityEngine::NativeJsonValueRef&, ::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_SETNATIVESTRING_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Void AsObject_Injected(::UnityEngine::NativeJsonValueRef& a1, ::UnityEngine::NativeJsonValueRef& a2)
		{
			return ((::System::Void(*)(::UnityEngine::NativeJsonValueRef&, ::UnityEngine::NativeJsonValueRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_ASOBJECT_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void AddOrSetMember_Injected(::UnityEngine::NativeJsonValueRef& a1, ::System::String* a2, ::UnityEngine::NativeJsonValueRef& a3)
		{
			return ((::System::Void(*)(::UnityEngine::NativeJsonValueRef&, ::System::String*, ::UnityEngine::NativeJsonValueRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_ADDORSETMEMBER_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::String* ToStringInternal_Injected(::UnityEngine::NativeJsonValueRef& a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::UnityEngine::NativeJsonValueRef&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_TOSTRINGINTERNAL_INJECTED_OFFSET))(a1, a2);
		}
	};
}
