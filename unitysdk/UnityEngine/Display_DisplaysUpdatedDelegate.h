#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_DISPLAY_DISPLAYSUPDATEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B2919E0)
#define UNITYENGINE_DISPLAY_DISPLAYSUPDATEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B291A10)
#define UNITYENGINE_DISPLAY_DISPLAYSUPDATEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B2918B0)
#define UNITYENGINE_DISPLAY_DISPLAYSUPDATEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B291970)

namespace UnityEngine
{
	inline static constexpr unsigned int Display_DisplaysUpdatedDelegate_TypeDefinitionIndex = 4097;

	class Display_DisplaysUpdatedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_DISPLAYSUPDATEDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_DISPLAYSUPDATEDDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_DISPLAYSUPDATEDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_DISPLAYSUPDATEDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
