#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel { class RefreshEventArgs; }

#define SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x191594D0)
#define SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19159500)
#define SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x191594C0)
#define SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x191593D0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int RefreshEventHandler_TypeDefinitionIndex = 2617;

	class RefreshEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::ComponentModel::RefreshEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::RefreshEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::ComponentModel::RefreshEventArgs* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::ComponentModel::RefreshEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
