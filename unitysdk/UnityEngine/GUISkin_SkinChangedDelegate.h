#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_GUISKIN_SKINCHANGEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E430BC0)
#define UNITYENGINE_GUISKIN_SKINCHANGEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E430BF0)
#define UNITYENGINE_GUISKIN_SKINCHANGEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E430820)
#define UNITYENGINE_GUISKIN_SKINCHANGEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E430BA0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUISkin_SkinChangedDelegate_TypeDefinitionIndex = 6420;

	class GUISkin_SkinChangedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SKINCHANGEDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SKINCHANGEDDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SKINCHANGEDDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SKINCHANGEDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
