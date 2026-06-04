#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel { class ListChangedEventArgs; }

#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AF2E590)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AF2E5D0)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AF2E580)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2E490)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ListChangedEventHandler_TypeDefinitionIndex = 2600;

	class ListChangedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::ComponentModel::ListChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::ListChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::ComponentModel::ListChangedEventArgs* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::ListChangedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
