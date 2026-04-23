#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_NATIVEJSONDOCUMENT_ADDVALUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A460420)
#define UNITYENGINE_NATIVEJSONDOCUMENT_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x22E5480)
#define UNITYENGINE_NATIVEJSONDOCUMENT_CREATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4603D0)
#define UNITYENGINE_NATIVEJSONDOCUMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x1A4603A0)
#define UNITYENGINE_NATIVEJSONDOCUMENT_DISPOSEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4604C0)
#define UNITYENGINE_NATIVEJSONDOCUMENT_DISPOSEINTERNAL_OFFSET UNITYSDK_OFFSET(0x22E5510)
#define UNITYENGINE_NATIVEJSONDOCUMENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x22E5510)
#define UNITYENGINE_NATIVEJSONDOCUMENT_TONATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A460460)
#define UNITYENGINE_NATIVEJSONDOCUMENT_TONATIVESTRING_OFFSET UNITYSDK_OFFSET(0x22E54C0)
#define UNITYENGINE_NATIVEJSONDOCUMENT_TOSTRINGINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A460490)
#define UNITYENGINE_NATIVEJSONDOCUMENT_TOSTRINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x22E5500)
#define UNITYENGINE_NATIVEJSONDOCUMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22E54F0)

namespace UnityEngine
{
	inline static constexpr unsigned int NativeJsonDocument_TypeDefinitionIndex = 4142;

	struct alignas(8) NativeJsonDocument
	{
		::System::IntPtr _Doc_k__BackingField; // 0x10

		static ::UnityEngine::NativeJsonDocument Create()
		{
			return ((::UnityEngine::NativeJsonDocument(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_CREATE_OFFSET))();
		}

		/*
		::UnityEngine::NativeJsonValueRef AddValue(::System::String* name)
		{
			return ((::UnityEngine::NativeJsonValueRef(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_ADDVALUE_OFFSET))(this, name);
		}
		*/

		/*
		::UnityEngine::NativeString ToNativeString(::System::Boolean usePretty)
		{
			return ((::UnityEngine::NativeString(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_TONATIVESTRING_OFFSET))(this, usePretty);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_TOSTRING_OFFSET))(this);
		}

		::System::String* ToStringInternal(::System::Boolean usePretty)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_TOSTRINGINTERNAL_OFFSET))(this, usePretty);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_DISPOSE_OFFSET))(this);
		}

		::System::Void DisposeInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_DISPOSEINTERNAL_OFFSET))(this);
		}

		static ::System::Void Create_Injected(::UnityEngine::NativeJsonDocument& ret)
		{
			return ((::System::Void(*)(::UnityEngine::NativeJsonDocument&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_CREATE_INJECTED_OFFSET))(ret);
		}

		/*
		static ::System::Void AddValue_Injected(::UnityEngine::NativeJsonDocument& _unity_self, ::System::String* name, ::UnityEngine::NativeJsonValueRef& ret)
		{
			return ((::System::Void(*)(::UnityEngine::NativeJsonDocument&, ::System::String*, ::UnityEngine::NativeJsonValueRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_ADDVALUE_INJECTED_OFFSET))(_unity_self, name, ret);
		}
		*/

		/*
		static ::System::Void ToNativeString_Injected(::UnityEngine::NativeJsonDocument& _unity_self, ::System::Boolean usePretty, ::UnityEngine::NativeString& ret)
		{
			return ((::System::Void(*)(::UnityEngine::NativeJsonDocument&, ::System::Boolean, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_TONATIVESTRING_INJECTED_OFFSET))(_unity_self, usePretty, ret);
		}
		*/

		static ::System::String* ToStringInternal_Injected(::UnityEngine::NativeJsonDocument& _unity_self, ::System::Boolean usePretty)
		{
			return ((::System::String*(*)(::UnityEngine::NativeJsonDocument&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_TOSTRINGINTERNAL_INJECTED_OFFSET))(_unity_self, usePretty);
		}

		static ::System::Void DisposeInternal_Injected(::UnityEngine::NativeJsonDocument& _unity_self)
		{
			return ((::System::Void(*)(::UnityEngine::NativeJsonDocument&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_DISPOSEINTERNAL_INJECTED_OFFSET))(_unity_self);
		}
	};
}
