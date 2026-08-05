#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel { class DoWorkEventArgs; }

#define SYSTEM_COMPONENTMODEL_DOWORKEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DB76190)
#define SYSTEM_COMPONENTMODEL_DOWORKEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DB761D0)
#define SYSTEM_COMPONENTMODEL_DOWORKEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DB75C00)
#define SYSTEM_COMPONENTMODEL_DOWORKEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB75BE0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DoWorkEventHandler_TypeDefinitionIndex = 2871;

	class DoWorkEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOWORKEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::ComponentModel::DoWorkEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::DoWorkEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOWORKEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::DoWorkEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::DoWorkEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOWORKEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOWORKEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
