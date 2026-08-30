#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_LATEBOUND_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CC8D880)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_LATEBOUND_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CC8D8C0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_LATEBOUND_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CC8D870)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_LATEBOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC8D780)

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppIntrinsics_LateBound_TypeDefinitionIndex = 10060;

	class Il2CppIntrinsics_LateBound : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_LATEBOUND__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* Invoke(::System::Object* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_LATEBOUND_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::Il2CppArray<::System::Object*>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_LATEBOUND_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_LATEBOUND_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
