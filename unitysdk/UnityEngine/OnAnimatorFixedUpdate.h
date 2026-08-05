#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_ONANIMATORFIXEDUPDATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FC14B50)
#define UNITYENGINE_ONANIMATORFIXEDUPDATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FC14BC0)
#define UNITYENGINE_ONANIMATORFIXEDUPDATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FC146C0)
#define UNITYENGINE_ONANIMATORFIXEDUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC146A0)

namespace UnityEngine
{
	inline static constexpr unsigned int OnAnimatorFixedUpdate_TypeDefinitionIndex = 6633;

	class OnAnimatorFixedUpdate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ONANIMATORFIXEDUPDATE__CTOR_OFFSET))(this, object, method);
		}

		::Unity::Jobs::JobHandle Invoke(::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ONANIMATORFIXEDUPDATE_INVOKE_OFFSET))(this, dependsOn);
		}

		::System::IAsyncResult* BeginInvoke(::Unity::Jobs::JobHandle dependsOn, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Unity::Jobs::JobHandle, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ONANIMATORFIXEDUPDATE_BEGININVOKE_OFFSET))(this, dependsOn, callback, object);
		}

		::Unity::Jobs::JobHandle EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_ONANIMATORFIXEDUPDATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
