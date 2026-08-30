#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class Delegate; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_REFLECTION_EVENTINFO_ADDEVENTADAPTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CC1FC30)
#define SYSTEM_REFLECTION_EVENTINFO_ADDEVENTADAPTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CC1FC70)
#define SYSTEM_REFLECTION_EVENTINFO_ADDEVENTADAPTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CC1FC20)
#define SYSTEM_REFLECTION_EVENTINFO_ADDEVENTADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC1FB30)

namespace System::Reflection
{
	inline static constexpr unsigned int EventInfo_AddEventAdapter_TypeDefinitionIndex = 605;

	class EventInfo_AddEventAdapter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_ADDEVENTADAPTER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::Delegate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_ADDEVENTADAPTER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Delegate* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Delegate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_ADDEVENTADAPTER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_ADDEVENTADAPTER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
