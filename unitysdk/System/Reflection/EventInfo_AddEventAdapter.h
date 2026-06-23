#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class Delegate; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_REFLECTION_EVENTINFO_ADDEVENTADAPTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D062660)
#define SYSTEM_REFLECTION_EVENTINFO_ADDEVENTADAPTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D0626A0)
#define SYSTEM_REFLECTION_EVENTINFO_ADDEVENTADAPTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D0620E0)
#define SYSTEM_REFLECTION_EVENTINFO_ADDEVENTADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0620C0)

namespace System::Reflection
{
	inline static constexpr unsigned int EventInfo_AddEventAdapter_TypeDefinitionIndex = 577;

	class EventInfo_AddEventAdapter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_ADDEVENTADAPTER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* _this, ::System::Delegate* dele)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_ADDEVENTADAPTER_INVOKE_OFFSET))(this, _this, dele);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* _this, ::System::Delegate* dele, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Delegate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_ADDEVENTADAPTER_BEGININVOKE_OFFSET))(this, _this, dele, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_ADDEVENTADAPTER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
