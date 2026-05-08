#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITY_JOBS_LOWLEVEL_UNSAFE_FOREACHJOBDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AFA4090)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_FOREACHJOBDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AFA4140)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_FOREACHJOBDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AFA3D10)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_FOREACHJOBDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFA3D00)

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int ForeachJobDelegate_TypeDefinitionIndex = 5074;

	class ForeachJobDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_FOREACHJOBDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 para, ::System::Int32 beginIndex, ::System::Int32 endIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_FOREACHJOBDELEGATE_INVOKE_OFFSET))(this, para, beginIndex, endIndex);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 para, ::System::Int32 beginIndex, ::System::Int32 endIndex, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_FOREACHJOBDELEGATE_BEGININVOKE_OFFSET))(this, para, beginIndex, endIndex, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_FOREACHJOBDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
