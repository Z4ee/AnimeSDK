#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/jvalue.h"

namespace System { class Array; }
namespace System { class String; }
namespace UnityEngine { class AndroidJavaObject; }
namespace UnityEngine { class AndroidJavaProxy; }
namespace UnityEngine { class AndroidJavaRunnable; }

#define UNITYENGINE__ANDROIDJNIHELPER_BOX_OFFSET UNITYSDK_OFFSET(0x1ECE88E0)
#define UNITYENGINE__ANDROIDJNIHELPER_CONVERTTOJNIARRAY_OFFSET UNITYSDK_OFFSET(0x1ECEB5B0)
#define UNITYENGINE__ANDROIDJNIHELPER_CREATEJAVAPROXY_OFFSET UNITYSDK_OFFSET(0x1ECE44C0)
#define UNITYENGINE__ANDROIDJNIHELPER_CREATEJAVARUNNABLE_OFFSET UNITYSDK_OFFSET(0x1ECE42B0)
#define UNITYENGINE__ANDROIDJNIHELPER_CREATEJNIARGARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE4550)
#define UNITYENGINE__ANDROIDJNIHELPER_DELETEJNIARGARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE4E00)
#define UNITYENGINE__ANDROIDJNIHELPER_GETCONSTRUCTORID_1_OFFSET UNITYSDK_OFFSET(0x1ECE3970)
#define UNITYENGINE__ANDROIDJNIHELPER_GETCONSTRUCTORID_OFFSET UNITYSDK_OFFSET(0x1ECE4F70)
#define UNITYENGINE__ANDROIDJNIHELPER_GETFIELDID_OFFSET UNITYSDK_OFFSET(0x1ECE3D80)
#define UNITYENGINE__ANDROIDJNIHELPER_GETMETHODIDFALLBACK_OFFSET UNITYSDK_OFFSET(0x1ECEC880)
#define UNITYENGINE__ANDROIDJNIHELPER_GETMETHODID_1_OFFSET UNITYSDK_OFFSET(0x1ECE3B70)
#define UNITYENGINE__ANDROIDJNIHELPER_GETMETHODID_OFFSET UNITYSDK_OFFSET(0x1ECE4FC0)
#define UNITYENGINE__ANDROIDJNIHELPER_GETSIGNATURE_1_OFFSET UNITYSDK_OFFSET(0x1ECEC6E0)
#define UNITYENGINE__ANDROIDJNIHELPER_GETSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1ECEC990)
#define UNITYENGINE__ANDROIDJNIHELPER_INVOKEJAVAPROXYMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECEB1A0)
#define UNITYENGINE__ANDROIDJNIHELPER_UNBOXARRAY_OFFSET UNITYSDK_OFFSET(0x1ECEC130)
#define UNITYENGINE__ANDROIDJNIHELPER_UNBOX_OFFSET UNITYSDK_OFFSET(0x1ECE9830)

namespace UnityEngine
{
	inline static constexpr unsigned int _AndroidJNIHelper_TypeDefinitionIndex = 5676;

	class _AndroidJNIHelper : public ::System::Object
	{
	public:
		static ::System::IntPtr CreateJavaProxy(::System::IntPtr a1, ::UnityEngine::AndroidJavaProxy* a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::UnityEngine::AndroidJavaProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_CREATEJAVAPROXY_OFFSET))(a1, a2);
		}

		static ::System::IntPtr CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable* a1)
		{
			return ((::System::IntPtr(*)(::UnityEngine::AndroidJavaRunnable*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_CREATEJAVARUNNABLE_OFFSET))(a1);
		}

		static ::System::IntPtr InvokeJavaProxyMethod(::UnityEngine::AndroidJavaProxy* a1, ::System::IntPtr a2, ::System::IntPtr a3)
		{
			return ((::System::IntPtr(*)(::UnityEngine::AndroidJavaProxy*, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_INVOKEJAVAPROXYMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::UnityEngine::jvalue>* CreateJNIArgArray(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::jvalue>*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_CREATEJNIARGARRAY_OFFSET))(a1);
		}

		static ::System::Object* UnboxArray(::UnityEngine::AndroidJavaObject* a1)
		{
			return ((::System::Object*(*)(::UnityEngine::AndroidJavaObject*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_UNBOXARRAY_OFFSET))(a1);
		}

		static ::System::Object* Unbox(::UnityEngine::AndroidJavaObject* a1)
		{
			return ((::System::Object*(*)(::UnityEngine::AndroidJavaObject*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_UNBOX_OFFSET))(a1);
		}

		static ::UnityEngine::AndroidJavaObject* Box(::System::Object* a1)
		{
			return ((::UnityEngine::AndroidJavaObject*(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_BOX_OFFSET))(a1);
		}

		static ::System::Void DeleteJNIArgArray(::Il2CppArray<::System::Object*>* a1, ::Il2CppArray<::UnityEngine::jvalue>* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_DELETEJNIARGARRAY_OFFSET))(a1, a2);
		}

		static ::System::IntPtr ConvertToJNIArray(::System::Array* a1)
		{
			return ((::System::IntPtr(*)(::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_CONVERTTOJNIARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr GetConstructorID(::System::IntPtr a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETCONSTRUCTORID_OFFSET))(a1, a2);
		}

		static ::System::IntPtr GetMethodID(::System::IntPtr a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3, ::System::Boolean a4)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETMETHODID_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::IntPtr GetConstructorID_1(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETCONSTRUCTORID_1_OFFSET))(a1, a2);
		}

		static ::System::IntPtr GetMethodID_1(::System::IntPtr a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETMETHODID_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::IntPtr GetMethodIDFallback(::System::IntPtr a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETMETHODIDFALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::IntPtr GetFieldID(::System::IntPtr a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETFIELDID_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* GetSignature(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETSIGNATURE_OFFSET))(a1);
		}

		static ::System::String* GetSignature_1(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETSIGNATURE_1_OFFSET))(a1);
		}
	};
}
