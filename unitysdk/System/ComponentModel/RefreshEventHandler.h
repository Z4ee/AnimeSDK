#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel { class RefreshEventArgs; }

#define SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A0CD520)
#define SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A0CD550)
#define SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A0CCFD0)
#define SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0CCFB0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int RefreshEventHandler_TypeDefinitionIndex = 2613;

	class RefreshEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::ComponentModel::RefreshEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::RefreshEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_INVOKE_OFFSET))(this, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::ComponentModel::RefreshEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::ComponentModel::RefreshEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_BEGININVOKE_OFFSET))(this, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
