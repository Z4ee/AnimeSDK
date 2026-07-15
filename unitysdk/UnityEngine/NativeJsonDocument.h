#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_NATIVEJSONDOCUMENT_ADDVALUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D11A4A0)
#define UNITYENGINE_NATIVEJSONDOCUMENT_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x3AD4010)
#define UNITYENGINE_NATIVEJSONDOCUMENT_CREATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D11A450)
#define UNITYENGINE_NATIVEJSONDOCUMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x1D11A420)
#define UNITYENGINE_NATIVEJSONDOCUMENT_DISPOSEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D11A540)
#define UNITYENGINE_NATIVEJSONDOCUMENT_DISPOSEINTERNAL_OFFSET UNITYSDK_OFFSET(0x3AD40A0)
#define UNITYENGINE_NATIVEJSONDOCUMENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AD40A0)
#define UNITYENGINE_NATIVEJSONDOCUMENT_TONATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D11A4E0)
#define UNITYENGINE_NATIVEJSONDOCUMENT_TONATIVESTRING_OFFSET UNITYSDK_OFFSET(0x3AD4050)
#define UNITYENGINE_NATIVEJSONDOCUMENT_TOSTRINGINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D11A510)
#define UNITYENGINE_NATIVEJSONDOCUMENT_TOSTRINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x3AD4090)
#define UNITYENGINE_NATIVEJSONDOCUMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3AD4080)

namespace UnityEngine
{
	inline static constexpr unsigned int NativeJsonDocument_TypeDefinitionIndex = 4321;

	struct alignas(8) NativeJsonDocument
	{
		::System::IntPtr _Doc_k__BackingField; // 0x10

		static ::UnityEngine::NativeJsonDocument Create()
		{
			return ((::UnityEngine::NativeJsonDocument(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_CREATE_OFFSET))();
		}

		/*
		::UnityEngine::NativeJsonValueRef AddValue(::System::String* a1)
		{
			return ((::UnityEngine::NativeJsonValueRef(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_ADDVALUE_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::NativeString ToNativeString(::System::Boolean a1)
		{
			return ((::UnityEngine::NativeString(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_TONATIVESTRING_OFFSET))(this, a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_TOSTRING_OFFSET))(this);
		}

		::System::String* ToStringInternal(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_TOSTRINGINTERNAL_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_DISPOSE_OFFSET))(this);
		}

		::System::Void DisposeInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_DISPOSEINTERNAL_OFFSET))(this);
		}

		static ::System::Void Create_Injected(::UnityEngine::NativeJsonDocument& a1)
		{
			return ((::System::Void(*)(::UnityEngine::NativeJsonDocument&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_CREATE_INJECTED_OFFSET))(a1);
		}

		/*
		static ::System::Void AddValue_Injected(::UnityEngine::NativeJsonDocument& a1, ::System::String* a2, ::UnityEngine::NativeJsonValueRef& a3)
		{
			return ((::System::Void(*)(::UnityEngine::NativeJsonDocument&, ::System::String*, ::UnityEngine::NativeJsonValueRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_ADDVALUE_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::System::Void ToNativeString_Injected(::UnityEngine::NativeJsonDocument& a1, ::System::Boolean a2, ::UnityEngine::NativeString& a3)
		{
			return ((::System::Void(*)(::UnityEngine::NativeJsonDocument&, ::System::Boolean, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_TONATIVESTRING_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/

		static ::System::String* ToStringInternal_Injected(::UnityEngine::NativeJsonDocument& a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::UnityEngine::NativeJsonDocument&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_TOSTRINGINTERNAL_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void DisposeInternal_Injected(::UnityEngine::NativeJsonDocument& a1)
		{
			return ((::System::Void(*)(::UnityEngine::NativeJsonDocument&))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEJSONDOCUMENT_DISPOSEINTERNAL_INJECTED_OFFSET))(a1);
		}
	};
}
