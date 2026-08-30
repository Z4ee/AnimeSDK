#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/jvalue.h"

namespace System { class String; }
namespace UnityEngine { class AndroidJavaProxy; }
namespace UnityEngine { class AndroidJavaRunnable; }

#define UNITYENGINE_ANDROIDJNIHELPER_CREATEJAVAPROXY_OFFSET UNITYSDK_OFFSET(0x1ECE43B0)
#define UNITYENGINE_ANDROIDJNIHELPER_CREATEJAVARUNNABLE_OFFSET UNITYSDK_OFFSET(0x1ECE41B0)
#define UNITYENGINE_ANDROIDJNIHELPER_CREATEJNIARGARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE4540)
#define UNITYENGINE_ANDROIDJNIHELPER_DELETEJNIARGARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE4DF0)
#define UNITYENGINE_ANDROIDJNIHELPER_GETCONSTRUCTORID_1_OFFSET UNITYSDK_OFFSET(0x1ECE4F50)
#define UNITYENGINE_ANDROIDJNIHELPER_GETCONSTRUCTORID_OFFSET UNITYSDK_OFFSET(0x1ECE3960)
#define UNITYENGINE_ANDROIDJNIHELPER_GETFIELDID_OFFSET UNITYSDK_OFFSET(0x1ECE3D70)
#define UNITYENGINE_ANDROIDJNIHELPER_GETMETHODID_1_OFFSET UNITYSDK_OFFSET(0x1ECE3B60)
#define UNITYENGINE_ANDROIDJNIHELPER_GETMETHODID_2_OFFSET UNITYSDK_OFFSET(0x1ECE4F90)
#define UNITYENGINE_ANDROIDJNIHELPER_GETMETHODID_OFFSET UNITYSDK_OFFSET(0x1ECE3B50)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJNIHelper_TypeDefinitionIndex = 5678;

	class AndroidJNIHelper : public ::System::Object
	{
	public:
		static ::System::IntPtr GetConstructorID(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_GETCONSTRUCTORID_OFFSET))(a1, a2);
		}

		static ::System::IntPtr GetMethodID(::System::IntPtr a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_GETMETHODID_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr GetMethodID_1(::System::IntPtr a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_GETMETHODID_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::IntPtr GetFieldID(::System::IntPtr a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_GETFIELDID_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::IntPtr CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable* a1)
		{
			return ((::System::IntPtr(*)(::UnityEngine::AndroidJavaRunnable*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_CREATEJAVARUNNABLE_OFFSET))(a1);
		}

		static ::System::IntPtr CreateJavaProxy(::UnityEngine::AndroidJavaProxy* a1)
		{
			return ((::System::IntPtr(*)(::UnityEngine::AndroidJavaProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_CREATEJAVAPROXY_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::jvalue>* CreateJNIArgArray(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::jvalue>*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_CREATEJNIARGARRAY_OFFSET))(a1);
		}

		static ::System::Void DeleteJNIArgArray(::Il2CppArray<::System::Object*>* a1, ::Il2CppArray<::UnityEngine::jvalue>* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_DELETEJNIARGARRAY_OFFSET))(a1, a2);
		}

		static ::System::IntPtr GetConstructorID_1(::System::IntPtr a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_GETCONSTRUCTORID_1_OFFSET))(a1, a2);
		}

		static ::System::IntPtr GetMethodID_2(::System::IntPtr a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3, ::System::Boolean a4)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_GETMETHODID_2_OFFSET))(a1, a2, a3, a4);
		}
	};
}
