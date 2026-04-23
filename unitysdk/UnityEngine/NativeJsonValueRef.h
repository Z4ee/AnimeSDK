#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_NATIVEJSONVALUEREF_ADDORSETMEMBER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4605B0)
#define UNITYENGINE_NATIVEJSONVALUEREF_ADDORSETMEMBER_OFFSET UNITYSDK_OFFSET(0x22E5580)
#define UNITYENGINE_NATIVEJSONVALUEREF_ASOBJECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A460560)
#define UNITYENGINE_NATIVEJSONVALUEREF_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x22E5550)
#define UNITYENGINE_NATIVEJSONVALUEREF_SETINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4604E0)
#define UNITYENGINE_NATIVEJSONVALUEREF_SETINT_OFFSET UNITYSDK_OFFSET(0x22E5520)
#define UNITYENGINE_NATIVEJSONVALUEREF_SETNATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A460510)
#define UNITYENGINE_NATIVEJSONVALUEREF_SETNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x22E5530)
#define UNITYENGINE_NATIVEJSONVALUEREF_TOSTRINGINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4605E0)
#define UNITYENGINE_NATIVEJSONVALUEREF_TOSTRINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x22E55D0)
#define UNITYENGINE_NATIVEJSONVALUEREF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22E55C0)

namespace UnityEngine
{
	inline static constexpr unsigned int NativeJsonValueRef_TypeDefinitionIndex = 4141;

	struct alignas(8) NativeJsonValueRef
	{
		::System::IntPtr _Root_k__BackingField; // 0x10
		::System::IntPtr _Val_k__BackingField; // 0x18

		::System::Void SetInt(::System::Int64 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_SETINT_OFFSET))(this, i);
		}

		/*
		::System::Void SetNativeString(::UnityEngine::NativeStringRef str)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NativeStringRef))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_SETNATIVESTRING_OFFSET))(this, str);
		}
		*/

		::UnityEngine::NativeJsonValueRef AsObject()
		{
			return ((::UnityEngine::NativeJsonValueRef(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_ASOBJECT_OFFSET))(this);
		}

		::UnityEngine::NativeJsonValueRef AddOrSetMember(::System::String* name)
		{
			return ((::UnityEngine::NativeJsonValueRef(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_ADDORSETMEMBER_OFFSET))(this, name);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_TOSTRING_OFFSET))(this);
		}

		::System::String* ToStringInternal(::System::Boolean usePretty)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_TOSTRINGINTERNAL_OFFSET))(this, usePretty);
		}

		static ::System::Void SetInt_Injected(::UnityEngine::NativeJsonValueRef& _unity_self, ::System::Int64 i)
		{
			return ((::System::Void(*)(::UnityEngine::NativeJsonValueRef&, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_SETINT_INJECTED_OFFSET))(_unity_self, i);
		}

		/*
		static ::System::Void SetNativeString_Injected(::UnityEngine::NativeJsonValueRef& _unity_self, ::UnityEngine::NativeStringRef& str)
		{
			return ((::System::Void(*)(::UnityEngine::NativeJsonValueRef&, ::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_SETNATIVESTRING_INJECTED_OFFSET))(_unity_self, str);
		}
		*/

		static ::System::Void AsObject_Injected(::UnityEngine::NativeJsonValueRef& _unity_self, ::UnityEngine::NativeJsonValueRef& ret)
		{
			return ((::System::Void(*)(::UnityEngine::NativeJsonValueRef&, ::UnityEngine::NativeJsonValueRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_ASOBJECT_INJECTED_OFFSET))(_unity_self, ret);
		}

		static ::System::Void AddOrSetMember_Injected(::UnityEngine::NativeJsonValueRef& _unity_self, ::System::String* name, ::UnityEngine::NativeJsonValueRef& ret)
		{
			return ((::System::Void(*)(::UnityEngine::NativeJsonValueRef&, ::System::String*, ::UnityEngine::NativeJsonValueRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_ADDORSETMEMBER_INJECTED_OFFSET))(_unity_self, name, ret);
		}

		static ::System::String* ToStringInternal_Injected(::UnityEngine::NativeJsonValueRef& _unity_self, ::System::Boolean usePretty)
		{
			return ((::System::String*(*)(::UnityEngine::NativeJsonValueRef&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONVALUEREF_TOSTRINGINTERNAL_INJECTED_OFFSET))(_unity_self, usePretty);
		}
	};
}
