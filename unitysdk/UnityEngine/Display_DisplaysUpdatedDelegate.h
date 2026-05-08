#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_DISPLAY_DISPLAYSUPDATEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AFA4870)
#define UNITYENGINE_DISPLAY_DISPLAYSUPDATEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AFA48A0)
#define UNITYENGINE_DISPLAY_DISPLAYSUPDATEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AFA45D0)
#define UNITYENGINE_DISPLAY_DISPLAYSUPDATEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFA45C0)

namespace UnityEngine
{
	inline static constexpr unsigned int Display_DisplaysUpdatedDelegate_TypeDefinitionIndex = 5176;

	class Display_DisplaysUpdatedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_DISPLAYSUPDATEDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_DISPLAYSUPDATEDDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_DISPLAYSUPDATEDDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_DISPLAYSUPDATEDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
