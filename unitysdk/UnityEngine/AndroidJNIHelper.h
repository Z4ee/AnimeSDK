#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/jvalue.h"

namespace System { class String; }
namespace UnityEngine { class AndroidJavaProxy; }
namespace UnityEngine { class AndroidJavaRunnable; }

#define UNITYENGINE_ANDROIDJNIHELPER_CREATEJAVAPROXY_OFFSET UNITYSDK_OFFSET(0x1F2B3ED0)
#define UNITYENGINE_ANDROIDJNIHELPER_CREATEJAVARUNNABLE_OFFSET UNITYSDK_OFFSET(0x1F2B3D60)
#define UNITYENGINE_ANDROIDJNIHELPER_CREATEJNIARGARRAY_OFFSET UNITYSDK_OFFSET(0x1F2B4060)
#define UNITYENGINE_ANDROIDJNIHELPER_DELETEJNIARGARRAY_OFFSET UNITYSDK_OFFSET(0x1F2B4840)
#define UNITYENGINE_ANDROIDJNIHELPER_GETCONSTRUCTORID_1_OFFSET UNITYSDK_OFFSET(0x1F2B4A00)
#define UNITYENGINE_ANDROIDJNIHELPER_GETCONSTRUCTORID_OFFSET UNITYSDK_OFFSET(0x1F2B3550)
#define UNITYENGINE_ANDROIDJNIHELPER_GETFIELDID_OFFSET UNITYSDK_OFFSET(0x1F2B3950)
#define UNITYENGINE_ANDROIDJNIHELPER_GETMETHODID_1_OFFSET UNITYSDK_OFFSET(0x1F2B4A40)
#define UNITYENGINE_ANDROIDJNIHELPER_GETMETHODID_OFFSET UNITYSDK_OFFSET(0x1F2B3740)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJNIHelper_TypeDefinitionIndex = 39941;

	class AndroidJNIHelper : public ::System::Object
	{
	public:
		static ::System::IntPtr GetConstructorID(::System::IntPtr javaClass, ::System::String* signature)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_GETCONSTRUCTORID_OFFSET))(javaClass, signature);
		}

		static ::System::IntPtr GetMethodID(::System::IntPtr javaClass, ::System::String* methodName, ::System::String* signature, ::System::Boolean isStatic)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_GETMETHODID_OFFSET))(javaClass, methodName, signature, isStatic);
		}

		static ::System::IntPtr GetFieldID(::System::IntPtr javaClass, ::System::String* fieldName, ::System::String* signature, ::System::Boolean isStatic)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_GETFIELDID_OFFSET))(javaClass, fieldName, signature, isStatic);
		}

		static ::System::IntPtr CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable* jrunnable)
		{
			return ((::System::IntPtr(*)(::UnityEngine::AndroidJavaRunnable*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_CREATEJAVARUNNABLE_OFFSET))(jrunnable);
		}

		static ::System::IntPtr CreateJavaProxy(::UnityEngine::AndroidJavaProxy* proxy)
		{
			return ((::System::IntPtr(*)(::UnityEngine::AndroidJavaProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_CREATEJAVAPROXY_OFFSET))(proxy);
		}

		static ::Il2CppArray<::UnityEngine::jvalue>* CreateJNIArgArray(::Il2CppArray<::System::Object*>* args)
		{
			return ((::Il2CppArray<::UnityEngine::jvalue>*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_CREATEJNIARGARRAY_OFFSET))(args);
		}

		static ::System::Void DeleteJNIArgArray(::Il2CppArray<::System::Object*>* args, ::Il2CppArray<::UnityEngine::jvalue>* jniArgs)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_DELETEJNIARGARRAY_OFFSET))(args, jniArgs);
		}

		static ::System::IntPtr GetConstructorID_1(::System::IntPtr jclass, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_GETCONSTRUCTORID_1_OFFSET))(jclass, args);
		}

		static ::System::IntPtr GetMethodID_1(::System::IntPtr jclass, ::System::String* methodName, ::Il2CppArray<::System::Object*>* args, ::System::Boolean isStatic)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_GETMETHODID_1_OFFSET))(jclass, methodName, args, isStatic);
		}
	};
}
