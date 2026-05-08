#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_ONANIMATORFIXEDUPDATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C508700)
#define UNITYENGINE_ONANIMATORFIXEDUPDATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C508730)
#define UNITYENGINE_ONANIMATORFIXEDUPDATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C508390)
#define UNITYENGINE_ONANIMATORFIXEDUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C508380)

namespace UnityEngine
{
	inline static constexpr unsigned int OnAnimatorFixedUpdate_TypeDefinitionIndex = 6545;

	class OnAnimatorFixedUpdate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ONANIMATORFIXEDUPDATE__CTOR_OFFSET))(this, object, method);
		}

		::Unity::Jobs::JobHandle Invoke()
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ONANIMATORFIXEDUPDATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ONANIMATORFIXEDUPDATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::Unity::Jobs::JobHandle EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_ONANIMATORFIXEDUPDATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
