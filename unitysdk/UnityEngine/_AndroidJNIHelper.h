#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/jvalue.h"

namespace System { class Array; }
namespace System { class String; }
namespace UnityEngine { class AndroidJavaObject; }
namespace UnityEngine { class AndroidJavaProxy; }
namespace UnityEngine { class AndroidJavaRunnable; }

#define UNITYENGINE__ANDROIDJNIHELPER_BOX_OFFSET UNITYSDK_OFFSET(0x189CDC70)
#define UNITYENGINE__ANDROIDJNIHELPER_CONVERTTOJNIARRAY_OFFSET UNITYSDK_OFFSET(0x189D0E30)
#define UNITYENGINE__ANDROIDJNIHELPER_CREATEJAVAPROXY_OFFSET UNITYSDK_OFFSET(0x189C9890)
#define UNITYENGINE__ANDROIDJNIHELPER_CREATEJAVARUNNABLE_OFFSET UNITYSDK_OFFSET(0x189C9680)
#define UNITYENGINE__ANDROIDJNIHELPER_CREATEJNIARGARRAY_OFFSET UNITYSDK_OFFSET(0x189C9920)
#define UNITYENGINE__ANDROIDJNIHELPER_DELETEJNIARGARRAY_OFFSET UNITYSDK_OFFSET(0x189CA2C0)
#define UNITYENGINE__ANDROIDJNIHELPER_GETCONSTRUCTORID_1_OFFSET UNITYSDK_OFFSET(0x189C8D40)
#define UNITYENGINE__ANDROIDJNIHELPER_GETCONSTRUCTORID_OFFSET UNITYSDK_OFFSET(0x189CA450)
#define UNITYENGINE__ANDROIDJNIHELPER_GETFIELDID_OFFSET UNITYSDK_OFFSET(0x189C9150)
#define UNITYENGINE__ANDROIDJNIHELPER_GETMETHODIDFALLBACK_OFFSET UNITYSDK_OFFSET(0x189D2090)
#define UNITYENGINE__ANDROIDJNIHELPER_GETMETHODID_1_OFFSET UNITYSDK_OFFSET(0x189C8F40)
#define UNITYENGINE__ANDROIDJNIHELPER_GETMETHODID_OFFSET UNITYSDK_OFFSET(0x189CA4A0)
#define UNITYENGINE__ANDROIDJNIHELPER_GETSIGNATURE_1_OFFSET UNITYSDK_OFFSET(0x189D1F80)
#define UNITYENGINE__ANDROIDJNIHELPER_GETSIGNATURE_OFFSET UNITYSDK_OFFSET(0x189D21A0)
#define UNITYENGINE__ANDROIDJNIHELPER_INVOKEJAVAPROXYMETHOD_OFFSET UNITYSDK_OFFSET(0x189D0A10)
#define UNITYENGINE__ANDROIDJNIHELPER_UNBOXARRAY_OFFSET UNITYSDK_OFFSET(0x189D1920)
#define UNITYENGINE__ANDROIDJNIHELPER_UNBOX_OFFSET UNITYSDK_OFFSET(0x189CECD0)

namespace UnityEngine
{
	inline static constexpr unsigned int _AndroidJNIHelper_TypeDefinitionIndex = 5394;

	class _AndroidJNIHelper : public ::System::Object
	{
	public:
		static ::System::IntPtr CreateJavaProxy(::System::IntPtr delegateHandle, ::UnityEngine::AndroidJavaProxy* proxy)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::UnityEngine::AndroidJavaProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_CREATEJAVAPROXY_OFFSET))(delegateHandle, proxy);
		}

		static ::System::IntPtr CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable* jrunnable)
		{
			return ((::System::IntPtr(*)(::UnityEngine::AndroidJavaRunnable*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_CREATEJAVARUNNABLE_OFFSET))(jrunnable);
		}

		static ::System::IntPtr InvokeJavaProxyMethod(::UnityEngine::AndroidJavaProxy* proxy, ::System::IntPtr jmethodName, ::System::IntPtr jargs)
		{
			return ((::System::IntPtr(*)(::UnityEngine::AndroidJavaProxy*, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_INVOKEJAVAPROXYMETHOD_OFFSET))(proxy, jmethodName, jargs);
		}

		static ::Il2CppArray<::UnityEngine::jvalue>* CreateJNIArgArray(::Il2CppArray<::System::Object*>* args)
		{
			return ((::Il2CppArray<::UnityEngine::jvalue>*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_CREATEJNIARGARRAY_OFFSET))(args);
		}

		static ::System::Object* UnboxArray(::UnityEngine::AndroidJavaObject* obj)
		{
			return ((::System::Object*(*)(::UnityEngine::AndroidJavaObject*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_UNBOXARRAY_OFFSET))(obj);
		}

		static ::System::Object* Unbox(::UnityEngine::AndroidJavaObject* obj)
		{
			return ((::System::Object*(*)(::UnityEngine::AndroidJavaObject*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_UNBOX_OFFSET))(obj);
		}

		static ::UnityEngine::AndroidJavaObject* Box(::System::Object* obj)
		{
			return ((::UnityEngine::AndroidJavaObject*(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_BOX_OFFSET))(obj);
		}

		static ::System::Void DeleteJNIArgArray(::Il2CppArray<::System::Object*>* args, ::Il2CppArray<::UnityEngine::jvalue>* jniArgs)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_DELETEJNIARGARRAY_OFFSET))(args, jniArgs);
		}

		static ::System::IntPtr ConvertToJNIArray(::System::Array* array)
		{
			return ((::System::IntPtr(*)(::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_CONVERTTOJNIARRAY_OFFSET))(array);
		}

		static ::System::IntPtr GetConstructorID(::System::IntPtr jclass, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETCONSTRUCTORID_OFFSET))(jclass, args);
		}

		static ::System::IntPtr GetMethodID(::System::IntPtr jclass, ::System::String* methodName, ::Il2CppArray<::System::Object*>* args, ::System::Boolean isStatic)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETMETHODID_OFFSET))(jclass, methodName, args, isStatic);
		}

		static ::System::IntPtr GetConstructorID_1(::System::IntPtr jclass, ::System::String* signature)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETCONSTRUCTORID_1_OFFSET))(jclass, signature);
		}

		static ::System::IntPtr GetMethodID_1(::System::IntPtr jclass, ::System::String* methodName, ::System::String* signature, ::System::Boolean isStatic)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETMETHODID_1_OFFSET))(jclass, methodName, signature, isStatic);
		}

		static ::System::IntPtr GetMethodIDFallback(::System::IntPtr jclass, ::System::String* methodName, ::System::String* signature, ::System::Boolean isStatic)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETMETHODIDFALLBACK_OFFSET))(jclass, methodName, signature, isStatic);
		}

		static ::System::IntPtr GetFieldID(::System::IntPtr jclass, ::System::String* fieldName, ::System::String* signature, ::System::Boolean isStatic)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETFIELDID_OFFSET))(jclass, fieldName, signature, isStatic);
		}

		static ::System::String* GetSignature(::System::Object* obj)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETSIGNATURE_OFFSET))(obj);
		}

		static ::System::String* GetSignature_1(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE__ANDROIDJNIHELPER_GETSIGNATURE_1_OFFSET))(args);
		}
	};
}
